/* Copyright (C) 2013-2015 Free Software Foundation, Inc.
   Contributed by Jakub Jelinek <jakub@redhat.com>.

   This file is part of the GNU Offloading and Multi Processing Library
   (libgomp).

   Libgomp is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   Libgomp is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

/* This file contains the support of offloading.  */

#include "config.h"
#include "libgomp.h"
#include "oacc-plugin.h"
#include "oacc-int.h"
#include "gomp-constants.h"
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#ifdef HAVE_INTTYPES_H
# include <inttypes.h>  /* For PRIu64.  */
#endif
#include <string.h>
#include <assert.h>

#ifdef PLUGIN_SUPPORT
#include <dlfcn.h>
#include "plugin-suffix.h"
#endif

static void gomp_target_init (void);

/* The whole initialization code for offloading plugins is only run one.  */
static pthread_once_t gomp_is_initialized = PTHREAD_ONCE_INIT;

/* Mutex for offload image registration.  */
static gomp_mutex_t register_lock;

/* This structure describes an offload image.
   It contains type of the target device, pointer to host table descriptor, and
   pointer to target data.  */
struct offload_image_descr {
  unsigned version;
  enum offload_target_type type;
  const void *host_table;
  const void *target_data;
};

/* Array of descriptors of offload images.  */
static struct offload_image_descr *offload_images;

/* Total number of offload images.  */
static int num_offload_images;

/* Array of descriptors for all available devices.  */
static struct gomp_device_descr *devices;

/* Total number of available devices.  */
static int num_devices;

/* Number of GOMP_OFFLOAD_CAP_OPENMP_400 devices.  */
static int num_devices_openmp;

/* Similar to gomp_realloc, but release register_lock before gomp_fatal.  */

static void *
gomp_realloc_unlock (void *old, size_t size)
{
  void *ret = realloc (old, size);
  if (ret == NULL)
    {
      gomp_mutex_unlock (&register_lock);
      gomp_fatal ("Out of memory allocating %lu bytes", (unsigned long) size);
    }
  return ret;
}

/* The comparison function.  */

attribute_hidden int
splay_compare (splay_tree_key x, splay_tree_key y)
{
  if (x->host_start == x->host_end
      && y->host_start == y->host_end)
    return 0;
  if (x->host_end <= y->host_start)
    return -1;
  if (x->host_start >= y->host_end)
    return 1;
  return 0;
}

#include "splay-tree.h"

attribute_hidden void
gomp_init_targets_once (void)
{
  (void) pthread_once (&gomp_is_initialized, gomp_target_init);
}

attribute_hidden int
gomp_get_num_devices (void)
{
  gomp_init_targets_once ();
  return num_devices_openmp;
}

static struct gomp_device_descr *
resolve_device (int device)
{
  int device_id;
  if (device == GOMP_DEVICE_ICV)
    {
      struct gomp_task_icv *icv = gomp_icv (false);
      device_id = icv->default_device_var;
    }
  else
    device_id = device;

  if (device_id < 0 || device_id >= gomp_get_num_devices ())
    return NULL;

  gomp_mutex_lock (&devices[device_id].lock);
  if (!devices[device_id].is_initialized)
    gomp_init_device (&devices[device_id]);
  gomp_mutex_unlock (&devices[device_id].lock);

  /* If the device-var ICV does not actually have offload data available, don't
     try use it (which will fail), and use host fallback instead.  */
  if (device == GOMP_DEVICE_ICV
      && !gomp_offload_target_available_p (devices[device_id].type))
    return NULL;

  return &devices[device_id];
}


/* Handle the case where splay_tree_lookup found oldn for newn.
   Helper function of gomp_map_vars.  */

static inline void
gomp_map_vars_existing (struct gomp_device_descr *devicep, splay_tree_key oldn,
			splay_tree_key newn, unsigned char kind)
{
  if ((kind & GOMP_MAP_FLAG_FORCE)
      || oldn->host_start > newn->host_start
      || oldn->host_end < newn->host_end)
    {
      gomp_mutex_unlock (&devicep->lock);
      gomp_fatal ("Trying to map into device [%p..%p) object when "
		  "[%p..%p) is already mapped",
		  (void *) newn->host_start, (void *) newn->host_end,
		  (void *) oldn->host_start, (void *) oldn->host_end);
    }

  if (GOMP_MAP_ALWAYS_TO_P (kind))
    devicep->host2dev_func (devicep->target_id,
			    (void *) (oldn->tgt->tgt_start + oldn->tgt_offset),
			    (void *) newn->host_start,
			    newn->host_end - newn->host_start);
  oldn->refcount++;
}

static int
get_kind (bool short_mapkind, void *kinds, int idx)
{
  return short_mapkind ? ((unsigned short *) kinds)[idx]
		       : ((unsigned char *) kinds)[idx];
}

static void
gomp_map_pointer (struct target_mem_desc *tgt, uintptr_t host_ptr,
		  uintptr_t target_offset, uintptr_t bias)
{
  struct gomp_device_descr *devicep = tgt->device_descr;
  struct splay_tree_s *mem_map = &devicep->mem_map;
  struct splay_tree_key_s cur_node;

  cur_node.host_start = host_ptr;
  if (cur_node.host_start == (uintptr_t) NULL)
    {
      cur_node.tgt_offset = (uintptr_t) NULL;
      /* FIXME: see comment about coalescing host/dev transfers below.  */
      devicep->host2dev_func (devicep->target_id,
			      (void *) (tgt->tgt_start + target_offset),
			      (void *) &cur_node.tgt_offset,
			      sizeof (void *));
      return;
    }
  /* Add bias to the pointer value.  */
  cur_node.host_start += bias;
  cur_node.host_end = cur_node.host_start + 1;
  splay_tree_key n = splay_tree_lookup (mem_map, &cur_node);
  if (n == NULL)
    {
      /* Could be possibly zero size array section.  */
      cur_node.host_end--;
      n = splay_tree_lookup (mem_map, &cur_node);
      if (n == NULL)
	{
	  cur_node.host_start--;
	  n = splay_tree_lookup (mem_map, &cur_node);
	  cur_node.host_start++;
	}
    }
  if (n == NULL)
    {
      gomp_mutex_unlock (&devicep->lock);
      gomp_fatal ("Pointer target of array section wasn't mapped");
    }
  cur_node.host_start -= n->host_start;
  cur_node.tgt_offset
    = n->tgt->tgt_start + n->tgt_offset + cur_node.host_start;
  /* At this point tgt_offset is target address of the
     array section.  Now subtract bias to get what we want
     to initialize the pointer with.  */
  cur_node.tgt_offset -= bias;
  /* FIXME: see comment about coalescing host/dev transfers below.  */
  devicep->host2dev_func (devicep->target_id,
			  (void *) (tgt->tgt_start + target_offset),
			  (void *) &cur_node.tgt_offset,
			  sizeof (void *));
}

attribute_hidden struct target_mem_desc *
gomp_map_vars (struct gomp_device_descr *devicep, size_t mapnum,
	       void **hostaddrs, void **devaddrs, size_t *sizes, void *kinds,
	       bool short_mapkind, bool is_target)
{
  size_t i, tgt_align, tgt_size, not_found_cnt = 0;
  const int rshift = short_mapkind ? 8 : 3;
  const int typemask = short_mapkind ? 0xff : 0x7;
  struct splay_tree_s *mem_map = &devicep->mem_map;
  struct splay_tree_key_s cur_node;
  struct target_mem_desc *tgt
    = gomp_malloc (sizeof (*tgt) + sizeof (tgt->list[0]) * mapnum);
  tgt->list_count = mapnum;
  tgt->refcount = 1;
  tgt->device_descr = devicep;

  if (mapnum == 0)
    return tgt;

  tgt_align = sizeof (void *);
  tgt_size = 0;
  if (is_target)
    {
      size_t align = 4 * sizeof (void *);
      tgt_align = align;
      tgt_size = mapnum * sizeof (void *);
    }

  gomp_mutex_lock (&devicep->lock);

  for (i = 0; i < mapnum; i++)
    {
      int kind = get_kind (short_mapkind, kinds, i);
      if (hostaddrs[i] == NULL)
	{
	  tgt->list[i].key = NULL;
	  continue;
	}
      cur_node.host_start = (uintptr_t) hostaddrs[i];
      if (!GOMP_MAP_POINTER_P (kind & typemask))
	cur_node.host_end = cur_node.host_start + sizes[i];
      else
	cur_node.host_end = cur_node.host_start + sizeof (void *);
      splay_tree_key n = splay_tree_lookup (mem_map, &cur_node);
      if (n)
	{
	  tgt->list[i].key = n;
	  tgt->list[i].copy_from = GOMP_MAP_COPY_FROM_P (kind & typemask);
	  tgt->list[i].always_copy_from
	    = GOMP_MAP_ALWAYS_FROM_P (kind & typemask);
	  gomp_map_vars_existing (devicep, n, &cur_node, kind & typemask);
	}
      else
	{
	  tgt->list[i].key = NULL;

	  size_t align = (size_t) 1 << (kind >> rshift);
	  not_found_cnt++;
	  if (tgt_align < align)
	    tgt_align = align;
	  tgt_size = (tgt_size + align - 1) & ~(align - 1);
	  tgt_size += cur_node.host_end - cur_node.host_start;
	  if ((kind & typemask) == GOMP_MAP_TO_PSET)
	    {
	      size_t j;
	      for (j = i + 1; j < mapnum; j++)
		if (!GOMP_MAP_POINTER_P (get_kind (short_mapkind, kinds, j)
					 & typemask))
		  break;
		else if ((uintptr_t) hostaddrs[j] < cur_node.host_start
			 || ((uintptr_t) hostaddrs[j] + sizeof (void *)
			     > cur_node.host_end))
		  break;
		else
		  {
		    tgt->list[j].key = NULL;
		    i++;
		  }
	    }
	}
    }

  if (devaddrs)
    {
      if (mapnum != 1)
	{
	  gomp_mutex_unlock (&devicep->lock);
	  gomp_fatal ("unexpected aggregation");
	}
      tgt->to_free = devaddrs[0];
      tgt->tgt_start = (uintptr_t) tgt->to_free;
      tgt->tgt_end = tgt->tgt_start + sizes[0];
    }
  else if (not_found_cnt || is_target)
    {
      /* Allocate tgt_align aligned tgt_size block of memory.  */
      /* FIXME: Perhaps change interface to allocate properly aligned
	 memory.  */
      tgt->to_free = devicep->alloc_func (devicep->target_id,
					  tgt_size + tgt_align - 1);
      tgt->tgt_start = (uintptr_t) tgt->to_free;
      tgt->tgt_start = (tgt->tgt_start + tgt_align - 1) & ~(tgt_align - 1);
      tgt->tgt_end = tgt->tgt_start + tgt_size;
    }
  else
    {
      tgt->to_free = NULL;
      tgt->tgt_start = 0;
      tgt->tgt_end = 0;
    }

  tgt_size = 0;
  if (is_target)
    tgt_size = mapnum * sizeof (void *);

  tgt->array = NULL;
  if (not_found_cnt)
    {
      tgt->array = gomp_malloc (not_found_cnt * sizeof (*tgt->array));
      splay_tree_node array = tgt->array;
      size_t j;

      for (i = 0; i < mapnum; i++)
	if (tgt->list[i].key == NULL)
	  {
	    int kind = get_kind (short_mapkind, kinds, i);
	    if (hostaddrs[i] == NULL)
	      continue;
	    splay_tree_key k = &array->key;
	    k->host_start = (uintptr_t) hostaddrs[i];
	    if (!GOMP_MAP_POINTER_P (kind & typemask))
	      k->host_end = k->host_start + sizes[i];
	    else
	      k->host_end = k->host_start + sizeof (void *);
	    splay_tree_key n = splay_tree_lookup (mem_map, k);
	    if (n)
	      {
		tgt->list[i].key = n;
		tgt->list[i].copy_from = GOMP_MAP_COPY_FROM_P (kind & typemask);
		tgt->list[i].always_copy_from
		  = GOMP_MAP_ALWAYS_FROM_P (kind & typemask);
		gomp_map_vars_existing (devicep, n, k, kind & typemask);
	      }
	    else
	      {
		size_t align = (size_t) 1 << (kind >> rshift);
		tgt->list[i].key = k;
		tgt_size = (tgt_size + align - 1) & ~(align - 1);
		k->tgt = tgt;
		k->tgt_offset = tgt_size;
		tgt_size += k->host_end - k->host_start;
		tgt->list[i].copy_from = GOMP_MAP_COPY_FROM_P (kind & typemask);
		tgt->list[i].always_copy_from
		  = GOMP_MAP_ALWAYS_FROM_P (kind & typemask);
		k->refcount = 1;
		k->async_refcount = 0;
		tgt->refcount++;
		array->left = NULL;
		array->right = NULL;
		splay_tree_insert (mem_map, array);
		switch (kind & typemask)
		  {
		  case GOMP_MAP_ALLOC:
		  case GOMP_MAP_FROM:
		  case GOMP_MAP_FORCE_ALLOC:
		  case GOMP_MAP_FORCE_FROM:
		    break;
		  case GOMP_MAP_TO:
		  case GOMP_MAP_TOFROM:
		  case GOMP_MAP_FORCE_TO:
		  case GOMP_MAP_FORCE_TOFROM:
		  case GOMP_MAP_ALWAYS_TO:
		  case GOMP_MAP_ALWAYS_TOFROM:
		    /* FIXME: Perhaps add some smarts, like if copying
		       several adjacent fields from host to target, use some
		       host buffer to avoid sending each var individually.  */
		    devicep->host2dev_func (devicep->target_id,
					    (void *) (tgt->tgt_start
						      + k->tgt_offset),
					    (void *) k->host_start,
					    k->host_end - k->host_start);
		    break;
		  case GOMP_MAP_POINTER:
		    gomp_map_pointer (tgt, (uintptr_t) *(void **) k->host_start,
				      k->tgt_offset, sizes[i]);
		    break;
		  case GOMP_MAP_TO_PSET:
		    /* FIXME: see above FIXME comment.  */
		    devicep->host2dev_func (devicep->target_id,
					    (void *) (tgt->tgt_start
						      + k->tgt_offset),
					    (void *) k->host_start,
					    k->host_end - k->host_start);

		    for (j = i + 1; j < mapnum; j++)
		      if (!GOMP_MAP_POINTER_P (get_kind (short_mapkind, kinds,
							 j)
					       & typemask))
			break;
		      else if ((uintptr_t) hostaddrs[j] < k->host_start
			       || ((uintptr_t) hostaddrs[j] + sizeof (void *)
				   > k->host_end))
			break;
		      else
			{
			  tgt->list[j].key = k;
			  tgt->list[j].copy_from = false;
			  tgt->list[j].always_copy_from = false;
			  k->refcount++;
			  gomp_map_pointer (tgt,
					    (uintptr_t) *(void **) hostaddrs[j],
					    k->tgt_offset
					    + ((uintptr_t) hostaddrs[j]
					       - k->host_start),
					    sizes[j]);
			  i++;
			}
		    break;
		  case GOMP_MAP_FORCE_PRESENT:
		    {
		      /* We already looked up the memory region above and it
			 was missing.  */
		      size_t size = k->host_end - k->host_start;
		      gomp_mutex_unlock (&devicep->lock);
#ifdef HAVE_INTTYPES_H
		      gomp_fatal ("present clause: !acc_is_present (%p, "
				  "%"PRIu64" (0x%"PRIx64"))",
				  (void *) k->host_start,
				  (uint64_t) size, (uint64_t) size);
#else
		      gomp_fatal ("present clause: !acc_is_present (%p, "
				  "%lu (0x%lx))", (void *) k->host_start,
				  (unsigned long) size, (unsigned long) size);
#endif
		    }
		    break;
		  case GOMP_MAP_FORCE_DEVICEPTR:
		    assert (k->host_end - k->host_start == sizeof (void *));

		    devicep->host2dev_func (devicep->target_id,
					    (void *) (tgt->tgt_start
						      + k->tgt_offset),
					    (void *) k->host_start,
					    sizeof (void *));
		    break;
		  default:
		    gomp_mutex_unlock (&devicep->lock);
		    gomp_fatal ("%s: unhandled kind 0x%.2x", __FUNCTION__,
				kind);
		  }
		array++;
	      }
	  }
    }

  if (is_target)
    {
      for (i = 0; i < mapnum; i++)
	{
	  if (tgt->list[i].key == NULL)
	    cur_node.tgt_offset = (uintptr_t) NULL;
	  else
	    cur_node.tgt_offset = tgt->list[i].key->tgt->tgt_start
				  + tgt->list[i].key->tgt_offset;
	  /* FIXME: see above FIXME comment.  */
	  devicep->host2dev_func (devicep->target_id,
				  (void *) (tgt->tgt_start
					    + i * sizeof (void *)),
				  (void *) &cur_node.tgt_offset,
				  sizeof (void *));
	}
    }

  gomp_mutex_unlock (&devicep->lock);
  return tgt;
}

static void
gomp_unmap_tgt (struct target_mem_desc *tgt)
{
  /* Deallocate on target the tgt->tgt_start .. tgt->tgt_end region.  */
  if (tgt->tgt_end)
    tgt->device_descr->free_func (tgt->device_descr->target_id, tgt->to_free);

  free (tgt->array);
  free (tgt);
}

/* Decrease the refcount for a set of mapped variables, and queue asychronous
   copies from the device back to the host after any work that has been issued.
   Because the regions are still "live", increment an asynchronous reference
   count to indicate that they should not be unmapped from host-side data
   structures until the asynchronous copy has completed.  */

attribute_hidden void
gomp_copy_from_async (struct target_mem_desc *tgt)
{
  struct gomp_device_descr *devicep = tgt->device_descr;
  size_t i;

  gomp_mutex_lock (&devicep->lock);

  for (i = 0; i < tgt->list_count; i++)
    if (tgt->list[i].key == NULL)
      ;
    else if (tgt->list[i].key->refcount > 1)
      {
	tgt->list[i].key->refcount--;
	tgt->list[i].key->async_refcount++;
      }
    else
      {
	splay_tree_key k = tgt->list[i].key;
	if (tgt->list[i].copy_from)
	  devicep->dev2host_func (devicep->target_id, (void *) k->host_start,
				  (void *) (k->tgt->tgt_start + k->tgt_offset),
				  k->host_end - k->host_start);
      }

  gomp_mutex_unlock (&devicep->lock);
}

/* Unmap variables described by TGT.  If DO_COPYFROM is true, copy relevant
   variables back from device to host: if it is false, it is assumed that this
   has been done already, i.e. by gomp_copy_from_async above.  */

attribute_hidden void
gomp_unmap_vars (struct target_mem_desc *tgt, bool do_copyfrom)
{
  struct gomp_device_descr *devicep = tgt->device_descr;

  if (tgt->list_count == 0)
    {
      free (tgt);
      return;
    }

  gomp_mutex_lock (&devicep->lock);

  size_t i;
  for (i = 0; i < tgt->list_count; i++)
    {
      splay_tree_key k = tgt->list[i].key;
      if (k == NULL)
	continue;

      bool do_unmap = false;
      if (k->refcount > 1)
	k->refcount--;
      else if (k->async_refcount > 0)
	k->async_refcount--;
      else
	do_unmap = true;

      if ((do_unmap && do_copyfrom && tgt->list[i].copy_from)
	  || tgt->list[i].always_copy_from)
	devicep->dev2host_func (devicep->target_id, (void *) k->host_start,
				(void *) (k->tgt->tgt_start + k->tgt_offset),
				k->host_end - k->host_start);
      if (do_unmap)
	{
	  splay_tree_remove (&devicep->mem_map, k);
	  if (k->tgt->refcount > 1)
	    k->tgt->refcount--;
	  else
	    gomp_unmap_tgt (k->tgt);
	}
    }

  if (tgt->refcount > 1)
    tgt->refcount--;
  else
    gomp_unmap_tgt (tgt);

  gomp_mutex_unlock (&devicep->lock);
}

static void
gomp_update (struct gomp_device_descr *devicep, size_t mapnum, void **hostaddrs,
	     size_t *sizes, void *kinds, bool short_mapkind)
{
  size_t i;
  struct splay_tree_key_s cur_node;
  const int typemask = short_mapkind ? 0xff : 0x7;

  if (!devicep)
    return;

  if (mapnum == 0)
    return;

  gomp_mutex_lock (&devicep->lock);
  for (i = 0; i < mapnum; i++)
    if (sizes[i])
      {
	cur_node.host_start = (uintptr_t) hostaddrs[i];
	cur_node.host_end = cur_node.host_start + sizes[i];
	splay_tree_key n = splay_tree_lookup (&devicep->mem_map, &cur_node);
	if (n)
	  {
	    int kind = get_kind (short_mapkind, kinds, i);
	    if (n->host_start > cur_node.host_start
		|| n->host_end < cur_node.host_end)
	      {
		gomp_mutex_unlock (&devicep->lock);
		gomp_fatal ("Trying to update [%p..%p) object when "
			    "only [%p..%p) is mapped",
			    (void *) cur_node.host_start,
			    (void *) cur_node.host_end,
			    (void *) n->host_start,
			    (void *) n->host_end);
	      }
	    if (GOMP_MAP_COPY_TO_P (kind & typemask))
	      devicep->host2dev_func (devicep->target_id,
				      (void *) (n->tgt->tgt_start
						+ n->tgt_offset
						+ cur_node.host_start
						- n->host_start),
				      (void *) cur_node.host_start,
				      cur_node.host_end - cur_node.host_start);
	    if (GOMP_MAP_COPY_FROM_P (kind & typemask))
	      devicep->dev2host_func (devicep->target_id,
				      (void *) cur_node.host_start,
				      (void *) (n->tgt->tgt_start
						+ n->tgt_offset
						+ cur_node.host_start
						- n->host_start),
				      cur_node.host_end - cur_node.host_start);
	  }
	else
	  {
	    gomp_mutex_unlock (&devicep->lock);
	    gomp_fatal ("Trying to update [%p..%p) object that is not mapped",
			(void *) cur_node.host_start,
			(void *) cur_node.host_end);
	  }
      }
  gomp_mutex_unlock (&devicep->lock);
}

/* Load image pointed by TARGET_DATA to the device, specified by DEVICEP.
   And insert to splay tree the mapping between addresses from HOST_TABLE and
   from loaded target image.  We rely in the host and device compiler
   emitting variable and functions in the same order.  */

static void
gomp_load_image_to_device (struct gomp_device_descr *devicep, unsigned version,
			   const void *host_table, const void *target_data,
			   bool is_register_lock)
{
  void **host_func_table = ((void ***) host_table)[0];
  void **host_funcs_end  = ((void ***) host_table)[1];
  void **host_var_table  = ((void ***) host_table)[2];
  void **host_vars_end   = ((void ***) host_table)[3];

  /* The func table contains only addresses, the var table contains addresses
     and corresponding sizes.  */
  int num_funcs = host_funcs_end - host_func_table;
  int num_vars  = (host_vars_end - host_var_table) / 2;

  /* Load image to device and get target addresses for the image.  */
  struct addr_pair *target_table = NULL;
  int i, num_target_entries;

  num_target_entries
    = devicep->load_image_func (devicep->target_id, version,
				target_data, &target_table);

  if (num_target_entries != num_funcs + num_vars)
    {
      gomp_mutex_unlock (&devicep->lock);
      if (is_register_lock)
	gomp_mutex_unlock (&register_lock);
      gomp_fatal ("Cannot map target functions or variables"
		  " (expected %u, have %u)", num_funcs + num_vars,
		  num_target_entries);
    }

  /* Insert host-target address mapping into splay tree.  */
  struct target_mem_desc *tgt =
	  gomp_malloc (sizeof (*tgt)
		       + sizeof (tgt->list[0])
		       * (num_funcs + num_vars) * sizeof (*tgt->array));
  tgt->array = gomp_malloc ((num_funcs + num_vars) * sizeof (*tgt->array));
  tgt->refcount = 1;
  tgt->tgt_start = 0;
  tgt->tgt_end = 0;
  tgt->to_free = NULL;
  tgt->prev = NULL;
  tgt->list_count = num_funcs + num_vars;
  tgt->device_descr = devicep;
  splay_tree_node array = tgt->array;

  for (i = 0; i < num_funcs; i++)
    {
      splay_tree_key k = &array->key;
      k->host_start = (uintptr_t) host_func_table[i];
      k->host_end = k->host_start + 1;
      k->tgt = tgt;
      k->tgt_offset = target_table[i].start;
      k->refcount = 1;
      k->async_refcount = 0;
      tgt->list[i].key = k;
      tgt->refcount++;
      array->left = NULL;
      array->right = NULL;
      splay_tree_insert (&devicep->mem_map, array);
      array++;
    }

  for (i = 0; i < num_vars; i++)
    {
      struct addr_pair *target_var = &target_table[num_funcs + i];
      if (target_var->end - target_var->start
	  != (uintptr_t) host_var_table[i * 2 + 1])
	{
	  gomp_mutex_unlock (&devicep->lock);
	  if (is_register_lock)
	    gomp_mutex_unlock (&register_lock);
	  gomp_fatal ("Can't map target variables (size mismatch)");
	}

      splay_tree_key k = &array->key;
      k->host_start = (uintptr_t) host_var_table[i * 2];
      k->host_end = k->host_start + (uintptr_t) host_var_table[i * 2 + 1];
      k->tgt = tgt;
      k->tgt_offset = target_var->start;
      k->refcount = 1;
      k->async_refcount = 0;
      tgt->list[i].key = k;
      tgt->refcount++;
      array->left = NULL;
      array->right = NULL;
      splay_tree_insert (&devicep->mem_map, array);
      array++;
    }

  free (target_table);
}

/* Unload the mappings described by target_data from device DEVICE_P.
   The device must be locked.   */

static void
gomp_unload_image_from_device (struct gomp_device_descr *devicep,
			       unsigned version,
			       const void *host_table, const void *target_data)
{
  void **host_func_table = ((void ***) host_table)[0];
  void **host_funcs_end  = ((void ***) host_table)[1];
  void **host_var_table  = ((void ***) host_table)[2];
  void **host_vars_end   = ((void ***) host_table)[3];

  /* The func table contains only addresses, the var table contains addresses
     and corresponding sizes.  */
  int num_funcs = host_funcs_end - host_func_table;
  int num_vars  = (host_vars_end - host_var_table) / 2;

  unsigned j;
  struct splay_tree_key_s k;
  splay_tree_key node = NULL;

  /* Find mapping at start of node array */
  if (num_funcs || num_vars)
    {
      k.host_start = (num_funcs ? (uintptr_t) host_func_table[0]
		      : (uintptr_t) host_var_table[0]);
      k.host_end = k.host_start + 1;
      node = splay_tree_lookup (&devicep->mem_map, &k);
    }

  devicep->unload_image_func (devicep->target_id, version, target_data);

  /* Remove mappings from splay tree.  */
  for (j = 0; j < num_funcs; j++)
    {
      k.host_start = (uintptr_t) host_func_table[j];
      k.host_end = k.host_start + 1;
      splay_tree_remove (&devicep->mem_map, &k);
    }

  for (j = 0; j < num_vars; j++)
    {
      k.host_start = (uintptr_t) host_var_table[j * 2];
      k.host_end = k.host_start + (uintptr_t) host_var_table[j * 2 + 1];
      splay_tree_remove (&devicep->mem_map, &k);
    }

  if (node)
    {
      free (node->tgt);
      free (node);
    }
}

/* This function should be called from every offload image while loading.
   It gets the descriptor of the host func and var tables HOST_TABLE, TYPE of
   the target, and TARGET_DATA needed by target plugin.  */

void
GOMP_offload_register_ver (unsigned version, const void *host_table,
			   int target_type, const void *target_data)
{
  int i;

  if (GOMP_VERSION_LIB (version) > GOMP_VERSION)
    gomp_fatal ("Library too old for offload (version %u < %u)",
		GOMP_VERSION, GOMP_VERSION_LIB (version));
  
  gomp_mutex_lock (&register_lock);

  /* Load image to all initialized devices.  */
  for (i = 0; i < num_devices; i++)
    {
      struct gomp_device_descr *devicep = &devices[i];
      gomp_mutex_lock (&devicep->lock);
      if (devicep->type == target_type && devicep->is_initialized)
	gomp_load_image_to_device (devicep, version,
				   host_table, target_data, true);
      gomp_mutex_unlock (&devicep->lock);
    }

  /* Insert image to array of pending images.  */
  offload_images
    = gomp_realloc_unlock (offload_images,
			   (num_offload_images + 1)
			   * sizeof (struct offload_image_descr));
  offload_images[num_offload_images].version = version;
  offload_images[num_offload_images].type = target_type;
  offload_images[num_offload_images].host_table = host_table;
  offload_images[num_offload_images].target_data = target_data;

  num_offload_images++;
  gomp_mutex_unlock (&register_lock);
}

void
GOMP_offload_register (const void *host_table, int target_type,
		       const void *target_data)
{
  GOMP_offload_register_ver (0, host_table, target_type, target_data);
}

/* This function should be called from every offload image while unloading.
   It gets the descriptor of the host func and var tables HOST_TABLE, TYPE of
   the target, and TARGET_DATA needed by target plugin.  */

void
GOMP_offload_unregister_ver (unsigned version, const void *host_table,
			     int target_type, const void *target_data)
{
  int i;

  gomp_mutex_lock (&register_lock);

  /* Unload image from all initialized devices.  */
  for (i = 0; i < num_devices; i++)
    {
      struct gomp_device_descr *devicep = &devices[i];
      gomp_mutex_lock (&devicep->lock);
      if (devicep->type == target_type && devicep->is_initialized)
	gomp_unload_image_from_device (devicep, version,
				       host_table, target_data);
      gomp_mutex_unlock (&devicep->lock);
    }

  /* Remove image from array of pending images.  */
  for (i = 0; i < num_offload_images; i++)
    if (offload_images[i].target_data == target_data)
      {
	offload_images[i] = offload_images[--num_offload_images];
	break;
      }

  gomp_mutex_unlock (&register_lock);
}

void
GOMP_offload_unregister (const void *host_table, int target_type,
			 const void *target_data)
{
  GOMP_offload_unregister_ver (0, host_table, target_type, target_data);
}

/* This function initializes the target device, specified by DEVICEP.  DEVICEP
   must be locked on entry, and remains locked on return.  */

attribute_hidden void
gomp_init_device (struct gomp_device_descr *devicep)
{
  int i;
  devicep->init_device_func (devicep->target_id);

  /* Load to device all images registered by the moment.  */
  for (i = 0; i < num_offload_images; i++)
    {
      struct offload_image_descr *image = &offload_images[i];
      if (image->type == devicep->type)
	gomp_load_image_to_device (devicep, image->version,
				   image->host_table, image->target_data,
				   false);
    }

  devicep->is_initialized = true;
}

attribute_hidden void
gomp_unload_device (struct gomp_device_descr *devicep)
{
  if (devicep->is_initialized)
    {
      unsigned i;
      
      /* Unload from device all images registered at the moment.  */
      for (i = 0; i < num_offload_images; i++)
	{
	  struct offload_image_descr *image = &offload_images[i];
	  if (image->type == devicep->type)
	    gomp_unload_image_from_device (devicep, image->version,
					   image->host_table,
					   image->target_data);
	}
    }
}

/* This function de-initializes the target device, specified by DEVICEP.
   DEVICEP must be locked on entry, and remains locked on return.  */

attribute_hidden void
gomp_fini_device (struct gomp_device_descr *devicep)
{
  if (devicep->is_initialized)
    devicep->fini_device_func (devicep->target_id);

  devicep->is_initialized = false;
}

/* Do we have offload data available for the given offload target type?
   Instead of verifying that *all* offload data is available that could
   possibly be required, we instead just look for *any*.  If we later find any
   offload data missing, that's user error.  */

attribute_hidden bool
gomp_offload_target_available_p (int type)
{
  bool available = false;

  /* Has the offload target already been initialized?  */
  for (int i = 0; !available && i < num_devices; i++)
    {
      struct gomp_device_descr *devicep = &devices[i];
      gomp_mutex_lock (&devicep->lock);
      if (devicep->type == type && devicep->is_initialized)
	available = true;
      gomp_mutex_unlock (&devicep->lock);
    }

  if (!available)
    {
      gomp_mutex_lock (&register_lock);

      /* If there is no offload data available at all, we cannot later fail to
	 find any of it for a specific offload target.  This is the case where
	 there are no offloaded code regions in user code, but there can still
	 be executable directives used, or runtime library calls made.  */
      if (num_offload_images == 0)
	available = true;

      /* Can the offload target be initialized?  */
      for (int i = 0; !available && i < num_offload_images; i++)
	if (offload_images[i].type == type)
	  available = true;

      gomp_mutex_unlock (&register_lock);
    }

  return available;
}

/* Host fallback for GOMP_target{,_41} routines.  */

static void
gomp_target_fallback (void (*fn) (void *), void **hostaddrs)
{
  struct gomp_thread old_thr, *thr = gomp_thread ();
  old_thr = *thr;
  memset (thr, '\0', sizeof (*thr));
  if (gomp_places_list)
    {
      thr->place = old_thr.place;
      thr->ts.place_partition_len = gomp_places_list_len;
    }
  fn (hostaddrs);
  gomp_free_thread (thr);
  *thr = old_thr;
}

/* Helper function of GOMP_target{,_41} routines.  */

static void *
gomp_get_target_fn_addr (struct gomp_device_descr *devicep,
			 void (*host_fn) (void *))
{
  if (devicep->capabilities & GOMP_OFFLOAD_CAP_NATIVE_EXEC)
    return (void *) host_fn;
  else
    {
      gomp_mutex_lock (&devicep->lock);
      struct splay_tree_key_s k;
      k.host_start = (uintptr_t) host_fn;
      k.host_end = k.host_start + 1;
      splay_tree_key tgt_fn = splay_tree_lookup (&devicep->mem_map, &k);
      gomp_mutex_unlock (&devicep->lock);
      if (tgt_fn == NULL)
	gomp_fatal ("Target function wasn't mapped");

      return (void *) tgt_fn->tgt_offset;
    }
}

/* Called when encountering a target directive.  If DEVICE
   is GOMP_DEVICE_ICV, it means use device-var ICV.  If it is
   GOMP_DEVICE_HOST_FALLBACK (or any value
   larger than last available hw device), use host fallback.
   FN is address of host code, UNUSED is part of the current ABI, but
   we're not actually using it.  HOSTADDRS, SIZES and KINDS are arrays
   with MAPNUM entries, with addresses of the host objects,
   sizes of the host objects (resp. for pointer kind pointer bias
   and assumed sizeof (void *) size) and kinds.  */

void
GOMP_target (int device, void (*fn) (void *), const void *unused,
	     size_t mapnum, void **hostaddrs, size_t *sizes,
	     unsigned char *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return gomp_target_fallback (fn, hostaddrs);

  void *fn_addr = gomp_get_target_fn_addr (devicep, fn);

  struct target_mem_desc *tgt_vars
    = gomp_map_vars (devicep, mapnum, hostaddrs, NULL, sizes, kinds, false,
		     true);
  struct gomp_thread old_thr, *thr = gomp_thread ();
  old_thr = *thr;
  memset (thr, '\0', sizeof (*thr));
  if (gomp_places_list)
    {
      thr->place = old_thr.place;
      thr->ts.place_partition_len = gomp_places_list_len;
    }
  devicep->run_func (devicep->target_id, fn_addr, (void *) tgt_vars->tgt_start);
  gomp_free_thread (thr);
  *thr = old_thr;
  gomp_unmap_vars (tgt_vars, true);
}

void
GOMP_target_41 (int device, void (*fn) (void *), size_t mapnum,
		void **hostaddrs, size_t *sizes, unsigned short *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return gomp_target_fallback (fn, hostaddrs);

  void *fn_addr = gomp_get_target_fn_addr (devicep, fn);

  struct target_mem_desc *tgt_vars
    = gomp_map_vars (devicep, mapnum, hostaddrs, NULL, sizes, kinds, true,
		     true);
  struct gomp_thread old_thr, *thr = gomp_thread ();
  old_thr = *thr;
  memset (thr, '\0', sizeof (*thr));
  if (gomp_places_list)
    {
      thr->place = old_thr.place;
      thr->ts.place_partition_len = gomp_places_list_len;
    }
  devicep->run_func (devicep->target_id, fn_addr, (void *) tgt_vars->tgt_start);
  gomp_free_thread (thr);
  *thr = old_thr;
  gomp_unmap_vars (tgt_vars, true);
}

/* Host fallback for GOMP_target_data{,_41} routines.  */

static void
gomp_target_data_fallback (void)
{
  struct gomp_task_icv *icv = gomp_icv (false);
  if (icv->target_data)
    {
      /* Even when doing a host fallback, if there are any active
         #pragma omp target data constructs, need to remember the
         new #pragma omp target data, otherwise GOMP_target_end_data
         would get out of sync.  */
      struct target_mem_desc *tgt
	= gomp_map_vars (NULL, 0, NULL, NULL, NULL, NULL, false, false);
      tgt->prev = icv->target_data;
      icv->target_data = tgt;
    }
}

void
GOMP_target_data (int device, const void *unused, size_t mapnum,
		  void **hostaddrs, size_t *sizes, unsigned char *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return gomp_target_data_fallback ();

  struct target_mem_desc *tgt
    = gomp_map_vars (devicep, mapnum, hostaddrs, NULL, sizes, kinds, false,
		     false);
  struct gomp_task_icv *icv = gomp_icv (true);
  tgt->prev = icv->target_data;
  icv->target_data = tgt;
}

void
GOMP_target_data_41 (int device, size_t mapnum, void **hostaddrs, size_t *sizes,
		     unsigned short *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return gomp_target_data_fallback ();

  struct target_mem_desc *tgt
    = gomp_map_vars (devicep, mapnum, hostaddrs, NULL, sizes, kinds, true,
		     false);
  struct gomp_task_icv *icv = gomp_icv (true);
  tgt->prev = icv->target_data;
  icv->target_data = tgt;
}

void
GOMP_target_end_data (void)
{
  struct gomp_task_icv *icv = gomp_icv (false);
  if (icv->target_data)
    {
      struct target_mem_desc *tgt = icv->target_data;
      icv->target_data = tgt->prev;
      gomp_unmap_vars (tgt, true);
    }
}

void
GOMP_target_update (int device, const void *unused, size_t mapnum,
		    void **hostaddrs, size_t *sizes, unsigned char *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return;

  gomp_update (devicep, mapnum, hostaddrs, sizes, kinds, false);
}

void
GOMP_target_enter_exit_data (int device, size_t mapnum, void **hostaddrs,
			     size_t *sizes, unsigned short *kinds)
{
  struct gomp_device_descr *devicep = resolve_device (device);

  if (devicep == NULL
      || !(devicep->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
    return;

  /* Determine if this is an "omp target enter data".  */
  const int typemask = 0xff;
  bool is_enter_data = false;
  size_t i;
  for (i = 0; i < mapnum; i++)
    {
      unsigned char kind = kinds[i] & typemask;

      if (kind == GOMP_MAP_POINTER || kind == GOMP_MAP_TO_PSET)
	continue;

      if (kind == GOMP_MAP_ALLOC
	  || kind == GOMP_MAP_TO
	  || kind == GOMP_MAP_ALWAYS_TO)
	{
	  is_enter_data = true;
	  break;
	}

      if (kind == GOMP_MAP_FROM
	  || kind == GOMP_MAP_ALWAYS_FROM
	  || kind == GOMP_MAP_DELETE
	  || kind == GOMP_MAP_RELEASE)
	break;

      gomp_fatal ("GOMP_target_enter_exit_data unhandled kind 0x%.2x", kind);
    }

  if (is_enter_data)
    {
      /* TODO  */
    }
  else
    {
      /* TODO  */
    }
}

void
GOMP_teams (unsigned int num_teams, unsigned int thread_limit)
{
  if (thread_limit)
    {
      struct gomp_task_icv *icv = gomp_icv (true);
      icv->thread_limit_var
	= thread_limit > INT_MAX ? UINT_MAX : thread_limit;
    }
  (void) num_teams;
}

#ifdef PLUGIN_SUPPORT

/* This function tries to load a plugin for DEVICE.  Name of plugin is passed
   in PLUGIN_NAME.
   The handles of the found functions are stored in the corresponding fields
   of DEVICE.  The function returns TRUE on success and FALSE otherwise.  */

static bool
gomp_load_plugin_for_device (struct gomp_device_descr *device,
			     const char *plugin_name)
{
  gomp_debug (0, "%s (\"%s\")\n", __FUNCTION__, plugin_name);

  const char *err = NULL, *last_missing = NULL;

  void *plugin_handle = dlopen (plugin_name, RTLD_LAZY);
  if (!plugin_handle)
    goto dl_fail;

  /* Check if all required functions are available in the plugin and store
     their handlers.  None of the symbols can legitimately be NULL,
     so we don't need to check dlerror all the time.  */
#define DLSYM(f)							\
  if (!(device->f##_func = dlsym (plugin_handle, "GOMP_OFFLOAD_" #f)))	\
    goto dl_fail
  /* Similar, but missing functions are not an error.  Return false if
     failed, true otherwise.  */
#define DLSYM_OPT(f, n)							\
  ((device->f##_func = dlsym (plugin_handle, "GOMP_OFFLOAD_" #n))	\
   || (last_missing = #n, 0))

  DLSYM (version);
  if (device->version_func () != GOMP_VERSION)
    {
      err = "plugin version mismatch";
      goto fail;
    }

  DLSYM (get_name);
  DLSYM (get_caps);
  DLSYM (get_type);
  DLSYM (get_num_devices);
  DLSYM (init_device);
  DLSYM (fini_device);
  DLSYM (load_image);
  DLSYM (unload_image);
  DLSYM (alloc);
  DLSYM (free);
  DLSYM (dev2host);
  DLSYM (host2dev);
  device->capabilities = device->get_caps_func ();
  if (device->capabilities & GOMP_OFFLOAD_CAP_OPENMP_400)
    DLSYM (run);
  if (device->capabilities & GOMP_OFFLOAD_CAP_OPENACC_200)
    {
      if (!DLSYM_OPT (openacc.exec, openacc_parallel)
	  || !DLSYM_OPT (openacc.register_async_cleanup,
			 openacc_register_async_cleanup)
	  || !DLSYM_OPT (openacc.async_test, openacc_async_test)
	  || !DLSYM_OPT (openacc.async_test_all, openacc_async_test_all)
	  || !DLSYM_OPT (openacc.async_wait, openacc_async_wait)
	  || !DLSYM_OPT (openacc.async_wait_async, openacc_async_wait_async)
	  || !DLSYM_OPT (openacc.async_wait_all, openacc_async_wait_all)
	  || !DLSYM_OPT (openacc.async_wait_all_async,
			 openacc_async_wait_all_async)
	  || !DLSYM_OPT (openacc.async_set_async, openacc_async_set_async)
	  || !DLSYM_OPT (openacc.create_thread_data,
			 openacc_create_thread_data)
	  || !DLSYM_OPT (openacc.destroy_thread_data,
			 openacc_destroy_thread_data))
	{
	  /* Require all the OpenACC handlers if we have
	     GOMP_OFFLOAD_CAP_OPENACC_200.  */
	  err = "plugin missing OpenACC handler function";
	  goto fail;
	}

      unsigned cuda = 0;
      cuda += DLSYM_OPT (openacc.cuda.get_current_device,
			 openacc_get_current_cuda_device);
      cuda += DLSYM_OPT (openacc.cuda.get_current_context,
			 openacc_get_current_cuda_context);
      cuda += DLSYM_OPT (openacc.cuda.get_stream, openacc_get_cuda_stream);
      cuda += DLSYM_OPT (openacc.cuda.set_stream, openacc_set_cuda_stream);
      if (cuda && cuda != 4)
	{
	  /* Make sure all the CUDA functions are there if any of them are.  */
	  err = "plugin missing OpenACC CUDA handler function";
	  goto fail;
	}
    }
#undef DLSYM
#undef DLSYM_OPT

  return 1;

 dl_fail:
  err = dlerror ();
 fail:
  gomp_error ("while loading %s: %s", plugin_name, err);
  if (last_missing)
    gomp_error ("missing function was %s", last_missing);
  if (plugin_handle)
    dlclose (plugin_handle);

  return 0;
}

/* Helper, to translate from an offload target to the corresponding plugin name.  */

static const char *
offload_target_to_plugin_name (const char *offload_target)
{
  if (strstr (offload_target, "-intelmic") != NULL)
    return "intelmic";
  if (strncmp (offload_target, "nvptx", 5) == 0)
    return "nvptx";
  gomp_fatal ("Unknown offload target: %s", offload_target);
}

/* List of offload targets, separated by colon.  Defaults to the list
   determined when configuring libgomp.  */
static const char *gomp_offload_targets = OFFLOAD_TARGETS;
static bool gomp_offload_targets_init = false;

/* Override the list of offload targets.  This must be called early, and only
   once.  */

void
GOMP_set_offload_targets (const char *offload_targets)
{
  gomp_debug (0, "%s (\"%s\")\n", __FUNCTION__, offload_targets);

  /* Make sure this gets called early.  */
  assert (gomp_is_initialized == PTHREAD_ONCE_INIT);
  /* Make sure this only gets called once.  */
  assert (!gomp_offload_targets_init);
  gomp_offload_targets_init = true;
  gomp_offload_targets = offload_targets;
}

/* This function initializes the runtime needed for offloading.
   It parses the list of offload targets and tries to load the plugins for
   these targets.  On return, the variables NUM_DEVICES and NUM_DEVICES_OPENMP
   will be set, and the array DEVICES initialized, containing descriptors for
   corresponding devices, first the GOMP_OFFLOAD_CAP_OPENMP_400 ones, follows
   by the others.  */

static const char *gomp_plugin_prefix ="libgomp-plugin-";
static const char *gomp_plugin_suffix = SONAME_SUFFIX (1);

static void
gomp_target_init (void)
{
  const char *cur, *next;
  char *plugin_name;
  int i, new_num_devices;

  num_devices = 0;
  devices = NULL;

  cur = gomp_offload_targets;
  if (*cur)
    do
      {
	next = strchr (cur, ':');
	/* If no other offload target following...  */
	if (next == NULL)
	  /* ..., point to the terminating NUL character.  */
	  next = cur + strlen (cur);

	size_t gomp_plugin_prefix_len = strlen (gomp_plugin_prefix);
	size_t cur_len = next - cur;
	size_t gomp_plugin_suffix_len = strlen (gomp_plugin_suffix);
	plugin_name = gomp_malloc (gomp_plugin_prefix_len
				   + cur_len
				   + gomp_plugin_suffix_len
				   + 1);
	memcpy (plugin_name, gomp_plugin_prefix, gomp_plugin_prefix_len);
	memcpy (plugin_name + gomp_plugin_prefix_len, cur, cur_len);
	/* NUL-terminate the string here...  */
	plugin_name[gomp_plugin_prefix_len + cur_len] = '\0';
	/* ..., so that we can then use it to translate the offload target to
	   the plugin name...  */
	const char *cur_plugin_name
	  = offload_target_to_plugin_name (plugin_name
					   + gomp_plugin_prefix_len);
	size_t cur_plugin_name_len = strlen (cur_plugin_name);
	assert (cur_plugin_name_len <= cur_len);
	/* ..., and then rewrite it.  */
	memcpy (plugin_name + gomp_plugin_prefix_len,
		cur_plugin_name, cur_plugin_name_len);
	memcpy (plugin_name + gomp_plugin_prefix_len + cur_plugin_name_len,
		gomp_plugin_suffix, gomp_plugin_suffix_len);
	plugin_name[gomp_plugin_prefix_len
		    + cur_plugin_name_len
		    + gomp_plugin_suffix_len] = '\0';

	struct gomp_device_descr current_device;
	if (gomp_load_plugin_for_device (&current_device, plugin_name))
	  {
	    new_num_devices = current_device.get_num_devices_func ();
	    if (new_num_devices >= 1)
	      {
		current_device.name = current_device.get_name_func ();
		/* current_device.capabilities has already been set.  */
		current_device.type = current_device.get_type_func ();
		current_device.mem_map.root = NULL;
		current_device.is_initialized = false;
		current_device.openacc.data_environ = NULL;

		/* Augment DEVICES and NUM_DEVICES.  */
		devices = gomp_realloc (devices,
					((num_devices + new_num_devices)
					 * sizeof (struct gomp_device_descr)));
		for (i = 0; i < new_num_devices; i++)
		  {
		    current_device.target_id = i;
		    devices[num_devices] = current_device;
		    gomp_mutex_init (&devices[num_devices].lock);
		    num_devices++;
		  }
	      }
	  }

	free (plugin_name);
	cur = next + 1;
      }
    while (*next);

  /* In DEVICES, sort the GOMP_OFFLOAD_CAP_OPENMP_400 ones first, and set
     NUM_DEVICES_OPENMP.  */
  struct gomp_device_descr *devices_s
    = gomp_malloc (num_devices * sizeof (struct gomp_device_descr));
  num_devices_openmp = 0;
  for (i = 0; i < num_devices; i++)
    if (devices[i].capabilities & GOMP_OFFLOAD_CAP_OPENMP_400)
      devices_s[num_devices_openmp++] = devices[i];
  int num_devices_after_openmp = num_devices_openmp;
  for (i = 0; i < num_devices; i++)
    if (!(devices[i].capabilities & GOMP_OFFLOAD_CAP_OPENMP_400))
      devices_s[num_devices_after_openmp++] = devices[i];
  free (devices);
  devices = devices_s;

  for (i = 0; i < num_devices; i++)
    {
      /* The 'devices' array can be moved (by the realloc call) until we have
	 found all the plugins, so registering with the OpenACC runtime (which
	 takes a copy of the pointer argument) must be delayed until now.  */
      if (devices[i].capabilities & GOMP_OFFLOAD_CAP_OPENACC_200)
	goacc_register (&devices[i]);
    }
}

#else /* PLUGIN_SUPPORT */
/* If dlfcn.h is unavailable we always fallback to host execution.
   GOMP_target* routines are just stubs for this case.  */
static void
gomp_target_init (void)
{
}
#endif /* PLUGIN_SUPPORT */

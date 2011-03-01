/* Inlining decision heuristics.
   Copyright (C) 2003, 2004, 2007, 2008, 2009, 2010
   Free Software Foundation, Inc.
   Contributed by Jan Hubicka

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/*  Inlining decision heuristics

    We separate inlining decisions from the inliner itself and store it
    inside callgraph as so called inline plan.  Refer to cgraph.c
    documentation about particular representation of inline plans in the
    callgraph.

    There are three major parts of this file:

    cgraph_mark_inline_edge implementation

      This function allows to mark given call inline and performs necessary
      modifications of cgraph (production of the clones and updating overall
      statistics)

    inlining heuristics limits

      These functions allow to check that particular inlining is allowed
      by the limits specified by user (allowed function growth, overall unit
      growth and so on).

    inlining heuristics

      This is implementation of IPA pass aiming to get as much of benefit
      from inlining obeying the limits checked above.

      The implementation of particular heuristics is separated from
      the rest of code to make it easier to replace it with more complicated
      implementation in the future.  The rest of inlining code acts as a
      library aimed to modify the callgraph and verify that the parameters
      on code size growth fits.

      To mark given call inline, use cgraph_mark_inline function, the
      verification is performed by cgraph_default_inline_p and
      cgraph_check_inline_limits.

      The heuristics implements simple knapsack style algorithm ordering
      all functions by their "profitability" (estimated by code size growth)
      and inlining them in priority order.

      cgraph_decide_inlining implements heuristics taking whole callgraph
      into account, while cgraph_decide_inlining_incrementally considers
      only one function at a time and is used by early inliner.

   The inliner itself is split into several passes:

   pass_inline_parameters

     This pass computes local properties of functions that are used by inliner:
     estimated function body size, whether function is inlinable at all and
     stack frame consumption.

     Before executing any of inliner passes, this local pass has to be applied
     to each function in the callgraph (ie run as subpass of some earlier
     IPA pass).  The results are made out of date by any optimization applied
     on the function body.

   pass_early_inlining

     Simple local inlining pass inlining callees into current function.  This
     pass makes no global whole compilation unit analysis and this when allowed
     to do inlining expanding code size it might result in unbounded growth of
     whole unit.

     The pass is run during conversion into SSA form.  Only functions already
     converted into SSA form are inlined, so the conversion must happen in
     topological order on the callgraph (that is maintained by pass manager).
     The functions after inlining are early optimized so the early inliner sees
     unoptimized function itself, but all considered callees are already
     optimized allowing it to unfold abstraction penalty on C++ effectively and
     cheaply.

   pass_ipa_inline

     This is the main pass implementing simple greedy algorithm to do inlining
     of small functions that results in overall growth of compilation unit and
     inlining of functions called once.  The pass compute just so called inline
     plan (representation of inlining to be done in callgraph) and unlike early
     inlining it is not performing the inlining itself.
 */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "tree-inline.h"
#include "langhooks.h"
#include "flags.h"
#include "cgraph.h"
#include "diagnostic.h"
#include "gimple-pretty-print.h"
#include "timevar.h"
#include "params.h"
#include "fibheap.h"
#include "intl.h"
#include "tree-pass.h"
#include "hashtab.h"
#include "coverage.h"
#include "ggc.h"
#include "tree-flow.h"
#include "rtl.h"
#include "ipa-prop.h"
#include "except.h"

#define MAX_TIME 1000000000

/* Mode incremental inliner operate on:

   In ALWAYS_INLINE only functions marked
   always_inline are inlined.  This mode is used after detecting cycle during
   flattening.

   In SIZE mode, only functions that reduce function body size after inlining
   are inlined, this is used during early inlining.

   in ALL mode, everything is inlined.  This is used during flattening.  */
enum inlining_mode {
  INLINE_NONE = 0,
  INLINE_ALWAYS_INLINE,
  INLINE_SIZE_NORECURSIVE,
  INLINE_SIZE,
  INLINE_ALL
};

static bool
cgraph_decide_inlining_incrementally (struct cgraph_node *, enum inlining_mode);
static void cgraph_flatten (struct cgraph_node *node);


/* Statistics we collect about inlining algorithm.  */
static int ncalls_inlined;
static int nfunctions_inlined;
static int overall_size;
static gcov_type max_count, max_benefit;

/* Holders of ipa cgraph hooks: */
static struct cgraph_node_hook_list *function_insertion_hook_holder;

static inline struct inline_summary *
inline_summary (struct cgraph_node *node)
{
  return &node->local.inline_summary;
}

/* Estimate self time of the function after inlining WHAT into TO.  */

static int
cgraph_estimate_time_after_inlining (int frequency, struct cgraph_node *to,
				     struct cgraph_node *what)
{
  gcov_type time = (((gcov_type)what->global.time
		     - inline_summary (what)->time_inlining_benefit)
  		    * frequency + CGRAPH_FREQ_BASE / 2) / CGRAPH_FREQ_BASE
		    + to->global.time;
  if (time < 0)
    time = 0;
  if (time > MAX_TIME)
    time = MAX_TIME;
  return time;
}

/* Estimate self size of the function after inlining WHAT into TO.  */

static inline int
cgraph_estimate_size_after_inlining (struct cgraph_node *to,
				     struct cgraph_node *what)
{
  int size = ((what->global.size - inline_summary (what)->size_inlining_benefit)
	      + to->global.size);
  gcc_assert (size >= 0);
  return size;
}

/* Scale frequency of NODE edges by FREQ_SCALE and increase loop nest
   by NEST.  */

static void
update_noncloned_frequencies (struct cgraph_node *node,
			      int freq_scale, int nest)
{
  struct cgraph_edge *e;

  /* We do not want to ignore high loop nest after freq drops to 0.  */
  if (!freq_scale)
    freq_scale = 1;
  for (e = node->callees; e; e = e->next_callee)
    {
      e->loop_nest += nest;
      e->frequency = e->frequency * (gcov_type) freq_scale / CGRAPH_FREQ_BASE;
      if (e->frequency > CGRAPH_FREQ_MAX)
        e->frequency = CGRAPH_FREQ_MAX;
      if (!e->inline_failed)
        update_noncloned_frequencies (e->callee, freq_scale, nest);
    }
}

/* E is expected to be an edge being inlined.  Clone destination node of
   the edge and redirect it to the new clone.
   DUPLICATE is used for bookkeeping on whether we are actually creating new
   clones or re-using node originally representing out-of-line function call.
   */
void
cgraph_clone_inlined_nodes (struct cgraph_edge *e, bool duplicate,
			    bool update_original)
{
  HOST_WIDE_INT peak;

  if (duplicate)
    {
      /* We may eliminate the need for out-of-line copy to be output.
	 In that case just go ahead and re-use it.  */
      if (!e->callee->callers->next_caller
	  /* Recursive inlining never wants the master clone to be overwritten.  */
	  && update_original
	  /* FIXME: When address is taken of DECL_EXTERNAL function we still can remove its
	     offline copy, but we would need to keep unanalyzed node in the callgraph so
	     references can point to it.  */
	  && !e->callee->address_taken
	  && cgraph_can_remove_if_no_direct_calls_p (e->callee)
	  /* Inlining might enable more devirtualizing, so we want to remove
	     those only after all devirtualizable virtual calls are processed.
	     Lacking may edges in callgraph we just preserve them post
	     inlining.  */
	  && (!DECL_VIRTUAL_P (e->callee->decl)
	      || (!DECL_COMDAT (e->callee->decl) && !DECL_EXTERNAL (e->callee->decl)))
	  /* Don't reuse if more than one function shares a comdat group.
	     If the other function(s) are needed, we need to emit even
	     this function out of line.  */
	  && !e->callee->same_comdat_group
	  && !cgraph_new_nodes)
	{
	  gcc_assert (!e->callee->global.inlined_to);
	  if (e->callee->analyzed && !DECL_EXTERNAL (e->callee->decl))
	    {
	      overall_size -= e->callee->global.size;
	      nfunctions_inlined++;
	    }
	  duplicate = false;
	  e->callee->local.externally_visible = false;
          update_noncloned_frequencies (e->callee, e->frequency, e->loop_nest);
	}
      else
	{
	  struct cgraph_node *n;
	  n = cgraph_clone_node (e->callee, e->callee->decl,
				 e->count, e->frequency, e->loop_nest,
				 update_original, NULL);
	  cgraph_redirect_edge_callee (e, n);
	}
    }

  if (e->caller->global.inlined_to)
    e->callee->global.inlined_to = e->caller->global.inlined_to;
  else
    e->callee->global.inlined_to = e->caller;
  e->callee->global.stack_frame_offset
    = e->caller->global.stack_frame_offset
      + inline_summary (e->caller)->estimated_self_stack_size;
  peak = e->callee->global.stack_frame_offset
      + inline_summary (e->callee)->estimated_self_stack_size;
  if (e->callee->global.inlined_to->global.estimated_stack_size < peak)
    e->callee->global.inlined_to->global.estimated_stack_size = peak;
  cgraph_propagate_frequency (e->callee);

  /* Recursively clone all bodies.  */
  for (e = e->callee->callees; e; e = e->next_callee)
    if (!e->inline_failed)
      cgraph_clone_inlined_nodes (e, duplicate, update_original);
}

/* Mark edge E as inlined and update callgraph accordingly.  UPDATE_ORIGINAL
   specify whether profile of original function should be updated.  If any new
   indirect edges are discovered in the process, add them to NEW_EDGES, unless
   it is NULL.  Return true iff any new callgraph edges were discovered as a
   result of inlining.  */

static bool
cgraph_mark_inline_edge (struct cgraph_edge *e, bool update_original,
			 VEC (cgraph_edge_p, heap) **new_edges)
{
  int old_size = 0, new_size = 0;
  struct cgraph_node *to = NULL, *what;
  struct cgraph_edge *curr = e;
  int freq;

  /* Don't inline inlined edges.  */
  gcc_assert (e->inline_failed);
  /* Don't even think of inlining inline clone.  */
  gcc_assert (!e->callee->global.inlined_to);

  e->inline_failed = CIF_OK;
  DECL_POSSIBLY_INLINED (e->callee->decl) = true;

  cgraph_clone_inlined_nodes (e, true, update_original);

  what = e->callee;

  freq = e->frequency;
  /* Now update size of caller and all functions caller is inlined into.  */
  for (;e && !e->inline_failed; e = e->caller->callers)
    {
      to = e->caller;
      old_size = e->caller->global.size;
      new_size = cgraph_estimate_size_after_inlining (to, what);
      to->global.size = new_size;
      to->global.time = cgraph_estimate_time_after_inlining (freq, to, what);
    }
  gcc_assert (what->global.inlined_to == to);
  if (new_size > old_size)
    overall_size += new_size - old_size;
  ncalls_inlined++;

  /* FIXME: We should remove the optimize check after we ensure we never run
     IPA passes when not optimizing.  */
  if (flag_indirect_inlining && optimize)
    return ipa_propagate_indirect_call_infos (curr, new_edges);
  else
    return false;
}

/* Estimate the growth caused by inlining NODE into all callees.  */

static int
cgraph_estimate_growth (struct cgraph_node *node)
{
  int growth = 0;
  struct cgraph_edge *e;
  bool self_recursive = false;

  if (node->global.estimated_growth != INT_MIN)
    return node->global.estimated_growth;

  for (e = node->callers; e; e = e->next_caller)
    {
      if (e->caller == node)
        self_recursive = true;
      if (e->inline_failed)
	growth += (cgraph_estimate_size_after_inlining (e->caller, node)
		   - e->caller->global.size);
    }

  /* ??? Wrong for non-trivially self recursive functions or cases where
     we decide to not inline for different reasons, but it is not big deal
     as in that case we will keep the body around, but we will also avoid
     some inlining.  */
  if (cgraph_will_be_removed_from_program_if_no_direct_calls (node)
      && !DECL_EXTERNAL (node->decl) && !self_recursive)
    growth -= node->global.size;
  /* COMDAT functions are very often not shared across multiple units since they
     come from various template instantiations.  Take this into account.  */
  else  if (DECL_COMDAT (node->decl) && !self_recursive
	    && cgraph_can_remove_if_no_direct_calls_p (node))
    growth -= (node->global.size
	       * (100 - PARAM_VALUE (PARAM_COMDAT_SHARING_PROBABILITY)) + 50) / 100;

  node->global.estimated_growth = growth;
  return growth;
}

/* Return false when inlining WHAT into TO is not good idea
   as it would cause too large growth of function bodies.
   When ONE_ONLY is true, assume that only one call site is going
   to be inlined, otherwise figure out how many call sites in
   TO calls WHAT and verify that all can be inlined.
   */

static bool
cgraph_check_inline_limits (struct cgraph_node *to, struct cgraph_node *what,
			    cgraph_inline_failed_t *reason)
{
  int newsize;
  int limit;
  HOST_WIDE_INT stack_size_limit, inlined_stack;

  if (to->global.inlined_to)
    to = to->global.inlined_to;

  /* When inlining large function body called once into small function,
     take the inlined function as base for limiting the growth.  */
  if (inline_summary (to)->self_size > inline_summary(what)->self_size)
    limit = inline_summary (to)->self_size;
  else
    limit = inline_summary (what)->self_size;

  limit += limit * PARAM_VALUE (PARAM_LARGE_FUNCTION_GROWTH) / 100;

  /* Check the size after inlining against the function limits.  But allow
     the function to shrink if it went over the limits by forced inlining.  */
  newsize = cgraph_estimate_size_after_inlining (to, what);
  if (newsize >= to->global.size
      && newsize > PARAM_VALUE (PARAM_LARGE_FUNCTION_INSNS)
      && newsize > limit)
    {
      if (reason)
        *reason = CIF_LARGE_FUNCTION_GROWTH_LIMIT;
      return false;
    }

  stack_size_limit = inline_summary (to)->estimated_self_stack_size;

  stack_size_limit += stack_size_limit * PARAM_VALUE (PARAM_STACK_FRAME_GROWTH) / 100;

  inlined_stack = (to->global.stack_frame_offset
		   + inline_summary (to)->estimated_self_stack_size
		   + what->global.estimated_stack_size);
  if (inlined_stack  > stack_size_limit
      && inlined_stack > PARAM_VALUE (PARAM_LARGE_STACK_FRAME))
    {
      if (reason)
        *reason = CIF_LARGE_STACK_FRAME_GROWTH_LIMIT;
      return false;
    }
  return true;
}

/* Return true when function N is small enough to be inlined.  */

static bool
cgraph_default_inline_p (struct cgraph_node *n, cgraph_inline_failed_t *reason)
{
  tree decl = n->decl;

  if (n->local.disregard_inline_limits)
    return true;

  if (!flag_inline_small_functions && !DECL_DECLARED_INLINE_P (decl))
    {
      if (reason)
	*reason = CIF_FUNCTION_NOT_INLINE_CANDIDATE;
      return false;
    }
  if (!n->analyzed)
    {
      if (reason)
	*reason = CIF_BODY_NOT_AVAILABLE;
      return false;
    }
  if (cgraph_function_body_availability (n) <= AVAIL_OVERWRITABLE)
    {
      if (reason)
	*reason = CIF_OVERWRITABLE;
      return false;
    }


  if (DECL_DECLARED_INLINE_P (decl))
    {
      if (n->global.size >= MAX_INLINE_INSNS_SINGLE)
	{
	  if (reason)
	    *reason = CIF_MAX_INLINE_INSNS_SINGLE_LIMIT;
	  return false;
	}
    }
  else
    {
      if (n->global.size >= MAX_INLINE_INSNS_AUTO)
	{
	  if (reason)
	    *reason = CIF_MAX_INLINE_INSNS_AUTO_LIMIT;
	  return false;
	}
    }

  return true;
}

/* Return true when inlining WHAT would create recursive inlining.
   We call recursive inlining all cases where same function appears more than
   once in the single recursion nest path in the inline graph.  */

static inline bool
cgraph_recursive_inlining_p (struct cgraph_node *to,
			     struct cgraph_node *what,
			     cgraph_inline_failed_t *reason)
{
  bool recursive;
  if (to->global.inlined_to)
    recursive = what->decl == to->global.inlined_to->decl;
  else
    recursive = what->decl == to->decl;
  /* Marking recursive function inline has sane semantic and thus we should
     not warn on it.  */
  if (recursive && reason)
    *reason = (what->local.disregard_inline_limits
	       ? CIF_RECURSIVE_INLINING : CIF_UNSPECIFIED);
  return recursive;
}

/* A cost model driving the inlining heuristics in a way so the edges with
   smallest badness are inlined first.  After each inlining is performed
   the costs of all caller edges of nodes affected are recomputed so the
   metrics may accurately depend on values such as number of inlinable callers
   of the function or function body size.  */

static int
cgraph_edge_badness (struct cgraph_edge *edge, bool dump)
{
  gcov_type badness;
  int growth =
    (cgraph_estimate_size_after_inlining (edge->caller, edge->callee)
     - edge->caller->global.size);

  if (edge->callee->local.disregard_inline_limits)
    return INT_MIN;

  if (dump)
    {
      fprintf (dump_file, "    Badness calculation for %s -> %s\n",
	       cgraph_node_name (edge->caller),
	       cgraph_node_name (edge->callee));
      fprintf (dump_file, "      growth %i, time %i-%i, size %i-%i\n",
	       growth,
	       edge->callee->global.time,
	       inline_summary (edge->callee)->time_inlining_benefit,
	       edge->callee->global.size,
	       inline_summary (edge->callee)->size_inlining_benefit);
    }

  /* Always prefer inlining saving code size.  */
  if (growth <= 0)
    {
      badness = INT_MIN - growth;
      if (dump)
	fprintf (dump_file, "      %i: Growth %i < 0\n", (int) badness,
		 growth);
    }

  /* When profiling is available, base priorities -(#calls / growth).
     So we optimize for overall number of "executed" inlined calls.  */
  else if (max_count)
    {
      badness =
	((int)
	 ((double) edge->count * INT_MIN / max_count / (max_benefit + 1)) *
	 (inline_summary (edge->callee)->time_inlining_benefit + 1)) / growth;
      if (dump)
	{
	  fprintf (dump_file,
		   "      %i (relative %f): profile info. Relative count %f"
		   " * Relative benefit %f\n",
		   (int) badness, (double) badness / INT_MIN,
		   (double) edge->count / max_count,
		   (double) (inline_summary (edge->callee)->
			     time_inlining_benefit + 1) / (max_benefit + 1));
	}
    }

  /* When function local profile is available, base priorities on
     growth / frequency, so we optimize for overall frequency of inlined
     calls.  This is not too accurate since while the call might be frequent
     within function, the function itself is infrequent.

     Other objective to optimize for is number of different calls inlined.
     We add the estimated growth after inlining all functions to bias the
     priorities slightly in this direction (so fewer times called functions
     of the same size gets priority).  */
  else if (flag_guess_branch_prob)
    {
      int div = edge->frequency * 100 / CGRAPH_FREQ_BASE + 1;
      int benefitperc;
      int growth_for_all;
      badness = growth * 10000;
      benefitperc =
	MIN (100 * inline_summary (edge->callee)->time_inlining_benefit /
	     (edge->callee->global.time + 1) +1, 100);
      div *= benefitperc;


      /* Decrease badness if call is nested.  */
      /* Compress the range so we don't overflow.  */
      if (div > 10000)
	div = 10000 + ceil_log2 (div) - 8;
      if (div < 1)
	div = 1;
      if (badness > 0)
	badness /= div;
      growth_for_all = cgraph_estimate_growth (edge->callee);
      badness += growth_for_all;
      if (badness > INT_MAX)
	badness = INT_MAX;
      if (dump)
	{
	  fprintf (dump_file,
		   "      %i: guessed profile. frequency %i, overall growth %i,"
		   " benefit %i%%, divisor %i\n",
		   (int) badness, edge->frequency, growth_for_all, benefitperc, div);
	}
    }
  /* When function local profile is not available or it does not give
     useful information (ie frequency is zero), base the cost on
     loop nest and overall size growth, so we optimize for overall number
     of functions fully inlined in program.  */
  else
    {
      int nest = MIN (edge->loop_nest, 8);
      badness = cgraph_estimate_growth (edge->callee) * 256;

      /* Decrease badness if call is nested.  */
      if (badness > 0)
	badness >>= nest;
      else
	{
	  badness <<= nest;
	}
      if (dump)
	fprintf (dump_file, "      %i: no profile. nest %i\n", (int) badness,
		 nest);
    }

  /* Ensure that we did not overflow in all the fixed point math above.  */
  gcc_assert (badness >= INT_MIN);
  gcc_assert (badness <= INT_MAX - 1);
  /* Make recursive inlining happen always after other inlining is done.  */
  if (cgraph_recursive_inlining_p (edge->caller, edge->callee, NULL))
    return badness + 1;
  else
    return badness;
}

/* Recompute badness of EDGE and update its key in HEAP if needed.  */
static void
update_edge_key (fibheap_t heap, struct cgraph_edge *edge)
{
  int badness = cgraph_edge_badness (edge, false);
  if (edge->aux)
    {
      fibnode_t n = (fibnode_t) edge->aux;
      gcc_checking_assert (n->data == edge);

      /* fibheap_replace_key only decrease the keys.
	 When we increase the key we do not update heap
	 and instead re-insert the element once it becomes
	 a minimum of heap.  */
      if (badness < n->key)
	{
	  fibheap_replace_key (heap, n, badness);
	  gcc_checking_assert (n->key == badness);
	}
    }
  else
    edge->aux = fibheap_insert (heap, badness, edge);
}

/* Recompute heap nodes for each of caller edge.  */

static void
update_caller_keys (fibheap_t heap, struct cgraph_node *node,
		    bitmap updated_nodes)
{
  struct cgraph_edge *edge;
  cgraph_inline_failed_t failed_reason;

  if (!node->local.inlinable
      || cgraph_function_body_availability (node) <= AVAIL_OVERWRITABLE
      || node->global.inlined_to)
    return;
  if (!bitmap_set_bit (updated_nodes, node->uid))
    return;
  node->global.estimated_growth = INT_MIN;

  /* See if there is something to do.  */
  for (edge = node->callers; edge; edge = edge->next_caller)
    if (edge->inline_failed)
      break;
  if (!edge)
    return;
  /* Prune out edges we won't inline into anymore.  */
  if (!cgraph_default_inline_p (node, &failed_reason))
    {
      for (; edge; edge = edge->next_caller)
	if (edge->aux)
	  {
	    fibheap_delete_node (heap, (fibnode_t) edge->aux);
	    edge->aux = NULL;
	    if (edge->inline_failed)
	      edge->inline_failed = failed_reason;
	  }
      return;
    }

  for (; edge; edge = edge->next_caller)
    if (edge->inline_failed)
      update_edge_key (heap, edge);
}

/* Recompute heap nodes for each uninlined call.
   This is used when we know that edge badnesses are going only to increase
   (we introduced new call site) and thus all we need is to insert newly
   created edges into heap.  */

static void
update_callee_keys (fibheap_t heap, struct cgraph_node *node,
		    bitmap updated_nodes)
{
  struct cgraph_edge *e = node->callees;
  node->global.estimated_growth = INT_MIN;

  if (!e)
    return;
  while (true)
    if (!e->inline_failed && e->callee->callees)
      e = e->callee->callees;
    else
      {
	if (e->inline_failed
	    && e->callee->local.inlinable
	    && cgraph_function_body_availability (e->callee) >= AVAIL_AVAILABLE
	    && !bitmap_bit_p (updated_nodes, e->callee->uid))
	  {
	    node->global.estimated_growth = INT_MIN;
	    /* If function becomes uninlinable, we need to remove it from the heap.  */
	    if (!cgraph_default_inline_p (e->callee, &e->inline_failed))
	      update_caller_keys (heap, e->callee, updated_nodes);
	    else
	    /* Otherwise update just edge E.  */
	      update_edge_key (heap, e);
	  }
	if (e->next_callee)
	  e = e->next_callee;
	else
	  {
	    do
	      {
		if (e->caller == node)
		  return;
		e = e->caller->callers;
	      }
	    while (!e->next_callee);
	    e = e->next_callee;
	  }
      }
}

/* Recompute heap nodes for each of caller edges of each of callees.
   Walk recursively into all inline clones.  */

static void
update_all_callee_keys (fibheap_t heap, struct cgraph_node *node,
			bitmap updated_nodes)
{
  struct cgraph_edge *e = node->callees;
  node->global.estimated_growth = INT_MIN;

  if (!e)
    return;
  while (true)
    if (!e->inline_failed && e->callee->callees)
      e = e->callee->callees;
    else
      {
	if (e->inline_failed)
	  update_caller_keys (heap, e->callee, updated_nodes);
	if (e->next_callee)
	  e = e->next_callee;
	else
	  {
	    do
	      {
		if (e->caller == node)
		  return;
		e = e->caller->callers;
	      }
	    while (!e->next_callee);
	    e = e->next_callee;
	  }
      }
}

/* Enqueue all recursive calls from NODE into priority queue depending on
   how likely we want to recursively inline the call.  */

static void
lookup_recursive_calls (struct cgraph_node *node, struct cgraph_node *where,
			fibheap_t heap)
{
  static int priority;
  struct cgraph_edge *e;
  for (e = where->callees; e; e = e->next_callee)
    if (e->callee == node)
      {
	/* When profile feedback is available, prioritize by expected number
	   of calls.  Without profile feedback we maintain simple queue
	   to order candidates via recursive depths.  */
        fibheap_insert (heap,
			!max_count ? priority++
		        : -(e->count / ((max_count + (1<<24) - 1) / (1<<24))),
		        e);
      }
  for (e = where->callees; e; e = e->next_callee)
    if (!e->inline_failed)
      lookup_recursive_calls (node, e->callee, heap);
}

/* Decide on recursive inlining: in the case function has recursive calls,
   inline until body size reaches given argument.  If any new indirect edges
   are discovered in the process, add them to *NEW_EDGES, unless NEW_EDGES
   is NULL.  */

static bool
cgraph_decide_recursive_inlining (struct cgraph_node *node,
				  VEC (cgraph_edge_p, heap) **new_edges)
{
  int limit = PARAM_VALUE (PARAM_MAX_INLINE_INSNS_RECURSIVE_AUTO);
  int max_depth = PARAM_VALUE (PARAM_MAX_INLINE_RECURSIVE_DEPTH_AUTO);
  int probability = PARAM_VALUE (PARAM_MIN_INLINE_RECURSIVE_PROBABILITY);
  fibheap_t heap;
  struct cgraph_edge *e;
  struct cgraph_node *master_clone, *next;
  int depth = 0;
  int n = 0;

  /* It does not make sense to recursively inline always-inline functions
     as we are going to sorry() on the remaining calls anyway.  */
  if (node->local.disregard_inline_limits
      && lookup_attribute ("always_inline", DECL_ATTRIBUTES (node->decl)))
    return false;

  if (optimize_function_for_size_p (DECL_STRUCT_FUNCTION (node->decl))
      || (!flag_inline_functions && !DECL_DECLARED_INLINE_P (node->decl)))
    return false;

  if (DECL_DECLARED_INLINE_P (node->decl))
    {
      limit = PARAM_VALUE (PARAM_MAX_INLINE_INSNS_RECURSIVE);
      max_depth = PARAM_VALUE (PARAM_MAX_INLINE_RECURSIVE_DEPTH);
    }

  /* Make sure that function is small enough to be considered for inlining.  */
  if (!max_depth
      || cgraph_estimate_size_after_inlining (node, node)  >= limit)
    return false;
  heap = fibheap_new ();
  lookup_recursive_calls (node, node, heap);
  if (fibheap_empty (heap))
    {
      fibheap_delete (heap);
      return false;
    }

  if (dump_file)
    fprintf (dump_file,
	     "  Performing recursive inlining on %s\n",
	     cgraph_node_name (node));

  /* We need original clone to copy around.  */
  master_clone = cgraph_clone_node (node, node->decl,
				    node->count, CGRAPH_FREQ_BASE, 1,
  				    false, NULL);
  for (e = master_clone->callees; e; e = e->next_callee)
    if (!e->inline_failed)
      cgraph_clone_inlined_nodes (e, true, false);

  /* Do the inlining and update list of recursive call during process.  */
  while (!fibheap_empty (heap)
	 && (cgraph_estimate_size_after_inlining (node, master_clone)
	     <= limit))
    {
      struct cgraph_edge *curr
	= (struct cgraph_edge *) fibheap_extract_min (heap);
      struct cgraph_node *cnode;

      depth = 1;
      for (cnode = curr->caller;
	   cnode->global.inlined_to; cnode = cnode->callers->caller)
	if (node->decl == curr->callee->decl)
	  depth++;
      if (depth > max_depth)
	{
          if (dump_file)
	    fprintf (dump_file,
		     "   maximal depth reached\n");
	  continue;
	}

      if (max_count)
	{
          if (!cgraph_maybe_hot_edge_p (curr))
	    {
	      if (dump_file)
		fprintf (dump_file, "   Not inlining cold call\n");
	      continue;
	    }
          if (curr->count * 100 / node->count < probability)
	    {
	      if (dump_file)
		fprintf (dump_file,
			 "   Probability of edge is too small\n");
	      continue;
	    }
	}

      if (dump_file)
	{
	  fprintf (dump_file,
		   "   Inlining call of depth %i", depth);
	  if (node->count)
	    {
	      fprintf (dump_file, " called approx. %.2f times per call",
		       (double)curr->count / node->count);
	    }
	  fprintf (dump_file, "\n");
	}
      cgraph_redirect_edge_callee (curr, master_clone);
      cgraph_mark_inline_edge (curr, false, new_edges);
      lookup_recursive_calls (node, curr->callee, heap);
      n++;
    }
  if (!fibheap_empty (heap) && dump_file)
    fprintf (dump_file, "    Recursive inlining growth limit met.\n");

  fibheap_delete (heap);
  if (dump_file)
    fprintf (dump_file,
	     "\n   Inlined %i times, body grown from size %i to %i, time %i to %i\n", n,
	     master_clone->global.size, node->global.size,
	     master_clone->global.time, node->global.time);

  /* Remove master clone we used for inlining.  We rely that clones inlined
     into master clone gets queued just before master clone so we don't
     need recursion.  */
  for (node = cgraph_nodes; node != master_clone;
       node = next)
    {
      next = node->next;
      if (node->global.inlined_to == master_clone)
	cgraph_remove_node (node);
    }
  cgraph_remove_node (master_clone);
  /* FIXME: Recursive inlining actually reduces number of calls of the
     function.  At this place we should probably walk the function and
     inline clones and compensate the counts accordingly.  This probably
     doesn't matter much in practice.  */
  return n > 0;
}

/* Set inline_failed for all callers of given function to REASON.  */

static void
cgraph_set_inline_failed (struct cgraph_node *node,
			  cgraph_inline_failed_t reason)
{
  struct cgraph_edge *e;

  if (dump_file)
    fprintf (dump_file, "Inlining failed: %s\n",
	     cgraph_inline_failed_string (reason));
  for (e = node->callers; e; e = e->next_caller)
    if (e->inline_failed)
      e->inline_failed = reason;
}

/* Given whole compilation unit estimate of INSNS, compute how large we can
   allow the unit to grow.  */
static int
compute_max_insns (int insns)
{
  int max_insns = insns;
  if (max_insns < PARAM_VALUE (PARAM_LARGE_UNIT_INSNS))
    max_insns = PARAM_VALUE (PARAM_LARGE_UNIT_INSNS);

  return ((HOST_WIDEST_INT) max_insns
	  * (100 + PARAM_VALUE (PARAM_INLINE_UNIT_GROWTH)) / 100);
}

/* Compute badness of all edges in NEW_EDGES and add them to the HEAP.  */
static void
add_new_edges_to_heap (fibheap_t heap, VEC (cgraph_edge_p, heap) *new_edges)
{
  while (VEC_length (cgraph_edge_p, new_edges) > 0)
    {
      struct cgraph_edge *edge = VEC_pop (cgraph_edge_p, new_edges);

      gcc_assert (!edge->aux);
      if (edge->callee->local.inlinable
	  && edge->inline_failed
	  && cgraph_default_inline_p (edge->callee, &edge->inline_failed))
        edge->aux = fibheap_insert (heap, cgraph_edge_badness (edge, false), edge);
    }
}


/* We use greedy algorithm for inlining of small functions:
   All inline candidates are put into prioritized heap based on estimated
   growth of the overall number of instructions and then update the estimates.

   INLINED and INLINED_CALLEES are just pointers to arrays large enough
   to be passed to cgraph_inlined_into and cgraph_inlined_callees.  */

static void
cgraph_decide_inlining_of_small_functions (void)
{
  struct cgraph_node *node;
  struct cgraph_edge *edge;
  cgraph_inline_failed_t failed_reason;
  fibheap_t heap = fibheap_new ();
  bitmap updated_nodes = BITMAP_ALLOC (NULL);
  int min_size, max_size;
  VEC (cgraph_edge_p, heap) *new_indirect_edges = NULL;

  if (flag_indirect_inlining)
    new_indirect_edges = VEC_alloc (cgraph_edge_p, heap, 8);

  if (dump_file)
    fprintf (dump_file, "\nDeciding on smaller functions:\n");

  /* Put all inline candidates into the heap.  */

  for (node = cgraph_nodes; node; node = node->next)
    {
      if (!node->local.inlinable || !node->callers)
	continue;
      if (dump_file)
	fprintf (dump_file, "Considering inline candidate %s.\n", cgraph_node_name (node));

      node->global.estimated_growth = INT_MIN;
      if (!cgraph_default_inline_p (node, &failed_reason))
	{
	  cgraph_set_inline_failed (node, failed_reason);
	  continue;
	}

      for (edge = node->callers; edge; edge = edge->next_caller)
	if (edge->inline_failed)
	  {
	    gcc_assert (!edge->aux);
	    edge->aux = fibheap_insert (heap, cgraph_edge_badness (edge, false), edge);
	  }
    }

  max_size = compute_max_insns (overall_size);
  min_size = overall_size;

  while (overall_size <= max_size
	 && !fibheap_empty (heap))
    {
      int old_size = overall_size;
      struct cgraph_node *where, *callee;
      int badness = fibheap_min_key (heap);
      int current_badness;
      int growth;
      cgraph_inline_failed_t not_good = CIF_OK;

      edge = (struct cgraph_edge *) fibheap_extract_min (heap);
      gcc_assert (edge->aux);
      edge->aux = NULL;
      if (!edge->inline_failed)
	continue;

      /* When updating the edge costs, we only decrease badness in the keys.
	 When the badness increase, we keep the heap as it is and re-insert
	 key now.  */
      current_badness = cgraph_edge_badness (edge, false);
      gcc_assert (current_badness >= badness);
      if (current_badness != badness)
	{
	  edge->aux = fibheap_insert (heap, current_badness, edge);
	  continue;
	}
      
      callee = edge->callee;

      growth = (cgraph_estimate_size_after_inlining (edge->caller, edge->callee)
		- edge->caller->global.size);

      if (dump_file)
	{
	  fprintf (dump_file,
		   "\nConsidering %s with %i size\n",
		   cgraph_node_name (edge->callee),
		   edge->callee->global.size);
	  fprintf (dump_file,
		   " to be inlined into %s in %s:%i\n"
		   " Estimated growth after inlined into all callees is %+i insns.\n"
		   " Estimated badness is %i, frequency %.2f.\n",
		   cgraph_node_name (edge->caller),
		   flag_wpa ? "unknown"
		   : gimple_filename ((const_gimple) edge->call_stmt),
		   flag_wpa ? -1 : gimple_lineno ((const_gimple) edge->call_stmt),
		   cgraph_estimate_growth (edge->callee),
		   badness,
		   edge->frequency / (double)CGRAPH_FREQ_BASE);
	  if (edge->count)
	    fprintf (dump_file," Called "HOST_WIDEST_INT_PRINT_DEC"x\n", edge->count);
	  if (dump_flags & TDF_DETAILS)
	    cgraph_edge_badness (edge, true);
	}

      /* When not having profile info ready we don't weight by any way the
         position of call in procedure itself.  This means if call of
	 function A from function B seems profitable to inline, the recursive
	 call of function A in inline copy of A in B will look profitable too
	 and we end up inlining until reaching maximal function growth.  This
	 is not good idea so prohibit the recursive inlining.

	 ??? When the frequencies are taken into account we might not need this
	 restriction.

	 We need to be careful here, in some testcases, e.g. directives.c in
	 libcpp, we can estimate self recursive function to have negative growth
	 for inlining completely.
	 */
      if (!edge->count)
	{
	  where = edge->caller;
	  while (where->global.inlined_to)
	    {
	      if (where->decl == edge->callee->decl)
		break;
	      where = where->callers->caller;
	    }
	  if (where->global.inlined_to)
	    {
	      edge->inline_failed
		= (edge->callee->local.disregard_inline_limits
		   ? CIF_RECURSIVE_INLINING : CIF_UNSPECIFIED);
	      if (dump_file)
		fprintf (dump_file, " inline_failed:Recursive inlining performed only for function itself.\n");
	      continue;
	    }
	}

      if (edge->callee->local.disregard_inline_limits)
	;
      else if (!cgraph_maybe_hot_edge_p (edge))
 	not_good = CIF_UNLIKELY_CALL;
      else if (!flag_inline_functions
	  && !DECL_DECLARED_INLINE_P (edge->callee->decl))
 	not_good = CIF_NOT_DECLARED_INLINED;
      else if (optimize_function_for_size_p (DECL_STRUCT_FUNCTION(edge->caller->decl)))
 	not_good = CIF_OPTIMIZING_FOR_SIZE;
      if (not_good && growth > 0 && cgraph_estimate_growth (edge->callee) > 0)
	{
          if (!cgraph_recursive_inlining_p (edge->caller, edge->callee,
				            &edge->inline_failed))
	    {
	      edge->inline_failed = not_good;
	      if (dump_file)
		fprintf (dump_file, " inline_failed:%s.\n",
			 cgraph_inline_failed_string (edge->inline_failed));
	    }
	  continue;
	}
      if (!cgraph_default_inline_p (edge->callee, &edge->inline_failed))
	{
          if (!cgraph_recursive_inlining_p (edge->caller, edge->callee,
				            &edge->inline_failed))
	    {
	      if (dump_file)
		fprintf (dump_file, " inline_failed:%s.\n",
			 cgraph_inline_failed_string (edge->inline_failed));
	    }
	  continue;
	}
      if (!tree_can_inline_p (edge)
	  || edge->call_stmt_cannot_inline_p)
	{
	  if (dump_file)
	    fprintf (dump_file, " inline_failed:%s.\n",
		     cgraph_inline_failed_string (edge->inline_failed));
	  continue;
	}
      if (cgraph_recursive_inlining_p (edge->caller, edge->callee,
				       &edge->inline_failed))
	{
	  where = edge->caller;
	  if (where->global.inlined_to)
	    where = where->global.inlined_to;
	  if (!cgraph_decide_recursive_inlining (where,
						 flag_indirect_inlining
						 ? &new_indirect_edges : NULL))
	    continue;
	  if (flag_indirect_inlining)
	    add_new_edges_to_heap (heap, new_indirect_edges);
          update_all_callee_keys (heap, where, updated_nodes);
	}
      else
	{
	  struct cgraph_node *callee;
	  if (!cgraph_check_inline_limits (edge->caller, edge->callee,
				           &edge->inline_failed))
	    {
	      if (dump_file)
		fprintf (dump_file, " Not inlining into %s:%s.\n",
			 cgraph_node_name (edge->caller),
			 cgraph_inline_failed_string (edge->inline_failed));
	      continue;
	    }
	  callee = edge->callee;
	  gcc_checking_assert (!callee->global.inlined_to);
	  cgraph_mark_inline_edge (edge, true, &new_indirect_edges);
	  if (flag_indirect_inlining)
	    add_new_edges_to_heap (heap, new_indirect_edges);

	  /* We inlined last offline copy to the body.  This might lead
	     to callees of function having fewer call sites and thus they
	     may need updating.  */
	  if (callee->global.inlined_to)
	    update_all_callee_keys (heap, callee, updated_nodes);
	  else
	    update_callee_keys (heap, edge->callee, updated_nodes);
	}
      where = edge->caller;
      if (where->global.inlined_to)
	where = where->global.inlined_to;

      /* Our profitability metric can depend on local properties
	 such as number of inlinable calls and size of the function body.
	 After inlining these properties might change for the function we
	 inlined into (since it's body size changed) and for the functions
	 called by function we inlined (since number of it inlinable callers
	 might change).  */
      update_caller_keys (heap, where, updated_nodes);

      /* We removed one call of the function we just inlined.  If offline
	 copy is still needed, be sure to update the keys.  */
      if (callee != where && !callee->global.inlined_to)
        update_caller_keys (heap, callee, updated_nodes);
      bitmap_clear (updated_nodes);

      if (dump_file)
	{
	  fprintf (dump_file,
		   " Inlined into %s which now has size %i and self time %i,"
		   "net change of %+i.\n",
		   cgraph_node_name (edge->caller),
		   edge->caller->global.time,
		   edge->caller->global.size,
		   overall_size - old_size);
	}
      if (min_size > overall_size)
	{
	  min_size = overall_size;
	  max_size = compute_max_insns (min_size);

	  if (dump_file)
	    fprintf (dump_file, "New minimal size reached: %i\n", min_size);
	}
    }
  while (!fibheap_empty (heap))
    {
      int badness = fibheap_min_key (heap);

      edge = (struct cgraph_edge *) fibheap_extract_min (heap);
      gcc_assert (edge->aux);
      edge->aux = NULL;
      if (!edge->inline_failed)
	continue;
#ifdef ENABLE_CHECKING
      gcc_assert (cgraph_edge_badness (edge, false) >= badness);
#endif
      if (dump_file)
	{
	  fprintf (dump_file,
		   "\nSkipping %s with %i size\n",
		   cgraph_node_name (edge->callee),
		   edge->callee->global.size);
	  fprintf (dump_file,
		   " called by %s in %s:%i\n"
		   " Estimated growth after inlined into all callees is %+i insns.\n"
		   " Estimated badness is %i, frequency %.2f.\n",
		   cgraph_node_name (edge->caller),
		   flag_wpa ? "unknown"
		   : gimple_filename ((const_gimple) edge->call_stmt),
		   flag_wpa ? -1 : gimple_lineno ((const_gimple) edge->call_stmt),
		   cgraph_estimate_growth (edge->callee),
		   badness,
		   edge->frequency / (double)CGRAPH_FREQ_BASE);
	  if (edge->count)
	    fprintf (dump_file," Called "HOST_WIDEST_INT_PRINT_DEC"x\n", edge->count);
	  if (dump_flags & TDF_DETAILS)
	    cgraph_edge_badness (edge, true);
	}
      if (!edge->callee->local.disregard_inline_limits && edge->inline_failed
          && !cgraph_recursive_inlining_p (edge->caller, edge->callee,
				           &edge->inline_failed))
	edge->inline_failed = CIF_INLINE_UNIT_GROWTH_LIMIT;
    }

  if (new_indirect_edges)
    VEC_free (cgraph_edge_p, heap, new_indirect_edges);
  fibheap_delete (heap);
  BITMAP_FREE (updated_nodes);
}

/* Flatten NODE from the IPA inliner.  */

static void
cgraph_flatten (struct cgraph_node *node)
{
  struct cgraph_edge *e;

  /* We shouldn't be called recursively when we are being processed.  */
  gcc_assert (node->aux == NULL);

  node->aux = (void *)(size_t) INLINE_ALL;

  for (e = node->callees; e; e = e->next_callee)
    {
      struct cgraph_node *orig_callee;

      if (e->call_stmt_cannot_inline_p)
	{
	  if (dump_file)
	    fprintf (dump_file, "Not inlining: %s",
		     cgraph_inline_failed_string (e->inline_failed));
	  continue;
	}

      if (!e->callee->analyzed)
	{
	  if (dump_file)
	    fprintf (dump_file,
		     "Not inlining: Function body not available.\n");
	  continue;
	}

      /* We've hit cycle?  It is time to give up.  */
      if (e->callee->aux)
	{
	  if (dump_file)
	    fprintf (dump_file,
		     "Not inlining %s into %s to avoid cycle.\n",
		     cgraph_node_name (e->callee),
		     cgraph_node_name (e->caller));
	  e->inline_failed = CIF_RECURSIVE_INLINING;
	  continue;
	}

      /* When the edge is already inlined, we just need to recurse into
	 it in order to fully flatten the leaves.  */
      if (!e->inline_failed)
	{
	  cgraph_flatten (e->callee);
	  continue;
	}

      if (cgraph_recursive_inlining_p (node, e->callee, &e->inline_failed))
	{
	  if (dump_file)
	    fprintf (dump_file, "Not inlining: recursive call.\n");
	  continue;
	}

      if (!tree_can_inline_p (e))
	{
	  if (dump_file)
	    fprintf (dump_file, "Not inlining: %s",
		     cgraph_inline_failed_string (e->inline_failed));
	  continue;
	}

      if (gimple_in_ssa_p (DECL_STRUCT_FUNCTION (node->decl))
	  != gimple_in_ssa_p (DECL_STRUCT_FUNCTION (e->callee->decl)))
	{
	  if (dump_file)
	    fprintf (dump_file, "Not inlining: SSA form does not match.\n");
	  continue;
	}

      /* Inline the edge and flatten the inline clone.  Avoid
         recursing through the original node if the node was cloned.  */
      if (dump_file)
	fprintf (dump_file, " Inlining %s into %s.\n",
		 cgraph_node_name (e->callee),
		 cgraph_node_name (e->caller));
      orig_callee = e->callee;
      cgraph_mark_inline_edge (e, true, NULL);
      if (e->callee != orig_callee)
	orig_callee->aux = (void *)(size_t) INLINE_ALL;
      cgraph_flatten (e->callee);
      if (e->callee != orig_callee)
	orig_callee->aux = NULL;
    }

  node->aux = NULL;
}

/* Decide on the inlining.  We do so in the topological order to avoid
   expenses on updating data structures.  */

static unsigned int
cgraph_decide_inlining (void)
{
  struct cgraph_node *node;
  int nnodes;
  struct cgraph_node **order =
    XCNEWVEC (struct cgraph_node *, cgraph_n_nodes);
  int old_size = 0;
  int i;
  int initial_size = 0;

  cgraph_remove_function_insertion_hook (function_insertion_hook_holder);
  if (in_lto_p && flag_indirect_inlining)
    ipa_update_after_lto_read ();
  if (flag_indirect_inlining)
    ipa_create_all_structures_for_iinln ();

  max_count = 0;
  max_benefit = 0;
  for (node = cgraph_nodes; node; node = node->next)
    if (node->analyzed)
      {
	struct cgraph_edge *e;

	gcc_assert (inline_summary (node)->self_size == node->global.size);
	if (!DECL_EXTERNAL (node->decl))
	  initial_size += node->global.size;
	for (e = node->callees; e; e = e->next_callee)
	  if (max_count < e->count)
	    max_count = e->count;
	if (max_benefit < inline_summary (node)->time_inlining_benefit)
	  max_benefit = inline_summary (node)->time_inlining_benefit;
      }
  gcc_assert (in_lto_p
	      || !max_count
	      || (profile_info && flag_branch_probabilities));
  overall_size = initial_size;

  nnodes = cgraph_postorder (order);

  if (dump_file)
    fprintf (dump_file,
	     "\nDeciding on inlining.  Starting with size %i.\n",
	     initial_size);

  for (node = cgraph_nodes; node; node = node->next)
    node->aux = 0;

  if (dump_file)
    fprintf (dump_file, "\nFlattening functions:\n");

  /* In the first pass handle functions to be flattened.  Do this with
     a priority so none of our later choices will make this impossible.  */
  for (i = nnodes - 1; i >= 0; i--)
    {
      node = order[i];

      /* Handle nodes to be flattened, but don't update overall unit
	 size.  Calling the incremental inliner here is lame,
	 a simple worklist should be enough.  What should be left
	 here from the early inliner (if it runs) is cyclic cases.
	 Ideally when processing callees we stop inlining at the
	 entry of cycles, possibly cloning that entry point and
	 try to flatten itself turning it into a self-recursive
	 function.  */
      if (lookup_attribute ("flatten",
			    DECL_ATTRIBUTES (node->decl)) != NULL)
	{
	  if (dump_file)
	    fprintf (dump_file,
		     "Flattening %s\n", cgraph_node_name (node));
	  cgraph_flatten (node);
	}
    }

  cgraph_decide_inlining_of_small_functions ();

  if (flag_inline_functions_called_once)
    {
      if (dump_file)
	fprintf (dump_file, "\nDeciding on functions called once:\n");

      /* And finally decide what functions are called once.  */
      for (i = nnodes - 1; i >= 0; i--)
	{
	  node = order[i];

	  if (node->callers
	      && !node->callers->next_caller
	      && !node->global.inlined_to
	      && cgraph_will_be_removed_from_program_if_no_direct_calls (node)
	      && node->local.inlinable
	      && cgraph_function_body_availability (node) >= AVAIL_AVAILABLE
	      && node->callers->inline_failed
	      && node->callers->caller != node
	      && node->callers->caller->global.inlined_to != node
	      && !node->callers->call_stmt_cannot_inline_p
	      && !DECL_EXTERNAL (node->decl))
	    {
	      cgraph_inline_failed_t reason;
	      old_size = overall_size;
	      if (dump_file)
		{
		  fprintf (dump_file,
			   "\nConsidering %s size %i.\n",
			   cgraph_node_name (node), node->global.size);
		  fprintf (dump_file,
			   " Called once from %s %i insns.\n",
			   cgraph_node_name (node->callers->caller),
			   node->callers->caller->global.size);
		}

	      if (cgraph_check_inline_limits (node->callers->caller, node,
					      &reason))
		{
		  struct cgraph_node *caller = node->callers->caller;
		  cgraph_mark_inline_edge (node->callers, true, NULL);
		  if (dump_file)
		    fprintf (dump_file,
			     " Inlined into %s which now has %i size"
			     " for a net change of %+i size.\n",
			     cgraph_node_name (caller),
			     caller->global.size,
			     overall_size - old_size);
		}
	      else
		{
		  if (dump_file)
		    fprintf (dump_file,
			     " Not inlining: %s.\n",
                             cgraph_inline_failed_string (reason));
		}
	    }
	}
    }

  /* Free ipa-prop structures if they are no longer needed.  */
  if (flag_indirect_inlining)
    ipa_free_all_structures_after_iinln ();

  if (dump_file)
    fprintf (dump_file,
	     "\nInlined %i calls, eliminated %i functions, "
	     "size %i turned to %i size.\n\n",
	     ncalls_inlined, nfunctions_inlined, initial_size,
	     overall_size);
  free (order);
  return 0;
}

/* Return true when N is leaf function.  Accept cheap builtins
   in leaf functions.  */

static bool
leaf_node_p (struct cgraph_node *n)
{
  struct cgraph_edge *e;
  for (e = n->callees; e; e = e->next_callee)
    if (!is_inexpensive_builtin (e->callee->decl))
      return false;
  return true;
}

/* Decide on the inlining.  We do so in the topological order to avoid
   expenses on updating data structures.  */

static bool
cgraph_decide_inlining_incrementally (struct cgraph_node *node,
				      enum inlining_mode mode)
{
  struct cgraph_edge *e;
  bool inlined = false;
  cgraph_inline_failed_t failed_reason;

#ifdef ENABLE_CHECKING
  verify_cgraph_node (node);
#endif

  if (mode != INLINE_ALWAYS_INLINE && mode != INLINE_SIZE_NORECURSIVE
      && lookup_attribute ("flatten", DECL_ATTRIBUTES (node->decl)) != NULL)
    {
      if (dump_file)
	fprintf (dump_file, "Incrementally flattening %s\n",
		 cgraph_node_name (node));
      mode = INLINE_ALL;
    }

  /* First of all look for always inline functions.  */
  if (mode != INLINE_SIZE_NORECURSIVE)
    for (e = node->callees; e; e = e->next_callee)
      {
	if (!e->callee->local.disregard_inline_limits
	    && (mode != INLINE_ALL || !e->callee->local.inlinable))
	  continue;
	if (dump_file)
	  fprintf (dump_file,
		   "Considering to always inline inline candidate %s.\n",
		   cgraph_node_name (e->callee));
	if (cgraph_recursive_inlining_p (node, e->callee, &e->inline_failed))
	  {
	    if (dump_file)
	      fprintf (dump_file, "Not inlining: recursive call.\n");
	    continue;
	  }
	if (!tree_can_inline_p (e)
	    || e->call_stmt_cannot_inline_p)
	  {
	    if (dump_file)
	      fprintf (dump_file,
		       "Not inlining: %s",
		       cgraph_inline_failed_string (e->inline_failed));
	    continue;
	  }
	if (gimple_in_ssa_p (DECL_STRUCT_FUNCTION (node->decl))
	    != gimple_in_ssa_p (DECL_STRUCT_FUNCTION (e->callee->decl)))
	  {
	    if (dump_file)
	      fprintf (dump_file, "Not inlining: SSA form does not match.\n");
	    continue;
	  }
	if (!e->callee->analyzed)
	  {
	    if (dump_file)
	      fprintf (dump_file,
		       "Not inlining: Function body no longer available.\n");
	    continue;
	  }

	if (dump_file)
	  fprintf (dump_file, " Inlining %s into %s.\n",
		   cgraph_node_name (e->callee),
		   cgraph_node_name (e->caller));
	cgraph_mark_inline_edge (e, true, NULL);
	inlined = true;
      }

  /* Now do the automatic inlining.  */
  if (mode != INLINE_ALL && mode != INLINE_ALWAYS_INLINE
      /* Never inline regular functions into always-inline functions
	 during incremental inlining.  */
      && !node->local.disregard_inline_limits)
    {
      for (e = node->callees; e; e = e->next_callee)
	{
	  int allowed_growth = 0;
	  if (!e->callee->local.inlinable
	      || !e->inline_failed
	      || e->callee->local.disregard_inline_limits)
	    continue;
	  if (dump_file)
	    fprintf (dump_file, "Considering inline candidate %s.\n",
		     cgraph_node_name (e->callee));
	  if (cgraph_recursive_inlining_p (node, e->callee, &e->inline_failed))
	    {
	      if (dump_file)
		fprintf (dump_file, "Not inlining: recursive call.\n");
	      continue;
	    }
	  if (gimple_in_ssa_p (DECL_STRUCT_FUNCTION (node->decl))
	      != gimple_in_ssa_p (DECL_STRUCT_FUNCTION (e->callee->decl)))
	    {
	      if (dump_file)
		fprintf (dump_file,
			 "Not inlining: SSA form does not match.\n");
	      continue;
	    }

	  if (cgraph_maybe_hot_edge_p (e) && leaf_node_p (e->callee)
	      && optimize_function_for_speed_p (cfun))
	    allowed_growth = PARAM_VALUE (PARAM_EARLY_INLINING_INSNS);

	  /* When the function body would grow and inlining the function
	     won't eliminate the need for offline copy of the function,
	     don't inline.  */
	  if (((mode == INLINE_SIZE || mode == INLINE_SIZE_NORECURSIVE)
	       || (!flag_inline_functions
		   && !DECL_DECLARED_INLINE_P (e->callee->decl)))
	      && (cgraph_estimate_size_after_inlining (e->caller, e->callee)
		  > e->caller->global.size + allowed_growth)
	      && cgraph_estimate_growth (e->callee) > allowed_growth)
	    {
	      if (dump_file)
		fprintf (dump_file,
			 "Not inlining: code size would grow by %i.\n",
			 cgraph_estimate_size_after_inlining (e->caller,
							      e->callee)
			 - e->caller->global.size);
	      continue;
	    }
	  if (e->call_stmt_cannot_inline_p
	      || !tree_can_inline_p (e))
	    {
	      if (dump_file)
		fprintf (dump_file,
			 "Not inlining: call site not inlinable.\n");
	      continue;
	    }
	  if (!e->callee->analyzed)
	    {
	      if (dump_file)
		fprintf (dump_file,
			 "Not inlining: Function body no longer available.\n");
	      continue;
	    }
	  if (!cgraph_check_inline_limits (node, e->callee, &e->inline_failed))
	    {
	      if (dump_file)
		fprintf (dump_file, "Not inlining: %s.\n",
			 cgraph_inline_failed_string (e->inline_failed));
	      continue;
	    }
	  if (cgraph_default_inline_p (e->callee, &failed_reason))
	    {
	      if (dump_file)
		fprintf (dump_file, " Inlining %s into %s.\n",
			 cgraph_node_name (e->callee),
			 cgraph_node_name (e->caller));
	      cgraph_mark_inline_edge (e, true, NULL);
	      inlined = true;
	    }
	}
    }
  return inlined;
}

/* Because inlining might remove no-longer reachable nodes, we need to
   keep the array visible to garbage collector to avoid reading collected
   out nodes.  */
static int nnodes;
static GTY ((length ("nnodes"))) struct cgraph_node **order;

/* Do inlining of small functions.  Doing so early helps profiling and other
   passes to be somewhat more effective and avoids some code duplication in
   later real inlining pass for testcases with very many function calls.  */
static unsigned int
cgraph_early_inlining (void)
{
  struct cgraph_node *node = cgraph_node (current_function_decl);
  unsigned int todo = 0;
  int iterations = 0;

  if (seen_error ())
    return 0;

  if (!optimize
      || flag_no_inline
      || !flag_early_inlining)
    {
      /* When not optimizing or not inlining inline only always-inline
	 functions.  */
      cgraph_decide_inlining_incrementally (node, INLINE_ALWAYS_INLINE);
      timevar_push (TV_INTEGRATION);
      todo |= optimize_inline_calls (current_function_decl);
      timevar_pop (TV_INTEGRATION);
    }
  else
    {
      if (lookup_attribute ("flatten",
			    DECL_ATTRIBUTES (node->decl)) != NULL)
	{
	  if (dump_file)
	    fprintf (dump_file,
		     "Flattening %s\n", cgraph_node_name (node));
	  cgraph_flatten (node);
	  timevar_push (TV_INTEGRATION);
	  todo |= optimize_inline_calls (current_function_decl);
	  timevar_pop (TV_INTEGRATION);
	}
      /* We iterate incremental inlining to get trivial cases of indirect
	 inlining.  */
      while (iterations < PARAM_VALUE (PARAM_EARLY_INLINER_MAX_ITERATIONS)
	     && cgraph_decide_inlining_incrementally (node,
						      iterations
						      ? INLINE_SIZE_NORECURSIVE
						      : INLINE_SIZE))
	{
	  timevar_push (TV_INTEGRATION);
	  todo |= optimize_inline_calls (current_function_decl);
	  iterations++;
	  timevar_pop (TV_INTEGRATION);
	}
      if (dump_file)
	fprintf (dump_file, "Iterations: %i\n", iterations);
    }

  cfun->always_inline_functions_inlined = true;

  return todo;
}

struct gimple_opt_pass pass_early_inline =
{
 {
  GIMPLE_PASS,
  "einline",	 			/* name */
  NULL,					/* gate */
  cgraph_early_inlining,		/* execute */
  NULL,					/* sub */
  NULL,					/* next */
  0,					/* static_pass_number */
  TV_INLINE_HEURISTICS,			/* tv_id */
  0,	                                /* properties_required */
  0,					/* properties_provided */
  0,					/* properties_destroyed */
  0,					/* todo_flags_start */
  TODO_dump_func    			/* todo_flags_finish */
 }
};


/* See if statement might disappear after inlining.
   0 - means not eliminated
   1 - half of statements goes away
   2 - for sure it is eliminated.
   We are not terribly sophisticated, basically looking for simple abstraction
   penalty wrappers.  */

static int
eliminated_by_inlining_prob (gimple stmt)
{
  enum gimple_code code = gimple_code (stmt);
  switch (code)
    {
      case GIMPLE_RETURN:
        return 2;
      case GIMPLE_ASSIGN:
	if (gimple_num_ops (stmt) != 2)
	  return 0;

	/* Casts of parameters, loads from parameters passed by reference
	   and stores to return value or parameters are often free after
	   inlining dua to SRA and further combining.
	   Assume that half of statements goes away.  */
	if (gimple_assign_rhs_code (stmt) == CONVERT_EXPR
	    || gimple_assign_rhs_code (stmt) == NOP_EXPR
	    || gimple_assign_rhs_code (stmt) == VIEW_CONVERT_EXPR
	    || gimple_assign_rhs_class (stmt) == GIMPLE_SINGLE_RHS)
	  {
	    tree rhs = gimple_assign_rhs1 (stmt);
            tree lhs = gimple_assign_lhs (stmt);
	    tree inner_rhs = rhs;
	    tree inner_lhs = lhs;
	    bool rhs_free = false;
	    bool lhs_free = false;

 	    while (handled_component_p (inner_lhs)
		   || TREE_CODE (inner_lhs) == MEM_REF)
	      inner_lhs = TREE_OPERAND (inner_lhs, 0);
 	    while (handled_component_p (inner_rhs)
	           || TREE_CODE (inner_rhs) == ADDR_EXPR
		   || TREE_CODE (inner_rhs) == MEM_REF)
	      inner_rhs = TREE_OPERAND (inner_rhs, 0);


	    if (TREE_CODE (inner_rhs) == PARM_DECL
	        || (TREE_CODE (inner_rhs) == SSA_NAME
		    && SSA_NAME_IS_DEFAULT_DEF (inner_rhs)
		    && TREE_CODE (SSA_NAME_VAR (inner_rhs)) == PARM_DECL))
	      rhs_free = true;
	    if (rhs_free && is_gimple_reg (lhs))
	      lhs_free = true;
	    if (((TREE_CODE (inner_lhs) == PARM_DECL
	          || (TREE_CODE (inner_lhs) == SSA_NAME
		      && SSA_NAME_IS_DEFAULT_DEF (inner_lhs)
		      && TREE_CODE (SSA_NAME_VAR (inner_lhs)) == PARM_DECL))
		 && inner_lhs != lhs)
	        || TREE_CODE (inner_lhs) == RESULT_DECL
	        || (TREE_CODE (inner_lhs) == SSA_NAME
		    && TREE_CODE (SSA_NAME_VAR (inner_lhs)) == RESULT_DECL))
	      lhs_free = true;
	    if (lhs_free
		&& (is_gimple_reg (rhs) || is_gimple_min_invariant (rhs)))
	      rhs_free = true;
	    if (lhs_free && rhs_free)
	      return 1;
	  }
	return 0;
      default:
	return 0;
    }
}

/* Compute function body size parameters for NODE.  */

static void
estimate_function_body_sizes (struct cgraph_node *node)
{
  gcov_type time = 0;
  gcov_type time_inlining_benefit = 0;
  /* Estimate static overhead for function prologue/epilogue and alignment. */
  int size = 2;
  /* Benefits are scaled by probability of elimination that is in range
     <0,2>.  */
  int size_inlining_benefit = 2 * 2;
  basic_block bb;
  gimple_stmt_iterator bsi;
  struct function *my_function = DECL_STRUCT_FUNCTION (node->decl);
  tree arg;
  int freq;
  tree funtype = TREE_TYPE (node->decl);

  if (dump_file)
    fprintf (dump_file, "Analyzing function body size: %s\n",
	     cgraph_node_name (node));

  gcc_assert (my_function && my_function->cfg);
  FOR_EACH_BB_FN (bb, my_function)
    {
      freq = compute_call_stmt_bb_frequency (node->decl, bb);
      for (bsi = gsi_start_bb (bb); !gsi_end_p (bsi); gsi_next (&bsi))
	{
	  gimple stmt = gsi_stmt (bsi);
	  int this_size = estimate_num_insns (stmt, &eni_size_weights);
	  int this_time = estimate_num_insns (stmt, &eni_time_weights);
	  int prob;

	  if (dump_file && (dump_flags & TDF_DETAILS))
	    {
	      fprintf (dump_file, "  freq:%6i size:%3i time:%3i ",
		       freq, this_size, this_time);
	      print_gimple_stmt (dump_file, stmt, 0, 0);
	    }
	  this_time *= freq;
	  time += this_time;
	  size += this_size;
	  prob = eliminated_by_inlining_prob (stmt);
	  if (prob == 1 && dump_file && (dump_flags & TDF_DETAILS))
	    fprintf (dump_file, "    50%% will be eliminated by inlining\n");
	  if (prob == 2 && dump_file && (dump_flags & TDF_DETAILS))
	    fprintf (dump_file, "    will eliminated by inlining\n");
	  size_inlining_benefit += this_size * prob;
	  time_inlining_benefit += this_time * prob;
	  gcc_assert (time >= 0);
	  gcc_assert (size >= 0);
	}
    }
  time = (time + CGRAPH_FREQ_BASE / 2) / CGRAPH_FREQ_BASE;
  time_inlining_benefit = ((time_inlining_benefit + CGRAPH_FREQ_BASE)
  			   / (CGRAPH_FREQ_BASE * 2));
  size_inlining_benefit = (size_inlining_benefit + 1) / 2;
  if (dump_file)
    fprintf (dump_file, "Overall function body time: %i-%i size: %i-%i\n",
	     (int)time, (int)time_inlining_benefit,
	     size, size_inlining_benefit);
  time_inlining_benefit += eni_time_weights.call_cost;
  size_inlining_benefit += eni_size_weights.call_cost;
  if (!VOID_TYPE_P (TREE_TYPE (funtype)))
    {
      int cost = estimate_move_cost (TREE_TYPE (funtype));
      time_inlining_benefit += cost;
      size_inlining_benefit += cost;
    }
  for (arg = DECL_ARGUMENTS (node->decl); arg; arg = DECL_CHAIN (arg))
    if (!VOID_TYPE_P (TREE_TYPE (arg)))
      {
        int cost = estimate_move_cost (TREE_TYPE (arg));
        time_inlining_benefit += cost;
        size_inlining_benefit += cost;
      }
  if (time_inlining_benefit > MAX_TIME)
    time_inlining_benefit = MAX_TIME;
  if (time > MAX_TIME)
    time = MAX_TIME;
  inline_summary (node)->self_time = time;
  inline_summary (node)->self_size = size;
  if (dump_file)
    fprintf (dump_file, "With function call overhead time: %i-%i size: %i-%i\n",
	     (int)time, (int)time_inlining_benefit,
	     size, size_inlining_benefit);
  inline_summary (node)->time_inlining_benefit = time_inlining_benefit;
  inline_summary (node)->size_inlining_benefit = size_inlining_benefit;
}

/* Compute parameters of functions used by inliner.  */
void
compute_inline_parameters (struct cgraph_node *node)
{
  HOST_WIDE_INT self_stack_size;

  gcc_assert (!node->global.inlined_to);

  /* Estimate the stack size for the function if we're optimizing.  */
  self_stack_size = optimize ? estimated_stack_frame_size (node) : 0;
  inline_summary (node)->estimated_self_stack_size = self_stack_size;
  node->global.estimated_stack_size = self_stack_size;
  node->global.stack_frame_offset = 0;

  /* Can this function be inlined at all?  */
  node->local.inlinable = tree_inlinable_function_p (node->decl);
  if (!node->local.inlinable)
    node->local.disregard_inline_limits = 0;

  /* Inlinable functions always can change signature.  */
  if (node->local.inlinable)
    node->local.can_change_signature = true;
  else
    {
      struct cgraph_edge *e;

      /* Functions calling builtin_apply can not change signature.  */
      for (e = node->callees; e; e = e->next_callee)
	if (DECL_BUILT_IN (e->callee->decl)
	    && DECL_BUILT_IN_CLASS (e->callee->decl) == BUILT_IN_NORMAL
	    && DECL_FUNCTION_CODE (e->callee->decl) == BUILT_IN_APPLY_ARGS)
	  break;
      node->local.can_change_signature = !e;
    }
  estimate_function_body_sizes (node);
  /* Inlining characteristics are maintained by the cgraph_mark_inline.  */
  node->global.time = inline_summary (node)->self_time;
  node->global.size = inline_summary (node)->self_size;
}


/* Compute parameters of functions used by inliner using
   current_function_decl.  */
static unsigned int
compute_inline_parameters_for_current (void)
{
  compute_inline_parameters (cgraph_node (current_function_decl));
  return 0;
}

struct gimple_opt_pass pass_inline_parameters =
{
 {
  GIMPLE_PASS,
  "inline_param",			/* name */
  NULL,					/* gate */
  compute_inline_parameters_for_current,/* execute */
  NULL,					/* sub */
  NULL,					/* next */
  0,					/* static_pass_number */
  TV_INLINE_HEURISTICS,			/* tv_id */
  0,	                                /* properties_required */
  0,					/* properties_provided */
  0,					/* properties_destroyed */
  0,					/* todo_flags_start */
  0					/* todo_flags_finish */
 }
};

/* This function performs intraprocedural analysis in NODE that is required to
   inline indirect calls.  */
static void
inline_indirect_intraprocedural_analysis (struct cgraph_node *node)
{
  ipa_analyze_node (node);
  if (dump_file && (dump_flags & TDF_DETAILS))
    {
      ipa_print_node_params (dump_file, node);
      ipa_print_node_jump_functions (dump_file, node);
    }
}

/* Note function body size.  */
static void
analyze_function (struct cgraph_node *node)
{
  push_cfun (DECL_STRUCT_FUNCTION (node->decl));
  current_function_decl = node->decl;

  compute_inline_parameters (node);
  /* FIXME: We should remove the optimize check after we ensure we never run
     IPA passes when not optimizing.  */
  if (flag_indirect_inlining && optimize)
    inline_indirect_intraprocedural_analysis (node);

  current_function_decl = NULL;
  pop_cfun ();
}

/* Called when new function is inserted to callgraph late.  */
static void
add_new_function (struct cgraph_node *node, void *data ATTRIBUTE_UNUSED)
{
  analyze_function (node);
}

/* Note function body size.  */
static void
inline_generate_summary (void)
{
  struct cgraph_node *node;

  function_insertion_hook_holder =
      cgraph_add_function_insertion_hook (&add_new_function, NULL);

  if (flag_indirect_inlining)
    {
      ipa_register_cgraph_hooks ();
      ipa_check_create_node_params ();
      ipa_check_create_edge_args ();
    }

  for (node = cgraph_nodes; node; node = node->next)
    if (node->analyzed)
      analyze_function (node);

  return;
}

/* Apply inline plan to function.  */
static unsigned int
inline_transform (struct cgraph_node *node)
{
  unsigned int todo = 0;
  struct cgraph_edge *e;
  bool inline_p = false;

  /* FIXME: Currently the pass manager is adding inline transform more than once to some
     clones.  This needs revisiting after WPA cleanups.  */
  if (cfun->after_inlining)
    return 0;

  /* We might need the body of this function so that we can expand
     it inline somewhere else.  */
  if (cgraph_preserve_function_body_p (node->decl))
    save_inline_function_body (node);

  for (e = node->callees; e; e = e->next_callee)
    {
      cgraph_redirect_edge_call_stmt_to_callee (e);
      if (!e->inline_failed || warn_inline)
        inline_p = true;
    }

  if (inline_p)
    {
      timevar_push (TV_INTEGRATION);
      todo = optimize_inline_calls (current_function_decl);
      timevar_pop (TV_INTEGRATION);
    }
  cfun->always_inline_functions_inlined = true;
  cfun->after_inlining = true;
  return todo | execute_fixup_cfg ();
}

/* Read inline summary.  Jump functions are shared among ipa-cp
   and inliner, so when ipa-cp is active, we don't need to write them
   twice.  */

static void
inline_read_summary (void)
{
  if (flag_indirect_inlining)
    {
      ipa_register_cgraph_hooks ();
      if (!flag_ipa_cp)
        ipa_prop_read_jump_functions ();
    }
  function_insertion_hook_holder =
      cgraph_add_function_insertion_hook (&add_new_function, NULL);
}

/* Write inline summary for node in SET.
   Jump functions are shared among ipa-cp and inliner, so when ipa-cp is
   active, we don't need to write them twice.  */

static void
inline_write_summary (cgraph_node_set set,
		      varpool_node_set vset ATTRIBUTE_UNUSED)
{
  if (flag_indirect_inlining && !flag_ipa_cp)
    ipa_prop_write_jump_functions (set);
}

/* When to run IPA inlining.  Inlining of always-inline functions
   happens during early inlining.  */

static bool
gate_cgraph_decide_inlining (void)
{
  /* ???  We'd like to skip this if not optimizing or not inlining as
     all always-inline functions have been processed by early
     inlining already.  But this at least breaks EH with C++ as
     we need to unconditionally run fixup_cfg even at -O0.
     So leave it on unconditionally for now.  */
  return 1;
}

struct ipa_opt_pass_d pass_ipa_inline =
{
 {
  IPA_PASS,
  "inline",				/* name */
  gate_cgraph_decide_inlining,		/* gate */
  cgraph_decide_inlining,		/* execute */
  NULL,					/* sub */
  NULL,					/* next */
  0,					/* static_pass_number */
  TV_INLINE_HEURISTICS,			/* tv_id */
  0,	                                /* properties_required */
  0,					/* properties_provided */
  0,					/* properties_destroyed */
  TODO_remove_functions,		/* todo_flags_finish */
  TODO_dump_cgraph | TODO_dump_func
  | TODO_remove_functions | TODO_ggc_collect	/* todo_flags_finish */
 },
 inline_generate_summary,		/* generate_summary */
 inline_write_summary,			/* write_summary */
 inline_read_summary,			/* read_summary */
 NULL,					/* write_optimization_summary */
 NULL,					/* read_optimization_summary */
 NULL,					/* stmt_fixup */
 0,					/* TODOs */
 inline_transform,			/* function_transform */
 NULL,					/* variable_transform */
};


#include "gt-ipa-inline.h"

/* Compilation switch flag type definitions for GCC.
   Copyright (C) 1987-2016 Free Software Foundation, Inc.

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

#ifndef GCC_FLAG_TYPES_H
#define GCC_FLAG_TYPES_H

enum debug_info_type
{
  NO_DEBUG,	    /* Write no debug info.  */
  DBX_DEBUG,	    /* Write BSD .stabs for DBX (using dbxout.c).  */
  SDB_DEBUG,	    /* Write COFF for (old) SDB (using sdbout.c).  */
  DWARF2_DEBUG,	    /* Write Dwarf v2 debug info (using dwarf2out.c).  */
  XCOFF_DEBUG,	    /* Write IBM/Xcoff debug info (using dbxout.c).  */
  VMS_DEBUG,        /* Write VMS debug info (using vmsdbgout.c).  */
  VMS_AND_DWARF2_DEBUG /* Write VMS debug info (using vmsdbgout.c).
                          and DWARF v2 debug info (using dwarf2out.c).  */
};

enum debug_info_levels
{
  DINFO_LEVEL_NONE,	/* Write no debugging info.  */
  DINFO_LEVEL_TERSE,	/* Write minimal info to support tracebacks only.  */
  DINFO_LEVEL_NORMAL,	/* Write info for all declarations (and line table).  */
  DINFO_LEVEL_VERBOSE	/* Write normal info plus #define/#undef info.  */
};

/* A major contribution to object and executable size is debug
   information size.  A major contribution to debug information
   size is struct descriptions replicated in several object files.
   The following function determines whether or not debug information
   should be generated for a given struct.  The indirect parameter
   indicates that the struct is being handled indirectly, via
   a pointer.  See opts.c for the implementation. */

enum debug_info_usage
{
  DINFO_USAGE_DFN,	/* A struct definition. */
  DINFO_USAGE_DIR_USE,	/* A direct use, such as the type of a variable. */
  DINFO_USAGE_IND_USE,	/* An indirect use, such as through a pointer. */
  DINFO_USAGE_NUM_ENUMS	/* The number of enumerators. */
};

/* A major contribution to object and executable size is debug
   information size.  A major contribution to debug information size
   is struct descriptions replicated in several object files. The
   following flags attempt to reduce this information.  The basic
   idea is to not emit struct debugging information in the current
   compilation unit when that information will be generated by
   another compilation unit.

   Debug information for a struct defined in the current source
   file should be generated in the object file.  Likewise the
   debug information for a struct defined in a header should be
   generated in the object file of the corresponding source file.
   Both of these case are handled when the base name of the file of
   the struct definition matches the base name of the source file
   of the current compilation unit.  This matching emits minimal
   struct debugging information.

   The base file name matching rule above will fail to emit debug
   information for structs defined in system headers.  So a second
   category of files includes system headers in addition to files
   with matching bases.

   The remaining types of files are library headers and application
   headers.  We cannot currently distinguish these two types.  */

enum debug_struct_file
{
  DINFO_STRUCT_FILE_NONE,   /* Debug no structs. */
  DINFO_STRUCT_FILE_BASE,   /* Debug structs defined in files with the
                               same base name as the compilation unit. */
  DINFO_STRUCT_FILE_SYS,    /* Also debug structs defined in system
                               header files.  */
  DINFO_STRUCT_FILE_ANY     /* Debug structs defined in all files. */
};

/* Balance between GNAT encodings and standard DWARF to emit.  */

enum dwarf_gnat_encodings
{
  DWARF_GNAT_ENCODINGS_ALL = 0,	    /* Emit all GNAT encodings, then emit as
				       much standard DWARF as possible so it
				       does not conflict with GNAT
				       encodings.  */
  DWARF_GNAT_ENCODINGS_GDB = 1,	    /* Emit as much standard DWARF as possible
				       as long as GDB handles them.  Emit GNAT
				       encodings for the rest.  */
  DWARF_GNAT_ENCODINGS_MINIMAL = 2  /* Emit all the standard DWARF we can.
				       Emit GNAT encodings for the rest.  */
};

/* Enumerate Objective-c instance variable visibility settings. */

enum ivar_visibility
{
  IVAR_VISIBILITY_PRIVATE,
  IVAR_VISIBILITY_PROTECTED,
  IVAR_VISIBILITY_PUBLIC,
  IVAR_VISIBILITY_PACKAGE
};

/* The stack reuse level.  */
enum stack_reuse_level
{
  SR_NONE,
  SR_NAMED_VARS,
  SR_ALL
};

/* The algorithm used for basic block reordering.  */
enum reorder_blocks_algorithm
{
  REORDER_BLOCKS_ALGORITHM_SIMPLE,
  REORDER_BLOCKS_ALGORITHM_STC
};

/* The algorithm used for the integrated register allocator (IRA).  */
enum ira_algorithm
{
  IRA_ALGORITHM_CB,
  IRA_ALGORITHM_PRIORITY
};

/* The regions used for the integrated register allocator (IRA).  */
enum ira_region
{
  IRA_REGION_ONE,
  IRA_REGION_ALL,
  IRA_REGION_MIXED,
  /* This value means that there were no options -fira-region on the
     command line and that we should choose a value depending on the
     used -O option.  */
  IRA_REGION_AUTODETECT
};

/* The options for excess precision.  */
enum excess_precision
{
  EXCESS_PRECISION_DEFAULT,
  EXCESS_PRECISION_FAST,
  EXCESS_PRECISION_STANDARD
};

/* Type of stack check.  */
enum stack_check_type
{
  /* Do not check the stack.  */
  NO_STACK_CHECK = 0,

  /* Check the stack generically, i.e. assume no specific support
     from the target configuration files.  */
  GENERIC_STACK_CHECK,

  /* Check the stack and rely on the target configuration files to
     check the static frame of functions, i.e. use the generic
     mechanism only for dynamic stack allocations.  */
  STATIC_BUILTIN_STACK_CHECK,

  /* Check the stack and entirely rely on the target configuration
     files, i.e. do not use the generic mechanism at all.  */
  FULL_BUILTIN_STACK_CHECK
};

/* Floating-point contraction mode.  */
enum fp_contract_mode {
  FP_CONTRACT_OFF = 0,
  FP_CONTRACT_ON = 1,
  FP_CONTRACT_FAST = 2
};

/* Scalar storage order kind.  */
enum scalar_storage_order_kind {
  SSO_NATIVE = 0,
  SSO_BIG_ENDIAN,
  SSO_LITTLE_ENDIAN
};

/* Vectorizer cost-model.  */
enum vect_cost_model {
  VECT_COST_MODEL_UNLIMITED = 0,
  VECT_COST_MODEL_CHEAP = 1,
  VECT_COST_MODEL_DYNAMIC = 2,
  VECT_COST_MODEL_DEFAULT = 3
};

/* Different instrumentation modes.  */
enum sanitize_code {
  /* AddressSanitizer.  */
  SANITIZE_ADDRESS = 1UL << 0,
  SANITIZE_USER_ADDRESS = 1UL << 1,
  SANITIZE_KERNEL_ADDRESS = 1UL << 2,
  /* ThreadSanitizer.  */
  SANITIZE_THREAD = 1UL << 3,
  /* LeakSanitizer.  */
  SANITIZE_LEAK = 1UL << 4,
  /* UndefinedBehaviorSanitizer.  */
  SANITIZE_SHIFT_BASE = 1UL << 5,
  SANITIZE_SHIFT_EXPONENT = 1UL << 6,
  SANITIZE_DIVIDE = 1UL << 7,
  SANITIZE_UNREACHABLE = 1UL << 8,
  SANITIZE_VLA = 1UL << 9,
  SANITIZE_NULL = 1UL << 10,
  SANITIZE_RETURN = 1UL << 11,
  SANITIZE_SI_OVERFLOW = 1UL << 12,
  SANITIZE_BOOL = 1UL << 13,
  SANITIZE_ENUM = 1UL << 14,
  SANITIZE_FLOAT_DIVIDE = 1UL << 15,
  SANITIZE_FLOAT_CAST = 1UL << 16,
  SANITIZE_BOUNDS = 1UL << 17,
  SANITIZE_ALIGNMENT = 1UL << 18,
  SANITIZE_NONNULL_ATTRIBUTE = 1UL << 19,
  SANITIZE_RETURNS_NONNULL_ATTRIBUTE = 1UL << 20,
  SANITIZE_OBJECT_SIZE = 1UL << 21,
  SANITIZE_VPTR = 1UL << 22,
  SANITIZE_BOUNDS_STRICT = 1UL << 23,
  SANITIZE_SHIFT = SANITIZE_SHIFT_BASE | SANITIZE_SHIFT_EXPONENT,
  SANITIZE_UNDEFINED = SANITIZE_SHIFT | SANITIZE_DIVIDE | SANITIZE_UNREACHABLE
		       | SANITIZE_VLA | SANITIZE_NULL | SANITIZE_RETURN
		       | SANITIZE_SI_OVERFLOW | SANITIZE_BOOL | SANITIZE_ENUM
		       | SANITIZE_BOUNDS | SANITIZE_ALIGNMENT
		       | SANITIZE_NONNULL_ATTRIBUTE
		       | SANITIZE_RETURNS_NONNULL_ATTRIBUTE
		       | SANITIZE_OBJECT_SIZE | SANITIZE_VPTR,
  SANITIZE_NONDEFAULT = SANITIZE_FLOAT_DIVIDE | SANITIZE_FLOAT_CAST
			| SANITIZE_BOUNDS_STRICT
};

/* flag_vtable_verify initialization levels. */
enum vtv_priority {
  VTV_NO_PRIORITY       = 0,  /* i.E. Do NOT do vtable verification. */
  VTV_STANDARD_PRIORITY = 1,
  VTV_PREINIT_PRIORITY  = 2
};

/* flag_lto_partition initialization values.  */
enum lto_partition_model {
  LTO_PARTITION_NONE = 0,
  LTO_PARTITION_ONE = 1,
  LTO_PARTITION_BALANCED = 2,
  LTO_PARTITION_1TO1 = 3,
  LTO_PARTITION_MAX = 4
};

/* flag_lto_linker_output initialization values.  */
enum lto_linker_output {
  LTO_LINKER_OUTPUT_UNKNOWN,
  LTO_LINKER_OUTPUT_REL,
  LTO_LINKER_OUTPUT_DYN,
  LTO_LINKER_OUTPUT_PIE,
  LTO_LINKER_OUTPUT_EXEC
};

/* gfortran -finit-real= values.  */

enum gfc_init_local_real
{
  GFC_INIT_REAL_OFF = 0,
  GFC_INIT_REAL_ZERO,
  GFC_INIT_REAL_NAN,
  GFC_INIT_REAL_SNAN,
  GFC_INIT_REAL_INF,
  GFC_INIT_REAL_NEG_INF
};

/* gfortran -fcoarray= values.  */

enum gfc_fcoarray
{
  GFC_FCOARRAY_NONE = 0,
  GFC_FCOARRAY_SINGLE,
  GFC_FCOARRAY_LIB
};


/* gfortran -fconvert= values; used for unformatted I/O.
   Keep in sync with GFC_CONVERT_* in gcc/fortran/libgfortran.h.   */
enum gfc_convert
{
  GFC_FLAG_CONVERT_NATIVE = 0,
  GFC_FLAG_CONVERT_SWAP,
  GFC_FLAG_CONVERT_BIG,
  GFC_FLAG_CONVERT_LITTLE
};

enum offload_alias
{
  OFFLOAD_ALIAS_ALL,
  OFFLOAD_ALIAS_POINTER,
  OFFLOAD_ALIAS_NONE
};


#endif /* ! GCC_FLAG_TYPES_H */

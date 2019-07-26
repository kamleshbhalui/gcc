/* Definitions of target machine for GNU compiler,
   for IBM RS/6000 POWER running AIX.
   Copyright (C) 2000-2019 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

/* Yes!  We are AIX!  */
#define DEFAULT_ABI ABI_AIX
#undef  TARGET_AIX
#define TARGET_AIX 1

/* System headers are not C++-aware.  */
#define SYSTEM_IMPLICIT_EXTERN_C 1

/* Linux64.h wants to redefine TARGET_AIX based on -m64, but it can't be used
   in the #if conditional in options-default.h, so provide another macro.  */
#undef  TARGET_AIX_OS
#define TARGET_AIX_OS 1

/* AIX always has a TOC.  */
#define TARGET_HAS_TOC 1
#define FIXED_R2 1

/* AIX allows r13 to be used in 32-bit mode.  */
#define FIXED_R13 0

/* 32-bit and 64-bit AIX stack boundary is 128.  */
#undef  STACK_BOUNDARY
#define STACK_BOUNDARY 128

/* Offset within stack frame to start allocating local variables at.
   If FRAME_GROWS_DOWNWARD, this is the offset to the END of the
   first local allocated.  Otherwise, it is the offset to the BEGINNING
   of the first local allocated.

   On the RS/6000, the frame pointer is the same as the stack pointer,
   except for dynamic allocations.  So we start after the fixed area and
   outgoing parameter area.

   If the function uses dynamic stack space (CALLS_ALLOCA is set), that
   space needs to be aligned to STACK_BOUNDARY, i.e. the sum of the
   sizes of the fixed area and the parameter area must be a multiple of
   STACK_BOUNDARY.  */

#undef RS6000_STARTING_FRAME_OFFSET
#define RS6000_STARTING_FRAME_OFFSET					\
  (cfun->calls_alloca							\
   ? RS6000_ALIGN (crtl->outgoing_args_size + RS6000_SAVE_AREA, 16)	\
   : (RS6000_ALIGN (crtl->outgoing_args_size, 16) + RS6000_SAVE_AREA))

/* Offset from the stack pointer register to an item dynamically
   allocated on the stack, e.g., by `alloca'.

   The default value for this macro is `STACK_POINTER_OFFSET' plus the
   length of the outgoing arguments.  The default is correct for most
   machines.  See `function.c' for details.

   This value must be a multiple of STACK_BOUNDARY (hard coded in
   `emit-rtl.c').  */
#undef STACK_DYNAMIC_OFFSET
#define STACK_DYNAMIC_OFFSET(FUNDECL)					\
   RS6000_ALIGN (crtl->outgoing_args_size.to_constant ()		\
		 + STACK_POINTER_OFFSET, 16)

#undef  TARGET_IEEEQUAD
#define TARGET_IEEEQUAD 0

#undef  TARGET_IEEEQUAD_DEFAULT
#define TARGET_IEEEQUAD_DEFAULT 0

/* The AIX linker will discard static constructors in object files before
   collect has a chance to see them, so scan the object files directly.  */
#define COLLECT_EXPORT_LIST

/* On AIX, initialisers specified with -binitfini are called in breadth-first
   order.
   e.g. if a.out depends on lib1.so, the init function for a.out is called before
   the init function for lib1.so.

   To ensure global C++ constructors in linked libraries are run before global
   C++ constructors from the current module, there is additional symbol scanning
   logic in collect2.

   The global initialiser/finaliser functions are named __GLOBAL_AIXI_{libname}
   and __GLOBAL_AIXD_{libname} and are exported from each shared library.

   collect2 will detect these symbols when they exist in shared libraries that
   the current program is being linked against.  All such initiliser functions
   will be called prior to the constructors of the current program, and
   finaliser functions called after destructors.

   Reference counting generated by collect2 will ensure that constructors are
   only invoked once in the case of multiple dependencies on a library.

   -binitfini is still used in parallel to this solution.
   This handles the case where a library is loaded through dlopen(), and also
   handles the option -blazy.
*/
#define COLLECT_SHARED_INIT_FUNC(STREAM, FUNC) \
	  fprintf ((STREAM), "void %s() {\n\t%s();\n}\n", aix_shared_initname, (FUNC))
#define COLLECT_SHARED_FINI_FUNC(STREAM, FUNC) \
	  fprintf ((STREAM), "void %s() {\n\t%s();\n}\n", aix_shared_fininame, (FUNC))

#if HAVE_AS_REF
/* Issue assembly directives that create a reference to the given DWARF table
   identifier label from the current function section.  This is defined to
   ensure we drag frame tables associated with needed function bodies in
   a link with garbage collection activated.  */
#define ASM_OUTPUT_DWARF_TABLE_REF rs6000_aix_asm_output_dwarf_table_ref
#endif

/* This is the only version of nm that collect2 can work with.  */
#define REAL_NM_FILE_NAME "/usr/ucb/nm"

#define USER_LABEL_PREFIX  ""

/* Don't turn -B into -L if the argument specifies a relative file name.  */
#define RELATIVE_PREFIX_NOT_LINKDIR

/* Because of the above, we must have gcc search itself to find libgcc.a.  */
#define LINK_LIBGCC_SPECIAL_1

/* Names to predefine in the preprocessor for this target machine.  */
#define TARGET_OS_AIX_CPP_BUILTINS()		\
  do						\
    {						\
      builtin_define ("_IBMR2");		\
      builtin_define ("_POWER");		\
      builtin_define ("__unix__");              \
      builtin_define ("_AIX");			\
      builtin_define ("_AIX32");		\
      builtin_define ("_AIX41");		\
      builtin_define ("_LONG_LONG");		\
      if (TARGET_LONG_DOUBLE_128)		\
        builtin_define ("__LONGDOUBLE128");	\
      builtin_assert ("system=unix");		\
      builtin_assert ("system=aix");		\
      if (TARGET_64BIT)				\
	{					\
	  builtin_define ("__PPC__");		\
	  builtin_define ("__PPC64__");		\
	  builtin_define ("__powerpc__");	\
	  builtin_define ("__powerpc64__");	\
	  builtin_assert ("cpu=powerpc64");	\
	  builtin_assert ("machine=powerpc64");	\
	}					\
      else					\
	{					\
	  builtin_define ("__PPC__");		\
	  builtin_define ("__powerpc__");	\
	  builtin_assert ("cpu=powerpc");	\
	  builtin_assert ("machine=powerpc");	\
	}					\
    }						\
  while (0)

/* Define appropriate architecture macros for preprocessor depending on
   target switches.  */

#define CPP_SPEC "%{posix: -D_POSIX_SOURCE}\
   %{ansi: -D_ANSI_C_SOURCE}"

#define CC1_SPEC "%(cc1_cpu)"

#undef ASM_DEFAULT_SPEC
#define ASM_DEFAULT_SPEC ""

/* Tell the assembler to assume that all undefined names are external.

   Don't do this until the fixed IBM assembler is more generally available.
   When this becomes permanently defined, the ASM_OUTPUT_EXTERNAL,
   ASM_OUTPUT_EXTERNAL_LIBCALL, and RS6000_OUTPUT_BASENAME macros will no
   longer be needed.  Also, the extern declaration of mcount in
   rs6000_xcoff_file_start will no longer be needed.  */

/* #define ASM_SPEC "-u %(asm_cpu)" */

/* Default location of syscalls.exp under AIX */
#define LINK_SYSCALLS_SPEC "-bI:%R/lib/syscalls.exp"

/* Default location of libg.exp under AIX */
#define LINK_LIBG_SPEC "-bexport:%R/usr/lib/libg.exp"

/* Define the options for the binder: Start text at 512, align all segments
   to 512 bytes, and warn if there is text relocation.

   The -bhalt:4 option supposedly changes the level at which ld will abort,
   but it also suppresses warnings about multiply defined symbols and is
   used by the AIX cc command.  So we use it here.

   -bnodelcsect undoes a poor choice of default relating to multiply-defined
   csects.  See AIX documentation for more information about this.

   -bM:SRE tells the linker that the output file is Shared REusable.  Note
   that to actually build a shared library you will also need to specify an
   export list with the -Wl,-bE option.  */

#define LINK_SPEC "-T512 -H512 %{!r:-btextro} -bhalt:4 -bnodelcsect\
%{static:-bnso %(link_syscalls) } \
%{!shared:%{g*: %(link_libg) }} %{shared:-bM:SRE}"

/* Profiled library versions are used by linking with special directories.  */
#define LIB_SPEC "%{pg:-L%R/lib/profiled -L%R/usr/lib/profiled}\
%{p:-L%R/lib/profiled -L%R/usr/lib/profiled} %{!shared:%{g*:-lg}} -lc"

/* Static linking with shared libstdc++ requires libsupc++ as well.  */
#define LIBSTDCXX_STATIC "supc++"

/* This now supports a natural alignment mode.  */
/* AIX word-aligns FP doubles but doubleword-aligns 64-bit ints.  */
#define ADJUST_FIELD_ALIGN(FIELD, TYPE, COMPUTED) \
  ((TARGET_ALIGN_NATURAL == 0						\
    && TYPE_MODE (strip_array_types (TYPE)) == DFmode)			\
   ? MIN ((COMPUTED), 32)						\
   : (COMPUTED))

/* AIX increases natural record alignment to doubleword if the first
   field is an FP double while the FP fields remain word aligned.  */
#define ROUND_TYPE_ALIGN(STRUCT, COMPUTED, SPECIFIED)			\
  ((TREE_CODE (STRUCT) == RECORD_TYPE					\
    || TREE_CODE (STRUCT) == UNION_TYPE					\
    || TREE_CODE (STRUCT) == QUAL_UNION_TYPE)				\
   && TARGET_ALIGN_NATURAL == 0						\
   ? rs6000_special_round_type_align (STRUCT, COMPUTED, SPECIFIED)	\
   : MAX ((COMPUTED), (SPECIFIED)))

/* The AIX ABI isn't explicit on whether aggregates smaller than a
   word/doubleword should be padded upward or downward.  One could
   reasonably assume that they follow the normal rules for structure
   layout treating the parameter area as any other block of memory,
   then map the reg param area to registers, i.e., pad upward, which
   is the way IBM Compilers for AIX behave.
   Setting both of the following defines results in this behavior.  */
#define AGGREGATE_PADDING_FIXED 1
#define AGGREGATES_PAD_UPWARD_ALWAYS 1

/* Specify padding for the last element of a block move between
   registers and memory.  FIRST is nonzero if this is the only
   element.  */
#define BLOCK_REG_PADDING(MODE, TYPE, FIRST) \
  (!(FIRST) ? PAD_UPWARD : targetm.calls.function_arg_padding (MODE, TYPE))

/* Indicate that jump tables go in the text section.  */

#define JUMP_TABLES_IN_TEXT_SECTION 1

/* Define any extra SPECS that the compiler needs to generate.  */
#undef  SUBTARGET_EXTRA_SPECS
#define SUBTARGET_EXTRA_SPECS						\
  { "link_syscalls",            LINK_SYSCALLS_SPEC },			\
  { "link_libg",                LINK_LIBG_SPEC }

#define PROFILE_HOOK(LABEL)   output_profile_hook (LABEL)

/* No version of AIX fully supports AltiVec or 64-bit instructions in
   32-bit mode.  */
#define OS_MISSING_POWERPC64 1
#define OS_MISSING_ALTIVEC 1

/* WINT_TYPE */
#define WINT_TYPE "int"

/* Static stack checking is supported by means of probes.  */
#define STACK_CHECK_STATIC_BUILTIN 1

/* Use standard DWARF numbering for DWARF debugging information.  */
#define RS6000_USE_DWARF_NUMBERING

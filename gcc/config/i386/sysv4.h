/* Target definitions for GNU compiler for Intel 80386 running System V.4
   Copyright (C) 1991 Free Software Foundation, Inc.

   Written by Ron Guilmette (rfg@ncd.com).

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */

#include "i386/i386.h"	/* Base i386 target machine definitions */
#include "i386/att.h"	/* Use the i386 AT&T assembler syntax */
#include "svr4.h"	/* Definitions common to all SVR4 targets */

#undef TARGET_VERSION
#define TARGET_VERSION fprintf (stderr, " (i386 System V Release 4)");

/* The svr4 ABI for the i386 says that records and unions are returned
   in memory.  */

#undef RETURN_IN_MEMORY
#define RETURN_IN_MEMORY(TYPE) \
  (TYPE_MODE (TYPE) == BLKmode)

/* Define which macros to predefine.  __svr4__ is our extension.  */
/* This used to define X86, but james@bigtex.cactus.org says that
   is supposed to be defined optionally by user programs--not by default.  */
#define CPP_PREDEFINES \
  "-Di386 -Dunix -D__svr4__ -Asystem(unix) -Asystem(svr4) -Acpu(i386) -Amachine(i386)"

/* This is how to output assembly code to define a `float' constant.
   We always have to use a .long pseudo-op to do this because the native
   SVR4 ELF assembler is buggy and it generates incorrect values when we
   try to use the .float pseudo-op instead.  */

#undef ASM_OUTPUT_FLOAT
#define ASM_OUTPUT_FLOAT(FILE,VALUE)					\
do { long value;							\
     REAL_VALUE_TO_TARGET_SINGLE ((VALUE), value);			\
     if (sizeof (int) == sizeof (long))					\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value);		\
     else								\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value);		\
   } while (0)

/* This is how to output assembly code to define a `double' constant.
   We always have to use a pair of .long pseudo-ops to do this because
   the native SVR4 ELF assembler is buggy and it generates incorrect
   values when we try to use the the .double pseudo-op instead.  */

#undef ASM_OUTPUT_DOUBLE
#define ASM_OUTPUT_DOUBLE(FILE,VALUE)					\
do { long value[2];							\
     REAL_VALUE_TO_TARGET_DOUBLE ((VALUE), value);			\
     if (sizeof (int) == sizeof (long))					\
       {								\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value[0]);		\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value[1]);		\
       }								\
     else								\
       {								\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value[0]);		\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value[1]);		\
       }								\
   } while (0)


#undef ASM_OUTPUT_LONG_DOUBLE
#define ASM_OUTPUT_LONG_DOUBLE(FILE,VALUE)				\
do { long value[3];							\
     REAL_VALUE_TO_TARGET_LONG_DOUBLE ((VALUE), value);			\
     if (sizeof (int) == sizeof (long))					\
       {								\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value[0]);		\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value[1]);		\
         fprintf((FILE), "%s\t0x%x\n", ASM_LONG, value[2]);		\
       }								\
     else								\
       {								\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value[0]);		\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value[1]);		\
         fprintf((FILE), "%s\t0x%lx\n", ASM_LONG, value[2]);		\
       }								\
   } while (0)

/* Output at beginning of assembler file.  */
/* The .file command should always begin the output.  */

#undef ASM_FILE_START
#define ASM_FILE_START(FILE)						\
  do {									\
	output_file_directive (FILE, main_input_filename);		\
	fprintf (FILE, "\t.version\t\"01.01\"\n");			\
  } while (0)

/* Define the register numbers to be used in Dwarf debugging information.
   The SVR4 reference port C compiler uses the following register numbers
   in its Dwarf output code:

	0 for %eax (gnu regno = 0)
	1 for %ecx (gnu regno = 2)
	2 for %edx (gnu regno = 1)
	3 for %ebx (gnu regno = 3)
	4 for %esp (gnu regno = 7)
	5 for %ebp (gnu regno = 6)
	6 for %esi (gnu regno = 4)
	7 for %edi (gnu regno = 5)

   The following three DWARF register numbers are never generated by
   the SVR4 C compiler or by the GNU compilers, but SDB on x86/svr4
   believes these numbers have these meanings.

	8  for %eip    (no gnu equivalent)
	9  for %eflags (no gnu equivalent)
	10 for %trapno (no gnu equivalent)

   It is not at all clear how we should number the FP stack registers
   for the x86 architecture.  If the version of SDB on x86/svr4 were
   a bit less brain dead with respect to floating-point then we would
   have a precedent to follow with respect to DWARF register numbers
   for x86 FP registers, but the SDB on x86/svr4 is so completely
   broken with respect to FP registers that it is hardly worth thinking
   of it as something to strive for compatibility with.

   The verison of x86/svr4 SDB I have at the moment does (partially)
   seem to believe that DWARF register number 11 is associated with
   the x86 register %st(0), but that's about all.  Higher DWARF
   register numbers don't seem to be associated with anything in
   particular, and even for DWARF regno 11, SDB only seems to under-
   stand that it should say that a variable lives in %st(0) (when
   asked via an `=' command) if we said it was in DWARF regno 11,
   but SDB still prints garbage when asked for the value of the
   variable in question (via a `/' command).

   (Also note that the labels SDB prints for various FP stack regs
   when doing an `x' command are all wrong.)

   Note that these problems generally don't affect the native SVR4
   C compiler because it doesn't allow the use of -O with -g and
   because when it is *not* optimizing, it allocates a memory
   location for each floating-point variable, and the memory
   location is what gets described in the DWARF AT_location
   attribute for the variable in question.

   Regardless of the severe mental illness of the x86/svr4 SDB, we
   do something sensible here and we use the following DWARF
   register numbers.  Note that these are all stack-top-relative
   numbers.

	11 for %st(0) (gnu regno = 8)
	12 for %st(1) (gnu regno = 9)
	13 for %st(2) (gnu regno = 10)
	14 for %st(3) (gnu regno = 11)
	15 for %st(4) (gnu regno = 12)
	16 for %st(5) (gnu regno = 13)
	17 for %st(6) (gnu regno = 14)
	18 for %st(7) (gnu regno = 15)
*/

#undef DBX_REGISTER_NUMBER
#define DBX_REGISTER_NUMBER(n) \
((n) == 0 ? 0 \
 : (n) == 1 ? 2 \
 : (n) == 2 ? 1 \
 : (n) == 3 ? 3 \
 : (n) == 4 ? 6 \
 : (n) == 5 ? 7 \
 : (n) == 6 ? 5 \
 : (n) == 7 ? 4 \
 : ((n) >= FIRST_STACK_REG && (n) <= LAST_STACK_REG) ? (n)+3 \
 : (-1))

/* The routine used to output sequences of byte values.  We use a special
   version of this for most svr4 targets because doing so makes the
   generated assembly code more compact (and thus faster to assemble)
   as well as more readable.  Note that if we find subparts of the
   character sequence which end with NUL (and which are shorter than
   STRING_LIMIT) we output those using ASM_OUTPUT_LIMITED_STRING.  */

#undef ASM_OUTPUT_ASCII
#define ASM_OUTPUT_ASCII(FILE, STR, LENGTH)				\
  do									\
    {									\
      register unsigned char *_ascii_bytes = (unsigned char *) (STR);	\
      register unsigned char *limit = _ascii_bytes + (LENGTH);		\
      register unsigned bytes_in_chunk = 0;				\
      for (; _ascii_bytes < limit; _ascii_bytes++)			\
        {								\
	  register unsigned char *p;					\
	  if (bytes_in_chunk >= 64)					\
	    {								\
	      fputc ('\n', (FILE));					\
	      bytes_in_chunk = 0;					\
	    }								\
	  for (p = _ascii_bytes; p < limit && *p != '\0'; p++)		\
	    continue;							\
	  if (p < limit && (p - _ascii_bytes) <= STRING_LIMIT)		\
	    {								\
	      if (bytes_in_chunk > 0)					\
		{							\
		  fputc ('\n', (FILE));					\
		  bytes_in_chunk = 0;					\
		}							\
	      ASM_OUTPUT_LIMITED_STRING ((FILE), _ascii_bytes);		\
	      _ascii_bytes = p;						\
	    }								\
	  else								\
	    {								\
	      if (bytes_in_chunk == 0)					\
		fprintf ((FILE), "\t.byte\t");				\
	      else							\
		fputc (',', (FILE));					\
	      fprintf ((FILE), "0x%02x", *_ascii_bytes);		\
	      bytes_in_chunk += 5;					\
	    }								\
	}								\
      if (bytes_in_chunk > 0)						\
        fprintf ((FILE), "\n");						\
    }									\
  while (0)

/* This is how to output an element of a case-vector that is relative.
   This is only used for PIC code.  See comments by the `casesi' insn in
   i386.md for an explanation of the expression this outputs. */

#undef ASM_OUTPUT_ADDR_DIFF_ELT
#define ASM_OUTPUT_ADDR_DIFF_ELT(FILE, VALUE, REL) \
  fprintf (FILE, "\t.long _GLOBAL_OFFSET_TABLE_+[.-%s%d]\n", LPREFIX, VALUE)

/* Indicate that jump tables go in the text section.  This is
   necessary when compiling PIC code.  */

#define JUMP_TABLES_IN_TEXT_SECTION

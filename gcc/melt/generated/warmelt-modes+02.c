/* GCC MELT GENERATED FILE warmelt-modes+02.c - DO NOT EDIT */
/* secondary MELT generated C file of rank #2 */
#include "melt-run.h"


/* used hash from melt-run.h when compiling this file: */
MELT_EXTERN const char meltrun_used_md5_melt_f2[] =
  MELT_RUN_HASHMD5 /* from melt-run.h */ ;


/**** warmelt-modes+02.c declarations ****/
/**** MELT GENERATED DECLARATIONS for warmelt-modes ** DO NOT EDIT ; see gcc-melt.org ****/

/****++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
***
    Copyright (C) 2011 - 2013 Free Software Foundation, Inc.
    Contributed by Basile Starynkevitch <basile@starynkevitch.net>

    This file is part of GCC.

    GCC is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3, or (at your option)
    any later version.

    GCC is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GCC; see the file COPYING3.  If not see
    <http://www.gnu.org/licenses/>.
***
----------------------------------------------------------------****/


/** ordinary MELT module meltbuild-sources/warmelt-modes**/
#define MELT_HAS_INITIAL_ENVIRONMENT 1	/*usualmodule */


/**** no MELT module variables ****/

/*** 4 MELT called hook declarations ***/

/*declare MELT called hook #0 HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER **/
MELT_EXTERN melt_ptr_t
melthook_HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER (melt_ptr_t melthookdata,
						 melt_ptr_t meltinp0_PREVENV,
						 const char
						 *meltinp1_MODULNAME);

/*declare MELT called hook #1 HOOK_POLL_INPUTS **/
MELT_EXTERN void melthook_HOOK_POLL_INPUTS (melt_ptr_t melthookdata,
					    long meltinp0_DELAYMS);

/*declare MELT called hook #2 HOOK_SYMBOL_IMPORTER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_SYMBOL_IMPORTER (melt_ptr_t melthookdata,
						      const char
						      *meltinp0_SYMNAMESTR,
						      const char
						      *meltinp1_MODULENAMESTR,
						      melt_ptr_t
						      meltinp2_PARENV);

/*declare MELT called hook #3 HOOK_VALUE_EXPORTER **/
MELT_EXTERN void melthook_HOOK_VALUE_EXPORTER (melt_ptr_t melthookdata,
					       melt_ptr_t meltinp0_SYM,
					       melt_ptr_t meltinp1_VAL,
					       melt_ptr_t meltinp2_CONTENV);

/*** end of 4 MELT called hook declarations ***/

/*** no extra MELT c-headers ***/




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_1_WARMELTmiMODES_INSTALL_MELT_MODE (meltclosure_ptr_t meltclosp_,
					     melt_ptr_t meltfirstargp_,
					     const melt_argdescr_cell_t
					     meltxargdescr_[],
					     union meltparam_un *meltxargtab_,
					     const melt_argdescr_cell_t
					     meltxresdescr_[],
					     union meltparam_un
					     *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_2_WARMELTmiMODES_RUNFILE_DOCMD (meltclosure_ptr_t meltclosp_,
					 melt_ptr_t meltfirstargp_,
					 const melt_argdescr_cell_t
					 meltxargdescr_[],
					 union meltparam_un *meltxargtab_,
					 const melt_argdescr_cell_t
					 meltxresdescr_[],
					 union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_3_WARMELTmiMODES_RUNDEBUG_DOCMD (meltclosure_ptr_t meltclosp_,
					  melt_ptr_t meltfirstargp_,
					  const melt_argdescr_cell_t
					  meltxargdescr_[],
					  union meltparam_un *meltxargtab_,
					  const melt_argdescr_cell_t
					  meltxresdescr_[],
					  union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_4_WARMELTmiMODES_EVAL_DOCMD (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_5_WARMELTmiMODES_EVALFILE_DOCMD (meltclosure_ptr_t meltclosp_,
					  melt_ptr_t meltfirstargp_,
					  const melt_argdescr_cell_t
					  meltxargdescr_[],
					  union meltparam_un *meltxargtab_,
					  const melt_argdescr_cell_t
					  meltxresdescr_[],
					  union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_6_WARMELTmiMODES_REPL_PROCESSOR (meltclosure_ptr_t meltclosp_,
					  melt_ptr_t meltfirstargp_,
					  const melt_argdescr_cell_t
					  meltxargdescr_[],
					  union meltparam_un *meltxargtab_,
					  const melt_argdescr_cell_t
					  meltxresdescr_[],
					  union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_7_WARMELTmiMODES_REPL_DOCMD (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_8_WARMELTmiMODES_LAMBDA_cl1 (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_9_WARMELTmiMODES_LAMBDA_cl2 (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_10_WARMELTmiMODES_LAMBDA_cl3 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_11_WARMELTmiMODES_LAMBDA_cl4 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_12_WARMELTmiMODES_LAMBDA_cl5 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_13_WARMELTmiMODES_INCREMENT_MKDOC_COUNTER (meltclosure_ptr_t
						    meltclosp_,
						    melt_ptr_t meltfirstargp_,
						    const melt_argdescr_cell_t
						    meltxargdescr_[],
						    union meltparam_un
						    *meltxargtab_,
						    const melt_argdescr_cell_t
						    meltxresdescr_[],
						    union meltparam_un
						    *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_14_WARMELTmiMODES_MAKEDOC_SCANINPUT (meltclosure_ptr_t meltclosp_,
					      melt_ptr_t meltfirstargp_,
					      const melt_argdescr_cell_t
					      meltxargdescr_[],
					      union meltparam_un
					      *meltxargtab_,
					      const melt_argdescr_cell_t
					      meltxresdescr_[],
					      union meltparam_un
					      *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_15_WARMELTmiMODES_LAMBDA_cl6 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_16_WARMELTmiMODES_LAMBDA_cl7 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_17_WARMELTmiMODES_LAMBDA_cl8 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_18_WARMELTmiMODES_LAMBDA_cl9 (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_19_WARMELTmiMODES_MAKEDOC_OUTDEFLOC (meltclosure_ptr_t meltclosp_,
					      melt_ptr_t meltfirstargp_,
					      const melt_argdescr_cell_t
					      meltxargdescr_[],
					      union meltparam_un
					      *meltxargtab_,
					      const melt_argdescr_cell_t
					      meltxresdescr_[],
					      union meltparam_un
					      *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_20_WARMELTmiMODES_MAKEDOC_OUTFORMALS (meltclosure_ptr_t meltclosp_,
					       melt_ptr_t meltfirstargp_,
					       const melt_argdescr_cell_t
					       meltxargdescr_[],
					       union meltparam_un
					       *meltxargtab_,
					       const melt_argdescr_cell_t
					       meltxresdescr_[],
					       union meltparam_un
					       *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_21_WARMELTmiMODES_MAKEDOC_OUTDOC (meltclosure_ptr_t meltclosp_,
					   melt_ptr_t meltfirstargp_,
					   const melt_argdescr_cell_t
					   meltxargdescr_[],
					   union meltparam_un *meltxargtab_,
					   const melt_argdescr_cell_t
					   meltxresdescr_[],
					   union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_22_WARMELTmiMODES_MAKEDOC_OUTCLASSDEF (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_23_WARMELTmiMODES_MAKEDOC_GENMACRO (meltclosure_ptr_t meltclosp_,
					     melt_ptr_t meltfirstargp_,
					     const melt_argdescr_cell_t
					     meltxargdescr_[],
					     union meltparam_un *meltxargtab_,
					     const melt_argdescr_cell_t
					     meltxresdescr_[],
					     union meltparam_un
					     *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_24_WARMELTmiMODES_LAMBDA_cl10 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_25_WARMELTmiMODES_MAKEDOC_GENPATMACRO (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_26_WARMELTmiMODES_LAMBDA_cl11 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_27_WARMELTmiMODES_MAKEDOC_GENCLASS (meltclosure_ptr_t meltclosp_,
					     melt_ptr_t meltfirstargp_,
					     const melt_argdescr_cell_t
					     meltxargdescr_[],
					     union meltparam_un *meltxargtab_,
					     const melt_argdescr_cell_t
					     meltxresdescr_[],
					     union meltparam_un
					     *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_28_WARMELTmiMODES_LAMBDA_cl12 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_29_WARMELTmiMODES_LAMBDA_cl13 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_30_WARMELTmiMODES_LAMBDA_cl14 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_31_WARMELTmiMODES_LAMBDA_cl15 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_32_WARMELTmiMODES_MAKEDOC_OUTPRIMITIVEDEF (meltclosure_ptr_t
						    meltclosp_,
						    melt_ptr_t meltfirstargp_,
						    const melt_argdescr_cell_t
						    meltxargdescr_[],
						    union meltparam_un
						    *meltxargtab_,
						    const melt_argdescr_cell_t
						    meltxresdescr_[],
						    union meltparam_un
						    *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_33_WARMELTmiMODES_MAKEDOC_GENPRIMITIVE (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un
						 *meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un
						 *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_34_WARMELTmiMODES_LAMBDA_cl16 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_35_WARMELTmiMODES_MAKEDOC_OUTFUNCTIONDEF (meltclosure_ptr_t
						   meltclosp_,
						   melt_ptr_t meltfirstargp_,
						   const melt_argdescr_cell_t
						   meltxargdescr_[],
						   union meltparam_un
						   *meltxargtab_,
						   const melt_argdescr_cell_t
						   meltxresdescr_[],
						   union meltparam_un
						   *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_36_WARMELTmiMODES_MAKEDOC_GENFUNCTION (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_37_WARMELTmiMODES_LAMBDA_cl17 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_38_WARMELTmiMODES_MAKEDOC_GENCITERATOR (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un
						 *meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un
						 *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_39_WARMELTmiMODES_LAMBDA_cl18 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_40_WARMELTmiMODES_MAKEDOC_GENCMATCHER (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_41_WARMELTmiMODES_LAMBDA_cl19 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_42_WARMELTmiMODES_MAKEDOC_GENHOOK (meltclosure_ptr_t meltclosp_,
					    melt_ptr_t meltfirstargp_,
					    const melt_argdescr_cell_t
					    meltxargdescr_[],
					    union meltparam_un *meltxargtab_,
					    const melt_argdescr_cell_t
					    meltxresdescr_[],
					    union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_43_WARMELTmiMODES_LAMBDA_cl20 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_44_WARMELTmiMODES_MAKEDOC_GENOUTPUT (meltclosure_ptr_t meltclosp_,
					      melt_ptr_t meltfirstargp_,
					      const melt_argdescr_cell_t
					      meltxargdescr_[],
					      union meltparam_un
					      *meltxargtab_,
					      const melt_argdescr_cell_t
					      meltxresdescr_[],
					      union meltparam_un
					      *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_45_WARMELTmiMODES_MAKEDOC_DOCMD (meltclosure_ptr_t meltclosp_,
					  melt_ptr_t meltfirstargp_,
					  const melt_argdescr_cell_t
					  meltxargdescr_[],
					  union meltparam_un *meltxargtab_,
					  const melt_argdescr_cell_t
					  meltxresdescr_[],
					  union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_46_WARMELTmiMODES_LAMBDA_cl21 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_47_WARMELTmiMODES_SHOWVAR_DOCMD (meltclosure_ptr_t meltclosp_,
					  melt_ptr_t meltfirstargp_,
					  const melt_argdescr_cell_t
					  meltxargdescr_[],
					  union meltparam_un *meltxargtab_,
					  const melt_argdescr_cell_t
					  meltxresdescr_[],
					  union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_48_WARMELTmiMODES_HELP_DOCMD (meltclosure_ptr_t meltclosp_,
				       melt_ptr_t meltfirstargp_,
				       const melt_argdescr_cell_t
				       meltxargdescr_[],
				       union meltparam_un *meltxargtab_,
				       const melt_argdescr_cell_t
				       meltxresdescr_[],
				       union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_49_WARMELTmiMODES_NOP_DOCMD (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY (meltclosure_ptr_t
							meltclosp_,
							melt_ptr_t
							meltfirstargp_,
							const
							melt_argdescr_cell_t
							meltxargdescr_[],
							union meltparam_un
							*meltxargtab_,
							const
							melt_argdescr_cell_t
							meltxresdescr_[],
							union meltparam_un
							*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING (meltclosure_ptr_t
							     meltclosp_,
							     melt_ptr_t
							     meltfirstargp_,
							     const
							     melt_argdescr_cell_t
							     meltxargdescr_[],
							     union
							     meltparam_un
							     *meltxargtab_,
							     const
							     melt_argdescr_cell_t
							     meltxresdescr_[],
							     union
							     meltparam_un
							     *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM (meltclosure_ptr_t
							  meltclosp_,
							  melt_ptr_t
							  meltfirstargp_,
							  const
							  melt_argdescr_cell_t
							  meltxargdescr_[],
							  union meltparam_un
							  *meltxargtab_,
							  const
							  melt_argdescr_cell_t
							  meltxresdescr_[],
							  union meltparam_un
							  *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR (meltclosure_ptr_t
							    meltclosp_,
							    melt_ptr_t
							    meltfirstargp_,
							    const
							    melt_argdescr_cell_t
							    meltxargdescr_[],
							    union meltparam_un
							    *meltxargtab_,
							    const
							    melt_argdescr_cell_t
							    meltxresdescr_[],
							    union meltparam_un
							    *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN (meltclosure_ptr_t
							   meltclosp_,
							   melt_ptr_t
							   meltfirstargp_,
							   const
							   melt_argdescr_cell_t
							   meltxargdescr_[],
							   union meltparam_un
							   *meltxargtab_,
							   const
							   melt_argdescr_cell_t
							   meltxresdescr_[],
							   union meltparam_un
							   *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un
						 *meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un
						 *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE (meltclosure_ptr_t
							 meltclosp_,
							 melt_ptr_t
							 meltfirstargp_,
							 const
							 melt_argdescr_cell_t
							 meltxargdescr_[],
							 union meltparam_un
							 *meltxargtab_,
							 const
							 melt_argdescr_cell_t
							 meltxresdescr_[],
							 union meltparam_un
							 *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD (meltclosure_ptr_t
						    meltclosp_,
						    melt_ptr_t meltfirstargp_,
						    const melt_argdescr_cell_t
						    meltxargdescr_[],
						    union meltparam_un
						    *meltxargtab_,
						    const melt_argdescr_cell_t
						    meltxresdescr_[],
						    union meltparam_un
						    *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un
						 *meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un
						 *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD (meltclosure_ptr_t
						   meltclosp_,
						   melt_ptr_t meltfirstargp_,
						   const melt_argdescr_cell_t
						   meltxargdescr_[],
						   union meltparam_un
						   *meltxargtab_,
						   const melt_argdescr_cell_t
						   meltxresdescr_[],
						   union meltparam_un
						   *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD (meltclosure_ptr_t
						     meltclosp_,
						     melt_ptr_t
						     meltfirstargp_,
						     const
						     melt_argdescr_cell_t
						     meltxargdescr_[],
						     union meltparam_un
						     *meltxargtab_,
						     const
						     melt_argdescr_cell_t
						     meltxresdescr_[],
						     union meltparam_un
						     *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_69_WARMELTmiMODES_TRANSLATEINIT_DOCMD (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un
						*meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un
						*meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_70_WARMELTmiMODES_LAMBDA_cl22 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_71_WARMELTmiMODES_TRANSLATEINIT_FLAVORED (meltclosure_ptr_t
						   meltclosp_,
						   melt_ptr_t meltfirstargp_,
						   const melt_argdescr_cell_t
						   meltxargdescr_[],
						   union meltparam_un
						   *meltxargtab_,
						   const melt_argdescr_cell_t
						   meltxresdescr_[],
						   union meltparam_un
						   *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_72_WARMELTmiMODES_LAMBDA_cl23 (meltclosure_ptr_t meltclosp_,
					melt_ptr_t meltfirstargp_,
					const melt_argdescr_cell_t
					meltxargdescr_[],
					union meltparam_un *meltxargtab_,
					const melt_argdescr_cell_t
					meltxresdescr_[],
					union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_73_WARMELTmiMODES_TRANSLATEINITMODULE_DOCMD (meltclosure_ptr_t
						      meltclosp_,
						      melt_ptr_t
						      meltfirstargp_,
						      const
						      melt_argdescr_cell_t
						      meltxargdescr_[],
						      union meltparam_un
						      *meltxargtab_,
						      const
						      melt_argdescr_cell_t
						      meltxresdescr_[],
						      union meltparam_un
						      *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_74_WARMELTmiMODES_TRANSLATEINITMODULEQUICKLYBUILT_DOCMD
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_75_WARMELTmiMODES_TRANSLATEINITMODULEDEBUGNOLINE_DOCMD
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_76_WARMELTmiMODES_TRANSLATEINITMODULEOPTIMIZED_DOCMD
(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[],
union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[],
union meltparam_un *meltxrestab_);



MELT_EXTERN void *melt_start_this_module (void *);
struct melt_initial_frame_st;

/*declare opaque initial frame: */
typedef struct melt_initial_frame_st meltinitial_frame_t;


/* define different names when debugging or not */
#if MELT_HAVE_DEBUG
MELT_EXTERN const char meltmodule_WARMELTmiMODES__melt_have_debug_enabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMODES__melt_have_debug_enabled
#else /*!MELT_HAVE_DEBUG */
MELT_EXTERN const char meltmodule_WARMELTmiMODES__melt_have_debug_disabled[];
#define melt_have_debug_string meltmodule_WARMELTmiMODES__melt_have_debug_disabled
#endif /*!MELT_HAVE_DEBUG */



void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_0 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_1 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_2 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_3 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_4 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_5 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_6 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_7 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_8 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_9 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_10 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__initialmeltchunk_11 (meltinitial_frame_t *, char *);
void MELT_MODULE_VISIBILITY
meltmod__WARMELTmiMODES__forward_or_mark_module_start_frame (struct
							     melt_callframe_st
							     *fp,
							     int marking);



/**** warmelt-modes+02.c implementations ****/




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_49_WARMELTmiMODES_NOP_DOCMD (meltclosure_ptr_t meltclosp_,
				      melt_ptr_t meltfirstargp_,
				      const melt_argdescr_cell_t
				      meltxargdescr_[],
				      union meltparam_un *meltxargtab_,
				      const melt_argdescr_cell_t
				      meltxresdescr_[],
				      union meltparam_un *meltxrestab_)
{
  long current_blocklevel_signals_meltrout_49_WARMELTmiMODES_NOP_DOCMD_melt =
    melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_49_WARMELTmiMODES_NOP_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 6
    melt_ptr_t mcfr_varptr[6];
#define MELTFRAM_NBVARNUM 2
    long mcfr_varnum[2];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_49_WARMELTmiMODES_NOP_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct meltframe_meltrout_49_WARMELTmiMODES_NOP_DOCMD_st *)
	meltfirstargp_;
      /* use arguments meltrout_49_WARMELTmiMODES_NOP_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 6; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_49_WARMELTmiMODES_NOP_DOCMD nbval 6*/
  meltfram__.mcfr_nbvar = 6 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("NOP_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:1851:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1852:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:1852:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:1852:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 1852;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "in nop_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1852:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:1852:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:1853:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_1_TRUE */ meltfrout->tabval[1]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:1853:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:1851:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.RETURN___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:1851:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.RETURN___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("NOP_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_49_WARMELTmiMODES_NOP_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_49_WARMELTmiMODES_NOP_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 30
    melt_ptr_t mcfr_varptr[30];
#define MELTFRAM_NBVARNUM 28
    long mcfr_varnum[28];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC_st
	 *) meltfirstargp_;
      /* use arguments meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 30; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC nbval 30*/
  meltfram__.mcfr_nbvar = 30 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:1868:/ getarg");
 /*_.CTYGTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTARG__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTARG__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1869:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:1869:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:1869:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 1869;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_enum_objmagic start outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1869:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:1869:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:1870:/ quasiblock");


 /*_#CUROBJMAGIC__L3*/ meltfnum[1] = 20000;;
    /*^compute */
 /*_#COUNTOBJMAGIC__L4*/ meltfnum[0] = 0;;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1875:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L5*/ meltfnum[4] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:1875:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L5*/ meltfnum[4])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1875:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctygtytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1875) ? (1875) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1875:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L5*/ meltfnum[4] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1876:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L6*/ meltfnum[4] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:1876:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L6*/ meltfnum[4])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1876:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1876) ? (1876) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1876:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L6*/ meltfnum[4] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1877:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L7*/ meltfnum[4] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:1877:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L7*/ meltfnum[4])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1877:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1877) ? (1877) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1877:/ clear");
	     /*clear *//*_#IS_STRBUF__L7*/ meltfnum[4] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1878:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1881:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1882:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1883:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_1 */ meltfrout->
					      tabval[1]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1887:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1888:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("MELTOBMAG__FIRST /* first valid object magic */ ="));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1889:/ locexp");
      meltgc_add_strbuf_dec ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			     ( /*_#CUROBJMAGIC__L3*/ meltfnum[1]));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1890:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   (","));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1891:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1892:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1893:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* value descriptor object magic */"));
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VIX__L8*/ meltfnum[4] = 0;
	   ( /*_#VIX__L8*/ meltfnum[4] >= 0)
	   && ( /*_#VIX__L8*/ meltfnum[4] < meltcit1__EACHTUP_ln);
	/*_#VIX__L8*/ meltfnum[4]++)
	{
	  /*_.CURVALDESC__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VIX__L8*/ meltfnum[4]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:1897:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L9*/ meltfnum[8] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:1897:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[8])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:1897:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 1897;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_enum_objmagic curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V14*/ meltfptr[12];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " vix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#VIX__L8*/ meltfnum[4];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:1897:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L10*/ meltfnum[9] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:1897:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[8] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:1899:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L11*/ meltfnum[9] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURVALDESC__V14*/ meltfptr[12]),
				   (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])));;
	    MELT_LOCATION ("warmelt-modes.melt:1899:/ cond");
	    /*cond */ if ( /*_#IS_A__L11*/ meltfnum[9])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V18*/ meltfptr[14] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:1899:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curvaldesc"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(1899) ? (1899) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V17*/ meltfptr[15] =
	      /*_._IFELSE___V18*/ meltfptr[14];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1899:/ clear");
	      /*clear *//*_#IS_A__L11*/ meltfnum[9] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V17*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1900:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1901:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*valdesc #"));
	  }
	  ;
  /*_#plI__L12*/ meltfnum[8] =
	    ((1) + ( /*_#VIX__L8*/ meltfnum[4]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1902:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L12*/ meltfnum[8]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1903:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:1904:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V19*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V19*/ meltfptr[14] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1904:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V19*/ meltfptr[14])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1905:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1906:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:1907:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1907:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1908:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" /*valmagic*/ ="));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1909:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#CUROBJMAGIC__L3*/ meltfnum[1]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1910:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (","));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1911:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
  /*_#plI__L13*/ meltfnum[9] =
	    ((1) + ( /*_#CUROBJMAGIC__L3*/ meltfnum[1]));;
	  MELT_LOCATION ("warmelt-modes.melt:1912:/ compute");
	  /*_#CUROBJMAGIC__L3*/ meltfnum[1] = /*_#SETQ___L14*/ meltfnum[13] =
	    /*_#plI__L13*/ meltfnum[9];;
  /*_#plI__L15*/ meltfnum[14] =
	    (( /*_#COUNTOBJMAGIC__L4*/ meltfnum[0]) + (1));;
	  MELT_LOCATION ("warmelt-modes.melt:1913:/ compute");
	  /*_#COUNTOBJMAGIC__L4*/ meltfnum[0] =
	    /*_#SETQ___L16*/ meltfnum[15] = /*_#plI__L15*/ meltfnum[14];;
	  if ( /*_#VIX__L8*/ meltfnum[4] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:1894:/ clear");
	    /*clear *//*_.CURVALDESC__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#VIX__L8*/ meltfnum[4] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#plI__L12*/ meltfnum[8] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V19*/ meltfptr[14] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = 0;
      /*^clear */
	    /*clear *//*_#plI__L13*/ meltfnum[9] = 0;
      /*^clear */
	    /*clear *//*_#SETQ___L14*/ meltfnum[13] = 0;
      /*^clear */
	    /*clear *//*_#plI__L15*/ meltfnum[14] = 0;
      /*^clear */
	    /*clear *//*_#SETQ___L16*/ meltfnum[15] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1916:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1917:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* ctype gty object magic */"));
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L17*/ meltfnum[16] = 0;
	   ( /*_#TIX__L17*/ meltfnum[16] >= 0)
	   && ( /*_#TIX__L17*/ meltfnum[16] < meltcit2__EACHTUP_ln);
	/*_#TIX__L17*/ meltfnum[16]++)
	{
	  /*_.CURCTYP__V21*/ meltfptr[20] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L17*/ meltfnum[16]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:1921:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L18*/ meltfnum[17] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:1921:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L18*/ meltfnum[17])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L19*/ meltfnum[18] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:1921:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L19*/ meltfnum[18];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 1921;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_enum_objmagic curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V21*/ meltfptr[20];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " tix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#TIX__L17*/ meltfnum[16];
		    /*_.MELT_DEBUG_FUN__V23*/ meltfptr[22] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V22*/ meltfptr[21] =
		    /*_.MELT_DEBUG_FUN__V23*/ meltfptr[22];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:1921:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L19*/ meltfnum[18] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V23*/ meltfptr[22] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V22*/ meltfptr[21] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:1921:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L18*/ meltfnum[17] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V22*/ meltfptr[21] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:1923:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L20*/ meltfnum[18] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V21*/ meltfptr[20]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[4])));;
	    MELT_LOCATION ("warmelt-modes.melt:1923:/ cond");
	    /*cond */ if ( /*_#IS_A__L20*/ meltfnum[18])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V25*/ meltfptr[21] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:1923:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctyp"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(1923) ? (1923) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V25*/ meltfptr[21] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V24*/ meltfptr[22] =
	      /*_._IFELSE___V25*/ meltfptr[21];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1923:/ clear");
	      /*clear *//*_#IS_A__L20*/ meltfnum[18] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V25*/ meltfptr[21] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V24*/ meltfptr[22] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1924:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1925:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L21*/ meltfnum[17] =
	    ((1) + ( /*_#TIX__L17*/ meltfnum[16]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1926:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L21*/ meltfnum[17]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1927:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:1928:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V21*/
					       meltfptr[20]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V21*/ meltfptr[20]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V26*/ meltfptr[21] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V26*/ meltfptr[21] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1928:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V26*/ meltfptr[21])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1929:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1930:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:1931:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V21*/
					       meltfptr[20]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V21*/ meltfptr[20]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.CTYPG_BOXEDMAGIC__V27*/ meltfptr[26] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDMAGIC__V27*/ meltfptr[26] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1931:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDMAGIC__V27*/ meltfptr[26])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1932:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" /*boxedmagic*/ ="));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1933:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#CUROBJMAGIC__L3*/ meltfnum[1]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1934:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (","));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1935:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:1936:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V21*/
					       meltfptr[20]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V21*/ meltfptr[20]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V28*/ meltfptr[27] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V28*/ meltfptr[27] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1936:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V28*/
						   meltfptr[27])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1937:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" /*mapmagic*/ ="));
	  }
	  ;
  /*_#plI__L22*/ meltfnum[18] =
	    (( /*_#CUROBJMAGIC__L3*/ meltfnum[1]) + (1));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1938:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L22*/ meltfnum[18]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:1939:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (","));
	  }
	  ;
  /*_#plI__L23*/ meltfnum[22] =
	    (( /*_#CUROBJMAGIC__L3*/ meltfnum[1]) + (2));;
	  MELT_LOCATION ("warmelt-modes.melt:1940:/ compute");
	  /*_#CUROBJMAGIC__L3*/ meltfnum[1] = /*_#SETQ___L24*/ meltfnum[23] =
	    /*_#plI__L23*/ meltfnum[22];;
  /*_#plI__L25*/ meltfnum[24] =
	    (( /*_#COUNTOBJMAGIC__L4*/ meltfnum[0]) + (1));;
	  MELT_LOCATION ("warmelt-modes.melt:1941:/ compute");
	  /*_#COUNTOBJMAGIC__L4*/ meltfnum[0] =
	    /*_#SETQ___L26*/ meltfnum[25] = /*_#plI__L25*/ meltfnum[24];;
	  if ( /*_#TIX__L17*/ meltfnum[16] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:1918:/ clear");
	    /*clear *//*_.CURCTYP__V21*/ meltfptr[20] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L17*/ meltfnum[16] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V24*/ meltfptr[22] = 0;
      /*^clear */
	    /*clear *//*_#plI__L21*/ meltfnum[17] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V26*/ meltfptr[21] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDMAGIC__V27*/ meltfptr[26] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V28*/ meltfptr[27] = 0;
      /*^clear */
	    /*clear *//*_#plI__L22*/ meltfnum[18] = 0;
      /*^clear */
	    /*clear *//*_#plI__L23*/ meltfnum[22] = 0;
      /*^clear */
	    /*clear *//*_#SETQ___L24*/ meltfnum[23] = 0;
      /*^clear */
	    /*clear *//*_#plI__L25*/ meltfnum[24] = 0;
      /*^clear */
	    /*clear *//*_#SETQ___L26*/ meltfnum[25] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1943:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L27*/ meltfnum[26] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:1943:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L27*/ meltfnum[26])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L28*/ meltfnum[27] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:1943:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L28*/ meltfnum[27];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 1943;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_objmagic end outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V30*/ meltfptr[29] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V29*/ meltfptr[28] =
	      /*_.MELT_DEBUG_FUN__V30*/ meltfptr[29];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1943:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L28*/ meltfnum[27] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V30*/ meltfptr[29] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V29*/ meltfptr[28] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:1943:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L27*/ meltfnum[26] = 0;
      /*^clear */
	     /*clear *//*_._IF___V29*/ meltfptr[28] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1944:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1945:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   (" MELTOBMAG__LAST }; /* end generated enum meltobmag_en */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1946:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1947:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("#define MELT_COUNT_GENERATED_OBJMAGIC "));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1948:/ locexp");
      meltgc_add_strbuf_dec ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			     ( /*_#COUNTOBJMAGIC__L4*/ meltfnum[0]));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1949:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1950:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/*** end from generate_runtypesupport_enum_objmagic **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1951:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1952:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:1870:/ clear");
	   /*clear *//*_#CUROBJMAGIC__L3*/ meltfnum[1] = 0;
    /*^clear */
	   /*clear *//*_#COUNTOBJMAGIC__L4*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_50_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY (meltclosure_ptr_t
							meltclosp_,
							melt_ptr_t
							meltfirstargp_,
							const
							melt_argdescr_cell_t
							meltxargdescr_[],
							union meltparam_un *
							meltxargtab_,
							const
							melt_argdescr_cell_t
							meltxresdescr_[],
							union meltparam_un *
							meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 69
    melt_ptr_t mcfr_varptr[69];
#define MELTFRAM_NBVARNUM 30
    long mcfr_varnum[30];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY_st
	 *) meltfirstargp_;
      /* use arguments meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 69; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY nbval 69*/
  meltfram__.mcfr_nbvar = 69 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_GTY", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:1958:/ getarg");
 /*_.CTYGTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTARG__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTARG__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1959:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:1959:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:1959:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 1959;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_gty start outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:1959:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:1959:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1960:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:1960:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1960:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctygtytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1960) ? (1960) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1960:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1961:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:1961:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1961:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1961) ? (1961) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1961:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:1962:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:1962:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:1962:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (1962) ? (1962) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:1962:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1963:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1965:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1966:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** generated by generate_runtypesupport_gty **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1968:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1969:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_1 */ meltfrout->
					      tabval[1]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1976:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1977:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_2 */ meltfrout->
					      tabval[2]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1984:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1985:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_3 */ meltfrout->
					      tabval[3]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1992:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:1993:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_4 */ meltfrout->
					      tabval[4]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2000:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2001:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_5 */ meltfrout->
					      tabval[5]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2013:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2015:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2016:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* generated ctype gty structures */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2017:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#IX__L6*/ meltfnum[0] = 0;
	   ( /*_#IX__L6*/ meltfnum[0] >= 0)
	   && ( /*_#IX__L6*/ meltfnum[0] < meltcit1__EACHTUP_ln);
	/*_#IX__L6*/ meltfnum[0]++)
	{
	  /*_.CURCTYP__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#IX__L6*/ meltfnum[0]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2021:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L7*/ meltfnum[1] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2021:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L7*/ meltfnum[1])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2021:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2021;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_gty curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V14*/ meltfptr[12];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " ix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#IX__L6*/ meltfnum[0];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2021:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L8*/ meltfnum[7] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2021:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L7*/ meltfnum[1] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2022:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L9*/ meltfnum[7] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V14*/ meltfptr[12]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[6])));;
	    MELT_LOCATION ("warmelt-modes.melt:2022:/ cond");
	    /*cond */ if ( /*_#IS_A__L9*/ meltfnum[7])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V18*/ meltfptr[14] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2022:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctyp"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2022) ? (2022) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V17*/ meltfptr[15] =
	      /*_._IFELSE___V18*/ meltfptr[14];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2022:/ clear");
	      /*clear *//*_#IS_A__L9*/ meltfnum[7] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V17*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2023:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2024:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2025:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L10*/ meltfnum[1] =
	    ((1) + ( /*_#IX__L6*/ meltfnum[0]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2026:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L10*/ meltfnum[1]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2027:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2028:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[7])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V19*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V19*/ meltfptr[14] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2028:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V19*/ meltfptr[14])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2029:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2030:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2031:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct GTY (()) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2032:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V20*/ meltfptr[19] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V20*/ meltfptr[19] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2032:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V20*/ meltfptr[19])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2033:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" { /* when "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2034:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2034:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2035:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2036:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2037:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("meltobject_ptr_t discr;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2038:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2039:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[8])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
    /*_.CTYPE_CNAME__V22*/ meltfptr[21] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPE_CNAME__V22*/ meltfptr[21] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2039:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPE_CNAME__V22*/
						   meltfptr[21])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2040:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" val;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2041:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2042:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("};"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2043:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2044:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct GTY (()) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2045:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V23*/ meltfptr[22] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V23*/ meltfptr[22] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2045:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V23*/ meltfptr[22])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2046:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" { /* for "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2047:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V24*/ meltfptr[23] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V24*/ meltfptr[23] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2047:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V24*/
						   meltfptr[23])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2048:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2049:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2050:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[8])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
    /*_.CTYPE_CNAME__V25*/ meltfptr[24] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPE_CNAME__V25*/ meltfptr[24] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2050:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPE_CNAME__V25*/
						   meltfptr[24])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2051:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" e_at;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2052:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2053:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" melt_ptr_t e_va;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2054:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("};"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2055:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2056:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct GTY (()) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2057:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V26*/ meltfptr[25] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V26*/ meltfptr[25] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2057:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V26*/
						   meltfptr[25])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2058:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" { /* when "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2059:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V27*/ meltfptr[26] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V27*/ meltfptr[26] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2059:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V27*/
						   meltfptr[26])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2060:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2061:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2062:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/* keep in sync with meltmappointers_st */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2063:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2064:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("meltobject_ptr_t discr;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2065:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2066:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("unsigned count;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2067:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2068:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("unsigned char lenix;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2069:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2070:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("melt_ptr_t meltmap_aux;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2071:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2072:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2073:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V28*/ meltfptr[27] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V28*/ meltfptr[27] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2073:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V28*/ meltfptr[27])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2074:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("* GTY ((length (\"melt_primtab[%h.lenix]\"))) entab;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2075:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2076:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("};"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2077:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;
	  if ( /*_#IX__L6*/ meltfnum[0] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2018:/ clear");
	    /*clear *//*_.CURCTYP__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#IX__L6*/ meltfnum[0] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#plI__L10*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V19*/ meltfptr[14] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V20*/ meltfptr[19] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20] = 0;
      /*^clear */
	    /*clear *//*_.CTYPE_CNAME__V22*/ meltfptr[21] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V23*/ meltfptr[22] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V24*/ meltfptr[23] = 0;
      /*^clear */
	    /*clear *//*_.CTYPE_CNAME__V25*/ meltfptr[24] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V26*/ meltfptr[25] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V27*/ meltfptr[26] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V28*/ meltfptr[27] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2079:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2081:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2082:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* value GTY types */"));
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#IX__L11*/ meltfnum[7] = 0;
	   ( /*_#IX__L11*/ meltfnum[7] >= 0)
	   && ( /*_#IX__L11*/ meltfnum[7] < meltcit2__EACHTUP_ln);
	/*_#IX__L11*/ meltfnum[7]++)
	{
	  /*_.CURVALDESC__V29*/ meltfptr[28] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#IX__L11*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2086:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L12*/ meltfnum[11] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2086:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L12*/ meltfnum[11])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2086:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2086;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_gtyvaldesc curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V29*/ meltfptr[28];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " ix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#IX__L11*/ meltfnum[7];
		    /*_.MELT_DEBUG_FUN__V31*/ meltfptr[30] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V30*/ meltfptr[29] =
		    /*_.MELT_DEBUG_FUN__V31*/ meltfptr[30];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2086:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L13*/ meltfnum[12] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V31*/ meltfptr[30] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V30*/ meltfptr[29] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2086:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L12*/ meltfnum[11] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V30*/ meltfptr[29] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2087:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L14*/ meltfnum[12] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURVALDESC__V29*/ meltfptr[28]),
				   (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])));;
	    MELT_LOCATION ("warmelt-modes.melt:2087:/ cond");
	    /*cond */ if ( /*_#IS_A__L14*/ meltfnum[12])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V33*/ meltfptr[29] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2087:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curvaldesc"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2087) ? (2087) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V33*/ meltfptr[29] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V32*/ meltfptr[30] =
	      /*_._IFELSE___V33*/ meltfptr[29];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2087:/ clear");
	      /*clear *//*_#IS_A__L14*/ meltfnum[12] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V33*/ meltfptr[29] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V32*/ meltfptr[30] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2088:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2089:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2090:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*gtyvaldesc #"));
	  }
	  ;
  /*_#plI__L15*/ meltfnum[11] =
	    ((1) + ( /*_#IX__L11*/ meltfnum[7]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2091:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L15*/ meltfnum[11]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2092:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2093:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[7])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V34*/ meltfptr[29] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V34*/ meltfptr[29] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2093:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V34*/ meltfptr[29])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2094:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2095:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2096:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct GTY(("));
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
  /*_#IS_A__L16*/ meltfnum[12] =
	    melt_is_instance_of ((melt_ptr_t)
				 ( /*_.CURVALDESC__V29*/ meltfptr[28]),
				 (melt_ptr_t) (( /*!CLASS_VARISIZED_VALUE_DESCRIPTOR */ meltfrout->tabval[10])));;
	  MELT_LOCATION ("warmelt-modes.melt:2098:/ cond");
	  /*cond */ if ( /*_#IS_A__L16*/ meltfnum[12])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


#if MELT_HAVE_DEBUG
		MELT_LOCATION ("warmelt-modes.melt:2099:/ cppif.then");
		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2100:/ cond");
		  /*cond */ if (
				 /*ifisa */
				 melt_is_instance_of ((melt_ptr_t)
						      ( /*_.CURVALDESC__V29*/
						       meltfptr[28]),
						      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
		    )		/*then */
		    {
		      /*^cond.then */
		      /*^getslot */
		      {
			melt_ptr_t slot = NULL, obj = NULL;
			obj =
			  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28])
			  /*=obj*/ ;
			melt_object_get_field (slot, obj, 5, "VALDESC_GTY");
	/*_.VALDESC_GTY__V37*/ meltfptr[36] = slot;
		      };
		      ;
		    }
		  else
		    {		/*^cond.else */

       /*_.VALDESC_GTY__V37*/ meltfptr[36] = NULL;;
		    }
		  ;
		  /*^compute */
      /*_#NULL__L17*/ meltfnum[16] =
		    (( /*_.VALDESC_GTY__V37*/ meltfptr[36]) == NULL);;
		  MELT_LOCATION ("warmelt-modes.melt:2099:/ cond");
		  /*cond */ if ( /*_#NULL__L17*/ meltfnum[16])	/*then */
		    {
		      /*^cond.then */
		      /*_._IFELSE___V38*/ meltfptr[37] = ( /*nil */ NULL);;
		    }
		  else
		    {
		      MELT_LOCATION ("warmelt-modes.melt:2099:/ cond.else");

		      /*^block */
		      /*anyblock */
		      {




			{
			  /*^locexp */
			  melt_assert_failed (("check null valdescgty"),
					      ("warmelt-modes.melt")
					      ? ("warmelt-modes.melt") :
					      __FILE__,
					      (2099) ? (2099) : __LINE__,
					      __FUNCTION__);
			  ;
			}
			;
		  /*clear *//*_._IFELSE___V38*/ meltfptr[37] = 0;
			/*epilog */
		      }
		      ;
		    }
		  ;
		  /*^compute */
		  /*_.IFCPP___V36*/ meltfptr[35] =
		    /*_._IFELSE___V38*/ meltfptr[37];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2099:/ clear");
		/*clear *//*_.VALDESC_GTY__V37*/ meltfptr[36] = 0;
		  /*^clear */
		/*clear *//*_#NULL__L17*/ meltfnum[16] = 0;
		  /*^clear */
		/*clear *//*_._IFELSE___V38*/ meltfptr[37] = 0;
		}

#else /*MELT_HAVE_DEBUG */
		/*^cppif.else */
		/*_.IFCPP___V36*/ meltfptr[35] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2101:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("variable_size"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2098:/ quasiblock");


		/*epilog */

		/*^clear */
	      /*clear *//*_.IFCPP___V36*/ meltfptr[35] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
    /*_#IS_A__L18*/ meltfnum[16] =
		  melt_is_instance_of ((melt_ptr_t)
				       ( /*_.CURVALDESC__V29*/ meltfptr[28]),
				       (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])));;
		MELT_LOCATION ("warmelt-modes.melt:2103:/ cond");
		/*cond */ if ( /*_#IS_A__L18*/ meltfnum[16])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {

		      MELT_LOCATION ("warmelt-modes.melt:2104:/ quasiblock");


		      /*^cond */
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.CURVALDESC__V29*/ meltfptr[28]),
							  (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.CURVALDESC__V29*/
					    meltfptr[28]) /*=obj*/ ;
			    melt_object_get_field (slot, obj, 5,
						   "VALDESC_GTY");
	/*_.SGTY__V40*/ meltfptr[37] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.SGTY__V40*/ meltfptr[37] = NULL;;
			}
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      /*^compute */
      /*_#IS_STRING__L19*/ meltfnum[18] =
			(melt_magic_discr
			 ((melt_ptr_t) ( /*_.SGTY__V40*/ meltfptr[37])) ==
			 MELTOBMAG_STRING);;
		      MELT_LOCATION ("warmelt-modes.melt:2106:/ cond");
		      /*cond */ if ( /*_#IS_STRING__L19*/ meltfnum[18])	/*then */
			{
			  /*^cond.then */
			  /*^block */
			  /*anyblock */
			  {




			    {
			      MELT_LOCATION
				("warmelt-modes.melt:2107:/ locexp");
			      /*add2sbuf_string */
				meltgc_add_strbuf ((melt_ptr_t)
						   ( /*_.OUTBUF__V5*/
						    meltfptr[4]),
						   melt_string_str ((melt_ptr_t) ( /*_.SGTY__V40*/ meltfptr[37])));
			    }
			    ;
		  /*clear *//*_._IFELSE___V39*/ meltfptr[36] = 0;
			    /*epilog */
			  }
			  ;
			}
		      else
			{
			  MELT_LOCATION
			    ("warmelt-modes.melt:2106:/ cond.else");

       /*_._IFELSE___V39*/ meltfptr[36] = NULL;;
			}
		      ;

		      MELT_LOCATION ("warmelt-modes.melt:2104:/ clear");
		/*clear *//*_.SGTY__V40*/ meltfptr[37] = 0;
		      /*^clear */
		/*clear *//*_#IS_STRING__L19*/ meltfnum[18] = 0;
		      /*epilog */
		    }
		    ;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:2103:/ cond.else");

		    /*^block */
		    /*anyblock */
		    {


#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:2109:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			MELT_CHECK_SIGNAL ();
			;
			/*^cond */
			/*cond */ if (( /*nil */ NULL))	/*then */
			  {
			    /*^cond.then */
			    /*_._IFELSE___V42*/ meltfptr[37] =
			      ( /*nil */ NULL);;
			  }
			else
			  {
			    MELT_LOCATION
			      ("warmelt-modes.melt:2109:/ cond.else");

			    /*^block */
			    /*anyblock */
			    {




			      {
				/*^locexp */
				melt_assert_failed (("invalid value descriptor"), ("warmelt-modes.melt") ? ("warmelt-modes.melt") : __FILE__, (2109) ? (2109) : __LINE__, __FUNCTION__);
				;
			      }
			      ;
		    /*clear *//*_._IFELSE___V42*/ meltfptr[37] = 0;
			      /*epilog */
			    }
			    ;
			  }
			;
			/*^compute */
			/*_.IFCPP___V41*/ meltfptr[35] =
			  /*_._IFELSE___V42*/ meltfptr[37];;
			/*epilog */

			MELT_LOCATION ("warmelt-modes.melt:2109:/ clear");
		  /*clear *//*_._IFELSE___V42*/ meltfptr[37] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*_.IFCPP___V41*/ meltfptr[35] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:2108:/ quasiblock");


		      /*_.PROGN___V43*/ meltfptr[37] =
			/*_.IFCPP___V41*/ meltfptr[35];;
		      /*^compute */
		      /*_._IFELSE___V39*/ meltfptr[36] =
			/*_.PROGN___V43*/ meltfptr[37];;
		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:2103:/ clear");
		/*clear *//*_.IFCPP___V41*/ meltfptr[35] = 0;
		      /*^clear */
		/*clear *//*_.PROGN___V43*/ meltfptr[37] = 0;
		    }
		    ;
		  }
		;
		/*_._IFELSE___V35*/ meltfptr[34] =
		  /*_._IFELSE___V39*/ meltfptr[36];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2098:/ clear");
	      /*clear *//*_#IS_A__L18*/ meltfnum[16] = 0;
		/*^clear */
	      /*clear *//*_._IFELSE___V39*/ meltfptr[36] = 0;
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2111:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (")) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2112:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V44*/ meltfptr[35] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V44*/ meltfptr[35] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2112:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V44*/
						   meltfptr[35])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2113:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" /* when "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2114:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALDESC_OBJMAGIC__V45*/ meltfptr[37] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_OBJMAGIC__V45*/ meltfptr[37] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2114:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_OBJMAGIC__V45*/ meltfptr[37])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2115:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" */ {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2116:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2117:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("meltobject_ptr_t discr;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2118:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2119:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 6, "VALDESC_MEMBCHUNK");
    /*_.VALDESC_MEMBCHUNK__V46*/ meltfptr[36] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_MEMBCHUNK__V46*/ meltfptr[36] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2119:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_MEMBCHUNK__V46*/ meltfptr[36])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2120:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2121:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("}; /* end "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2122:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V47*/ meltfptr[46] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V47*/ meltfptr[46] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2122:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V47*/
						   meltfptr[46])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2123:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2124:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2125:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V29*/
					       meltfptr[28]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V29*/ meltfptr[28]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 7, "VALDESC_DECLCHUNK");
    /*_.DCLCHK__V48*/ meltfptr[47] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.DCLCHK__V48*/ meltfptr[47] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2127:/ cond");
	  /*cond */ if ( /*_.DCLCHK__V48*/ meltfptr[47])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2129:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("/* decl. chunk */"));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2130:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (0), 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2131:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.DCLCHK__V48*/
							 meltfptr[47])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2132:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (0), 0);
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2128:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:2127:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2134:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("/* no decl. chunk */"));
		}
		;
		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2136:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:2125:/ clear");
	    /*clear *//*_.DCLCHK__V48*/ meltfptr[47] = 0;
	  if ( /*_#IX__L11*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2083:/ clear");
	    /*clear *//*_.CURVALDESC__V29*/ meltfptr[28] = 0;
      /*^clear */
	    /*clear *//*_#IX__L11*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V32*/ meltfptr[30] = 0;
      /*^clear */
	    /*clear *//*_#plI__L15*/ meltfnum[11] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V34*/ meltfptr[29] = 0;
      /*^clear */
	    /*clear *//*_#IS_A__L16*/ meltfnum[12] = 0;
      /*^clear */
	    /*clear *//*_._IFELSE___V35*/ meltfptr[34] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V44*/ meltfptr[35] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_OBJMAGIC__V45*/ meltfptr[37] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_MEMBCHUNK__V46*/ meltfptr[36] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V47*/ meltfptr[46] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2140:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2141:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* our generated MELT union for everything */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2142:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2143:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("typedef union"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2144:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2145:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   (" GTY ((desc (\"%0.u_discr->meltobj_magic\"))) melt_un"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2148:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2149:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("{ /*generated melt_un*/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2150:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2151:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("meltobject_ptr_t GTY ((skip)) u_discr;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2152:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2153:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("struct meltforward_st GTY ((skip)) u_forward;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2154:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit3__EACHTUP */
      long meltcit3__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#IX__L20*/ meltfnum[18] = 0;
	   ( /*_#IX__L20*/ meltfnum[18] >= 0)
	   && ( /*_#IX__L20*/ meltfnum[18] < meltcit3__EACHTUP_ln);
	/*_#IX__L20*/ meltfnum[18]++)
	{
	  /*_.CURCTYP__V49*/ meltfptr[47] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#IX__L20*/ meltfnum[18]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2159:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L21*/ meltfnum[16] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2159:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L21*/ meltfnum[16])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L22*/ meltfnum[21] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2159:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L22*/ meltfnum[21];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2159;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_gty curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V49*/ meltfptr[47];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " ix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#IX__L20*/ meltfnum[18];
		    /*_.MELT_DEBUG_FUN__V51*/ meltfptr[50] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V50*/ meltfptr[49] =
		    /*_.MELT_DEBUG_FUN__V51*/ meltfptr[50];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2159:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L22*/ meltfnum[21] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V51*/ meltfptr[50] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V50*/ meltfptr[49] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2159:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L21*/ meltfnum[16] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V50*/ meltfptr[49] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2160:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L23*/ meltfnum[21] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V49*/ meltfptr[47]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[6])));;
	    MELT_LOCATION ("warmelt-modes.melt:2160:/ cond");
	    /*cond */ if ( /*_#IS_A__L23*/ meltfnum[21])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V53*/ meltfptr[49] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2160:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctyp"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2160) ? (2160) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V53*/ meltfptr[49] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V52*/ meltfptr[50] =
	      /*_._IFELSE___V53*/ meltfptr[49];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2160:/ clear");
	      /*clear *//*_#IS_A__L23*/ meltfnum[21] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V53*/ meltfptr[49] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V52*/ meltfptr[50] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2161:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2162:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*union gtyctype #"));
	  }
	  ;
  /*_#plI__L24*/ meltfnum[16] =
	    ((1) + ( /*_#IX__L20*/ meltfnum[18]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2163:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L24*/ meltfnum[16]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2164:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2165:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[7])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V54*/ meltfptr[49] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V54*/ meltfptr[49] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2165:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V54*/ meltfptr[49])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2166:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2167:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2168:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2169:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V55*/ meltfptr[54] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V55*/ meltfptr[54] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2169:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V55*/ meltfptr[54])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2170:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" GTY ((tag(\""));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2171:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.CTYPG_BOXEDMAGIC__V56*/ meltfptr[55] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDMAGIC__V56*/ meltfptr[55] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2171:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDMAGIC__V56*/ meltfptr[55])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2172:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("\"))) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2173:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 16, "CTYPG_BOXEDUNIMEMB");
    /*_.CTYPG_BOXEDUNIMEMB__V57*/ meltfptr[56] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDUNIMEMB__V57*/ meltfptr[56] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2173:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDUNIMEMB__V57*/ meltfptr[56])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2174:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("; /* generated boxed union member */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2175:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2176:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2177:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V58*/ meltfptr[57] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V58*/ meltfptr[57] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2177:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V58*/
						   meltfptr[57])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2178:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" GTY ((tag(\""));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2179:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V59*/ meltfptr[58] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V59*/ meltfptr[58] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2179:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V59*/
						   meltfptr[58])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2180:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("\"))) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2181:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V49*/
					       meltfptr[47]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[6])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V49*/ meltfptr[47]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 20, "CTYPG_MAPUNIMEMB");
    /*_.CTYPG_MAPUNIMEMB__V60*/ meltfptr[59] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPUNIMEMB__V60*/ meltfptr[59] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2181:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPUNIMEMB__V60*/ meltfptr[59])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2182:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("; /* generated map union member */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2183:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  if ( /*_#IX__L20*/ meltfnum[18] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit3__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2156:/ clear");
	    /*clear *//*_.CURCTYP__V49*/ meltfptr[47] = 0;
      /*^clear */
	    /*clear *//*_#IX__L20*/ meltfnum[18] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V52*/ meltfptr[50] = 0;
      /*^clear */
	    /*clear *//*_#plI__L24*/ meltfnum[16] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V54*/ meltfptr[49] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V55*/ meltfptr[54] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDMAGIC__V56*/ meltfptr[55] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDUNIMEMB__V57*/ meltfptr[56] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V58*/ meltfptr[57] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V59*/ meltfptr[58] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPUNIMEMB__V60*/ meltfptr[59] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2185:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit4__EACHTUP */
      long meltcit4__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VIX__L25*/ meltfnum[21] = 0;
	   ( /*_#VIX__L25*/ meltfnum[21] >= 0)
	   && ( /*_#VIX__L25*/ meltfnum[21] < meltcit4__EACHTUP_ln);
	/*_#VIX__L25*/ meltfnum[21]++)
	{
	  /*_.CURVALDESC__V61*/ meltfptr[60] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VIX__L25*/ meltfnum[21]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2190:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L26*/ meltfnum[25] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2190:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L26*/ meltfnum[25])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L27*/ meltfnum[26] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2190:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L27*/ meltfnum[26];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2190;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_gty curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V61*/ meltfptr[60];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " vix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#VIX__L25*/ meltfnum[21];
		    /*_.MELT_DEBUG_FUN__V63*/ meltfptr[62] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V62*/ meltfptr[61] =
		    /*_.MELT_DEBUG_FUN__V63*/ meltfptr[62];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2190:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L27*/ meltfnum[26] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V63*/ meltfptr[62] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V62*/ meltfptr[61] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2190:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L26*/ meltfnum[25] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V62*/ meltfptr[61] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2191:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2192:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*union.valdesc #"));
	  }
	  ;
  /*_#plI__L28*/ meltfnum[26] =
	    ((1) + ( /*_#VIX__L25*/ meltfnum[21]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2193:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L28*/ meltfnum[26]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2194:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2195:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V61*/
					       meltfptr[60]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[7])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V61*/ meltfptr[60]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V64*/ meltfptr[62] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V64*/ meltfptr[62] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2195:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V64*/ meltfptr[62])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2196:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2197:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2198:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2199:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V61*/
					       meltfptr[60]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V61*/ meltfptr[60]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V65*/ meltfptr[61] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V65*/ meltfptr[61] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2199:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V65*/
						   meltfptr[61])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2200:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" GTY ((tag(\""));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2201:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V61*/
					       meltfptr[60]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V61*/ meltfptr[60]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALDESC_OBJMAGIC__V66*/ meltfptr[65] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_OBJMAGIC__V66*/ meltfptr[65] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2201:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_OBJMAGIC__V66*/ meltfptr[65])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2202:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("\"))) "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2203:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V61*/
					       meltfptr[60]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[9])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V61*/ meltfptr[60]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 4, "VALDESC_UNIONMEM");
    /*_.VALDESC_UNIONMEM__V67*/ meltfptr[66] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_UNIONMEM__V67*/ meltfptr[66] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2203:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_UNIONMEM__V67*/ meltfptr[66])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2204:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("; /* generated value union member */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2205:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  if ( /*_#VIX__L25*/ meltfnum[21] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit4__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2187:/ clear");
	    /*clear *//*_.CURVALDESC__V61*/ meltfptr[60] = 0;
      /*^clear */
	    /*clear *//*_#VIX__L25*/ meltfnum[21] = 0;
      /*^clear */
	    /*clear *//*_#plI__L28*/ meltfnum[26] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V64*/ meltfptr[62] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V65*/ meltfptr[61] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_OBJMAGIC__V66*/ meltfptr[65] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_UNIONMEM__V67*/ meltfptr[66] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2207:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2208:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("} melt_un_t /*end generated melt_un*/;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2209:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2211:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** end generated by generate_runtypesupport_gty **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2213:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2214:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2215:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L29*/ meltfnum[25] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:2215:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L29*/ meltfnum[25])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L30*/ meltfnum[29] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:2215:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L30*/ meltfnum[29];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 2215;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_gty end outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V69*/ meltfptr[68] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V68*/ meltfptr[67] =
	      /*_.MELT_DEBUG_FUN__V69*/ meltfptr[68];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2215:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L30*/ meltfnum[29] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V69*/ meltfptr[68] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V68*/ meltfptr[67] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:2215:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L29*/ meltfnum[25] = 0;
      /*^clear */
	     /*clear *//*_._IF___V68*/ meltfptr[67] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:1958:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_GTY", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_51_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_GTY */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 56
    melt_ptr_t mcfr_varptr[56];
#define MELTFRAM_NBVARNUM 15
    long mcfr_varnum[15];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN_st
	 *) meltfirstargp_;
      /* use arguments meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 56; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN nbval 56*/
  meltfram__.mcfr_nbvar = 56 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:2224:/ getarg");
 /*_.CTYGTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2228:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:2228:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:2228:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 2228;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_forwcopy_fun start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2228:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:2228:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2229:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2229:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2229:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2229) ? (2229) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2229:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2230:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2230:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2230:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctygtytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2230) ? (2230) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2230:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2231:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:2231:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2231:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2231) ? (2231) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2231:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2232:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2234:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2235:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2236:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** generated by generate_runtypesupport_forwcopy_fun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2237:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2238:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_1 */ meltfrout->
					      tabval[1]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2256:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2257:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* value descriptor forward copy for melt_forwarded_copy  */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2260:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VIX__L6*/ meltfnum[0] = 0;
	   ( /*_#VIX__L6*/ meltfnum[0] >= 0)
	   && ( /*_#VIX__L6*/ meltfnum[0] < meltcit1__EACHTUP_ln);
	/*_#VIX__L6*/ meltfnum[0]++)
	{
	  /*_.CURVALDESC__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VIX__L6*/ meltfnum[0]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2264:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L7*/ meltfnum[1] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2264:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L7*/ meltfnum[1])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2264:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2264;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_forwcopy curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V14*/ meltfptr[12];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2264:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L8*/ meltfnum[7] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2264:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L7*/ meltfnum[1] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2265:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L9*/ meltfnum[7] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURVALDESC__V14*/ meltfptr[12]),
				   (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])));;
	    MELT_LOCATION ("warmelt-modes.melt:2265:/ cond");
	    /*cond */ if ( /*_#IS_A__L9*/ meltfnum[7])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V18*/ meltfptr[14] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2265:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curvaldesc"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2265) ? (2265) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V17*/ meltfptr[15] =
	      /*_._IFELSE___V18*/ meltfptr[14];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2265:/ clear");
	      /*clear *//*_#IS_A__L9*/ meltfnum[7] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V17*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2266:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2267:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*valdesc #"));
	  }
	  ;
  /*_#plI__L10*/ meltfnum[1] =
	    ((1) + ( /*_#VIX__L6*/ meltfnum[0]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2268:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L10*/ meltfnum[1]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2269:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2270:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V19*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V19*/ meltfptr[14] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2270:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V19*/ meltfptr[14])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2271:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2272:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2273:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2274:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2274:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2275:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (": {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2276:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2277:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2278:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V21*/ meltfptr[20] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V21*/ meltfptr[20] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2278:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V21*/
						   meltfptr[20])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2279:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*src = (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2280:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V22*/ meltfptr[21] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V22*/ meltfptr[21] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2280:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V22*/
						   meltfptr[21])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2281:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) p;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2282:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2283:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2284:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALDESC_STRUCT__V23*/ meltfptr[22] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_STRUCT__V23*/ meltfptr[22] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2284:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_STRUCT__V23*/
						   meltfptr[22])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2285:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*dst = NULL;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2286:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2287:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 8, "VALDESC_COPYCHUNK");
    /*_.VALDESC_COPYCHUNK__V24*/ meltfptr[23] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_COPYCHUNK__V24*/ meltfptr[23] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2287:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_COPYCHUNK__V24*/ meltfptr[23])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2288:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2289:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("n = (melt_ptr_t) dst;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2290:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2291:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break; }"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2292:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  if ( /*_#VIX__L6*/ meltfnum[0] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2261:/ clear");
	    /*clear *//*_.CURVALDESC__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#VIX__L6*/ meltfnum[0] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#plI__L10*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V19*/ meltfptr[14] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V21*/ meltfptr[20] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V22*/ meltfptr[21] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_STRUCT__V23*/ meltfptr[22] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_COPYCHUNK__V24*/ meltfptr[23] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2295:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2296:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2297:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* gty ctype forward copy for melt_forwarded_copy */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2298:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L11*/ meltfnum[7] = 0;
	   ( /*_#TIX__L11*/ meltfnum[7] >= 0)
	   && ( /*_#TIX__L11*/ meltfnum[7] < meltcit2__EACHTUP_ln);
	/*_#TIX__L11*/ meltfnum[7]++)
	{
	  /*_.CURCTYP__V25*/ meltfptr[24] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L11*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2302:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L12*/ meltfnum[11] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2302:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L12*/ meltfnum[11])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2302:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2302;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_forwcopy curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V25*/ meltfptr[24];
		    /*_.MELT_DEBUG_FUN__V27*/ meltfptr[26] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V26*/ meltfptr[25] =
		    /*_.MELT_DEBUG_FUN__V27*/ meltfptr[26];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2302:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L13*/ meltfnum[12] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V27*/ meltfptr[26] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V26*/ meltfptr[25] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2302:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L12*/ meltfnum[11] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V26*/ meltfptr[25] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2303:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L14*/ meltfnum[12] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V25*/ meltfptr[24]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[4])));;
	    MELT_LOCATION ("warmelt-modes.melt:2303:/ cond");
	    /*cond */ if ( /*_#IS_A__L14*/ meltfnum[12])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V29*/ meltfptr[25] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2303:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctygty"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2303) ? (2303) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V29*/ meltfptr[25] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V28*/ meltfptr[26] =
	      /*_._IFELSE___V29*/ meltfptr[25];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2303:/ clear");
	      /*clear *//*_#IS_A__L14*/ meltfnum[12] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V29*/ meltfptr[25] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V28*/ meltfptr[26] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2304:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*forwcopy gtyctype #"));
	  }
	  ;
  /*_#plI__L15*/ meltfnum[11] =
	    ((1) + ( /*_#TIX__L11*/ meltfnum[7]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2305:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L15*/ meltfnum[11]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2306:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2307:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V30*/ meltfptr[25] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V30*/ meltfptr[25] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2307:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V30*/ meltfptr[25])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2308:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2309:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2311:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2312:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.CTYPG_BOXEDMAGIC__V31*/ meltfptr[30] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDMAGIC__V31*/ meltfptr[30] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2312:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDMAGIC__V31*/ meltfptr[30])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2313:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (": {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2314:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2315:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/* macro ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2316:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V32*/ meltfptr[31] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V32*/ meltfptr[31] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2316:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V32*/ meltfptr[31])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2317:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" should be generated by gengtype not by runtypesupport_forwcopy */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2318:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2319:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#ifndef ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2320:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V33*/ meltfptr[32] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V33*/ meltfptr[32] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2320:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V33*/ meltfptr[32])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2321:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2322:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#define ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2323:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V34*/ meltfptr[33] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V34*/ meltfptr[33] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2323:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V34*/ meltfptr[33])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2324:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("() ((struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2325:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V35*/ meltfptr[34] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V35*/ meltfptr[34] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2325:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V35*/ meltfptr[34])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2326:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*)(ggc_internal_alloc_stat (sizeof (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2327:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V36*/ meltfptr[35] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V36*/ meltfptr[35] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2327:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V36*/ meltfptr[35])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2328:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (") MEM_STAT_INFO)))"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2329:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2330:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#endif"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2331:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2332:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2333:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V37*/ meltfptr[36] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V37*/ meltfptr[36] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2333:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V37*/ meltfptr[36])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2334:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *src = (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2335:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V38*/ meltfptr[37] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V38*/ meltfptr[37] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2335:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V38*/ meltfptr[37])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2336:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) p;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2337:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2338:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2339:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V39*/ meltfptr[38] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V39*/ meltfptr[38] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2339:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V39*/ meltfptr[38])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2340:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *dst = ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2341:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.CTYPG_BOXEDSTRUCT__V40*/ meltfptr[39] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDSTRUCT__V40*/ meltfptr[39] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2341:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDSTRUCT__V40*/ meltfptr[39])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2342:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" ();"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2343:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2344:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *dst = *src;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2345:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2346:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" n = (melt_ptr_t) dst;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2347:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2348:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break; }"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2349:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2351:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2352:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V41*/ meltfptr[40] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V41*/ meltfptr[40] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2352:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V41*/
						   meltfptr[40])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2353:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (": {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2355:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2356:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/* ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2357:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V42*/ meltfptr[41] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V42*/ meltfptr[41] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2357:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V42*/
						   meltfptr[41])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2358:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" should be generated by gengtype not by runtypesupport_forwcopy */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2359:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2360:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#ifndef ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2361:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V43*/ meltfptr[42] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V43*/ meltfptr[42] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2361:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V43*/
						   meltfptr[42])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2362:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2363:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#define ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2364:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V44*/ meltfptr[43] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V44*/ meltfptr[43] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2364:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V44*/
						   meltfptr[43])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2365:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("() ((struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2366:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V45*/ meltfptr[44] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V45*/ meltfptr[44] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2366:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V45*/
						   meltfptr[44])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2367:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) (ggc_internal_alloc_stat (sizeof (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2368:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V46*/ meltfptr[45] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V46*/ meltfptr[45] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2368:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V46*/
						   meltfptr[45])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2369:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (") MEM_STAT_INFO))) "));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2370:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2371:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#endif"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2373:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2374:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/* ggc_alloc_vec_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2375:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V47*/ meltfptr[46] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V47*/ meltfptr[46] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2375:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V47*/ meltfptr[46])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2376:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" should be generated by gengtype not by runtypesupport_forwcopy */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2377:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2378:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#ifndef ggc_alloc_vec_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2379:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V48*/ meltfptr[47] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V48*/ meltfptr[47] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2379:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V48*/ meltfptr[47])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2380:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2381:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#define ggc_alloc_vec_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2382:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V49*/ meltfptr[48] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V49*/ meltfptr[48] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2382:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V49*/ meltfptr[48])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2383:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("(n) ((struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2384:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V50*/ meltfptr[49] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V50*/ meltfptr[49] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2384:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V50*/ meltfptr[49])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2385:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) (ggc_internal_vec_alloc_stat (sizeof (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2386:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V51*/ meltfptr[50] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V51*/ meltfptr[50] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2386:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V51*/ meltfptr[50])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2387:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("), n MEM_STAT_INFO))) "));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2388:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2389:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("#endif"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2391:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2392:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2393:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V52*/ meltfptr[51] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V52*/ meltfptr[51] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2393:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V52*/
						   meltfptr[51])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2394:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *src = (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2395:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V53*/ meltfptr[52] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V53*/ meltfptr[52] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2395:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V53*/
						   meltfptr[52])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2396:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) p;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2397:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2398:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("int siz = melt_primtab[src->lenix];"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2399:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2400:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2401:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V54*/ meltfptr[53] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V54*/ meltfptr[53] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2401:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V54*/
						   meltfptr[53])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2402:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *dst = ggc_alloc_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2403:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V55*/ meltfptr[54] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V55*/ meltfptr[54] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2403:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V55*/
						   meltfptr[54])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2404:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" ();"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2405:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2406:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("dst->discr = src->discr;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2407:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2408:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("dst->count = src->count;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2409:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2410:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("dst->lenix = src->lenix;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2411:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2412:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("dst->meltmap_aux = src->meltmap_aux;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2413:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2414:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("if (siz > 0 && src->entab) {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2415:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2416:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("dst->entab = ggc_alloc_vec_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2417:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V25*/
					       meltfptr[24]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V25*/ meltfptr[24]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V56*/ meltfptr[55] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V56*/ meltfptr[55] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2417:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V56*/ meltfptr[55])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2418:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" (siz);"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2419:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2420:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("memcpy (dst->entab, src->entab, siz * sizeof (dst->entab[0]));"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2421:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2422:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("} else dst->entab = NULL;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2423:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2424:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" n = (melt_ptr_t) dst;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2425:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2426:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break; }"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2427:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  if ( /*_#TIX__L11*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2299:/ clear");
	    /*clear *//*_.CURCTYP__V25*/ meltfptr[24] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L11*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V28*/ meltfptr[26] = 0;
      /*^clear */
	    /*clear *//*_#plI__L15*/ meltfnum[11] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V30*/ meltfptr[25] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDMAGIC__V31*/ meltfptr[30] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V32*/ meltfptr[31] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V33*/ meltfptr[32] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V34*/ meltfptr[33] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V35*/ meltfptr[34] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V36*/ meltfptr[35] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V37*/ meltfptr[36] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V38*/ meltfptr[37] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V39*/ meltfptr[38] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDSTRUCT__V40*/ meltfptr[39] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V41*/ meltfptr[40] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V42*/ meltfptr[41] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V43*/ meltfptr[42] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V44*/ meltfptr[43] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V45*/ meltfptr[44] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V46*/ meltfptr[45] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V47*/ meltfptr[46] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V48*/ meltfptr[47] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V49*/ meltfptr[48] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V50*/ meltfptr[49] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V51*/ meltfptr[50] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V52*/ meltfptr[51] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V53*/ meltfptr[52] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V54*/ meltfptr[53] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V55*/ meltfptr[54] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V56*/ meltfptr[55] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2431:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_5 */ meltfrout->
					      tabval[5]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2481:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2482:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** end of code generated by generate_runtypesupport_forwcopy_fun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2483:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2484:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:2224:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_52_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 53
    melt_ptr_t mcfr_varptr[53];
#define MELTFRAM_NBVARNUM 19
    long mcfr_varnum[19];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN_st
	 *) meltfirstargp_;
      /* use arguments meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 53; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN nbval 53*/
  meltfram__.mcfr_nbvar = 53 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_CLONING_FUN", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:2492:/ getarg");
 /*_.CTYGTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2496:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:2496:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:2496:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 2496;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_cloning_fun start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2496:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:2496:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2497:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2497:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2497:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2497) ? (2497) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2497:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2498:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2498:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2498:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctygtytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2498) ? (2498) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2498:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2499:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:2499:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2499:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2499) ? (2499) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2499:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2500:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2502:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2503:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2504:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** generated by generate_runtypesupport_cloning_fun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2505:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:2507:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring = " /* generated cloning routine head */\
\nmelt_ptr_t\nmeltgc_clone_with_discriminant (melt_ptr_t srcval_p,\
 melt_ptr_t newdiscr_p)\n{\n  unsigned srcmagic = 0;\
\n  unsigned newmagic = 0;\n  MELT_ENTERFRAME (5, NULL);\
\n#define resv       meltfram__.mcfr_varptr[0]\
\n#define srcvalv    meltfram__.mcfr_varptr[1]\
\n#define newdiscrv  meltfram__.mcfr_varptr[2]\
\n#define srcdiscrv  meltfram__.mcfr_varptr[3]\
\n#define compv      meltfram__.mcfr_varptr[4]\
\n  srcvalv = srcval_p;\n  newdiscrv = newdiscr_p;\
\n  resv = srcvalv;\n  if (!srcvalv) \
\n     goto end;\n  srcdiscrv = ((melt_ptr_t)srcvalv)->u_discr;\
\n  if (!newdiscrv)\n    newdiscrv = srcdiscrv;\
\n  if (melt_magic_discr((melt_ptr_t)newdiscrv) != MELTOBMAG_OBJECT\
\
\n      || ((meltobject_ptr_t)newdiscrv)->obj_len < MELTLENGTH_CLASS_DISCRIMI\
NANT)\n    goto end;\n  if (!melt_is_instance_of((melt_ptr_t)newdiscrv\
, \n\t\t\t   MELT_PREDEF (CLASS_DISCRIMINANT)))\
\n    goto end;\n  srcmagic = melt_magic_discr ((melt_ptr_t)srcvalv\
);\n  newmagic = ((meltobject_ptr_t)newdiscrv)->meltobj_magic;\
\n  if (srcmagic != newmagic) \n    goto end;\
\n  switch (srcmagic) { /* end cloning heeade\
r */\n";
      /*_.ADD2OUT__V14*/ meltfptr[12] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		    (MELTBPARSTR_CSTRING ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2540:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:2543:/ quasiblock");


 /*_#NBCTYGTYTUP__L6*/ meltfnum[0] =
      (melt_multiple_length
       ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])));;

    {
      MELT_LOCATION ("warmelt-modes.melt:2545:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:2546:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring = "/*** cloning ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBCTYGTYTUP__L6*/ meltfnum[0];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " GTY-ed ctypes ***/";
      /*_.ADD2OUT__V15*/ meltfptr[14] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2547:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L7*/ meltfnum[1] = 0;
	   ( /*_#TIX__L7*/ meltfnum[1] >= 0)
	   && ( /*_#TIX__L7*/ meltfnum[1] < meltcit1__EACHTUP_ln);
	/*_#TIX__L7*/ meltfnum[1]++)
	{
	  /*_.CURCTYP__V16*/ meltfptr[15] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L7*/ meltfnum[1]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2552:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L8*/ meltfnum[7] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2552:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L8*/ meltfnum[7])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L9*/ meltfnum[8] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2552:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L9*/ meltfnum[8];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2552;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_cloning curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V16*/ meltfptr[15];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " tix=";
		    /*^apply.arg */
		    argtab[6].meltbp_long = /*_#TIX__L7*/ meltfnum[1];
		    /*_.MELT_DEBUG_FUN__V18*/ meltfptr[17] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V17*/ meltfptr[16] =
		    /*_.MELT_DEBUG_FUN__V18*/ meltfptr[17];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2552:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L9*/ meltfnum[8] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V18*/ meltfptr[17] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V17*/ meltfptr[16] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2552:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L8*/ meltfnum[7] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V17*/ meltfptr[16] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2553:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L10*/ meltfnum[8] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V16*/ meltfptr[15]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[2])));;
	    MELT_LOCATION ("warmelt-modes.melt:2553:/ cond");
	    /*cond */ if ( /*_#IS_A__L10*/ meltfnum[8])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V20*/ meltfptr[16] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2553:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctygty"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2553) ? (2553) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V20*/ meltfptr[16] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V19*/ meltfptr[17] =
	      /*_._IFELSE___V20*/ meltfptr[16];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2553:/ clear");
	      /*clear *//*_#IS_A__L10*/ meltfnum[8] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V20*/ meltfptr[16] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V19*/ meltfptr[17] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2554:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.CTYPNAME__V22*/ meltfptr[21] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPNAME__V22*/ meltfptr[21] = NULL;;
	    }
	  ;
	  /*^compute */
  /*_#TIXSUCC__L11*/ meltfnum[7] =
	    ((1) + ( /*_#TIX__L7*/ meltfnum[1]));;
	  MELT_LOCATION ("warmelt-modes.melt:2556:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
    /*_.TYCNAME__V23*/ meltfptr[22] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.TYCNAME__V23*/ meltfptr[22] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2557:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.MAPMAGIC__V24*/ meltfptr[23] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.MAPMAGIC__V24*/ meltfptr[23] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2558:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.BOXMAGIC__V25*/ meltfptr[24] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.BOXMAGIC__V25*/ meltfptr[24] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2559:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 15, "CTYPG_BOXEDSTRUCT");
    /*_.BOXSTRUCT__V26*/ meltfptr[25] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.BOXSTRUCT__V26*/ meltfptr[25] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2560:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.MAPSTRUCT__V27*/ meltfptr[26] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.MAPSTRUCT__V27*/ meltfptr[26] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2561:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V16*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V16*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.ENTRYSTRUCT__V28*/ meltfptr[27] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.ENTRYSTRUCT__V28*/ meltfptr[27] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2563:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2564:/ apply");
	  /*apply */
	  {
	    union meltparam_un argtab[5];
	    memset (&argtab, 0, sizeof (argtab));
	    /*^apply.arg */
	    argtab[0].meltbp_cstring = "/*cloning gtyctype #";
	    /*^apply.arg */
	    argtab[1].meltbp_long = /*_#TIXSUCC__L11*/ meltfnum[7];
	    /*^apply.arg */
	    argtab[2].meltbp_cstring = " ";
	    /*^apply.arg */
	    argtab[3].meltbp_aptr =
	      (melt_ptr_t *) & /*_.CTYPNAME__V22*/ meltfptr[21];
	    /*^apply.arg */
	    argtab[4].meltbp_cstring = " */";
	    /*_.ADD2OUT__V29*/ meltfptr[28] =
	      melt_apply ((meltclosure_ptr_t)
			  (( /*!ADD2OUT */ meltfrout->tabval[1])),
			  (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			  (MELTBPARSTR_CSTRING MELTBPARSTR_LONG
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING ""), argtab, "",
			  (union meltparam_un *) 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2565:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2566:/ apply");
	  /*apply */
	  {
	    union meltparam_un argtab[15];
	    memset (&argtab, 0, sizeof (argtab));
	    /*^apply.arg */
	    argtab[0].meltbp_cstring = "case ";
	    /*^apply.arg */
	    argtab[1].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXMAGIC__V25*/ meltfptr[24];
	    /*^apply.arg */
	    argtab[2].meltbp_cstring = " : { /* cloning boxed value ";
	    /*^apply.arg */
	    argtab[3].meltbp_aptr =
	      (melt_ptr_t *) & /*_.CTYPNAME__V22*/ meltfptr[21];
	    /*^apply.arg */
	    argtab[4].meltbp_cstring = " */\n\t  struct ";
	    /*^apply.arg */
	    argtab[5].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXSTRUCT__V26*/ meltfptr[25];
	    /*^apply.arg */
	    argtab[6].meltbp_cstring = " *src = (struct ";
	    /*^apply.arg */
	    argtab[7].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXSTRUCT__V26*/ meltfptr[25];
	    /*^apply.arg */
	    argtab[8].meltbp_cstring = " *) srcvalv;\n\t  struct ";
	    /*^apply.arg */
	    argtab[9].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXSTRUCT__V26*/ meltfptr[25];
	    /*^apply.arg */
	    argtab[10].meltbp_cstring = " *dst = (struct ";
	    /*^apply.arg */
	    argtab[11].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXSTRUCT__V26*/ meltfptr[25];
	    /*^apply.arg */
	    argtab[12].meltbp_cstring = " *) meltgc_allocate (sizeof(struct ";
	    /*^apply.arg */
	    argtab[13].meltbp_aptr =
	      (melt_ptr_t *) & /*_.BOXSTRUCT__V26*/ meltfptr[25];
	    /*^apply.arg */
	    argtab[14].meltbp_cstring = "), 0);";
	    /*_.ADD2OUT__V30*/ meltfptr[29] =
	      melt_apply ((meltclosure_ptr_t)
			  (( /*!ADD2OUT */ meltfrout->tabval[1])),
			  (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING ""), argtab, "",
			  (union meltparam_un *) 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2570:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2571:/ apply");
	  /*apply */
	  {
	    union meltparam_un argtab[1];
	    memset (&argtab, 0, sizeof (argtab));
	    /*^apply.arg */
	    argtab[0].meltbp_cstring =
	      "\n            *dst = *src;\n\t    dst->discr = (meltobject_ptr_t) newdiscrv\
; \n\t    resv = (melt_ptr_t) dst;\
\n          }\n\t  break;";
	    /*_.ADD2OUT__V31*/ meltfptr[30] =
	      melt_apply ((meltclosure_ptr_t)
			  (( /*!ADD2OUT */ meltfrout->tabval[1])),
			  (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			  (MELTBPARSTR_CSTRING ""), argtab, "",
			  (union meltparam_un *) 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2578:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2579:/ cond");
	  /*cond */ if ( /*_.MAPSTRUCT__V27*/ meltfptr[26])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
		/*^cond */
		/*cond */ if ( /*_.ENTRYSTRUCT__V28*/ meltfptr[27])	/*then */
		  {
		    /*^cond.then */
		    /*_._IF___V33*/ meltfptr[32] =
		      /*_.MAPMAGIC__V24*/ meltfptr[23];;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:2579:/ cond.else");

     /*_._IF___V33*/ meltfptr[32] = NULL;;
		  }
		;
		/*^compute */
		/*_._IF___V32*/ meltfptr[31] = /*_._IF___V33*/ meltfptr[32];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2579:/ clear");
	      /*clear *//*_._IF___V33*/ meltfptr[32] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_._IF___V32*/ meltfptr[31] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2579:/ cond");
	  /*cond */ if ( /*_._IF___V32*/ meltfptr[31])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

		MELT_LOCATION ("warmelt-modes.melt:2580:/ quasiblock");



		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:2582:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[17];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "case ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.MAPMAGIC__V24*/ meltfptr[23];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = " : { /* cloning map value ";
		  /*^apply.arg */
		  argtab[3].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CTYPNAME__V22*/ meltfptr[21];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = " */\n\t  struct ";
		  /*^apply.arg */
		  argtab[5].meltbp_aptr =
		    (melt_ptr_t *) & /*_.MAPSTRUCT__V27*/ meltfptr[26];
		  /*^apply.arg */
		  argtab[6].meltbp_cstring = " *src = (struct ";
		  /*^apply.arg */
		  argtab[7].meltbp_aptr =
		    (melt_ptr_t *) & /*_.MAPSTRUCT__V27*/ meltfptr[26];
		  /*^apply.arg */
		  argtab[8].meltbp_cstring =
		    " *) srcvalv;\n\t  unsigned oldlen =  melt_primtab[src->lenix];\
\n\t  unsigned newlen = 4*src->count/3 + 5;\
\n\t  struct ";
		  /*^apply.arg */
		  argtab[9].meltbp_aptr =
		    (melt_ptr_t *) & /*_.MAPSTRUCT__V27*/ meltfptr[26];
		  /*^apply.arg */
		  argtab[10].meltbp_cstring =
		    " *dst = \n            (struct ";
		  /*^apply.arg */
		  argtab[11].meltbp_aptr =
		    (melt_ptr_t *) & /*_.MAPSTRUCT__V27*/ meltfptr[26];
		  /*^apply.arg */
		  argtab[12].meltbp_cstring =
		    " *) meltgc_raw_new_mappointers((meltobject_ptr_t)newdiscrv, newlen\
);\n\t  unsigned ix = 0;\n\t  dst->meltmap_aux = src->meltmap_aux;\
\
\n\t  if (src->entab)\n            for (ix=0; ix<oldlen; \
\n\t\t ix++) {\n\t       melt_ptr_t curva = src->entab[ix].e_va;\
\n\t \
      ";
		  /*^apply.arg */
		  argtab[13].meltbp_aptr =
		    (melt_ptr_t *) & /*_.TYCNAME__V23*/ meltfptr[22];
		  /*^apply.arg */
		  argtab[14].meltbp_cstring =
		    " curat = src->entab[ix].e_at;\n\t       if (curva != NULL && curat\
 != (";
		  /*^apply.arg */
		  argtab[15].meltbp_aptr =
		    (melt_ptr_t *) & /*_.TYCNAME__V23*/ meltfptr[22];
		  /*^apply.arg */
		  argtab[16].meltbp_cstring =
		    ") HTAB_DELETED_ENTRY)\n\t         meltgc_raw_put_mappointers((void\
*)dst, (const void*)curat, curva);\
\n\t    }\n\t  resv = (melt_ptr_t) dst;\
\n         };\n         break; ";
		  /*_.ADD2OUT__V36*/ meltfptr[35] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[1])),
				(melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
		/*_.LET___V35*/ meltfptr[34] =
		  /*_.ADD2OUT__V36*/ meltfptr[35];;

		MELT_LOCATION ("warmelt-modes.melt:2580:/ clear");
	      /*clear *//*_.ADD2OUT__V36*/ meltfptr[35] = 0;
		/*_._IF___V34*/ meltfptr[32] = /*_.LET___V35*/ meltfptr[34];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2579:/ clear");
	      /*clear *//*_.LET___V35*/ meltfptr[34] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_._IF___V34*/ meltfptr[32] = NULL;;
	    }
	  ;
	  /*^compute */
	  /*_.LET___V21*/ meltfptr[16] = /*_._IF___V34*/ meltfptr[32];;

	  MELT_LOCATION ("warmelt-modes.melt:2554:/ clear");
	    /*clear *//*_.CTYPNAME__V22*/ meltfptr[21] = 0;
	  /*^clear */
	    /*clear *//*_#TIXSUCC__L11*/ meltfnum[7] = 0;
	  /*^clear */
	    /*clear *//*_.TYCNAME__V23*/ meltfptr[22] = 0;
	  /*^clear */
	    /*clear *//*_.MAPMAGIC__V24*/ meltfptr[23] = 0;
	  /*^clear */
	    /*clear *//*_.BOXMAGIC__V25*/ meltfptr[24] = 0;
	  /*^clear */
	    /*clear *//*_.BOXSTRUCT__V26*/ meltfptr[25] = 0;
	  /*^clear */
	    /*clear *//*_.MAPSTRUCT__V27*/ meltfptr[26] = 0;
	  /*^clear */
	    /*clear *//*_.ENTRYSTRUCT__V28*/ meltfptr[27] = 0;
	  /*^clear */
	    /*clear *//*_.ADD2OUT__V29*/ meltfptr[28] = 0;
	  /*^clear */
	    /*clear *//*_.ADD2OUT__V30*/ meltfptr[29] = 0;
	  /*^clear */
	    /*clear *//*_.ADD2OUT__V31*/ meltfptr[30] = 0;
	  /*^clear */
	    /*clear *//*_._IF___V32*/ meltfptr[31] = 0;
	  /*^clear */
	    /*clear *//*_._IF___V34*/ meltfptr[32] = 0;
	  if ( /*_#TIX__L7*/ meltfnum[1] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2549:/ clear");
	    /*clear *//*_.CURCTYP__V16*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L7*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V19*/ meltfptr[17] = 0;
      /*^clear */
	    /*clear *//*_.LET___V21*/ meltfptr[16] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    MELT_LOCATION ("warmelt-modes.melt:2543:/ clear");
	   /*clear *//*_#NBCTYGTYTUP__L6*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V15*/ meltfptr[14] = 0;
    MELT_LOCATION ("warmelt-modes.melt:2607:/ quasiblock");


 /*_#NBVALDESC__L12*/ meltfnum[8] =
      (melt_multiple_length
       ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])));;

    {
      MELT_LOCATION ("warmelt-modes.melt:2609:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2610:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:2611:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring = "/******* cloning the ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBVALDESC__L12*/ meltfnum[8];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " value descriptors *******/";
      /*_.ADD2OUT__V37*/ meltfptr[35] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VALDIX__L13*/ meltfnum[7] = 0;
	   ( /*_#VALDIX__L13*/ meltfnum[7] >= 0)
	   && ( /*_#VALDIX__L13*/ meltfnum[7] < meltcit2__EACHTUP_ln);
	/*_#VALDIX__L13*/ meltfnum[7]++)
	{
	  /*_.CURVALDESC__V38*/ meltfptr[34] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VALDIX__L13*/ meltfnum[7]);




	  {
	    MELT_LOCATION ("warmelt-modes.melt:2615:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2616:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V38*/
					       meltfptr[34]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V38*/ meltfptr[34]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMVALDESC__V40*/ meltfptr[22] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMVALDESC__V40*/ meltfptr[22] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2617:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V38*/
					       meltfptr[34]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[5])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V38*/ meltfptr[34]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 10, "VALDESC_CLONECHUNK");
    /*_.CLONEVALCHK__V41*/ meltfptr[23] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CLONEVALCHK__V41*/ meltfptr[23] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2618:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V38*/
					       meltfptr[34]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[5])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V38*/ meltfptr[34]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
    /*_.VALSTRUCT__V42*/ meltfptr[24] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALSTRUCT__V42*/ meltfptr[24] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2619:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V38*/
					       meltfptr[34]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[5])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V38*/ meltfptr[34]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALOBJMAGIC__V43*/ meltfptr[25] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALOBJMAGIC__V43*/ meltfptr[25] = NULL;;
	    }
	  ;
	  /*^compute */
  /*_#VALDIXSUCC__L14*/ meltfnum[0] =
	    ((1) + ( /*_#VALDIX__L13*/ meltfnum[7]));;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2622:/ apply");
	  /*apply */
	  {
	    union meltparam_un argtab[5];
	    memset (&argtab, 0, sizeof (argtab));
	    /*^apply.arg */
	    argtab[0].meltbp_cstring = "/** cloning value descriptor #";
	    /*^apply.arg */
	    argtab[1].meltbp_long = /*_#VALDIXSUCC__L14*/ meltfnum[0];
	    /*^apply.arg */
	    argtab[2].meltbp_cstring = " ";
	    /*^apply.arg */
	    argtab[3].meltbp_aptr =
	      (melt_ptr_t *) & /*_.NAMVALDESC__V40*/ meltfptr[22];
	    /*^apply.arg */
	    argtab[4].meltbp_cstring = " **/";
	    /*_.ADD2OUT__V44*/ meltfptr[26] =
	      melt_apply ((meltclosure_ptr_t)
			  (( /*!ADD2OUT */ meltfrout->tabval[1])),
			  (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			  (MELTBPARSTR_CSTRING MELTBPARSTR_LONG
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING ""), argtab, "",
			  (union meltparam_un *) 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2623:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
  /*_#eqeq__L15*/ meltfnum[14] =
	    (( /*_.CLONEVALCHK__V41*/ meltfptr[23]) ==
	     (( /*!konst_6_TRUE */ meltfrout->tabval[6])));;
	  MELT_LOCATION ("warmelt-modes.melt:2625:/ cond");
	  /*cond */ if ( /*_#eqeq__L15*/ meltfnum[14])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:2626:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[15];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = " /*default cloning for ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.NAMVALDESC__V40*/ meltfptr[22];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = "*/\n\t\t   case ";
		  /*^apply.arg */
		  argtab[3].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALOBJMAGIC__V43*/ meltfptr[25];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = ": {\n\t\t     struct ";
		  /*^apply.arg */
		  argtab[5].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
		  /*^apply.arg */
		  argtab[6].meltbp_cstring = " *src = (struct ";
		  /*^apply.arg */
		  argtab[7].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
		  /*^apply.arg */
		  argtab[8].meltbp_cstring = "*) srcvalv;\n\t\t     struct ";
		  /*^apply.arg */
		  argtab[9].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
		  /*^apply.arg */
		  argtab[10].meltbp_cstring =
		    " *dst = \n                        (struct ";
		  /*^apply.arg */
		  argtab[11].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
		  /*^apply.arg */
		  argtab[12].meltbp_cstring =
		    "*) meltgc_allocate (sizeof(struct ";
		  /*^apply.arg */
		  argtab[13].meltbp_aptr =
		    (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
		  /*^apply.arg */
		  argtab[14].meltbp_cstring =
		    "), 0);\n\t\t     *dst = *src;\n\t\t     dst->discr = (meltobject_ptr_t\
)newdiscrv;\n\t\t     resv = (melt_ptr_t) dst;\
\n\t\t   }\n\t\t \
  break; ";
		  /*_.ADD2OUT__V46*/ meltfptr[28] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[1])),
				(melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
		/*_._IFELSE___V45*/ meltfptr[27] =
		  /*_.ADD2OUT__V46*/ meltfptr[28];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2625:/ clear");
	      /*clear *//*_.ADD2OUT__V46*/ meltfptr[28] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
    /*_#IS_STRING__L16*/ meltfnum[15] =
		  (melt_magic_discr
		   ((melt_ptr_t) ( /*_.CLONEVALCHK__V41*/ meltfptr[23])) ==
		   MELTOBMAG_STRING);;
		MELT_LOCATION ("warmelt-modes.melt:2638:/ cond");
		/*cond */ if ( /*_#IS_STRING__L16*/ meltfnum[15])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {


		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:2639:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[15];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = " /*explicit cloning for ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.NAMVALDESC__V40*/ meltfptr[22];
			/*^apply.arg */
			argtab[2].meltbp_cstring = "*/\n\t\t   case ";
			/*^apply.arg */
			argtab[3].meltbp_aptr =
			  (melt_ptr_t *) & /*_.VALOBJMAGIC__V43*/
			  meltfptr[25];
			/*^apply.arg */
			argtab[4].meltbp_cstring = ": {\n\t\t     struct ";
			/*^apply.arg */
			argtab[5].meltbp_aptr =
			  (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
			/*^apply.arg */
			argtab[6].meltbp_cstring = " *src = (struct ";
			/*^apply.arg */
			argtab[7].meltbp_aptr =
			  (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
			/*^apply.arg */
			argtab[8].meltbp_cstring =
			  "*) srcvalv;\n\t\t     struct ";
			/*^apply.arg */
			argtab[9].meltbp_aptr =
			  (melt_ptr_t *) & /*_.VALSTRUCT__V42*/ meltfptr[24];
			/*^apply.arg */
			argtab[10].meltbp_cstring =
			  " *dst = NULL;\n\t\t     /* clone chunk for ";
			/*^apply.arg */
			argtab[11].meltbp_aptr =
			  (melt_ptr_t *) & /*_.NAMVALDESC__V40*/ meltfptr[22];
			/*^apply.arg */
			argtab[12].meltbp_cstring = ":*/\n\t\t     ";
			/*^apply.arg */
			argtab[13].meltbp_aptr =
			  (melt_ptr_t *) & /*_.CLONEVALCHK__V41*/
			  meltfptr[23];
			/*^apply.arg */
			argtab[14].meltbp_cstring =
			  ";\n\t\t     if (dst) \n\t\t        resv = (melt_ptr_t) dst;\
\n\t\t   };\n\t\t   break;";
			/*_.ADD2OUT__V48*/ meltfptr[30] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTBUF__V5*/
						    meltfptr[4]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;
		      /*_._IFELSE___V47*/ meltfptr[29] =
			/*_.ADD2OUT__V48*/ meltfptr[30];;
		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:2638:/ clear");
		/*clear *//*_.ADD2OUT__V48*/ meltfptr[30] = 0;
		    }
		    ;
		  }
		else
		  {		/*^cond.else */

		    /*^block */
		    /*anyblock */
		    {


		      MELT_CHECK_SIGNAL ();
		      ;
      /*_#NULL__L17*/ meltfnum[16] =
			(( /*_.CLONEVALCHK__V41*/ meltfptr[23]) == NULL);;
		      MELT_LOCATION ("warmelt-modes.melt:2652:/ cond");
		      /*cond */ if ( /*_#NULL__L17*/ meltfnum[16])	/*then */
			{
			  /*^cond.then */
			  /*^block */
			  /*anyblock */
			  {


			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:2653:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[5];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " /*no cloning for ";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMVALDESC__V40*/
				meltfptr[22];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "*/\n\t\t   case ";
			      /*^apply.arg */
			      argtab[3].meltbp_aptr =
				(melt_ptr_t *) & /*_.VALOBJMAGIC__V43*/
				meltfptr[25];
			      /*^apply.arg */
			      argtab[4].meltbp_cstring = ": break;";
			      /*_.ADD2OUT__V50*/ meltfptr[32] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTBUF__V5*/
							  meltfptr[4]),
					    (MELTBPARSTR_CSTRING
					     MELTBPARSTR_PTR
					     MELTBPARSTR_CSTRING
					     MELTBPARSTR_PTR
					     MELTBPARSTR_CSTRING ""), argtab,
					    "", (union meltparam_un *) 0);
			    }
			    ;
			    /*_._IFELSE___V49*/ meltfptr[31] =
			      /*_.ADD2OUT__V50*/ meltfptr[32];;
			    /*epilog */

			    MELT_LOCATION ("warmelt-modes.melt:2652:/ clear");
		  /*clear *//*_.ADD2OUT__V50*/ meltfptr[32] = 0;
			  }
			  ;
			}
		      else
			{	/*^cond.else */

			  /*^block */
			  /*anyblock */
			  {


#if MELT_HAVE_DEBUG
			    MELT_LOCATION
			      ("warmelt-modes.melt:2658:/ cppif.then");
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
				melt_dbgcounter++;
#endif
				;
			      }
			      ;

			      MELT_CHECK_SIGNAL ();
			      ;
	  /*_#MELT_NEED_DBG__L18*/ meltfnum[17] =
				/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
				( /*melt_need_dbg */
				 melt_need_debug ((int) 0))
#else
				0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
				;;
			      MELT_LOCATION
				("warmelt-modes.melt:2658:/ cond");
			      /*cond */ if ( /*_#MELT_NEED_DBG__L18*/ meltfnum[17])	/*then */
				{
				  /*^cond.then */
				  /*^block */
				  /*anyblock */
				  {

	    /*_#MELT_CALLCOUNT__L19*/ meltfnum[18] =
				      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				      meltcallcount	/* melt_callcount debugging */
#else
				      0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				      ;;

				    MELT_CHECK_SIGNAL ();
				    ;
				    MELT_LOCATION
				      ("warmelt-modes.melt:2658:/ apply");
				    /*apply */
				    {
				      union meltparam_un argtab[7];
				      memset (&argtab, 0, sizeof (argtab));
				      /*^apply.arg */
				      argtab[0].meltbp_long =
					/*_#MELT_CALLCOUNT__L19*/
					meltfnum[18];
				      /*^apply.arg */
				      argtab[1].meltbp_cstring =
					"warmelt-modes.melt";
				      /*^apply.arg */
				      argtab[2].meltbp_long = 2658;
				      /*^apply.arg */
				      argtab[3].meltbp_cstring =
					"invalid cloning in curvaldesc=";
				      /*^apply.arg */
				      argtab[4].meltbp_aptr =
					(melt_ptr_t *) & /*_.CURVALDESC__V38*/
					meltfptr[34];
				      /*^apply.arg */
				      argtab[5].meltbp_cstring = " valdix=";
				      /*^apply.arg */
				      argtab[6].meltbp_long =
					/*_#VALDIX__L13*/ meltfnum[7];
				      /*_.MELT_DEBUG_FUN__V52*/ meltfptr[28] =
					melt_apply ((meltclosure_ptr_t)
						    (( /*!MELT_DEBUG_FUN */
						      meltfrout->tabval[0])),
						    (melt_ptr_t) (( /*nil */
								   NULL)),
						    (MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG ""),
						    argtab, "",
						    (union meltparam_un *) 0);
				    }
				    ;
				    /*_._IF___V51*/ meltfptr[14] =
				      /*_.MELT_DEBUG_FUN__V52*/ meltfptr[28];;
				    /*epilog */

				    MELT_LOCATION
				      ("warmelt-modes.melt:2658:/ clear");
		      /*clear *//*_#MELT_CALLCOUNT__L19*/
				      meltfnum[18] = 0;
				    /*^clear */
		      /*clear *//*_.MELT_DEBUG_FUN__V52*/
				      meltfptr[28] = 0;
				  }
				  ;
				}
			      else
				{	/*^cond.else */

	   /*_._IF___V51*/ meltfptr[14] = NULL;;
				}
			      ;

			      {
				MELT_LOCATION
				  ("warmelt-modes.melt:2658:/ locexp");
				/*void */ (void) 0;
			      }
			      ;
			      /*^quasiblock */


			      /*epilog */

			      /*^clear */
		    /*clear *//*_#MELT_NEED_DBG__L18*/ meltfnum[17]
				= 0;
			      /*^clear */
		    /*clear *//*_._IF___V51*/ meltfptr[14] = 0;
			    }

#else /*MELT_HAVE_DEBUG */
			    /*^cppif.else */
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*void */ (void) 0;
			      }
			      ;
			      /*epilog */
			    }

#endif /*MELT_HAVE_DEBUG */
			    ;

			    {
			      MELT_LOCATION
				("warmelt-modes.melt:2659:/ locexp");
			      error ("MELT ERROR MSG [#%ld]::: %s - %s",
				     melt_dbgcounter,
				     ("invalid cloning for "),
				     melt_string_str ((melt_ptr_t)
						      ( /*_.NAMVALDESC__V40*/
						       meltfptr[22])));
			    }
			    ;
			    MELT_LOCATION
			      ("warmelt-modes.melt:2657:/ quasiblock");


			    /*epilog */
			  }
			  ;
			}
		      ;
		      /*_._IFELSE___V47*/ meltfptr[29] =
			/*_._IFELSE___V49*/ meltfptr[31];;
		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:2638:/ clear");
		/*clear *//*_#NULL__L17*/ meltfnum[16] = 0;
		      /*^clear */
		/*clear *//*_._IFELSE___V49*/ meltfptr[31] = 0;
		    }
		    ;
		  }
		;
		/*_._IFELSE___V45*/ meltfptr[27] =
		  /*_._IFELSE___V47*/ meltfptr[29];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2625:/ clear");
	      /*clear *//*_#IS_STRING__L16*/ meltfnum[15] = 0;
		/*^clear */
	      /*clear *//*_._IFELSE___V47*/ meltfptr[29] = 0;
	      }
	      ;
	    }
	  ;
	  /*_.LET___V39*/ meltfptr[21] = /*_._IFELSE___V45*/ meltfptr[27];;

	  MELT_LOCATION ("warmelt-modes.melt:2616:/ clear");
	    /*clear *//*_.NAMVALDESC__V40*/ meltfptr[22] = 0;
	  /*^clear */
	    /*clear *//*_.CLONEVALCHK__V41*/ meltfptr[23] = 0;
	  /*^clear */
	    /*clear *//*_.VALSTRUCT__V42*/ meltfptr[24] = 0;
	  /*^clear */
	    /*clear *//*_.VALOBJMAGIC__V43*/ meltfptr[25] = 0;
	  /*^clear */
	    /*clear *//*_#VALDIXSUCC__L14*/ meltfnum[0] = 0;
	  /*^clear */
	    /*clear *//*_.ADD2OUT__V44*/ meltfptr[26] = 0;
	  /*^clear */
	    /*clear *//*_#eqeq__L15*/ meltfnum[14] = 0;
	  /*^clear */
	    /*clear *//*_._IFELSE___V45*/ meltfptr[27] = 0;
	  if ( /*_#VALDIX__L13*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2612:/ clear");
	    /*clear *//*_.CURVALDESC__V38*/ meltfptr[34] = 0;
      /*^clear */
	    /*clear *//*_#VALDIX__L13*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_.LET___V39*/ meltfptr[21] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2664:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:2607:/ clear");
	   /*clear *//*_#NBVALDESC__L12*/ meltfnum[8] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V37*/ meltfptr[35] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:2668:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring = "\n/* generated cloning routine trailer */\
\n    default: ;\n  } /*end switch srcmagic for cloning */\
\n end:\n  MELT_EXITFRAME();\n  return (melt_ptr_t) resv;\
\n}  /* end of generated meltgc_clone_with_discriminant */\
\n#undef resv\n#undef srcvalv\n#undef newdiscrv\
\n#undef discrv\n#undef compv\n";
      /*_.ADD2OUT__V53*/ meltfptr[30] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		    (MELTBPARSTR_CSTRING ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2682:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:2492:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V14*/ meltfptr[12] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V53*/ meltfptr[30] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_CLONING_FUN", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_53_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_CLONING_FUN */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING (meltclosure_ptr_t
							     meltclosp_,
							     melt_ptr_t
							     meltfirstargp_,
							     const
							     melt_argdescr_cell_t
							     meltxargdescr_[],
							     union
							     meltparam_un *
							     meltxargtab_,
							     const
							     melt_argdescr_cell_t
							     meltxresdescr_[],
							     union
							     meltparam_un *
							     meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 36
    melt_ptr_t mcfr_varptr[36];
#define MELTFRAM_NBVARNUM 14
    long mcfr_varnum[14];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING_st
	 *) meltfirstargp_;
      /* use arguments meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 36; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING nbval 36*/
  meltfram__.mcfr_nbvar = 36 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_SCANNING", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:2688:/ getarg");
 /*_.CTYGTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2689:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:2689:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:2689:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 2689;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_scanning start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2689:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:2689:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2691:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYGTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2691:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2691:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctygtytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2691) ? (2691) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2691:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2692:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2692:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2692:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2692) ? (2692) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2692:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2693:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:2693:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2693:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2693) ? (2693) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2693:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2694:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2695:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2696:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2697:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** start of code generated by generate_runtypesupport_scanning **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2699:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2701:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_1 */ meltfrout->
					      tabval[1]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2722:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VIX__L6*/ meltfnum[0] = 0;
	   ( /*_#VIX__L6*/ meltfnum[0] >= 0)
	   && ( /*_#VIX__L6*/ meltfnum[0] < meltcit1__EACHTUP_ln);
	/*_#VIX__L6*/ meltfnum[0]++)
	{
	  /*_.CURVALDESC__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VIX__L6*/ meltfnum[0]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2726:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L7*/ meltfnum[1] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2726:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L7*/ meltfnum[1])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2726:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2726;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_scanning curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V14*/ meltfptr[12];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2726:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L8*/ meltfnum[7] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2726:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L7*/ meltfnum[1] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2727:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L9*/ meltfnum[7] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURVALDESC__V14*/ meltfptr[12]),
				   (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])));;
	    MELT_LOCATION ("warmelt-modes.melt:2727:/ cond");
	    /*cond */ if ( /*_#IS_A__L9*/ meltfnum[7])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V18*/ meltfptr[14] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:2727:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curvaldesc"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(2727) ? (2727) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V17*/ meltfptr[15] =
	      /*_._IFELSE___V18*/ meltfptr[14];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2727:/ clear");
	      /*clear *//*_#IS_A__L9*/ meltfnum[7] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V17*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2728:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2729:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*valdesc #"));
	  }
	  ;
  /*_#plI__L10*/ meltfnum[1] =
	    ((1) + ( /*_#VIX__L6*/ meltfnum[0]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2730:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L10*/ meltfnum[1]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2731:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2732:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V19*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V19*/ meltfptr[14] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2732:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V19*/ meltfptr[14])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2733:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2734:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2735:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2736:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2736:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2737:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (": {"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2738:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 9, "VALDESC_FORWCHUNK");
    /*_.FWCHK__V21*/ meltfptr[20] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.FWCHK__V21*/ meltfptr[20] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2740:/ cond");
	  /*cond */ if ( /*_.FWCHK__V21*/ meltfptr[20])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2742:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (2), 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2743:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("struct "));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2744:/ cond");
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURVALDESC__V14*/
						     meltfptr[12]),
						    (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
      /*_.VALDESC_STRUCT__V22*/ meltfptr[21] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.VALDESC_STRUCT__V22*/ meltfptr[21] = NULL;;
		  }
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2744:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.VALDESC_STRUCT__V22*/ meltfptr[21])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2745:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("*src = (struct "));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2746:/ cond");
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURVALDESC__V14*/
						     meltfptr[12]),
						    (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[2])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURVALDESC__V14*/ meltfptr[12])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 3, "VALDESC_STRUCT");
      /*_.VALDESC_STRUCT__V23*/ meltfptr[22] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.VALDESC_STRUCT__V23*/ meltfptr[22] = NULL;;
		  }
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2746:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.VALDESC_STRUCT__V23*/ meltfptr[22])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2747:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("*) p;"));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2748:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (2), 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2749:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.FWCHK__V21*/
							 meltfptr[20])));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2741:/ quasiblock");


		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2740:/ clear");
	      /*clear *//*_.VALDESC_STRUCT__V22*/ meltfptr[21] = 0;
		/*^clear */
	      /*clear *//*_.VALDESC_STRUCT__V23*/ meltfptr[22] = 0;
	      }
	      ;
	    }			/*noelse */
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:2738:/ clear");
	    /*clear *//*_.FWCHK__V21*/ meltfptr[20] = 0;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2751:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2752:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break; }"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2753:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  if ( /*_#VIX__L6*/ meltfnum[0] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2723:/ clear");
	    /*clear *//*_.CURVALDESC__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#VIX__L6*/ meltfnum[0] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#plI__L10*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V19*/ meltfptr[14] = 0;
      /*^clear */
	    /*clear *//*_.VALDESC_OBJMAGIC__V20*/ meltfptr[19] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2757:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2758:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* GTY-ed ctypes scan forward for melt_scanning  */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2761:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYGTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L11*/ meltfnum[7] = 0;
	   ( /*_#TIX__L11*/ meltfnum[7] >= 0)
	   && ( /*_#TIX__L11*/ meltfnum[7] < meltcit2__EACHTUP_ln);
	/*_#TIX__L11*/ meltfnum[7]++)
	{
	  /*_.CURCTYP__V24*/ meltfptr[21] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.CTYGTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L11*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2765:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L12*/ meltfnum[11] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2765:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L12*/ meltfnum[11])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2765:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2765;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_scanning curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V24*/ meltfptr[21];
		    /*_.MELT_DEBUG_FUN__V26*/ meltfptr[20] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V25*/ meltfptr[22] =
		    /*_.MELT_DEBUG_FUN__V26*/ meltfptr[20];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2765:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L13*/ meltfnum[12] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V26*/ meltfptr[20] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V25*/ meltfptr[22] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2765:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L12*/ meltfnum[11] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V25*/ meltfptr[22] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2766:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L14*/ meltfnum[12] =
	    ((1) + ( /*_#TIX__L11*/ meltfnum[7]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2767:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L14*/ meltfnum[12]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2768:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2769:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V27*/ meltfptr[20] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V27*/ meltfptr[20] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2769:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V27*/ meltfptr[20])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2770:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2771:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2773:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2774:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.CTYPG_BOXEDMAGIC__V28*/ meltfptr[22] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_BOXEDMAGIC__V28*/ meltfptr[22] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2774:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_BOXEDMAGIC__V28*/ meltfptr[22])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2775:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (":"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2776:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2777:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2778:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2780:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2781:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V29*/ meltfptr[28] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V29*/ meltfptr[28] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2781:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V29*/
						   meltfptr[28])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2782:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (": {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2783:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (3),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2784:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2785:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V30*/ meltfptr[29] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V30*/ meltfptr[29] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2785:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V30*/
						   meltfptr[29])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2786:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" *src = (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2787:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
    /*_.CTYPG_MAPSTRUCT__V31*/ meltfptr[30] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPSTRUCT__V31*/ meltfptr[30] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2787:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPSTRUCT__V31*/
						   meltfptr[30])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2788:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*) p;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2789:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2790:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("int siz=0, ix=0;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2791:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2792:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("MELT_FORWARDED(src->meltmap_aux);"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2793:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2794:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("if (!src->entab) break;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2795:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2796:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("siz = melt_primtab[src->lenix];"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2797:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2798:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("gcc_assert (siz>0);"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2799:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2800:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("if (melt_is_young (src->entab)) {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2801:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2802:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2803:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V32*/ meltfptr[31] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V32*/ meltfptr[31] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2803:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V32*/ meltfptr[31])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2804:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("* newtab = ggc_alloc_vec_"));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2805:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V33*/ meltfptr[32] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V33*/ meltfptr[32] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2805:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V33*/ meltfptr[32])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2806:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" (siz);"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2807:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2808:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("memcpy (newtab, src->entab, siz * sizeof (struct "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2809:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 17, "CTYPG_ENTRYSTRUCT");
    /*_.CTYPG_ENTRYSTRUCT__V34*/ meltfptr[33] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_ENTRYSTRUCT__V34*/ meltfptr[33] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2809:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_ENTRYSTRUCT__V34*/ meltfptr[33])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2810:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("));"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2811:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2812:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("src->entab = newtab;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2813:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2814:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("} /*end if young entab */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2815:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2816:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("for (ix = 0; ix < siz; ix++) {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2817:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2818:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[5])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
    /*_.CTYPE_CNAME__V35*/ meltfptr[34] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPE_CNAME__V35*/ meltfptr[34] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2818:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPE_CNAME__V35*/
						   meltfptr[34])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2819:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" at = src->entab[ix].e_at;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2820:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2821:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("if (!at || (void*) at == (void*) HTAB_DELETED_ENTRY) {"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2822:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (6),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2823:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("src->entab[ix].e_va = NULL;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2824:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (6),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2825:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("continue;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2826:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2827:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("} /*end if empty at */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2828:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (4),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2829:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("MELT_FORWARDED (src->entab[ix].e_va);"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2830:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2831:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("} /*end for ix*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2832:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2833:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("};    /* end case "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2834:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V24*/
					       meltfptr[21]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V24*/ meltfptr[21]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.CTYPG_MAPMAGIC__V36*/ meltfptr[35] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPG_MAPMAGIC__V36*/ meltfptr[35] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2834:/ locexp");
	    /*add2sbuf_string */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.CTYPG_MAPMAGIC__V36*/
						   meltfptr[35])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2835:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" */"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2836:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2837:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("break;"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2838:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;
	  if ( /*_#TIX__L11*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2762:/ clear");
	    /*clear *//*_.CURCTYP__V24*/ meltfptr[21] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L11*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_#plI__L14*/ meltfnum[12] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V27*/ meltfptr[20] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_BOXEDMAGIC__V28*/ meltfptr[22] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V29*/ meltfptr[28] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V30*/ meltfptr[29] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPSTRUCT__V31*/ meltfptr[30] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V32*/ meltfptr[31] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V33*/ meltfptr[32] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_ENTRYSTRUCT__V34*/ meltfptr[33] = 0;
      /*^clear */
	    /*clear *//*_.CTYPE_CNAME__V35*/ meltfptr[34] = 0;
      /*^clear */
	    /*clear *//*_.CTYPG_MAPMAGIC__V36*/ meltfptr[35] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2841:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_6 */ meltfrout->
					      tabval[6]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2849:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2850:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/**end of code generated by generate_runtypesupport_scanning **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2852:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:2688:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_SCANNING", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_54_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_SCANNING */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM (meltclosure_ptr_t
							  meltclosp_,
							  melt_ptr_t
							  meltfirstargp_,
							  const
							  melt_argdescr_cell_t
							  meltxargdescr_[],
							  union meltparam_un *
							  meltxargtab_,
							  const
							  melt_argdescr_cell_t
							  meltxresdescr_[],
							  union meltparam_un *
							  meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 33
    melt_ptr_t mcfr_varptr[33];
#define MELTFRAM_NBVARNUM 30
    long mcfr_varnum[30];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM_st
	 *) meltfirstargp_;
      /* use arguments meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 33; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM nbval 33*/
  meltfram__.mcfr_nbvar = 33 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_PARAM", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:2860:/ getarg");
 /*_.CTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2861:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:2861:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:2861:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 2861;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_param start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:2861:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:2861:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2862:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2862:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2862:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2862) ? (2862) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2862:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2863:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:2863:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2863:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2863) ? (2863) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2863:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:2864:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:2864:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:2864:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (2864) ? (2864) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:2864:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2865:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:2866:/ quasiblock");


 /*_#NUMDELTA__L6*/ meltfnum[0] = 1;;
    /*^compute */
 /*_#LASTNUM__L7*/ meltfnum[1] = 0;;

    {
      MELT_LOCATION ("warmelt-modes.melt:2872:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2873:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2874:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** start of code generated by generate_runtypesupport_param **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2876:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2877:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/* support for MELT parameter passing*/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2880:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2882:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("enum /* generated enumeration for MELT parameters */ {"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2883:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2884:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("MELTBPAR__NONE=0,"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2885:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L8*/ meltfnum[7] = 0;
	   ( /*_#TIX__L8*/ meltfnum[7] >= 0)
	   && ( /*_#TIX__L8*/ meltfnum[7] < meltcit1__EACHTUP_ln);
	/*_#TIX__L8*/ meltfnum[7]++)
	{
	  /*_.CURCTYP__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L8*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2889:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L9*/ meltfnum[8] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2889:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[8])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2889:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2889;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_param curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V14*/ meltfptr[12];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2889:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L10*/ meltfnum[9] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2889:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[8] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2890:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L11*/ meltfnum[9] =
	    ((1) + ( /*_#TIX__L8*/ meltfnum[7]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2891:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L11*/ meltfnum[9]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2892:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2893:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[1])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V17*/ meltfptr[15] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V17*/ meltfptr[15] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2893:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V17*/ meltfptr[15])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2894:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2895:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2896:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 5, "CTYPE_PARCHAR");
    /*_.CTYPCHAR__V18*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPCHAR__V18*/ meltfptr[14] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2897:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 6, "CTYPE_PARSTRING");
    /*_.CTYPSTR__V19*/ meltfptr[18] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPSTR__V19*/ meltfptr[18] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2901:/ cond");
	  /*cond */ if ( /*_.CTYPCHAR__V18*/ meltfptr[14])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2902:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.CTYPCHAR__V18*/
							 meltfptr[14])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2903:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("   /*="));
		}
		;
    /*_#plI__L12*/ meltfnum[8] =
		  (( /*_#NUMDELTA__L6*/ meltfnum[0]) +
		   ( /*_#TIX__L8*/ meltfnum[7]));;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2904:/ locexp");
		  meltgc_add_strbuf_dec ((melt_ptr_t)
					 ( /*_.OUTBUF__V5*/ meltfptr[4]),
					 ( /*_#plI__L12*/ meltfnum[8]));
		}
		;
    /*_#plI__L13*/ meltfnum[12] =
		  (( /*_#NUMDELTA__L6*/ meltfnum[0]) +
		   ( /*_#TIX__L8*/ meltfnum[7]));;
		MELT_LOCATION ("warmelt-modes.melt:2905:/ compute");
		/*_#LASTNUM__L7*/ meltfnum[1] =
		  /*_#SETQ___L14*/ meltfnum[13] =
		  /*_#plI__L13*/ meltfnum[12];;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2906:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("*/,"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2901:/ quasiblock");


		/*epilog */

		/*^clear */
	      /*clear *//*_#plI__L12*/ meltfnum[8] = 0;
		/*^clear */
	      /*clear *//*_#plI__L13*/ meltfnum[12] = 0;
		/*^clear */
	      /*clear *//*_#SETQ___L14*/ meltfnum[13] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2909:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("   /*-- non parameter --*/"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2908:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2910:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2913:/ cond");
	  /*cond */ if ( /*_.CTYPSTR__V19*/ meltfptr[18])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2914:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("#define "));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2915:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.CTYPSTR__V19*/
							 meltfptr[18])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2916:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("  \"\\x"));
		}
		;
    /*_#plI__L16*/ meltfnum[12] =
		  (( /*_#NUMDELTA__L6*/ meltfnum[0]) +
		   ( /*_#TIX__L8*/ meltfnum[7]));;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2917:/ locexp");
		  meltgc_add_strbuf_hex ((melt_ptr_t)
					 ( /*_.OUTBUF__V5*/ meltfptr[4]),
					 ( /*_#plI__L16*/ meltfnum[12]));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2918:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("\""));
		}
		;
    /*_#plI__L17*/ meltfnum[13] =
		  (( /*_#NUMDELTA__L6*/ meltfnum[0]) +
		   ( /*_#TIX__L8*/ meltfnum[7]));;
		MELT_LOCATION ("warmelt-modes.melt:2919:/ compute");
		/*_#LASTNUM__L7*/ meltfnum[1] =
		  /*_#SETQ___L18*/ meltfnum[17] =
		  /*_#plI__L17*/ meltfnum[13];;
		MELT_LOCATION ("warmelt-modes.melt:2913:/ quasiblock");


		/*_#PROGN___L19*/ meltfnum[18] =
		  /*_#SETQ___L18*/ meltfnum[17];;
		/*^compute */
		/*_#_IFELSE___L15*/ meltfnum[8] =
		  /*_#PROGN___L19*/ meltfnum[18];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2913:/ clear");
	      /*clear *//*_#plI__L16*/ meltfnum[12] = 0;
		/*^clear */
	      /*clear *//*_#plI__L17*/ meltfnum[13] = 0;
		/*^clear */
	      /*clear *//*_#SETQ___L18*/ meltfnum[17] = 0;
		/*^clear */
	      /*clear *//*_#PROGN___L19*/ meltfnum[18] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2921:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("   /*-- non paramstr --*/"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2920:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2922:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (0),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2923:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:2896:/ clear");
	    /*clear *//*_.CTYPCHAR__V18*/ meltfptr[14] = 0;
	  /*^clear */
	    /*clear *//*_.CTYPSTR__V19*/ meltfptr[18] = 0;
	  /*^clear */
	    /*clear *//*_#_IFELSE___L15*/ meltfnum[8] = 0;
	  MELT_LOCATION ("warmelt-modes.melt:2928:/ quasiblock");


  /*_#ARGDESCRMAX__L20*/ meltfnum[12] = 0;;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2929:/ locexp");
	    /*SETARGDESCRMAX__1 */
		   /*_#ARGDESCRMAX__L20*/ meltfnum[12] = MELT_ARGDESCR_MAX;;
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
  /*_#miI__L21*/ meltfnum[13] =
	    (( /*_#ARGDESCRMAX__L20*/ meltfnum[12]) - (10));;
	  /*^compute */
  /*_#gtI__L22*/ meltfnum[17] =
	    (( /*_#LASTNUM__L7*/ meltfnum[1]) >
	     ( /*_#miI__L21*/ meltfnum[13]));;
	  MELT_LOCATION ("warmelt-modes.melt:2933:/ cond");
	  /*cond */ if ( /*_#gtI__L22*/ meltfnum[17])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2934:/ locexp");
		  error ("MELT ERROR MSG [#%ld]::: %s", melt_dbgcounter,
			 ("too many ctypes for generated enum with MELTBPAR* w.r.t. MELT_ARGDESCR_MAX"));
		}
		;

#if MELT_HAVE_DEBUG
		MELT_LOCATION ("warmelt-modes.melt:2936:/ cppif.then");
		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
      /*_#miI__L23*/ meltfnum[18] =
		    (( /*_#ARGDESCRMAX__L20*/ meltfnum[12]) - (2));;
		  /*^compute */
      /*_#ltI__L24*/ meltfnum[8] =
		    (( /*_#LASTNUM__L7*/ meltfnum[1]) <
		     ( /*_#miI__L23*/ meltfnum[18]));;
		  MELT_LOCATION ("warmelt-modes.melt:2936:/ cond");
		  /*cond */ if ( /*_#ltI__L24*/ meltfnum[8])	/*then */
		    {
		      /*^cond.then */
		      /*_._IFELSE___V23*/ meltfptr[22] = ( /*nil */ NULL);;
		    }
		  else
		    {
		      MELT_LOCATION ("warmelt-modes.melt:2936:/ cond.else");

		      /*^block */
		      /*anyblock */
		      {




			{
			  /*^locexp */
			  melt_assert_failed (("exhausted number of ctypes w.r.t MELT_ARGDESCR_MAX"), ("warmelt-modes.melt") ? ("warmelt-modes.melt") : __FILE__, (2936) ? (2936) : __LINE__, __FUNCTION__);
			  ;
			}
			;
		  /*clear *//*_._IFELSE___V23*/ meltfptr[22] = 0;
			/*epilog */
		      }
		      ;
		    }
		  ;
		  /*^compute */
		  /*_.IFCPP___V22*/ meltfptr[21] =
		    /*_._IFELSE___V23*/ meltfptr[22];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2936:/ clear");
		/*clear *//*_#miI__L23*/ meltfnum[18] = 0;
		  /*^clear */
		/*clear *//*_#ltI__L24*/ meltfnum[8] = 0;
		  /*^clear */
		/*clear *//*_._IFELSE___V23*/ meltfptr[22] = 0;
		}

#else /*MELT_HAVE_DEBUG */
		/*^cppif.else */
		/*_.IFCPP___V22*/ meltfptr[21] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		;
		MELT_LOCATION ("warmelt-modes.melt:2933:/ quasiblock");


		/*_.PROGN___V24*/ meltfptr[22] =
		  /*_.IFCPP___V22*/ meltfptr[21];;
		/*^compute */
		/*_._IFELSE___V21*/ meltfptr[18] =
		  /*_.PROGN___V24*/ meltfptr[22];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2933:/ clear");
	      /*clear *//*_.IFCPP___V22*/ meltfptr[21] = 0;
		/*^clear */
	      /*clear *//*_.PROGN___V24*/ meltfptr[22] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
    /*_#miI__L25*/ meltfnum[18] =
		  (( /*_#ARGDESCRMAX__L20*/ meltfnum[12]) - (20));;
		/*^compute */
    /*_#gtI__L26*/ meltfnum[8] =
		  (( /*_#LASTNUM__L7*/ meltfnum[1]) >
		   ( /*_#miI__L25*/ meltfnum[18]));;
		MELT_LOCATION ("warmelt-modes.melt:2938:/ cond");
		/*cond */ if ( /*_#gtI__L26*/ meltfnum[8])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {




		      {
			MELT_LOCATION ("warmelt-modes.melt:2939:/ locexp");
			warning (0, "MELT WARNING MSG [#%ld]::: %s",
				 melt_dbgcounter,
				 ("the number of ctypes is dangerously near MELT_ARGDESCR_MAX"));
		      }
		      ;
		/*clear *//*_._IFELSE___V25*/ meltfptr[21] = 0;
		      /*epilog */
		    }
		    ;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:2938:/ cond.else");

     /*_._IFELSE___V25*/ meltfptr[21] = NULL;;
		  }
		;
		/*^compute */
		/*_._IFELSE___V21*/ meltfptr[18] =
		  /*_._IFELSE___V25*/ meltfptr[21];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:2933:/ clear");
	      /*clear *//*_#miI__L25*/ meltfnum[18] = 0;
		/*^clear */
	      /*clear *//*_#gtI__L26*/ meltfnum[8] = 0;
		/*^clear */
	      /*clear *//*_._IFELSE___V25*/ meltfptr[21] = 0;
	      }
	      ;
	    }
	  ;
	  /*_.LET___V20*/ meltfptr[14] = /*_._IFELSE___V21*/ meltfptr[18];;

	  MELT_LOCATION ("warmelt-modes.melt:2928:/ clear");
	    /*clear *//*_#ARGDESCRMAX__L20*/ meltfnum[12] = 0;
	  /*^clear */
	    /*clear *//*_#miI__L21*/ meltfnum[13] = 0;
	  /*^clear */
	    /*clear *//*_#gtI__L22*/ meltfnum[17] = 0;
	  /*^clear */
	    /*clear *//*_._IFELSE___V21*/ meltfptr[18] = 0;
	  if ( /*_#TIX__L8*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2886:/ clear");
	    /*clear *//*_.CURCTYP__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L8*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_#plI__L11*/ meltfnum[9] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_.LET___V20*/ meltfptr[14] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2944:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   (" MELTBPAR__LAST}; /*end enum for MELT parameters*/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2945:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2946:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2948:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("union meltparam_un /* generated union for MELT parameters */ {"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2949:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2950:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("void* meltbp_any;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2951:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L27*/ meltfnum[18] = 0;
	   ( /*_#TIX__L27*/ meltfnum[18] >= 0)
	   && ( /*_#TIX__L27*/ meltfnum[18] < meltcit2__EACHTUP_ln);
	/*_#TIX__L27*/ meltfnum[18]++)
	{
	  /*_.CURCTYP__V26*/ meltfptr[22] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L27*/ meltfnum[18]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:2955:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L28*/ meltfnum[8] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:2955:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L28*/ meltfnum[8])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L29*/ meltfnum[12] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:2955:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L29*/ meltfnum[12];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 2955;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_param curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V26*/ meltfptr[22];
		    /*_.MELT_DEBUG_FUN__V28*/ meltfptr[18] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V27*/ meltfptr[21] =
		    /*_.MELT_DEBUG_FUN__V28*/ meltfptr[18];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:2955:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L29*/ meltfnum[12] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V28*/ meltfptr[18] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V27*/ meltfptr[21] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:2955:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L28*/ meltfnum[8] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V27*/ meltfptr[21] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2956:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2957:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("/*ctype #"));
	  }
	  ;
  /*_#plI__L30*/ meltfnum[13] =
	    ((1) + ( /*_#TIX__L27*/ meltfnum[18]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2958:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V5*/ meltfptr[4]),
				   ( /*_#plI__L30*/ meltfnum[13]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2959:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2960:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V26*/
					       meltfptr[22]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[1])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V26*/ meltfptr[22]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V29*/ meltfptr[18] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V29*/ meltfptr[18] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2960:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V5*/ meltfptr[4]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V29*/ meltfptr[18])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2961:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2962:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2963:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V26*/
					       meltfptr[22]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V26*/ meltfptr[22]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 7, "CTYPE_ARGFIELD");
    /*_.ARGTYP__V30*/ meltfptr[21] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.ARGTYP__V30*/ meltfptr[21] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2964:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V26*/
					       meltfptr[22]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V26*/ meltfptr[22]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 8, "CTYPE_RESFIELD");
    /*_.RESTYP__V31*/ meltfptr[30] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.RESTYP__V31*/ meltfptr[30] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2967:/ cond");
	  /*cond */ if ( /*_.ARGTYP__V30*/ meltfptr[21])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

		MELT_LOCATION ("warmelt-modes.melt:2968:/ cond");
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURCTYP__V26*/
						     meltfptr[22]),
						    (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURCTYP__V26*/ meltfptr[22])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
      /*_.CTYPE_CNAME__V32*/ meltfptr[31] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.CTYPE_CNAME__V32*/ meltfptr[31] = NULL;;
		  }
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2968:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.CTYPE_CNAME__V32*/ meltfptr[31])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2969:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       (" "));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2970:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.ARGTYP__V30*/
							 meltfptr[21])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2971:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("; /*argument param.*/"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2967:/ quasiblock");


		/*epilog */

		/*^clear */
	      /*clear *//*_.CTYPE_CNAME__V32*/ meltfptr[31] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2974:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("/* no argument */"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2973:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:2976:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:2979:/ cond");
	  /*cond */ if ( /*_.RESTYP__V31*/ meltfptr[30])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2980:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (1), 0);
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2981:/ cond");
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURCTYP__V26*/
						     meltfptr[22]),
						    (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[2])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURCTYP__V26*/ meltfptr[22])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
      /*_.CTYPE_CNAME__V33*/ meltfptr[31] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.CTYPE_CNAME__V33*/ meltfptr[31] = NULL;;
		  }
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2981:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.CTYPE_CNAME__V33*/ meltfptr[31])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2982:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       (" *"));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2983:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       melt_string_str ((melt_ptr_t)
							( /*_.RESTYP__V31*/
							 meltfptr[30])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2984:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("; /*result param.*/"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2979:/ quasiblock");


		/*epilog */

		/*^clear */
	      /*clear *//*_.CTYPE_CNAME__V33*/ meltfptr[31] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:2987:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V5*/ meltfptr[4]),
					    (1), 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:2988:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTBUF__V5*/ meltfptr[4]),
				       ("/*no result*/"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:2986:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:2963:/ clear");
	    /*clear *//*_.ARGTYP__V30*/ meltfptr[21] = 0;
	  /*^clear */
	    /*clear *//*_.RESTYP__V31*/ meltfptr[30] = 0;
	  if ( /*_#TIX__L27*/ meltfnum[18] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:2952:/ clear");
	    /*clear *//*_.CURCTYP__V26*/ meltfptr[22] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L27*/ meltfnum[18] = 0;
      /*^clear */
	    /*clear *//*_#plI__L30*/ meltfnum[13] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V29*/ meltfptr[18] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2991:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2992:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("}; /* end generated union for MELT parameters */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2993:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2994:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			   ("/** end of code generated by generate_runtypesupport_param **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2996:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:2997:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:2866:/ clear");
	   /*clear *//*_#NUMDELTA__L6*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_#LASTNUM__L7*/ meltfnum[1] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:2860:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_PARAM", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_55_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PARAM */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 23
    melt_ptr_t mcfr_varptr[23];
#define MELTFRAM_NBVARNUM 11
    long mcfr_varnum[11];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE_st
	 *) meltfirstargp_;
      /* use arguments meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 23; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE nbval 23*/
  meltfram__.mcfr_nbvar = 23 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_COD2CTYPE", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3002:/ getarg");
 /*_.CTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3003:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3003:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3003:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3003;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_param start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3003:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3003:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3004:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3004:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3004:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3004) ? (3004) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3004:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3005:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3005:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3005:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3005) ? (3005) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3005:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3006:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3006:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3006:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3006) ? (3006) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3006:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3007:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V5*/ meltfptr[4],
			       (unsigned) 65000);;
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:3008:/ quasiblock");


 /*_#NUMDELTA__L6*/ meltfnum[0] = 1;;
    /*^compute */
 /*_#LASTNUM__L7*/ meltfnum[1] = 0;;

    {
      MELT_LOCATION ("warmelt-modes.melt:3014:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3015:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3016:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3017:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("/* start of code generated by generate_runtypesupport_cod2ctype */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3018:/ locexp");
      meltgc_out_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			     (0), 0);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3019:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("melt_ptr_t melt_code_to_ctype (int code) {"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3020:/ locexp");
      meltgc_out_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			     (1), 0);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3021:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("switch (code) {"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3022:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(2), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L8*/ meltfnum[7] = 0;
	   ( /*_#TIX__L8*/ meltfnum[7] >= 0)
	   && ( /*_#TIX__L8*/ meltfnum[7] < meltcit1__EACHTUP_ln);
	/*_#TIX__L8*/ meltfnum[7]++)
	{
	  /*_.CURCTYP__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L8*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3026:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L9*/ meltfnum[8] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3026:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[8])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3026:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3026;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_cod2ctype curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V14*/ meltfptr[12];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3026:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L10*/ meltfnum[9] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3026:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[8] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3027:/ quasiblock");


  /*_#TIXNEXT__L11*/ meltfnum[9] =
	    (( /*_#TIX__L8*/ meltfnum[7]) + (1));;
	  MELT_LOCATION ("warmelt-modes.melt:3028:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[1])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 5, "CTYPE_PARCHAR");
    /*_.CTYPCHAR__V18*/ meltfptr[14] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPCHAR__V18*/ meltfptr[14] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3029:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V14*/
					       meltfptr[12]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.CTYPNAME__V19*/ meltfptr[18] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.CTYPNAME__V19*/ meltfptr[18] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3031:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3032:/ apply");
	  /*apply */
	  {
	    union meltparam_un argtab[5];
	    memset (&argtab, 0, sizeof (argtab));
	    /*^apply.arg */
	    argtab[0].meltbp_cstring = "/* #";
	    /*^apply.arg */
	    argtab[1].meltbp_long = /*_#TIXNEXT__L11*/ meltfnum[9];
	    /*^apply.arg */
	    argtab[2].meltbp_cstring = ": ";
	    /*^apply.arg */
	    argtab[3].meltbp_aptr =
	      (melt_ptr_t *) & /*_.CTYPNAME__V19*/ meltfptr[18];
	    /*^apply.arg */
	    argtab[4].meltbp_cstring = " */";
	    /*_.ADD2OUT__V20*/ meltfptr[19] =
	      melt_apply ((meltclosure_ptr_t)
			  (( /*!ADD2OUT */ meltfrout->tabval[3])),
			  (melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
			  (MELTBPARSTR_CSTRING MELTBPARSTR_LONG
			   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
			   MELTBPARSTR_CSTRING ""), argtab, "",
			  (union meltparam_un *) 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3033:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V5*/ meltfptr[4]), (2),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3034:/ cond");
	  /*cond */ if ( /*_.CTYPCHAR__V18*/ meltfptr[14])	/*then */
	    {
	      /*^cond.then */
	      /*_._IF___V21*/ meltfptr[20] =
		/*_.CTYPNAME__V19*/ meltfptr[18];;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:3034:/ cond.else");

   /*_._IF___V21*/ meltfptr[20] = NULL;;
	    }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3034:/ cond");
	  /*cond */ if ( /*_._IF___V21*/ meltfptr[20])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3035:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[5];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "    case ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CTYPCHAR__V18*/ meltfptr[14];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = ": return MELT_PREDEF(";
		  /*^apply.arg */
		  argtab[3].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CTYPNAME__V19*/ meltfptr[18];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = ");";
		  /*_.ADD2OUT__V23*/ meltfptr[22] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[3])),
				(melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
		/*_._IF___V22*/ meltfptr[21] =
		  /*_.ADD2OUT__V23*/ meltfptr[22];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:3034:/ clear");
	      /*clear *//*_.ADD2OUT__V23*/ meltfptr[22] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_._IF___V22*/ meltfptr[21] = NULL;;
	    }
	  ;
	  /*^compute */
	  /*_.LET___V17*/ meltfptr[15] = /*_._IF___V22*/ meltfptr[21];;

	  MELT_LOCATION ("warmelt-modes.melt:3027:/ clear");
	    /*clear *//*_#TIXNEXT__L11*/ meltfnum[9] = 0;
	  /*^clear */
	    /*clear *//*_.CTYPCHAR__V18*/ meltfptr[14] = 0;
	  /*^clear */
	    /*clear *//*_.CTYPNAME__V19*/ meltfptr[18] = 0;
	  /*^clear */
	    /*clear *//*_.ADD2OUT__V20*/ meltfptr[19] = 0;
	  /*^clear */
	    /*clear *//*_._IF___V21*/ meltfptr[20] = 0;
	  /*^clear */
	    /*clear *//*_._IF___V22*/ meltfptr[21] = 0;
	  if ( /*_#TIX__L8*/ meltfnum[7] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3023:/ clear");
	    /*clear *//*_.CURCTYP__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L8*/ meltfnum[7] = 0;
      /*^clear */
	    /*clear *//*_.LET___V17*/ meltfptr[15] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3038:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(2), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3039:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("default: break;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3040:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(2), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3041:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("} /*end switch code*/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3042:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3043:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("return NULL;"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3044:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(1), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3045:/ locexp");
      meltgc_add_out ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
		      ("} /* end of generated melt_code_to_ctype */"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3046:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3047:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:3008:/ clear");
	   /*clear *//*_#NUMDELTA__L6*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_#LASTNUM__L7*/ meltfnum[1] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:3002:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_COD2CTYPE", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_56_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_COD2CTYPE */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR (meltclosure_ptr_t
							    meltclosp_,
							    melt_ptr_t
							    meltfirstargp_,
							    const
							    melt_argdescr_cell_t
							    meltxargdescr_[],
							    union meltparam_un
							    * meltxargtab_,
							    const
							    melt_argdescr_cell_t
							    meltxresdescr_[],
							    union meltparam_un
							    * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 29
    melt_ptr_t mcfr_varptr[29];
#define MELTFRAM_NBVARNUM 17
    long mcfr_varnum[17];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR_st
	 *) meltfirstargp_;
      /* use arguments meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 29; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR nbval 29*/
  meltfram__.mcfr_nbvar = 29 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_MAG2STR", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3052:/ getarg");
 /*_.CTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.VALDESCTUP__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTNAME__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTNAME__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTDECLBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTDECLBUF__V5*/ meltfptr[4])) !=
	      NULL);


  /*getarg#4 */
  /*^getarg */
  if (meltxargdescr_[3] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTCODEBUF__V6*/ meltfptr[5] =
    (meltxargtab_[3].meltbp_aptr) ? (*(meltxargtab_[3].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3053:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3053:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3053:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3053;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_mag2str start outname=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTNAME__V4*/ meltfptr[3];
	      /*_.MELT_DEBUG_FUN__V8*/ meltfptr[7] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V7*/ meltfptr[6] =
	      /*_.MELT_DEBUG_FUN__V8*/ meltfptr[7];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3053:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V8*/ meltfptr[7] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V7*/ meltfptr[6] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3053:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V7*/ meltfptr[6] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3054:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3054:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V10*/ meltfptr[6] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3054:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctytup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3054) ? (3054) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V10*/ meltfptr[6] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V9*/ meltfptr[7] = /*_._IFELSE___V10*/ meltfptr[6];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3054:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V10*/ meltfptr[6] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V9*/ meltfptr[7] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3055:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.VALDESCTUP__V3*/ meltfptr[2]))
	 == MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3055:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V12*/ meltfptr[11] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3055:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check valdesctup"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3055) ? (3055) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V12*/ meltfptr[11] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V11*/ meltfptr[6] = /*_._IFELSE___V12*/ meltfptr[11];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3055:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V12*/ meltfptr[11] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V11*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3056:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTDECLBUF__V5*/ meltfptr[4]))
	 == MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3056:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V14*/ meltfptr[13] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3056:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outdeclbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3056) ? (3056) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V14*/ meltfptr[13] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V13*/ meltfptr[11] = /*_._IFELSE___V14*/ meltfptr[13];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3056:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V14*/ meltfptr[13] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V13*/ meltfptr[11] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3057:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L6*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5]))
	 == MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3057:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L6*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V16*/ meltfptr[15] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3057:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outcodebuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3057) ? (3057) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V16*/ meltfptr[15] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V15*/ meltfptr[13] = /*_._IFELSE___V16*/ meltfptr[15];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3057:/ clear");
	     /*clear *//*_#IS_STRBUF__L6*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V16*/ meltfptr[15] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V15*/ meltfptr[13] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3058:/ locexp");
      if (35000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTDECLBUF__V5*/ meltfptr[4],
			       (unsigned) 35000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3059:/ locexp");
      if (75000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTCODEBUF__V6*/ meltfptr[5],
			       (unsigned) 75000);;
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:3060:/ quasiblock");


 /*_#NUMDELTA__L7*/ meltfnum[1] = 1;;
    /*^compute */
 /*_#LASTNUM__L8*/ meltfnum[0] = 0;;

    {
      MELT_LOCATION ("warmelt-modes.melt:3066:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V5*/ meltfptr[4]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3067:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTDECLBUF__V5*/ meltfptr[4]),
			   ("/** declaration generated by generate_runtypesupport_mag2str **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3069:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V5*/ meltfptr[4]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3070:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTDECLBUF__V5*/ meltfptr[4]),
			   ("const char* melt_obmag_string (int i);"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3072:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V5*/ meltfptr[4]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3073:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTDECLBUF__V5*/ meltfptr[4]),
			   ("#define MELT_OBMAG_STRING_generated"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3074:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V5*/ meltfptr[4]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3075:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V5*/ meltfptr[4]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3077:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3078:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3079:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
			   ("/** start of code generated by generate_runtypesupport_mag2str **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3081:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3082:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_1 */ meltfrout->
					      tabval[1]))));
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L9*/ meltfnum[8] = 0;
	   ( /*_#TIX__L9*/ meltfnum[8] >= 0)
	   && ( /*_#TIX__L9*/ meltfnum[8] < meltcit1__EACHTUP_ln);
	/*_#TIX__L9*/ meltfnum[8]++)
	{
	  /*_.CURCTYP__V17*/ meltfptr[15] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L9*/ meltfnum[8]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3092:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L10*/ meltfnum[9] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3092:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L10*/ meltfnum[9])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L11*/ meltfnum[10] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3092:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L11*/ meltfnum[10];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3092;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "runtypesupport_mag2str curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V17*/ meltfptr[15];
		    /*_.MELT_DEBUG_FUN__V19*/ meltfptr[18] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V18*/ meltfptr[17] =
		    /*_.MELT_DEBUG_FUN__V19*/ meltfptr[18];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3092:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L11*/ meltfnum[10] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V19*/ meltfptr[18] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V18*/ meltfptr[17] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3092:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L10*/ meltfnum[9] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V18*/ meltfptr[17] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3093:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3094:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L12*/ meltfnum[10] =
	    ((1) + ( /*_#TIX__L9*/ meltfnum[8]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3095:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				   ( /*_#plI__L12*/ meltfnum[10]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3096:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3097:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V17*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V17*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V20*/ meltfptr[18] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V20*/ meltfptr[18] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3097:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V20*/ meltfptr[18])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3098:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]), ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3099:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (4), 0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3100:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V17*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V17*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
    /*_.BOXMAGICSTR__V21*/ meltfptr[17] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.BOXMAGICSTR__V21*/ meltfptr[17] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3102:/ cond");
	  /*cond */ if ( /*_.BOXMAGICSTR__V21*/ meltfptr[17])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3104:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("case "));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3105:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.BOXMAGICSTR__V21*/ meltfptr[17])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3106:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       (": return \""));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3107:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.BOXMAGICSTR__V21*/ meltfptr[17])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3108:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("\";"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:3103:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:3102:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3110:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("/*runtypesupport_mag2str no boxed magic */"));
		}
		;
		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3112:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:3100:/ clear");
	    /*clear *//*_.BOXMAGICSTR__V21*/ meltfptr[17] = 0;
	  MELT_LOCATION ("warmelt-modes.melt:3114:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V17*/
					       meltfptr[15]),
					      (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[3])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V17*/ meltfptr[15]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
    /*_.MAPMAGICSTR__V22*/ meltfptr[17] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.MAPMAGICSTR__V22*/ meltfptr[17] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3116:/ cond");
	  /*cond */ if ( /*_.MAPMAGICSTR__V22*/ meltfptr[17])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3118:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("case "));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3119:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.MAPMAGICSTR__V22*/ meltfptr[17])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3120:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       (": return \""));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3121:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.MAPMAGICSTR__V22*/ meltfptr[17])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3122:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("\";"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:3117:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:3116:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3124:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("/*runtypesupport_mag2str no map magic */"));
		}
		;
		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3126:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:3114:/ clear");
	    /*clear *//*_.MAPMAGICSTR__V22*/ meltfptr[17] = 0;
	  if ( /*_#TIX__L9*/ meltfnum[8] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3089:/ clear");
	    /*clear *//*_.CURCTYP__V17*/ meltfptr[15] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L9*/ meltfnum[8] = 0;
      /*^clear */
	    /*clear *//*_#plI__L12*/ meltfnum[10] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V20*/ meltfptr[18] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3130:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit2__EACHTUP */
      long meltcit2__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.VALDESCTUP__V3*/ meltfptr[2]);
      for ( /*_#VIX__L13*/ meltfnum[9] = 0;
	   ( /*_#VIX__L13*/ meltfnum[9] >= 0)
	   && ( /*_#VIX__L13*/ meltfnum[9] < meltcit2__EACHTUP_ln);
	/*_#VIX__L13*/ meltfnum[9]++)
	{
	  /*_.CURVALDESC__V23*/ meltfptr[17] =
	    melt_multiple_nth ((melt_ptr_t)
			       ( /*_.VALDESCTUP__V3*/ meltfptr[2]),
			       /*_#VIX__L13*/ meltfnum[9]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3134:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L14*/ meltfnum[13] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3134:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L14*/ meltfnum[13])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L15*/ meltfnum[14] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3134:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L15*/ meltfnum[14];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3134;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_mag2str curvaldesc=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURVALDESC__V23*/ meltfptr[17];
		    /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V24*/ meltfptr[23] =
		    /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3134:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L15*/ meltfnum[14] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V25*/ meltfptr[24] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V24*/ meltfptr[23] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3134:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L14*/ meltfnum[13] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V24*/ meltfptr[23] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3135:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L16*/ meltfnum[14] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURVALDESC__V23*/ meltfptr[17]),
				   (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[4])));;
	    MELT_LOCATION ("warmelt-modes.melt:3135:/ cond");
	    /*cond */ if ( /*_#IS_A__L16*/ meltfnum[14])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V27*/ meltfptr[23] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3135:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curvaldesc"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(3135) ? (3135) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V27*/ meltfptr[23] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V26*/ meltfptr[24] =
	      /*_._IFELSE___V27*/ meltfptr[23];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3135:/ clear");
	      /*clear *//*_#IS_A__L16*/ meltfnum[14] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V27*/ meltfptr[23] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V26*/ meltfptr[24] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3136:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3137:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				 ("/*valdesc #"));
	  }
	  ;
  /*_#plI__L17*/ meltfnum[13] =
	    ((1) + ( /*_#VIX__L13*/ meltfnum[9]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3138:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				   ( /*_#plI__L17*/ meltfnum[13]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3139:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3140:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V23*/
					       meltfptr[17]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V23*/ meltfptr[17]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V28*/ meltfptr[23] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V28*/ meltfptr[23] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3140:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V28*/ meltfptr[23])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3141:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t)
				 ( /*_.OUTCODEBUF__V6*/ meltfptr[5]), ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3142:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3143:/ quasiblock");


	  /*^cond */
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURVALDESC__V23*/
					       meltfptr[17]),
					      (melt_ptr_t) (( /*!CLASS_VALUE_DESCRIPTOR */ meltfrout->tabval[4])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURVALDESC__V23*/ meltfptr[17]) /*=obj*/
		  ;
		melt_object_get_field (slot, obj, 2, "VALDESC_OBJMAGIC");
    /*_.VALMAGICSTR__V29*/ meltfptr[28] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.VALMAGICSTR__V29*/ meltfptr[28] = NULL;;
	    }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3145:/ cond");
	  /*cond */ if ( /*_.VALMAGICSTR__V29*/ meltfptr[28])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3147:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("case "));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3148:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.VALMAGICSTR__V29*/ meltfptr[28])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3149:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       (": return \""));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3150:/ locexp");
		  /*add2sbuf_string */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       melt_string_str ((melt_ptr_t)
							( /*_.VALMAGICSTR__V29*/ meltfptr[28])));
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3151:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("\";"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:3146:/ quasiblock");


		/*epilog */
	      }
	      ;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:3145:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:3152:/ locexp");
		  /*add2sbuf_strconst */
		    meltgc_add_strbuf ((melt_ptr_t)
				       ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				       ("/*runtypesupport_mag2str no value magic*/"));
		}
		;
		/*epilog */
	      }
	      ;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3153:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
				      (1), 0);
	  }
	  ;

	  MELT_LOCATION ("warmelt-modes.melt:3143:/ clear");
	    /*clear *//*_.VALMAGICSTR__V29*/ meltfptr[28] = 0;
	  if ( /*_#VIX__L13*/ meltfnum[9] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit2__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3131:/ clear");
	    /*clear *//*_.CURVALDESC__V23*/ meltfptr[17] = 0;
      /*^clear */
	    /*clear *//*_#VIX__L13*/ meltfnum[9] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V26*/ meltfptr[24] = 0;
      /*^clear */
	    /*clear *//*_#plI__L17*/ meltfnum[13] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V28*/ meltfptr[23] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3157:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
			   melt_string_str ((melt_ptr_t)
					    (( /*!konst_5 */ meltfrout->
					      tabval[5]))));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3165:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3166:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTCODEBUF__V6*/ meltfptr[5]),
			   ("/** end of code generated by generate_runtypesupport_mag2str **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3168:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V6*/ meltfptr[5]), (0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:3060:/ clear");
	   /*clear *//*_#NUMDELTA__L7*/ meltfnum[1] = 0;
    /*^clear */
	   /*clear *//*_#LASTNUM__L8*/ meltfnum[0] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:3052:/ clear");
	   /*clear *//*_.IFCPP___V9*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V11*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V13*/ meltfptr[11] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V15*/ meltfptr[13] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_MAG2STR", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_57_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAG2STR */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 54
    melt_ptr_t mcfr_varptr[54];
#define MELTFRAM_NBVARNUM 14
    long mcfr_varnum[14];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN_st
	 *) meltfirstargp_;
      /* use arguments meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 54; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN nbval 54*/
  meltfram__.mcfr_nbvar = 54 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_BOXINGFUN", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3176:/ getarg");
 /*_.CTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTARG__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTARG__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.DECLBUF__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.CODEBUF__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3178:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3178:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3178:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3178;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_boxingfun start outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V6*/ meltfptr[5] =
	      /*_.MELT_DEBUG_FUN__V7*/ meltfptr[6];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3178:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V7*/ meltfptr[6] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V6*/ meltfptr[5] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3178:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V6*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3179:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3179:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V9*/ meltfptr[5] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3179:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctytup is tuple"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3179) ? (3179) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V8*/ meltfptr[6] = /*_._IFELSE___V9*/ meltfptr[5];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3179:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V9*/ meltfptr[5] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V8*/ meltfptr[6] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3180:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3180:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V11*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3180:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check declbuf is buffer"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3180) ? (3180) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V10*/ meltfptr[5] = /*_._IFELSE___V11*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3180:/ clear");
	     /*clear *//*_#IS_STRBUF__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V10*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3181:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L5*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3181:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L5*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V13*/ meltfptr[12] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3181:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check codebuf is buffer"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3181) ? (3181) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V12*/ meltfptr[10] = /*_._IFELSE___V13*/ meltfptr[12];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3181:/ clear");
	     /*clear *//*_#IS_STRBUF__L5*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V13*/ meltfptr[12] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V12*/ meltfptr[10] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3182:/ locexp");
      if (35000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.DECLBUF__V4*/ meltfptr[3],
			       (unsigned) 35000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3183:/ locexp");
      if (75000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.CODEBUF__V5*/ meltfptr[4],
			       (unsigned) 75000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3184:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3185:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3186:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
			   ("/** start of declarations generated by generate_runtypesupport_boxingfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3188:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3190:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3191:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3192:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
			   ("/** start of code generated by generate_runtypesupport_boxingfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3194:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L6*/ meltfnum[0] = 0;
	   ( /*_#TIX__L6*/ meltfnum[0] >= 0)
	   && ( /*_#TIX__L6*/ meltfnum[0] < meltcit1__EACHTUP_ln);
	/*_#TIX__L6*/ meltfnum[0]++)
	{
	  /*_.CURCTYP__V14*/ meltfptr[12] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L6*/ meltfnum[0]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3198:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L7*/ meltfnum[1] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3198:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L7*/ meltfnum[1])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3198:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L8*/ meltfnum[7];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3198;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate runtypesupport_mapfun curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V14*/ meltfptr[12];
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V15*/ meltfptr[14] =
		    /*_.MELT_DEBUG_FUN__V16*/ meltfptr[15];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3198:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L8*/ meltfnum[7] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V16*/ meltfptr[15] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V15*/ meltfptr[14] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3198:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L7*/ meltfnum[1] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V15*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3199:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L9*/ meltfnum[7] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V14*/ meltfptr[12]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[1])));;
	    MELT_LOCATION ("warmelt-modes.melt:3199:/ cond");
	    /*cond */ if ( /*_#IS_A__L9*/ meltfnum[7])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V18*/ meltfptr[14] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3199:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctyp"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(3199) ? (3199) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V17*/ meltfptr[15] =
	      /*_._IFELSE___V18*/ meltfptr[14];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3199:/ clear");
	      /*clear *//*_#IS_A__L9*/ meltfnum[7] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V18*/ meltfptr[14] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V17*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3200:/ block");
	  /*anyblock */
	  {

	    /*^objgoto */
	    /*objgoto */ goto mtch1_0;
	    ;

	  /*objlabel */ mtch1_0:;
	    MELT_LOCATION ("warmelt-modes.melt:3201:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_37;
	    meltlab_count_37++;
	    debugeprintf
	      ("objlabel_37 mtch1_*CLASS_NORMTESTER_INSTANCE/27a9965e. *CLASS_OBJLABELINSTR/850adcb. %ld",
	       meltlab_count_37);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V19*/ meltfptr[14] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPE_CNAME__V20*/ meltfptr[19] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_BOXEDSTRUCT__V22*/ meltfptr[21] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPE_AUTOBOXDISCR__V23*/ meltfptr[22] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPE_AUTOCONSTBOXDISCR__V24*/ meltfptr[23] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_BOXFUN__V25*/ meltfptr[24] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_UNBOXFUN__V26*/ meltfptr[25] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_UPDATEBOXFUN__V27*/ meltfptr[26] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*normtesterinst */
	      (melt_is_instance_of
	       ((melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]),
		(melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[1])))))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 1, "NAMED_NAME");
      /*_.NAMED_NAME__V19*/ meltfptr[14] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
      /*_.CTYPE_CNAME__V20*/ meltfptr[19] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 11,
					   "CTYPE_AUTOBOXDISCR");
      /*_.CTYPE_AUTOBOXDISCR__V23*/ meltfptr[22] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 12,
					   "CTYPE_AUTOCONSTBOXDISCR");
      /*_.CTYPE_AUTOCONSTBOXDISCR__V24*/ meltfptr[23] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 13, "CTYPG_BOXEDMAGIC");
      /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 15,
					   "CTYPG_BOXEDSTRUCT");
      /*_.CTYPG_BOXEDSTRUCT__V22*/ meltfptr[21] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 21, "CTYPG_BOXFUN");
      /*_.CTYPG_BOXFUN__V25*/ meltfptr[24] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 22, "CTYPG_UNBOXFUN");
      /*_.CTYPG_UNBOXFUN__V26*/ meltfptr[25] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 23,
					   "CTYPG_UPDATEBOXFUN");
      /*_.CTYPG_UPDATEBOXFUN__V27*/ meltfptr[26] = slot;
		  };
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3202:/ objgoto");
		  /*objgoto */ goto mtch1_1;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3201:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_1:;
	    MELT_LOCATION ("warmelt-modes.melt:3202:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_38;
	    meltlab_count_38++;
	    debugeprintf
	      ("objlabel_38 mtch1_*CLASS_NORMTESTER_MATCHER/2828864a. *CLASS_OBJLABELINSTR/aa2db2d. %ld",
	       meltlab_count_38);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V28*/ meltfptr[27] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.NAMED_NAME__V19*/ meltfptr[14]) && melt_magic_discr ((melt_ptr_t) ( /*_.NAMED_NAME__V19*/ meltfptr[14])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V28*/ meltfptr[27] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V28*/ meltfptr[27] =
		      /*_.NAMED_NAME__V19*/ meltfptr[14];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3203:/ objgoto");
		  /*objgoto */ goto mtch1_2;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3202:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_2:;
	    MELT_LOCATION ("warmelt-modes.melt:3203:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_39;
	    meltlab_count_39++;
	    debugeprintf
	      ("objlabel_39 mtch1_*CLASS_NORMTESTER_MATCHER/1e2f08b. *CLASS_OBJLABELINSTR/8404b65. %ld",
	       meltlab_count_39);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V29*/ meltfptr[14] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPE_CNAME__V20*/ meltfptr[19]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPE_CNAME__V20*/ meltfptr[19])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V29*/ meltfptr[14] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V29*/ meltfptr[14] =
		      /*_.CTYPE_CNAME__V20*/ meltfptr[19];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3204:/ objgoto");
		  /*objgoto */ goto mtch1_3;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3203:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_3:;
	    MELT_LOCATION ("warmelt-modes.melt:3204:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_40;
	    meltlab_count_40++;
	    debugeprintf
	      ("objlabel_40 mtch1_*CLASS_NORMTESTER_MATCHER/2a1c0177. *CLASS_OBJLABELINSTR/2e113773. %ld",
	       meltlab_count_40);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V30*/ meltfptr[19] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V30*/ meltfptr[19] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V30*/ meltfptr[19] =
		      /*_.CTYPG_BOXEDMAGIC__V21*/ meltfptr[20];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3205:/ objgoto");
		  /*objgoto */ goto mtch1_4;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3204:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_4:;
	    MELT_LOCATION ("warmelt-modes.melt:3205:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_41;
	    meltlab_count_41++;
	    debugeprintf
	      ("objlabel_41 mtch1_*CLASS_NORMTESTER_MATCHER/3605db2b. *CLASS_OBJLABELINSTR/a4f80fd. %ld",
	       meltlab_count_41);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V31*/ meltfptr[20] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_BOXEDSTRUCT__V22*/ meltfptr[21]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_BOXEDSTRUCT__V22*/ meltfptr[21])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V31*/ meltfptr[20] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V31*/ meltfptr[20] =
		      /*_.CTYPG_BOXEDSTRUCT__V22*/ meltfptr[21];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3208:/ objgoto");
		  /*objgoto */ goto mtch1_5;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3205:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_5:;
	    MELT_LOCATION ("warmelt-modes.melt:3208:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_42;
	    meltlab_count_42++;
	    debugeprintf
	      ("objlabel_42 mtch1_*CLASS_NORMTESTER_INSTANCE/391fae36. *CLASS_OBJLABELINSTR/1df23f97. %ld",
	       meltlab_count_42);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V32*/ meltfptr[21] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*normtesterinst */
	      (melt_is_instance_of
	       ((melt_ptr_t) ( /*_.CTYPE_AUTOBOXDISCR__V23*/ meltfptr[22]),
		(melt_ptr_t) (( /*!CLASS_DISCRIMINANT */ meltfrout->tabval[3])))))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CTYPE_AUTOBOXDISCR__V23*/
				    meltfptr[22]) /*=obj*/ ;
		    melt_object_get_field (slot, obj, 1, "NAMED_NAME");
      /*_.NAMED_NAME__V32*/ meltfptr[21] = slot;
		  };
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3211:/ objgoto");
		  /*objgoto */ goto mtch1_6;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3208:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_6:;
	    MELT_LOCATION ("warmelt-modes.melt:3211:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_43;
	    meltlab_count_43++;
	    debugeprintf
	      ("objlabel_43 mtch1_*CLASS_NORMTESTER_MATCHER/23b1c137. *CLASS_OBJLABELINSTR/1314307a. %ld",
	       meltlab_count_43);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V33*/ meltfptr[22] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_BOXFUN__V25*/ meltfptr[24]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_BOXFUN__V25*/ meltfptr[24])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V33*/ meltfptr[22] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V33*/ meltfptr[22] =
		      /*_.CTYPG_BOXFUN__V25*/ meltfptr[24];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3212:/ objgoto");
		  /*objgoto */ goto mtch1_7;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3211:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_7:;
	    MELT_LOCATION ("warmelt-modes.melt:3212:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_44;
	    meltlab_count_44++;
	    debugeprintf
	      ("objlabel_44 mtch1_*CLASS_NORMTESTER_MATCHER/39336ce3. *CLASS_OBJLABELINSTR/1a3e75c2. %ld",
	       meltlab_count_44);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V34*/ meltfptr[24] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_UNBOXFUN__V26*/ meltfptr[25]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_UNBOXFUN__V26*/ meltfptr[25])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V34*/ meltfptr[24] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V34*/ meltfptr[24] =
		      /*_.CTYPG_UNBOXFUN__V26*/ meltfptr[25];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3213:/ objgoto");
		  /*objgoto */ goto mtch1_8;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3212:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_8:;
	    MELT_LOCATION ("warmelt-modes.melt:3213:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_45;
	    meltlab_count_45++;
	    debugeprintf
	      ("objlabel_45 mtch1_*CLASS_NORMTESTER_MATCHER/8499b32. *CLASS_OBJLABELINSTR/219c5783. %ld",
	       meltlab_count_45);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V35*/ meltfptr[25] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_UPDATEBOXFUN__V27*/ meltfptr[26]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_UPDATEBOXFUN__V27*/ meltfptr[26])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V35*/ meltfptr[25] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V35*/ meltfptr[25] =
		      /*_.CTYPG_UPDATEBOXFUN__V27*/ meltfptr[26];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3201:/ objgoto");
		  /*objgoto */ goto mtch1_9;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3213:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3372:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_9:;
	    MELT_LOCATION ("warmelt-modes.melt:3201:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_46;
	    meltlab_count_46++;
	    debugeprintf
	      ("objlabel_46 mtch1_*CLASS_NORMTESTER_SUCCESS/1f9a86cc. *CLASS_OBJLABELINSTR/177a5b8d. %ld",
	       meltlab_count_46);
#endif

	    ;
	    /*^quasiblock */


	    /*_.BOXCONSTDISCR__V36*/ meltfptr[26] =
	      /*_.CTYPE_AUTOCONSTBOXDISCR__V24*/ meltfptr[23];;
	    /*^compute */
	    /*_.BOXDISCR__V37*/ meltfptr[36] =
	      /*_.CTYPE_AUTOBOXDISCR__V23*/ meltfptr[22];;
	    /*^compute */
	    /*_.BOXDISCRNAME__V38*/ meltfptr[37] =
	      /*_.NAMED_NAME__V32*/ meltfptr[21];;
	    /*^compute */
	    /*_.BOXEDMAGIC__V39*/ meltfptr[38] = /*_.SV__V30*/ meltfptr[19];;
	    /*^compute */
	    /*_.BOXEDSTRUCT__V40*/ meltfptr[39] = /*_.SV__V31*/ meltfptr[20];;
	    /*^compute */
	    /*_.BOXFUN__V41*/ meltfptr[40] = /*_.SV__V33*/ meltfptr[22];;
	    /*^compute */
	    /*_.CNAME__V42*/ meltfptr[41] = /*_.SV__V29*/ meltfptr[14];;
	    /*^compute */
	    /*_.CTYPNAM__V43*/ meltfptr[42] = /*_.SV__V28*/ meltfptr[27];;
	    /*^compute */
	    /*_.UNBOXFUN__V44*/ meltfptr[43] = /*_.SV__V34*/ meltfptr[24];;
	    /*^compute */
	    /*_.UPDATEBOXFUN__V45*/ meltfptr[44] =
	      /*_.SV__V35*/ meltfptr[25];;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3215:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("/*gtyctype #"));
	    }
	    ;
   /*_#plI__L10*/ meltfnum[1] =
	      ((1) + ( /*_#TIX__L6*/ meltfnum[0]));;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3216:/ locexp");
	      meltgc_add_strbuf_dec ((melt_ptr_t)
				     ( /*_.DECLBUF__V4*/ meltfptr[3]),
				     ( /*_#plI__L10*/ meltfnum[1]));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3217:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), (" "));
	    }
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3218:/ cond");
	    /*cond */ if (
			   /*ifisa */
			   melt_is_instance_of ((melt_ptr_t)
						( /*_.CURCTYP__V14*/
						 meltfptr[12]),
						(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[4])))
	      )			/*then */
	      {
		/*^cond.then */
		/*^getslot */
		{
		  melt_ptr_t slot = NULL, obj = NULL;
		  obj =
		    (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		  melt_object_get_field (slot, obj, 1, "NAMED_NAME");
     /*_.NAMED_NAME__V46*/ meltfptr[45] = slot;
		};
		;
	      }
	    else
	      {			/*^cond.else */

    /*_.NAMED_NAME__V46*/ meltfptr[45] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3218:/ locexp");
	      meltgc_add_strbuf_ccomment ((melt_ptr_t)
					  ( /*_.DECLBUF__V4*/ meltfptr[3]),
					  melt_string_str ((melt_ptr_t)
							   ( /*_.NAMED_NAME__V46*/ meltfptr[45])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3219:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), ("*/"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3220:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3221:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("melt_ptr_t "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3222:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXFUN__V41*/
						     meltfptr[40])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3223:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("(meltobject_ptr_t discr, "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3224:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3225:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   (" val);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3226:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3227:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("void "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3228:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.UPDATEBOXFUN__V45*/
						     meltfptr[44])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3229:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("(melt_ptr_t boxp, "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3230:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3231:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   (" val);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3232:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3233:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3234:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("static inline "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3235:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3236:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), (" "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3237:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.UNBOXFUN__V44*/
						     meltfptr[43])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3238:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("(melt_ptr_t box_p) {"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3239:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3240:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("if (melt_magic_discr(box_p) == "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3241:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDMAGIC__V39*/
						     meltfptr[38])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3242:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), (")"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3243:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (2),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3244:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("return ((struct "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3245:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDSTRUCT__V40*/
						     meltfptr[39])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3246:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("*)box_p)->val;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3247:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3248:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("return ("));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3249:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3250:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), (")0;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3251:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3252:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   ("} /* end generated "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3253:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.UNBOXFUN__V44*/
						     meltfptr[43])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3254:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.DECLBUF__V4*/ meltfptr[3]), (" */"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3255:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3256:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.DECLBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3258:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("/*gtyctype #"));
	    }
	    ;
   /*_#plI__L11*/ meltfnum[7] =
	      ((1) + ( /*_#TIX__L6*/ meltfnum[0]));;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3259:/ locexp");
	      meltgc_add_strbuf_dec ((melt_ptr_t)
				     ( /*_.CODEBUF__V5*/ meltfptr[4]),
				     ( /*_#plI__L11*/ meltfnum[7]));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3260:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]), (" "));
	    }
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3261:/ cond");
	    /*cond */ if (
			   /*ifisa */
			   melt_is_instance_of ((melt_ptr_t)
						( /*_.CURCTYP__V14*/
						 meltfptr[12]),
						(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[4])))
	      )			/*then */
	      {
		/*^cond.then */
		/*^getslot */
		{
		  melt_ptr_t slot = NULL, obj = NULL;
		  obj =
		    (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		  melt_object_get_field (slot, obj, 1, "NAMED_NAME");
     /*_.NAMED_NAME__V47*/ meltfptr[46] = slot;
		};
		;
	      }
	    else
	      {			/*^cond.else */

    /*_.NAMED_NAME__V47*/ meltfptr[46] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3261:/ locexp");
	      meltgc_add_strbuf_ccomment ((melt_ptr_t)
					  ( /*_.CODEBUF__V5*/ meltfptr[4]),
					  melt_string_str ((melt_ptr_t)
							   ( /*_.NAMED_NAME__V47*/ meltfptr[46])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3262:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]), ("*/"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3263:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3264:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3265:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("melt_ptr_t"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3266:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3267:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXFUN__V41*/
						     meltfptr[40])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3268:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("(meltobject_ptr_t discr_p, "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3269:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3270:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   (" val) { /*generated boxingfun*/"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3271:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3272:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("MELT_ENTERFRAME (2, NULL);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3273:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3274:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#define resv meltfram__.mcfr_varptr[0]"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3276:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3277:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#define discrv meltfram__.mcfr_varptr[1]"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3279:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3280:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("discrv = discr_p;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3282:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3283:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("if (!discrv) discrv = MELT_PREDEF("));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3285:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXDISCRNAME__V38*/
						     meltfptr[37])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3286:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]), (");"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3287:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3288:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("if (melt_magic_discr((melt_ptr_t)discrv) != MELTOBMAG_OBJECT) goto\
 end;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3290:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3291:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("if (((meltobject_ptr_t)(discrv))->meltobj_magic != "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3293:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDMAGIC__V39*/
						     meltfptr[38])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3294:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   (") goto end;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3295:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3296:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("resv = meltgc_allocate (sizeof (struct "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3297:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDSTRUCT__V40*/
						     meltfptr[39])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3298:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("), 0);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3299:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3300:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("((struct "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3301:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDSTRUCT__V40*/
						     meltfptr[39])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3302:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("*) (resv))->discr = (meltobject_ptr_t)discrv;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3303:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3304:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("((struct "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3305:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDSTRUCT__V40*/
						     meltfptr[39])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3306:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("*) (resv))->val = val;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3307:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3308:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("end: MELT_EXITFRAME ();"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3309:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3310:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("return ((melt_ptr_t)(resv));"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3311:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3312:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#undef resv"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3313:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3314:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#undef discrv"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3315:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3316:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("} /* end generated boxingfun "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3317:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXFUN__V41*/
						     meltfptr[40])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3318:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]), (" */"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3319:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3320:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3321:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("void"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3322:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3323:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.UPDATEBOXFUN__V45*/
						     meltfptr[44])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3324:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("(melt_ptr_t box_p, "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3325:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CNAME__V42*/
						     meltfptr[41])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3326:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   (" val) { /*generated updateboxfun */"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3327:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3328:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("MELT_ENTERFRAME (1, NULL);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3329:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3330:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#define boxv meltfram__.mcfr_varptr[0]"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3332:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3333:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("boxv = box_p;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3334:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3335:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("if (melt_magic_discr((melt_ptr_t)boxv) != "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3337:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDMAGIC__V39*/
						     meltfptr[38])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3338:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   (") goto end;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3341:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_A__L12*/ meltfnum[11] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.BOXCONSTDISCR__V36*/ meltfptr[26]),
				   (melt_ptr_t) (( /*!CLASS_DISCRIMINANT */
						  meltfrout->tabval[3])));;
	    MELT_LOCATION ("warmelt-modes.melt:3342:/ cond");
	    /*cond */ if ( /*_#IS_A__L12*/ meltfnum[11])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3343:/ quasiblock");


		  MELT_LOCATION ("warmelt-modes.melt:3344:/ cond");
		  /*cond */ if (
				 /*ifisa */
				 melt_is_instance_of ((melt_ptr_t)
						      ( /*_.BOXCONSTDISCR__V36*/ meltfptr[26]),
						      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[4])))
		    )		/*then */
		    {
		      /*^cond.then */
		      /*^getslot */
		      {
			melt_ptr_t slot = NULL, obj = NULL;
			obj =
			  (melt_ptr_t) ( /*_.BOXCONSTDISCR__V36*/
					meltfptr[26]) /*=obj*/ ;
			melt_object_get_field (slot, obj, 1, "NAMED_NAME");
       /*_.BOXCONSTDISCRNAME__V48*/ meltfptr[47] = slot;
		      };
		      ;
		    }
		  else
		    {		/*^cond.else */

      /*_.BOXCONSTDISCRNAME__V48*/ meltfptr[47] = NULL;;
		    }
		  ;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3346:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[3];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_cstring =
		      "if (((melt_ptr_t) boxv)->u_discr\n\t\t\t\t  /* generated updatebox\
 nonconst */\n\t\t\t\t  == (meltobject_ptr_t) MELT_PREDEF (";
		    /*^apply.arg */
		    argtab[1].meltbp_aptr =
		      (melt_ptr_t *) & /*_.BOXCONSTDISCRNAME__V48*/
		      meltfptr[47];
		    /*^apply.arg */
		    argtab[2].meltbp_cstring = "))\n\t\t\t        goto end ;";
		    /*_.ADD2OUT__V49*/ meltfptr[48] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!ADD2OUT */ meltfrout->tabval[5])),
				  (melt_ptr_t) ( /*_.CODEBUF__V5*/
						meltfptr[4]),
				  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3352:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.CODEBUF__V5*/
					       meltfptr[4]), (1), 0);
		  }
		  ;

		  MELT_LOCATION ("warmelt-modes.melt:3343:/ clear");
	       /*clear *//*_.BOXCONSTDISCRNAME__V48*/ meltfptr[47] = 0;
		  /*^clear */
	       /*clear *//*_.ADD2OUT__V49*/ meltfptr[48] = 0;
		  /*epilog */
		}
		;
	      }			/*noelse */
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3356:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("((struct "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3357:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.BOXEDSTRUCT__V40*/
						     meltfptr[39])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3358:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("*) (boxv))->val = val;"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3359:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (1),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3360:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("meltgc_touch ((melt_ptr_t)boxv);"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3361:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3362:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("end: MELT_EXITFRAME ();"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3363:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3364:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("#undef boxv"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3365:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3366:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   ("} /* end generated updateboxfun "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3367:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.UPDATEBOXFUN__V45*/
						     meltfptr[44])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3368:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.CODEBUF__V5*/ meltfptr[4]), (" */"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3369:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3370:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.CODEBUF__V5*/ meltfptr[4]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;

	    MELT_LOCATION ("warmelt-modes.melt:3201:/ clear");
	     /*clear *//*_.BOXCONSTDISCR__V36*/ meltfptr[26] = 0;
	    /*^clear */
	     /*clear *//*_.BOXDISCR__V37*/ meltfptr[36] = 0;
	    /*^clear */
	     /*clear *//*_.BOXDISCRNAME__V38*/ meltfptr[37] = 0;
	    /*^clear */
	     /*clear *//*_.BOXEDMAGIC__V39*/ meltfptr[38] = 0;
	    /*^clear */
	     /*clear *//*_.BOXEDSTRUCT__V40*/ meltfptr[39] = 0;
	    /*^clear */
	     /*clear *//*_.BOXFUN__V41*/ meltfptr[40] = 0;
	    /*^clear */
	     /*clear *//*_.CNAME__V42*/ meltfptr[41] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPNAM__V43*/ meltfptr[42] = 0;
	    /*^clear */
	     /*clear *//*_.UNBOXFUN__V44*/ meltfptr[43] = 0;
	    /*^clear */
	     /*clear *//*_.UPDATEBOXFUN__V45*/ meltfptr[44] = 0;
	    /*^clear */
	     /*clear *//*_#plI__L10*/ meltfnum[1] = 0;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V46*/ meltfptr[45] = 0;
	    /*^clear */
	     /*clear *//*_#plI__L11*/ meltfnum[7] = 0;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V47*/ meltfptr[46] = 0;
	    /*^clear */
	     /*clear *//*_#IS_A__L12*/ meltfnum[11] = 0;
	    /*^objgoto */
	    /*objgoto */ goto mtch1__end /*endmatch */ ;
	    ;

	  /*objlabel */ mtch1_10:;
	    MELT_LOCATION ("warmelt-modes.melt:3372:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_47;
	    meltlab_count_47++;
	    debugeprintf
	      ("objlabel_47 mtch1_*CLASS_NORMTESTER_SUCCESS/28c4e9. *CLASS_OBJLABELINSTR/832ec4c. %ld",
	       meltlab_count_47);
#endif

	    ;
	    /*^quasiblock */


	    MELT_LOCATION ("warmelt-modes.melt:3374:/ cond");
	    /*cond */ if (
			   /*ifisa */
			   melt_is_instance_of ((melt_ptr_t)
						( /*_.CURCTYP__V14*/
						 meltfptr[12]),
						(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[4])))
	      )			/*then */
	      {
		/*^cond.then */
		/*^getslot */
		{
		  melt_ptr_t slot = NULL, obj = NULL;
		  obj =
		    (melt_ptr_t) ( /*_.CURCTYP__V14*/ meltfptr[12]) /*=obj*/ ;
		  melt_object_get_field (slot, obj, 1, "NAMED_NAME");
     /*_.NAMED_NAME__V50*/ meltfptr[47] = slot;
		};
		;
	      }
	    else
	      {			/*^cond.else */

    /*_.NAMED_NAME__V50*/ meltfptr[47] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3373:/ locexp");
	      error ("MELT ERROR MSG [#%ld]::: %s - %s", melt_dbgcounter,
		     ("invalid GTY-ed ctype for boxing"),
		     melt_string_str ((melt_ptr_t)
				      ( /*_.NAMED_NAME__V50*/ meltfptr[47])));
	    }
	    ;

#if MELT_HAVE_DEBUG
	    MELT_LOCATION ("warmelt-modes.melt:3375:/ cppif.then");
	    /*^block */
	    /*anyblock */
	    {


	      MELT_CHECK_SIGNAL ();
	      ;
	      /*^cond */
	      /*cond */ if (( /*nil */ NULL))	/*then */
		{
		  /*^cond.then */
		  /*_._IFELSE___V52*/ meltfptr[26] = ( /*nil */ NULL);;
		}
	      else
		{
		  MELT_LOCATION ("warmelt-modes.melt:3375:/ cond.else");

		  /*^block */
		  /*anyblock */
		  {




		    {
		      /*^locexp */
		      melt_assert_failed (("invalid curctype"),
					  ("warmelt-modes.melt")
					  ? ("warmelt-modes.melt") : __FILE__,
					  (3375) ? (3375) : __LINE__,
					  __FUNCTION__);
		      ;
		    }
		    ;
		 /*clear *//*_._IFELSE___V52*/ meltfptr[26] = 0;
		    /*epilog */
		  }
		  ;
		}
	      ;
	      /*^compute */
	      /*_.IFCPP___V51*/ meltfptr[48] =
		/*_._IFELSE___V52*/ meltfptr[26];;
	      /*epilog */

	      MELT_LOCATION ("warmelt-modes.melt:3375:/ clear");
	       /*clear *//*_._IFELSE___V52*/ meltfptr[26] = 0;
	    }

#else /*MELT_HAVE_DEBUG */
	    /*^cppif.else */
	    /*_.IFCPP___V51*/ meltfptr[48] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;

	    MELT_LOCATION ("warmelt-modes.melt:3372:/ clear");
	     /*clear *//*_.NAMED_NAME__V50*/ meltfptr[47] = 0;
	    /*^clear */
	     /*clear *//*_.IFCPP___V51*/ meltfptr[48] = 0;
	    /*^objgoto */
	    /*objgoto */ goto mtch1__end /*endmatch */ ;
	    ;

	  /*objlabel */ mtch1__end:;
	    MELT_LOCATION ("warmelt-modes.melt:3200:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_48;
	    meltlab_count_48++;
	    debugeprintf
	      ("objlabel_48 mtch1__end_h56951771 *CLASS_OBJLABELINSTR/36503db. %ld",
	       meltlab_count_48);
#endif

	    ;
	  }
	  ;
	  if ( /*_#TIX__L6*/ meltfnum[0] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3195:/ clear");
	    /*clear *//*_.CURCTYP__V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L6*/ meltfnum[0] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V17*/ meltfptr[15] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3378:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3379:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
			   ("/** end of declarations generated by generate_runtypesupport_boxingfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3381:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3382:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.DECLBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3383:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3384:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
			   ("/** end of code generated by generate_runtypesupport_boxingfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3386:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3387:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.CODEBUF__V5*/ meltfptr[4]),
				(0), 0);
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3388:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L13*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3388:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L13*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L14*/ meltfnum[7] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3388:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L14*/ meltfnum[7];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3388;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_boxingfun end outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V54*/ meltfptr[37] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V53*/ meltfptr[36] =
	      /*_.MELT_DEBUG_FUN__V54*/ meltfptr[37];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3388:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L14*/ meltfnum[7] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V54*/ meltfptr[37] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V53*/ meltfptr[36] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3388:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L13*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V53*/ meltfptr[36] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:3176:/ clear");
	   /*clear *//*_.IFCPP___V8*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V10*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V12*/ meltfptr[10] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_BOXINGFUN", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_58_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_BOXINGFUN */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN (meltclosure_ptr_t
							   meltclosp_,
							   melt_ptr_t
							   meltfirstargp_,
							   const
							   melt_argdescr_cell_t
							   meltxargdescr_[],
							   union meltparam_un
							   * meltxargtab_,
							   const
							   melt_argdescr_cell_t
							   meltxresdescr_[],
							   union meltparam_un
							   * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 75
    melt_ptr_t mcfr_varptr[75];
#define MELTFRAM_NBVARNUM 21
    long mcfr_varnum[21];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN_st
	 *) meltfirstargp_;
      /* use arguments meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 75; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN nbval 75*/
  meltfram__.mcfr_nbvar = 75 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_MAPFUN", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3394:/ getarg");
 /*_.CTYTUP__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTARG__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTARG__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTBUF__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3395:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3395:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3395:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3395;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_mapfun start outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V6*/ meltfptr[5] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V5*/ meltfptr[4] =
	      /*_.MELT_DEBUG_FUN__V6*/ meltfptr[5];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3395:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V6*/ meltfptr[5] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V5*/ meltfptr[4] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3395:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V5*/ meltfptr[4] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3396:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_MULTIPLE__L3*/ meltfnum[1] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1])) ==
	 MELTOBMAG_MULTIPLE);;
      MELT_LOCATION ("warmelt-modes.melt:3396:/ cond");
      /*cond */ if ( /*_#IS_MULTIPLE__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V8*/ meltfptr[4] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3396:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check ctytup is tuple"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3396) ? (3396) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V8*/ meltfptr[4] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V7*/ meltfptr[5] = /*_._IFELSE___V8*/ meltfptr[4];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3396:/ clear");
	     /*clear *//*_#IS_MULTIPLE__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V8*/ meltfptr[4] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V7*/ meltfptr[5] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3397:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_STRBUF__L4*/ meltfnum[0] =
	(melt_magic_discr ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3])) ==
	 MELTOBMAG_STRBUF);;
      MELT_LOCATION ("warmelt-modes.melt:3397:/ cond");
      /*cond */ if ( /*_#IS_STRBUF__L4*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V10*/ meltfptr[9] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3397:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf is buffer"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3397) ? (3397) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V10*/ meltfptr[9] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V9*/ meltfptr[4] = /*_._IFELSE___V10*/ meltfptr[9];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3397:/ clear");
	     /*clear *//*_#IS_STRBUF__L4*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V10*/ meltfptr[9] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V9*/ meltfptr[4] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3398:/ locexp");
      if (65000 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V4*/ meltfptr[3],
			       (unsigned) 65000);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3399:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3400:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3401:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
			   ("/** start of code generated by generate_runtypesupport_mapfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3403:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3404:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;
    /*citerblock FOREACH_IN_MULTIPLE */
    {
      /* start foreach_in_multiple meltcit1__EACHTUP */
      long meltcit1__EACHTUP_ln =
	melt_multiple_length ((melt_ptr_t) /*_.CTYTUP__V2*/ meltfptr[1]);
      for ( /*_#TIX__L5*/ meltfnum[1] = 0;
	   ( /*_#TIX__L5*/ meltfnum[1] >= 0)
	   && ( /*_#TIX__L5*/ meltfnum[1] < meltcit1__EACHTUP_ln);
	/*_#TIX__L5*/ meltfnum[1]++)
	{
	  /*_.CURCTYP__V11*/ meltfptr[9] =
	    melt_multiple_nth ((melt_ptr_t) ( /*_.CTYTUP__V2*/ meltfptr[1]),
			       /*_#TIX__L5*/ meltfnum[1]);




#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3409:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L6*/ meltfnum[0] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3409:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L6*/ meltfnum[0])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L7*/ meltfnum[6] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3409:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[5];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L7*/ meltfnum[6];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3409;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate runtypesupport_mapfun curctyp=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURCTYP__V11*/ meltfptr[9];
		    /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V12*/ meltfptr[11] =
		    /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3409:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L7*/ meltfnum[6] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V12*/ meltfptr[11] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3409:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L6*/ meltfnum[0] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V12*/ meltfptr[11] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3410:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#IS_A__L8*/ meltfnum[6] =
	      melt_is_instance_of ((melt_ptr_t)
				   ( /*_.CURCTYP__V11*/ meltfptr[9]),
				   (melt_ptr_t) (( /*!CLASS_CTYPE_GTY */
						  meltfrout->tabval[1])));;
	    MELT_LOCATION ("warmelt-modes.melt:3410:/ cond");
	    /*cond */ if ( /*_#IS_A__L8*/ meltfnum[6])	/*then */
	      {
		/*^cond.then */
		/*_._IFELSE___V15*/ meltfptr[11] = ( /*nil */ NULL);;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3410:/ cond.else");

		/*^block */
		/*anyblock */
		{




		  {
		    /*^locexp */
		    melt_assert_failed (("check curctyp"),
					("warmelt-modes.melt")
					? ("warmelt-modes.melt") : __FILE__,
					(3410) ? (3410) : __LINE__,
					__FUNCTION__);
		    ;
		  }
		  ;
		/*clear *//*_._IFELSE___V15*/ meltfptr[11] = 0;
		  /*epilog */
		}
		;
	      }
	    ;
	    /*^compute */
	    /*_.IFCPP___V14*/ meltfptr[12] =
	      /*_._IFELSE___V15*/ meltfptr[11];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3410:/ clear");
	      /*clear *//*_#IS_A__L8*/ meltfnum[6] = 0;
	    /*^clear */
	      /*clear *//*_._IFELSE___V15*/ meltfptr[11] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*_.IFCPP___V14*/ meltfptr[12] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3411:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				 ("/*gtyctype #"));
	  }
	  ;
  /*_#plI__L9*/ meltfnum[0] =
	    ((1) + ( /*_#TIX__L5*/ meltfnum[1]));;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3412:/ locexp");
	    meltgc_add_strbuf_dec ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   ( /*_#plI__L9*/ meltfnum[0]));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3413:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				 (" "));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3414:/ cond");
	  /*cond */ if (
			 /*ifisa */
			 melt_is_instance_of ((melt_ptr_t)
					      ( /*_.CURCTYP__V11*/
					       meltfptr[9]),
					      (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
	    )			/*then */
	    {
	      /*^cond.then */
	      /*^getslot */
	      {
		melt_ptr_t slot = NULL, obj = NULL;
		obj =
		  (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/ ;
		melt_object_get_field (slot, obj, 1, "NAMED_NAME");
    /*_.NAMED_NAME__V16*/ meltfptr[11] = slot;
	      };
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_.NAMED_NAME__V16*/ meltfptr[11] = NULL;;
	    }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3414:/ locexp");
	    meltgc_add_strbuf_ccomment ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]),
					melt_string_str ((melt_ptr_t)
							 ( /*_.NAMED_NAME__V16*/ meltfptr[11])));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3415:/ locexp");
	    /*add2sbuf_strconst */
	      meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				 ("*/"));
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3416:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V4*/ meltfptr[3]), (1),
				      0);
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:3417:/ block");
	  /*anyblock */
	  {

	    /*^objgoto */
	    /*objgoto */ goto mtch1_0;
	    ;

	  /*objlabel */ mtch1_0:;
	    MELT_LOCATION ("warmelt-modes.melt:3418:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_49;
	    meltlab_count_49++;
	    debugeprintf
	      ("objlabel_49 mtch1_*CLASS_NORMTESTER_INSTANCE/37c50d89. *CLASS_OBJLABELINSTR/28e7b93b. %ld",
	       meltlab_count_49);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V17*/ meltfptr[16] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPE_CNAME__V18*/ meltfptr[17] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPSTRUCT__V19*/ meltfptr[18] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPMAGIC__V20*/ meltfptr[19] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPDISCR__V21*/ meltfptr[20] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPUNIMEMB__V22*/ meltfptr[21] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_NEWMAPFUN__V23*/ meltfptr[22] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPGETFUN__V24*/ meltfptr[23] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPPUTFUN__V25*/ meltfptr[24] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPREMOVEFUN__V26*/ meltfptr[25] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPCOUNTFUN__V27*/ meltfptr[26] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPSIZEFUN__V28*/ meltfptr[27] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPNATTFUN__V29*/ meltfptr[28] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPNVALFUN__V30*/ meltfptr[29] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPAUXDATAFUN__V31*/ meltfptr[30] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPG_MAPAUXPUTFUN__V32*/ meltfptr[31] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*normtesterinst */
	      (melt_is_instance_of
	       ((melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]),
		(melt_ptr_t) (( /*!CLASS_CTYPE_GTY */ meltfrout->tabval[1])))))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 1, "NAMED_NAME");
      /*_.NAMED_NAME__V17*/ meltfptr[16] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 4, "CTYPE_CNAME");
      /*_.CTYPE_CNAME__V18*/ meltfptr[17] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 14, "CTYPG_MAPMAGIC");
      /*_.CTYPG_MAPMAGIC__V20*/ meltfptr[19] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 18, "CTYPG_MAPSTRUCT");
      /*_.CTYPG_MAPSTRUCT__V19*/ meltfptr[18] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 19, "CTYPG_MAPDISCR");
      /*_.CTYPG_MAPDISCR__V21*/ meltfptr[20] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 20, "CTYPG_MAPUNIMEMB");
      /*_.CTYPG_MAPUNIMEMB__V22*/ meltfptr[21] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 24, "CTYPG_NEWMAPFUN");
      /*_.CTYPG_NEWMAPFUN__V23*/ meltfptr[22] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 25, "CTYPG_MAPGETFUN");
      /*_.CTYPG_MAPGETFUN__V24*/ meltfptr[23] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 26, "CTYPG_MAPPUTFUN");
      /*_.CTYPG_MAPPUTFUN__V25*/ meltfptr[24] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 27,
					   "CTYPG_MAPREMOVEFUN");
      /*_.CTYPG_MAPREMOVEFUN__V26*/ meltfptr[25] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 28,
					   "CTYPG_MAPCOUNTFUN");
      /*_.CTYPG_MAPCOUNTFUN__V27*/ meltfptr[26] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 29, "CTYPG_MAPSIZEFUN");
      /*_.CTYPG_MAPSIZEFUN__V28*/ meltfptr[27] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 30, "CTYPG_MAPNATTFUN");
      /*_.CTYPG_MAPNATTFUN__V29*/ meltfptr[28] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 31, "CTYPG_MAPNVALFUN");
      /*_.CTYPG_MAPNVALFUN__V30*/ meltfptr[29] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 32,
					   "CTYPG_MAPAUXDATAFUN");
      /*_.CTYPG_MAPAUXDATAFUN__V31*/ meltfptr[30] = slot;
		  };
		  ;
		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CURCTYP__V11*/ meltfptr[9]) /*=obj*/
		      ;
		    melt_object_get_field (slot, obj, 33,
					   "CTYPG_MAPAUXPUTFUN");
      /*_.CTYPG_MAPAUXPUTFUN__V32*/ meltfptr[31] = slot;
		  };
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3419:/ objgoto");
		  /*objgoto */ goto mtch1_1;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3418:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_1:;
	    MELT_LOCATION ("warmelt-modes.melt:3419:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_50;
	    meltlab_count_50++;
	    debugeprintf
	      ("objlabel_50 mtch1_*CLASS_NORMTESTER_MATCHER/cdf97b. *CLASS_OBJLABELINSTR/3df2ef4. %ld",
	       meltlab_count_50);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V33*/ meltfptr[32] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.NAMED_NAME__V17*/ meltfptr[16]) && melt_magic_discr ((melt_ptr_t) ( /*_.NAMED_NAME__V17*/ meltfptr[16])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V33*/ meltfptr[32] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V33*/ meltfptr[32] =
		      /*_.NAMED_NAME__V17*/ meltfptr[16];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3420:/ objgoto");
		  /*objgoto */ goto mtch1_2;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3419:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_2:;
	    MELT_LOCATION ("warmelt-modes.melt:3420:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_51;
	    meltlab_count_51++;
	    debugeprintf
	      ("objlabel_51 mtch1_*CLASS_NORMTESTER_MATCHER/1e9af6a7. *CLASS_OBJLABELINSTR/16b7aedd. %ld",
	       meltlab_count_51);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V34*/ meltfptr[16] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPE_CNAME__V18*/ meltfptr[17]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPE_CNAME__V18*/ meltfptr[17])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V34*/ meltfptr[16] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V34*/ meltfptr[16] =
		      /*_.CTYPE_CNAME__V18*/ meltfptr[17];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3421:/ objgoto");
		  /*objgoto */ goto mtch1_3;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3420:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_3:;
	    MELT_LOCATION ("warmelt-modes.melt:3421:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_52;
	    meltlab_count_52++;
	    debugeprintf
	      ("objlabel_52 mtch1_*CLASS_NORMTESTER_MATCHER/1226b391. *CLASS_OBJLABELINSTR/161a22b7. %ld",
	       meltlab_count_52);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V35*/ meltfptr[17] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPSTRUCT__V19*/ meltfptr[18]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPSTRUCT__V19*/ meltfptr[18])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V35*/ meltfptr[17] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V35*/ meltfptr[17] =
		      /*_.CTYPG_MAPSTRUCT__V19*/ meltfptr[18];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3422:/ objgoto");
		  /*objgoto */ goto mtch1_4;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3421:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_4:;
	    MELT_LOCATION ("warmelt-modes.melt:3422:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_53;
	    meltlab_count_53++;
	    debugeprintf
	      ("objlabel_53 mtch1_*CLASS_NORMTESTER_MATCHER/25e7d219. *CLASS_OBJLABELINSTR/130bca99. %ld",
	       meltlab_count_53);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V36*/ meltfptr[18] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPMAGIC__V20*/ meltfptr[19]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPMAGIC__V20*/ meltfptr[19])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V36*/ meltfptr[18] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V36*/ meltfptr[18] =
		      /*_.CTYPG_MAPMAGIC__V20*/ meltfptr[19];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3423:/ objgoto");
		  /*objgoto */ goto mtch1_5;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3422:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_5:;
	    MELT_LOCATION ("warmelt-modes.melt:3423:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_54;
	    meltlab_count_54++;
	    debugeprintf
	      ("objlabel_54 mtch1_*CLASS_NORMTESTER_INSTANCE/2091636c. *CLASS_OBJLABELINSTR/148496d5. %ld",
	       meltlab_count_54);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.NAMED_NAME__V37*/ meltfptr[19] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*normtesterinst */
	      (melt_is_instance_of
	       ((melt_ptr_t) ( /*_.CTYPG_MAPDISCR__V21*/ meltfptr[20]),
		(melt_ptr_t) (( /*!CLASS_DISCRIMINANT */ meltfrout->tabval[4])))))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^getslot */
		  {
		    melt_ptr_t slot = NULL, obj = NULL;
		    obj =
		      (melt_ptr_t) ( /*_.CTYPG_MAPDISCR__V21*/ meltfptr[20])
		      /*=obj*/ ;
		    melt_object_get_field (slot, obj, 1, "NAMED_NAME");
      /*_.NAMED_NAME__V37*/ meltfptr[19] = slot;
		  };
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3425:/ objgoto");
		  /*objgoto */ goto mtch1_6;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3423:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_6:;
	    MELT_LOCATION ("warmelt-modes.melt:3425:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_55;
	    meltlab_count_55++;
	    debugeprintf
	      ("objlabel_55 mtch1_*CLASS_NORMTESTER_MATCHER/3b2b7e50. *CLASS_OBJLABELINSTR/330bd6ca. %ld",
	       meltlab_count_55);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V38*/ meltfptr[20] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPUNIMEMB__V22*/ meltfptr[21]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPUNIMEMB__V22*/ meltfptr[21])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V38*/ meltfptr[20] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V38*/ meltfptr[20] =
		      /*_.CTYPG_MAPUNIMEMB__V22*/ meltfptr[21];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3426:/ objgoto");
		  /*objgoto */ goto mtch1_7;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3425:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_7:;
	    MELT_LOCATION ("warmelt-modes.melt:3426:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_56;
	    meltlab_count_56++;
	    debugeprintf
	      ("objlabel_56 mtch1_*CLASS_NORMTESTER_MATCHER/2f46a6a4. *CLASS_OBJLABELINSTR/1809d698. %ld",
	       meltlab_count_56);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V39*/ meltfptr[21] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_NEWMAPFUN__V23*/ meltfptr[22]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_NEWMAPFUN__V23*/ meltfptr[22])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V39*/ meltfptr[21] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V39*/ meltfptr[21] =
		      /*_.CTYPG_NEWMAPFUN__V23*/ meltfptr[22];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3427:/ objgoto");
		  /*objgoto */ goto mtch1_8;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3426:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_8:;
	    MELT_LOCATION ("warmelt-modes.melt:3427:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_57;
	    meltlab_count_57++;
	    debugeprintf
	      ("objlabel_57 mtch1_*CLASS_NORMTESTER_MATCHER/12e08284. *CLASS_OBJLABELINSTR/103aa02d. %ld",
	       meltlab_count_57);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V40*/ meltfptr[22] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPGETFUN__V24*/ meltfptr[23]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPGETFUN__V24*/ meltfptr[23])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V40*/ meltfptr[22] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V40*/ meltfptr[22] =
		      /*_.CTYPG_MAPGETFUN__V24*/ meltfptr[23];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3428:/ objgoto");
		  /*objgoto */ goto mtch1_9;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3427:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_9:;
	    MELT_LOCATION ("warmelt-modes.melt:3428:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_58;
	    meltlab_count_58++;
	    debugeprintf
	      ("objlabel_58 mtch1_*CLASS_NORMTESTER_MATCHER/366b174a. *CLASS_OBJLABELINSTR/19fcde7. %ld",
	       meltlab_count_58);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V41*/ meltfptr[23] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPPUTFUN__V25*/ meltfptr[24]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPPUTFUN__V25*/ meltfptr[24])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V41*/ meltfptr[23] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V41*/ meltfptr[23] =
		      /*_.CTYPG_MAPPUTFUN__V25*/ meltfptr[24];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3429:/ objgoto");
		  /*objgoto */ goto mtch1_10;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3428:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_10:;
	    MELT_LOCATION ("warmelt-modes.melt:3429:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_59;
	    meltlab_count_59++;
	    debugeprintf
	      ("objlabel_59 mtch1_*CLASS_NORMTESTER_MATCHER/26b2d57. *CLASS_OBJLABELINSTR/2ce5856a. %ld",
	       meltlab_count_59);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V42*/ meltfptr[24] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPREMOVEFUN__V26*/ meltfptr[25]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPREMOVEFUN__V26*/ meltfptr[25])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V42*/ meltfptr[24] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V42*/ meltfptr[24] =
		      /*_.CTYPG_MAPREMOVEFUN__V26*/ meltfptr[25];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3430:/ objgoto");
		  /*objgoto */ goto mtch1_11;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3429:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_11:;
	    MELT_LOCATION ("warmelt-modes.melt:3430:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_60;
	    meltlab_count_60++;
	    debugeprintf
	      ("objlabel_60 mtch1_*CLASS_NORMTESTER_MATCHER/14665789. *CLASS_OBJLABELINSTR/3887567f. %ld",
	       meltlab_count_60);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V43*/ meltfptr[25] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPCOUNTFUN__V27*/ meltfptr[26]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPCOUNTFUN__V27*/ meltfptr[26])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V43*/ meltfptr[25] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V43*/ meltfptr[25] =
		      /*_.CTYPG_MAPCOUNTFUN__V27*/ meltfptr[26];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3431:/ objgoto");
		  /*objgoto */ goto mtch1_12;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3430:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_12:;
	    MELT_LOCATION ("warmelt-modes.melt:3431:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_61;
	    meltlab_count_61++;
	    debugeprintf
	      ("objlabel_61 mtch1_*CLASS_NORMTESTER_MATCHER/27b15e89. *CLASS_OBJLABELINSTR/1883438a. %ld",
	       meltlab_count_61);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V44*/ meltfptr[26] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPSIZEFUN__V28*/ meltfptr[27]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPSIZEFUN__V28*/ meltfptr[27])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V44*/ meltfptr[26] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V44*/ meltfptr[26] =
		      /*_.CTYPG_MAPSIZEFUN__V28*/ meltfptr[27];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3432:/ objgoto");
		  /*objgoto */ goto mtch1_13;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3431:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_13:;
	    MELT_LOCATION ("warmelt-modes.melt:3432:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_62;
	    meltlab_count_62++;
	    debugeprintf
	      ("objlabel_62 mtch1_*CLASS_NORMTESTER_MATCHER/3a4f8e0b. *CLASS_OBJLABELINSTR/a14c1b4. %ld",
	       meltlab_count_62);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V45*/ meltfptr[27] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPNATTFUN__V29*/ meltfptr[28]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPNATTFUN__V29*/ meltfptr[28])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V45*/ meltfptr[27] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V45*/ meltfptr[27] =
		      /*_.CTYPG_MAPNATTFUN__V29*/ meltfptr[28];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3433:/ objgoto");
		  /*objgoto */ goto mtch1_14;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3432:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_14:;
	    MELT_LOCATION ("warmelt-modes.melt:3433:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_63;
	    meltlab_count_63++;
	    debugeprintf
	      ("objlabel_63 mtch1_*CLASS_NORMTESTER_MATCHER/30d4941a. *CLASS_OBJLABELINSTR/9281e9e. %ld",
	       meltlab_count_63);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V46*/ meltfptr[28] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPNVALFUN__V30*/ meltfptr[29]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPNVALFUN__V30*/ meltfptr[29])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V46*/ meltfptr[28] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V46*/ meltfptr[28] =
		      /*_.CTYPG_MAPNVALFUN__V30*/ meltfptr[29];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3434:/ objgoto");
		  /*objgoto */ goto mtch1_15;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3433:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_15:;
	    MELT_LOCATION ("warmelt-modes.melt:3434:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_64;
	    meltlab_count_64++;
	    debugeprintf
	      ("objlabel_64 mtch1_*CLASS_NORMTESTER_MATCHER/610c1b5. *CLASS_OBJLABELINSTR/1fab59c5. %ld",
	       meltlab_count_64);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V47*/ meltfptr[29] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPAUXDATAFUN__V31*/ meltfptr[30]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPAUXDATAFUN__V31*/ meltfptr[30])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V47*/ meltfptr[29] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V47*/ meltfptr[29] =
		      /*_.CTYPG_MAPAUXDATAFUN__V31*/ meltfptr[30];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3435:/ objgoto");
		  /*objgoto */ goto mtch1_16;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3434:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_16:;
	    MELT_LOCATION ("warmelt-modes.melt:3435:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_65;
	    meltlab_count_65++;
	    debugeprintf
	      ("objlabel_65 mtch1_*CLASS_NORMTESTER_MATCHER/c23ba87. *CLASS_OBJLABELINSTR/21341f80. %ld",
	       meltlab_count_65);
#endif

	    ;
	    /*^clear */
	     /*clear *//*_.SV__V48*/ meltfptr[30] = 0;
	    /*^cond */
	    /*cond */ if (
			   /*SOMESTRVAL_mtch1__1? */ (( /*_.CTYPG_MAPAUXPUTFUN__V32*/ meltfptr[31]) && melt_magic_discr ((melt_ptr_t) ( /*_.CTYPG_MAPAUXPUTFUN__V32*/ meltfptr[31])) == MELTOBMAG_STRING))	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

		  /*^clear */
	       /*clear *//*_.SV__V48*/ meltfptr[30] = 0;

		  {
		    /*^locexp */
		    /*SOMESTRVAL_mtch1__1! *//*_.SV__V48*/ meltfptr[30] =
		      /*_.CTYPG_MAPAUXPUTFUN__V32*/ meltfptr[31];;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3418:/ objgoto");
		  /*objgoto */ goto mtch1_17;
		  ;
		}
		;
	      }
	    else
	      {
		MELT_LOCATION ("warmelt-modes.melt:3435:/ cond.else");

		/*^block */
		/*anyblock */
		{

		  MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
		  /*objgoto */ goto mtch1_18;
		  ;
		}
		;
	      }
	    ;

	  /*objlabel */ mtch1_17:;
	    MELT_LOCATION ("warmelt-modes.melt:3418:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_66;
	    meltlab_count_66++;
	    debugeprintf
	      ("objlabel_66 mtch1_*CLASS_NORMTESTER_SUCCESS/3d076dec. *CLASS_OBJLABELINSTR/2943339a. %ld",
	       meltlab_count_66);
#endif

	    ;
	    /*^quasiblock */


	    /*_.CNAME__V49*/ meltfptr[31] = /*_.SV__V34*/ meltfptr[16];;
	    /*^compute */
	    /*_.CTYPNAM__V50*/ meltfptr[49] = /*_.SV__V33*/ meltfptr[32];;
	    /*^compute */
	    /*_.MAPAUXDATAFUN__V51*/ meltfptr[50] =
	      /*_.SV__V47*/ meltfptr[29];;
	    /*^compute */
	    /*_.MAPAUXPUTFUN__V52*/ meltfptr[51] =
	      /*_.SV__V48*/ meltfptr[30];;
	    /*^compute */
	    /*_.MAPCOUNTFUN__V53*/ meltfptr[52] = /*_.SV__V43*/ meltfptr[25];;
	    /*^compute */
	    /*_.MAPDISCR__V54*/ meltfptr[53] =
	      /*_.CTYPG_MAPDISCR__V21*/ meltfptr[20];;
	    /*^compute */
	    /*_.MAPDISCRNAME__V55*/ meltfptr[54] =
	      /*_.NAMED_NAME__V37*/ meltfptr[19];;
	    /*^compute */
	    /*_.MAPGETFUN__V56*/ meltfptr[55] = /*_.SV__V40*/ meltfptr[22];;
	    /*^compute */
	    /*_.MAPMAGIC__V57*/ meltfptr[56] = /*_.SV__V36*/ meltfptr[18];;
	    /*^compute */
	    /*_.MAPNATTFUN__V58*/ meltfptr[57] = /*_.SV__V45*/ meltfptr[27];;
	    /*^compute */
	    /*_.MAPNVALFUN__V59*/ meltfptr[58] = /*_.SV__V46*/ meltfptr[28];;
	    /*^compute */
	    /*_.MAPPUTFUN__V60*/ meltfptr[59] = /*_.SV__V41*/ meltfptr[23];;
	    /*^compute */
	    /*_.MAPREMOVEFUN__V61*/ meltfptr[60] =
	      /*_.SV__V42*/ meltfptr[24];;
	    /*^compute */
	    /*_.MAPSIZEFUN__V62*/ meltfptr[61] = /*_.SV__V44*/ meltfptr[26];;
	    /*^compute */
	    /*_.MAPSTRUCT__V63*/ meltfptr[62] = /*_.SV__V35*/ meltfptr[17];;
	    /*^compute */
	    /*_.MAPUNIMEMB__V64*/ meltfptr[63] = /*_.SV__V38*/ meltfptr[20];;
	    /*^compute */
	    /*_.NEWMAPFUN__V65*/ meltfptr[64] = /*_.SV__V39*/ meltfptr[21];;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3437:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3438:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   ("/***map support for GTY ctype "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3439:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CTYPNAM__V50*/
						     meltfptr[49])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3440:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]), (" **/"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3441:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L10*/ meltfnum[6] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.NEWMAPFUN__V65*/ meltfptr[64])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3445:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L10*/ meltfnum[6])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3446:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline melt_ptr_t /*New map for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3447:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3448:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3449:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.NEWMAPFUN__V65*/ meltfptr[64])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3450:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (meltobject_ptr_t discr, unsigned len) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3451:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3452:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  (( /*!konst_5 */
							    meltfrout->
							    tabval[5]))));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3457:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3458:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  (( /*!konst_6 */
							    meltfrout->
							    tabval[6]))));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3462:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3463:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" */"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3464:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3445:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3467:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/* no new map function */"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3466:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3470:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L11*/ meltfnum[10] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPGETFUN__V56*/ meltfptr[55])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3474:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L11*/ meltfnum[10])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3475:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline melt_ptr_t /* Map getter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3476:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3477:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3478:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPGETFUN__V56*/ meltfptr[55])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3479:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (melt_ptr_t map_p, "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3480:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3481:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" attr) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3482:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3483:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_p || !attr "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3484:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3485:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_p) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3486:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3487:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3488:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3489:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return NULL;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3490:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3491:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return melt_raw_get_mappointers ((void*)map_p, (void*)attr);"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3492:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3493:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map getter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3494:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3495:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3496:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3474:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3499:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map getter function*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3498:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3502:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L12*/ meltfnum[11] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPPUTFUN__V60*/ meltfptr[59])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3506:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L12*/ meltfnum[11])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3507:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline void /* Map putter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3508:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3509:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3510:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPPUTFUN__V60*/ meltfptr[59])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3511:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (melt_ptr_t map_p, "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3512:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3513:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" attr, melt_ptr_t valu_p) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3514:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3515:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_p || !attr || !valu_p"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3516:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3517:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_p) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3518:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3519:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3520:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3521:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3522:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3523:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("meltgc_raw_put_mappointers ((void*)map_p, (void*)attr, valu_p);"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3524:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3525:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map putter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3526:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3527:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3506:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3530:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map putter*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3529:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3532:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L13*/ meltfnum[12] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPREMOVEFUN__V61*/ meltfptr[60])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3536:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L13*/ meltfnum[12])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3537:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline void /* Map remover for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3538:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3539:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3540:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPREMOVEFUN__V61*/ meltfptr[60])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3541:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (melt_ptr_t map_p, "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3542:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3543:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" attr) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3544:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3545:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_p || !attr"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3546:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3547:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_p) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3548:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3549:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3550:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3551:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3552:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3553:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("meltgc_raw_remove_mappointers ((void*)map_p, (void*)attr);"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3554:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3555:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map remover for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3556:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3557:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3558:/ locexp");
		    /*void */ (void) 0;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3536:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3561:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map remover*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3560:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3564:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L14*/ meltfnum[13] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPCOUNTFUN__V53*/ meltfptr[52])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3568:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L14*/ meltfnum[13])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3569:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline unsigned /* Map counter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3570:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3571:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3572:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPCOUNTFUN__V53*/ meltfptr[52])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3573:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (struct "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3574:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPSTRUCT__V63*/ meltfptr[62])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3575:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("* map_s) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3576:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3577:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_s"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3578:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3579:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_s) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3580:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3581:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3582:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3583:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3584:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3585:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return map_s->count;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3586:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3587:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map counter for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3588:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3589:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3590:/ locexp");
		    /*void */ (void) 0;
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3568:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3593:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map counter function*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3592:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3596:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L15*/ meltfnum[14] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPSIZEFUN__V62*/ meltfptr[61])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3600:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L15*/ meltfnum[14])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3601:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline unsigned /* Map size for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3602:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3603:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3604:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPSIZEFUN__V62*/ meltfptr[61])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3605:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (struct "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3606:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPSTRUCT__V63*/ meltfptr[62])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3607:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("* map_s) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3608:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3609:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_s"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3610:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3611:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_s) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3612:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3613:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3614:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3615:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3616:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3617:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return melt_primtab[map_s->lenix];"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3618:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3619:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map size for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3620:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3621:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3600:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3624:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/* no map size function */"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3623:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3626:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L16*/ meltfnum[15] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPNATTFUN__V58*/ meltfptr[57])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3631:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L16*/ meltfnum[15])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3632:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3633:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3634:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/* Map nth attr for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3635:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3636:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3637:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPNATTFUN__V58*/ meltfptr[57])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3638:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (struct "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3639:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPSTRUCT__V63*/ meltfptr[62])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3640:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("* map_s, int ix) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3641:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3642:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3643:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" at = 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3644:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3645:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_s"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3646:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3647:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_s) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3648:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3649:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3650:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3651:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3652:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3653:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("at = map_s->entab[ix].e_at;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3654:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3655:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if ((void*) at == (void*) HTAB_DELETED_ENTRY) return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3656:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return at;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3657:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3658:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map nth attr for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3659:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3660:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3631:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3663:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map nth attr function*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3662:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3665:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L17*/ meltfnum[16] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPNVALFUN__V59*/ meltfptr[58])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3669:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L17*/ meltfnum[16])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3670:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("static inline melt_ptr_t "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3671:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/* Map nth value for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3672:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3673:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/ "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3674:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPNVALFUN__V59*/ meltfptr[58])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3675:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" (struct "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3676:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPSTRUCT__V63*/ meltfptr[62])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3677:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("* map_s, int ix) {"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3678:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3679:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CNAME__V49*/
							   meltfptr[31])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3680:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" at = 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3681:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3682:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if (!map_s"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3683:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3684:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (" || melt_magic_discr ((melt_ptr_t) map_s) != "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3685:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.MAPMAGIC__V57*/ meltfptr[56])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3686:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 (")"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3687:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (4), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3688:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3689:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3690:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("at = map_s->entab[ix].e_at;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3691:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (2), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3692:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("if ((void*) at == (void*) HTAB_DELETED_ENTRY) return 0;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3693:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("return map_s->entab[ix].e_va;"));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3694:/ locexp");
		    meltgc_strbuf_add_indent ((melt_ptr_t)
					      ( /*_.OUTBUF__V4*/ meltfptr[3]),
					      (0), 0);
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3695:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("} /*end generated map nth value for "));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3696:/ locexp");
		    /*add2sbuf_string */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 melt_string_str ((melt_ptr_t)
							  ( /*_.CTYPNAM__V50*/
							   meltfptr[49])));
		  }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3697:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3669:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  {
		    MELT_LOCATION ("warmelt-modes.melt:3700:/ locexp");
		    /*add2sbuf_strconst */
		      meltgc_add_strbuf ((melt_ptr_t)
					 ( /*_.OUTBUF__V4*/ meltfptr[3]),
					 ("/*no map nth value function*/"));
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3699:/ quasiblock");


		  /*epilog */
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3702:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L18*/ meltfnum[17] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPAUXDATAFUN__V51*/ meltfptr[50])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3706:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L18*/ meltfnum[17])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3707:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[9];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_cstring =
		      " /* map auxiliary data access for ";
		    /*^apply.arg */
		    argtab[1].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CTYPNAM__V50*/ meltfptr[49];
		    /*^apply.arg */
		    argtab[2].meltbp_cstring =
		      " */\n\t       static inline melt_ptr_t ";
		    /*^apply.arg */
		    argtab[3].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPAUXDATAFUN__V51*/ meltfptr[50];
		    /*^apply.arg */
		    argtab[4].meltbp_cstring =
		      " (melt_ptr_t map_p)\n\t       {\n\t         if (melt_magic_discr (map_p\
) == ";
		    /*^apply.arg */
		    argtab[5].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPMAGIC__V57*/ meltfptr[56];
		    /*^apply.arg */
		    argtab[6].meltbp_cstring = ")\n\t\t   return ((struct ";
		    /*^apply.arg */
		    argtab[7].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPSTRUCT__V63*/ meltfptr[62];
		    /*^apply.arg */
		    argtab[8].meltbp_cstring =
		      "*)map_p)->meltmap_aux;\n\t\t return NULL;\
\n\t       }\n\t       ";
		    /*_.ADD2OUT__V67*/ meltfptr[66] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!ADD2OUT */ meltfrout->tabval[7])),
				  (melt_ptr_t) ( /*_.OUTBUF__V4*/
						meltfptr[3]),
				  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IFELSE___V66*/ meltfptr[65] =
		    /*_.ADD2OUT__V67*/ meltfptr[66];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3706:/ clear");
	       /*clear *//*_.ADD2OUT__V67*/ meltfptr[66] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3719:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[3];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_cstring =
		      "/*no map auxiliary data access function for ";
		    /*^apply.arg */
		    argtab[1].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CTYPNAM__V50*/ meltfptr[49];
		    /*^apply.arg */
		    argtab[2].meltbp_cstring = "*/";
		    /*_.ADD2OUT__V68*/ meltfptr[66] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!ADD2OUT */ meltfrout->tabval[7])),
				  (melt_ptr_t) ( /*_.OUTBUF__V4*/
						meltfptr[3]),
				  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3718:/ quasiblock");


		  /*_.PROGN___V69*/ meltfptr[68] =
		    /*_.ADD2OUT__V68*/ meltfptr[66];;
		  /*^compute */
		  /*_._IFELSE___V66*/ meltfptr[65] =
		    /*_.PROGN___V69*/ meltfptr[68];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3706:/ clear");
	       /*clear *//*_.ADD2OUT__V68*/ meltfptr[66] = 0;
		  /*^clear */
	       /*clear *//*_.PROGN___V69*/ meltfptr[68] = 0;
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3721:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
   /*_#IS_STRING__L19*/ meltfnum[18] =
	      (melt_magic_discr
	       ((melt_ptr_t) ( /*_.MAPAUXPUTFUN__V52*/ meltfptr[51])) ==
	       MELTOBMAG_STRING);;
	    MELT_LOCATION ("warmelt-modes.melt:3725:/ cond");
	    /*cond */ if ( /*_#IS_STRING__L19*/ meltfnum[18])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3726:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[9];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_cstring =
		      " /* map auxiliary data put for ";
		    /*^apply.arg */
		    argtab[1].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CTYPNAM__V50*/ meltfptr[49];
		    /*^apply.arg */
		    argtab[2].meltbp_cstring =
		      " */\n\t       static inline melt_ptr_t ";
		    /*^apply.arg */
		    argtab[3].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPAUXPUTFUN__V52*/ meltfptr[51];
		    /*^apply.arg */
		    argtab[4].meltbp_cstring =
		      " (melt_ptr_t map_p, melt_ptr_t val_p)\
\n\t       {\n\t         if (melt_magic_discr (map_p) == ";
		    /*^apply.arg */
		    argtab[5].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPMAGIC__V57*/ meltfptr[56];
		    /*^apply.arg */
		    argtab[6].meltbp_cstring = ") {\n\t\t   ((struct ";
		    /*^apply.arg */
		    argtab[7].meltbp_aptr =
		      (melt_ptr_t *) & /*_.MAPSTRUCT__V63*/ meltfptr[62];
		    /*^apply.arg */
		    argtab[8].meltbp_cstring =
		      "*)map_p)->meltmap_aux = val_p;\n\t\t   meltgc_touch_dest (map_p, val_p\
);\n                 }\n\t\t return NULL;\
\n\t       }\n\t \
      ";
		    /*_.ADD2OUT__V71*/ meltfptr[68] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!ADD2OUT */ meltfrout->tabval[7])),
				  (melt_ptr_t) ( /*_.OUTBUF__V4*/
						meltfptr[3]),
				  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IFELSE___V70*/ meltfptr[66] =
		    /*_.ADD2OUT__V71*/ meltfptr[68];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3725:/ clear");
	       /*clear *//*_.ADD2OUT__V71*/ meltfptr[68] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

		/*^block */
		/*anyblock */
		{


		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3740:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[3];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_cstring =
		      "/*no map auxiliary data put function for ";
		    /*^apply.arg */
		    argtab[1].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CTYPNAM__V50*/ meltfptr[49];
		    /*^apply.arg */
		    argtab[2].meltbp_cstring = "*/";
		    /*_.ADD2OUT__V72*/ meltfptr[68] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!ADD2OUT */ meltfrout->tabval[7])),
				  (melt_ptr_t) ( /*_.OUTBUF__V4*/
						meltfptr[3]),
				  (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				   MELTBPARSTR_CSTRING ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3739:/ quasiblock");


		  /*_.PROGN___V73*/ meltfptr[72] =
		    /*_.ADD2OUT__V72*/ meltfptr[68];;
		  /*^compute */
		  /*_._IFELSE___V70*/ meltfptr[66] =
		    /*_.PROGN___V73*/ meltfptr[72];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3725:/ clear");
	       /*clear *//*_.ADD2OUT__V72*/ meltfptr[68] = 0;
		  /*^clear */
	       /*clear *//*_.PROGN___V73*/ meltfptr[72] = 0;
		}
		;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3742:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (0),
					0);
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3747:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   ("/***end of map support for GTY ctype "));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3748:/ locexp");
	      /*add2sbuf_string */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   melt_string_str ((melt_ptr_t)
						    ( /*_.CTYPNAM__V50*/
						     meltfptr[49])));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3749:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]), (" **/"));
	    }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3750:/ locexp");
	      meltgc_strbuf_add_indent ((melt_ptr_t)
					( /*_.OUTBUF__V4*/ meltfptr[3]), (1),
					0);
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;

	    MELT_LOCATION ("warmelt-modes.melt:3418:/ clear");
	     /*clear *//*_.CNAME__V49*/ meltfptr[31] = 0;
	    /*^clear */
	     /*clear *//*_.CTYPNAM__V50*/ meltfptr[49] = 0;
	    /*^clear */
	     /*clear *//*_.MAPAUXDATAFUN__V51*/ meltfptr[50] = 0;
	    /*^clear */
	     /*clear *//*_.MAPAUXPUTFUN__V52*/ meltfptr[51] = 0;
	    /*^clear */
	     /*clear *//*_.MAPCOUNTFUN__V53*/ meltfptr[52] = 0;
	    /*^clear */
	     /*clear *//*_.MAPDISCR__V54*/ meltfptr[53] = 0;
	    /*^clear */
	     /*clear *//*_.MAPDISCRNAME__V55*/ meltfptr[54] = 0;
	    /*^clear */
	     /*clear *//*_.MAPGETFUN__V56*/ meltfptr[55] = 0;
	    /*^clear */
	     /*clear *//*_.MAPMAGIC__V57*/ meltfptr[56] = 0;
	    /*^clear */
	     /*clear *//*_.MAPNATTFUN__V58*/ meltfptr[57] = 0;
	    /*^clear */
	     /*clear *//*_.MAPNVALFUN__V59*/ meltfptr[58] = 0;
	    /*^clear */
	     /*clear *//*_.MAPPUTFUN__V60*/ meltfptr[59] = 0;
	    /*^clear */
	     /*clear *//*_.MAPREMOVEFUN__V61*/ meltfptr[60] = 0;
	    /*^clear */
	     /*clear *//*_.MAPSIZEFUN__V62*/ meltfptr[61] = 0;
	    /*^clear */
	     /*clear *//*_.MAPSTRUCT__V63*/ meltfptr[62] = 0;
	    /*^clear */
	     /*clear *//*_.MAPUNIMEMB__V64*/ meltfptr[63] = 0;
	    /*^clear */
	     /*clear *//*_.NEWMAPFUN__V65*/ meltfptr[64] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L10*/ meltfnum[6] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L11*/ meltfnum[10] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L12*/ meltfnum[11] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L13*/ meltfnum[12] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L14*/ meltfnum[13] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L15*/ meltfnum[14] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L16*/ meltfnum[15] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L17*/ meltfnum[16] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L18*/ meltfnum[17] = 0;
	    /*^clear */
	     /*clear *//*_._IFELSE___V66*/ meltfptr[65] = 0;
	    /*^clear */
	     /*clear *//*_#IS_STRING__L19*/ meltfnum[18] = 0;
	    /*^clear */
	     /*clear *//*_._IFELSE___V70*/ meltfptr[66] = 0;
	    /*^objgoto */
	    /*objgoto */ goto mtch1__end /*endmatch */ ;
	    ;

	  /*objlabel */ mtch1_18:;
	    MELT_LOCATION ("warmelt-modes.melt:3752:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_67;
	    meltlab_count_67++;
	    debugeprintf
	      ("objlabel_67 mtch1_*CLASS_NORMTESTER_SUCCESS/10cdca78. *CLASS_OBJLABELINSTR/b24eddd. %ld",
	       meltlab_count_67);
#endif

	    ;
	    /*^quasiblock */



	    {
	      MELT_LOCATION ("warmelt-modes.melt:3753:/ locexp");
	      /*add2sbuf_strconst */
		meltgc_add_strbuf ((melt_ptr_t)
				   ( /*_.OUTBUF__V4*/ meltfptr[3]),
				   ("/*incomplete gtypctype*/"));
	    }
	    ;

	    MELT_LOCATION ("warmelt-modes.melt:3752:/ objgoto");
	    /*objgoto */ goto mtch1__end /*endmatch */ ;
	    ;

	  /*objlabel */ mtch1__end:;
	    MELT_LOCATION ("warmelt-modes.melt:3417:/ objlabel");
	    /* objlabel */
#if MELTDEBUG_MATCHING
	    static long meltlab_count_68;
	    meltlab_count_68++;
	    debugeprintf
	      ("objlabel_68 mtch1__end_h493622374 *CLASS_OBJLABELINSTR/1d6c1466. %ld",
	       meltlab_count_68);
#endif

	    ;
	  }
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3756:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTBUF__V4*/ meltfptr[3]), (1),
				      0);
	  }
	  ;
	  if ( /*_#TIX__L5*/ meltfnum[1] < 0)
	    break;
	}			/* end  foreach_in_multiple meltcit1__EACHTUP */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3406:/ clear");
	    /*clear *//*_.CURCTYP__V11*/ meltfptr[9] = 0;
      /*^clear */
	    /*clear *//*_#TIX__L5*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_.IFCPP___V14*/ meltfptr[12] = 0;
      /*^clear */
	    /*clear *//*_#plI__L9*/ meltfnum[0] = 0;
      /*^clear */
	    /*clear *//*_.NAMED_NAME__V16*/ meltfptr[11] = 0;
    }				/*endciterblock FOREACH_IN_MULTIPLE */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3759:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
			   ("/** end of code generated by generate_runtypesupport_mapfun **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3761:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3762:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V4*/ meltfptr[3]),
				(0), 0);
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3763:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L20*/ meltfnum[6] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3763:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L20*/ meltfnum[6])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L21*/ meltfnum[10] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3763:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L21*/ meltfnum[10];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3763;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_mapfun end outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V75*/ meltfptr[72] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V74*/ meltfptr[68] =
	      /*_.MELT_DEBUG_FUN__V75*/ meltfptr[72];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3763:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L21*/ meltfnum[10] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V75*/ meltfptr[72] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V74*/ meltfptr[68] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3763:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L20*/ meltfnum[6] = 0;
      /*^clear */
	     /*clear *//*_._IF___V74*/ meltfptr[68] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:3394:/ clear");
	   /*clear *//*_.IFCPP___V7*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V9*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_MAPFUN", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_59_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_MAPFUN */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 26
    melt_ptr_t mcfr_varptr[26];
#define MELTFRAM_NBVARNUM 15
    long mcfr_varnum[15];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS_st
	 *) meltfirstargp_;
      /* use arguments meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 26; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS nbval 26*/
  meltfram__.mcfr_nbvar = 26 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3771:/ getarg");
 /*_.OUTBUF__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3772:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3772:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3772:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3772;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_predef_fields start outbuf=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTBUF__V2*/ meltfptr[1];
	      /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V3*/ meltfptr[2] =
	      /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3772:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V3*/ meltfptr[2] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3772:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V3*/ meltfptr[2] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3773:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_OUT__L3*/ meltfnum[1] =
	(melt_is_out ((melt_ptr_t) /*_.OUTBUF__V2*/ meltfptr[1]));;
      MELT_LOCATION ("warmelt-modes.melt:3773:/ cond");
      /*cond */ if ( /*_#IS_OUT__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V6*/ meltfptr[2] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:3773:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check outbuf"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (3773) ? (3773) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V6*/ meltfptr[2] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V5*/ meltfptr[3] = /*_._IFELSE___V6*/ meltfptr[2];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:3773:/ clear");
	     /*clear *//*_#IS_OUT__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V6*/ meltfptr[2] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V5*/ meltfptr[3] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3774:/ locexp");
      if (27500 > 0)
	meltgc_strbuf_reserve ((melt_ptr_t) /*_.OUTBUF__V2*/ meltfptr[1],
			       (unsigned) 27500);;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3775:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3776:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3777:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
			   ("/** start of code generated by generate_runtypesupport_predef_fields **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3779:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:3780:/ quasiblock");


    /*_.CURPREDEF__V7*/ meltfptr[2] = ( /*nil */ NULL);;
    /*^compute */
 /*_#NBPREDEF__L4*/ meltfnum[0] = 0;;

    {
      MELT_LOCATION ("warmelt-modes.melt:3783:/ locexp");
		       /*GETNBPREDEFCHK__1 *//*_#NBPREDEF__L4*/ meltfnum[0] =
	MELTGLOB__LASTWIRED;;
    }
    ;
    /*citerblock FOREACH_LONG_UPTO */
    {
      /* foreach_long_upto start meltcit1__EACHLONG */
      long meltcit1__EACHLONG_min = 1;
      long meltcit1__EACHLONG_max = /*_#NBPREDEF__L4*/ meltfnum[0];
      long meltcit1__EACHLONG_cur = 0;
      for (meltcit1__EACHLONG_cur = meltcit1__EACHLONG_min;
	   meltcit1__EACHLONG_cur <= meltcit1__EACHLONG_max;
	   meltcit1__EACHLONG_cur++)
	{
	    /*_#PRIX__L5*/ meltfnum[1] = meltcit1__EACHLONG_cur;




	  {
	    MELT_LOCATION ("warmelt-modes.melt:3788:/ locexp");
	    /*GETPREDEFCHK__1 *//*_.CURPREDEF__V7*/ meltfptr[2] =
	      melt_fetch_predefined ( /*_#PRIX__L5*/ meltfnum[1]);;
	  }
	  ;

#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:3790:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
    /*_#MELT_NEED_DBG__L6*/ meltfnum[5] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:3790:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L6*/ meltfnum[5])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

      /*_#MELT_CALLCOUNT__L7*/ meltfnum[6] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:3790:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[7];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L7*/ meltfnum[6];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 3790;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "generate_runtypesupport_predef_fields prix=";
		    /*^apply.arg */
		    argtab[4].meltbp_long = /*_#PRIX__L5*/ meltfnum[1];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " curpredef=";
		    /*^apply.arg */
		    argtab[6].meltbp_aptr =
		      (melt_ptr_t *) & /*_.CURPREDEF__V7*/ meltfptr[2];
		    /*_.MELT_DEBUG_FUN__V9*/ meltfptr[8] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V8*/ meltfptr[7] =
		    /*_.MELT_DEBUG_FUN__V9*/ meltfptr[8];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:3790:/ clear");
		/*clear *//*_#MELT_CALLCOUNT__L7*/ meltfnum[6] = 0;
		  /*^clear */
		/*clear *//*_.MELT_DEBUG_FUN__V9*/ meltfptr[8] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

     /*_._IF___V8*/ meltfptr[7] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:3790:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	      /*clear *//*_#MELT_NEED_DBG__L6*/ meltfnum[5] = 0;
	    /*^clear */
	      /*clear *//*_._IF___V8*/ meltfptr[7] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
  /*_#IS_A__L8*/ meltfnum[6] =
	    melt_is_instance_of ((melt_ptr_t)
				 ( /*_.CURPREDEF__V7*/ meltfptr[2]),
				 (melt_ptr_t) (( /*!CLASS_CLASS */ meltfrout->
						tabval[1])));;
	  MELT_LOCATION ("warmelt-modes.melt:3791:/ cond");
	  /*cond */ if ( /*_#IS_A__L8*/ meltfnum[6])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

		MELT_LOCATION ("warmelt-modes.melt:3792:/ quasiblock");


		/*^cond */
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURPREDEF__V7*/
						     meltfptr[2]),
						    (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURPREDEF__V7*/ meltfptr[2])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 1, "NAMED_NAME");
      /*_.CLASNAM__V12*/ meltfptr[11] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.CLASNAM__V12*/ meltfptr[11] = NULL;;
		  }
		;
		MELT_LOCATION ("warmelt-modes.melt:3793:/ cond");
		/*cond */ if (
			       /*ifisa */
			       melt_is_instance_of ((melt_ptr_t)
						    ( /*_.CURPREDEF__V7*/
						     meltfptr[2]),
						    (melt_ptr_t) (( /*!CLASS_CLASS */ meltfrout->tabval[1])))
		  )		/*then */
		  {
		    /*^cond.then */
		    /*^getslot */
		    {
		      melt_ptr_t slot = NULL, obj = NULL;
		      obj =
			(melt_ptr_t) ( /*_.CURPREDEF__V7*/ meltfptr[2])
			/*=obj*/ ;
		      melt_object_get_field (slot, obj, 6, "CLASS_FIELDS");
      /*_.CLASFIELDS__V13*/ meltfptr[12] = slot;
		    };
		    ;
		  }
		else
		  {		/*^cond.else */

     /*_.CLASFIELDS__V13*/ meltfptr[12] = NULL;;
		  }
		;
		/*^compute */
    /*_#NBFIELDS__L9*/ meltfnum[5] =
		  (melt_multiple_length
		   ((melt_ptr_t) ( /*_.CLASFIELDS__V13*/ meltfptr[12])));;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3796:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V2*/ meltfptr[1]),
					    (0), 0);
		}
		;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3797:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[2];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "#define MELT_HAS_PREDEF_";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CLASNAM__V12*/ meltfptr[11];
		  /*_.ADD2OUT__V14*/ meltfptr[13] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[3])),
				(melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""),
				argtab, "", (union meltparam_un *) 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3798:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V2*/ meltfptr[1]),
					    (0), 0);
		}
		;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3799:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[5];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "/* predefined class ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CLASNAM__V12*/ meltfptr[11];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = " index ";
		  /*^apply.arg */
		  argtab[3].meltbp_long = /*_#PRIX__L5*/ meltfnum[1];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = " */ enum { ";
		  /*_.ADD2OUT__V15*/ meltfptr[14] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[3])),
				(melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_LONG
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
		/*citerblock FOREACH_IN_MULTIPLE */
		{
		  /* start foreach_in_multiple meltcit2__EACHTUP */
		  long meltcit2__EACHTUP_ln =
		    melt_multiple_length ((melt_ptr_t) /*_.CLASFIELDS__V13*/
					  meltfptr[12]);
		  for ( /*_#FLDIX__L10*/ meltfnum[9] = 0;
		       ( /*_#FLDIX__L10*/ meltfnum[9] >= 0)
		       && ( /*_#FLDIX__L10*/ meltfnum[9] <
			   meltcit2__EACHTUP_ln);
	/*_#FLDIX__L10*/ meltfnum[9]++)
		    {
		      /*_.CURFIELD__V16*/ meltfptr[15] =
			melt_multiple_nth ((melt_ptr_t)
					   ( /*_.CLASFIELDS__V13*/
					    meltfptr[12]), /*_#FLDIX__L10*/
					   meltfnum[9]);




#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:3803:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			MELT_CHECK_SIGNAL ();
			;
       /*_#IS_A__L11*/ meltfnum[10] =
			  melt_is_instance_of ((melt_ptr_t)
					       ( /*_.CURFIELD__V16*/
						meltfptr[15]),
					       (melt_ptr_t) (( /*!CLASS_FIELD */ meltfrout->tabval[4])));;
			MELT_LOCATION ("warmelt-modes.melt:3803:/ cond");
			/*cond */ if ( /*_#IS_A__L11*/ meltfnum[10])	/*then */
			  {
			    /*^cond.then */
			    /*_._IFELSE___V18*/ meltfptr[17] =
			      ( /*nil */ NULL);;
			  }
			else
			  {
			    MELT_LOCATION
			      ("warmelt-modes.melt:3803:/ cond.else");

			    /*^block */
			    /*anyblock */
			    {




			      {
				/*^locexp */
				melt_assert_failed (("check curfield"),
						    ("warmelt-modes.melt")
						    ? ("warmelt-modes.melt") :
						    __FILE__,
						    (3803) ? (3803) :
						    __LINE__, __FUNCTION__);
				;
			      }
			      ;
		   /*clear *//*_._IFELSE___V18*/ meltfptr[17] = 0;
			      /*epilog */
			    }
			    ;
			  }
			;
			/*^compute */
			/*_.IFCPP___V17*/ meltfptr[16] =
			  /*_._IFELSE___V18*/ meltfptr[17];;
			/*epilog */

			MELT_LOCATION ("warmelt-modes.melt:3803:/ clear");
		 /*clear *//*_#IS_A__L11*/ meltfnum[10] = 0;
			/*^clear */
		 /*clear *//*_._IFELSE___V18*/ meltfptr[17] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*_.IFCPP___V17*/ meltfptr[16] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3804:/ cond");
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.CURFIELD__V16*/ meltfptr[15]),
							  (melt_ptr_t) (( /*!CLASS_FIELD */ meltfrout->tabval[4])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.CURFIELD__V16*/ meltfptr[15])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 2,
						   "FLD_OWNCLASS");
       /*_.FLD_OWNCLASS__V19*/ meltfptr[17] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

      /*_.FLD_OWNCLASS__V19*/ meltfptr[17] = NULL;;
			}
		      ;
		      /*^compute */
     /*_#eqeq__L12*/ meltfnum[10] =
			(( /*_.FLD_OWNCLASS__V19*/ meltfptr[17]) ==
			 ( /*_.CURPREDEF__V7*/ meltfptr[2]));;
		      MELT_LOCATION ("warmelt-modes.melt:3804:/ cond");
		      /*cond */ if ( /*_#eqeq__L12*/ meltfnum[10])	/*then */
			{
			  /*^cond.then */
			  /*^block */
			  /*anyblock */
			  {

			    MELT_LOCATION
			      ("warmelt-modes.melt:3805:/ quasiblock");


			    /*^cond */
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURFIELD__V16*/ meltfptr[15]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[2])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURFIELD__V16*/
						  meltfptr[15]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.FLDNAM__V22*/ meltfptr[21] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FLDNAM__V22*/ meltfptr[21] = NULL;;
			      }
			    ;
			    /*^compute */
       /*_#FLDIX__L13*/ meltfnum[12] =
			      (melt_get_int
			       ((melt_ptr_t)
				( /*_.CURFIELD__V16*/ meltfptr[15])));;

			    {
			      MELT_LOCATION
				("warmelt-modes.melt:3808:/ locexp");
			      meltgc_strbuf_add_indent ((melt_ptr_t)
							( /*_.OUTBUF__V2*/
							 meltfptr[1]), (1),
							0);
			    }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3809:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[7];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " MELTFIELD_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.FLDNAM__V22*/
				meltfptr[21];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = " = ";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#FLDIX__L10*/ meltfnum[9];
			      /*^apply.arg */
			      argtab[4].meltbp_cstring = " /*in ";
			      /*^apply.arg */
			      argtab[5].meltbp_aptr =
				(melt_ptr_t *) & /*_.CLASNAM__V12*/
				meltfptr[11];
			      /*^apply.arg */
			      argtab[6].meltbp_cstring = "*/,";
			      /*_.ADD2OUT__V23*/ meltfptr[22] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[3])),
					    (melt_ptr_t) ( /*_.OUTBUF__V2*/
							  meltfptr[1]),
					    (MELTBPARSTR_CSTRING
					     MELTBPARSTR_PTR
					     MELTBPARSTR_CSTRING
					     MELTBPARSTR_LONG
					     MELTBPARSTR_CSTRING
					     MELTBPARSTR_PTR
					     MELTBPARSTR_CSTRING ""), argtab,
					    "", (union meltparam_un *) 0);
			    }
			    ;
			    /*_.LET___V21*/ meltfptr[20] =
			      /*_.ADD2OUT__V23*/ meltfptr[22];;

			    MELT_LOCATION ("warmelt-modes.melt:3805:/ clear");
		 /*clear *//*_.FLDNAM__V22*/ meltfptr[21] = 0;
			    /*^clear */
		 /*clear *//*_#FLDIX__L13*/ meltfnum[12] = 0;
			    /*^clear */
		 /*clear *//*_.ADD2OUT__V23*/ meltfptr[22] = 0;
			    /*_._IF___V20*/ meltfptr[19] =
			      /*_.LET___V21*/ meltfptr[20];;
			    /*epilog */

			    MELT_LOCATION ("warmelt-modes.melt:3804:/ clear");
		 /*clear *//*_.LET___V21*/ meltfptr[20] = 0;
			  }
			  ;
			}
		      else
			{	/*^cond.else */

      /*_._IF___V20*/ meltfptr[19] = NULL;;
			}
		      ;
		      if ( /*_#FLDIX__L10*/ meltfnum[9] < 0)
			break;
		    }		/* end  foreach_in_multiple meltcit2__EACHTUP */

		  /*citerepilog */

		  MELT_LOCATION ("warmelt-modes.melt:3800:/ clear");
	       /*clear *//*_.CURFIELD__V16*/ meltfptr[15] = 0;
		  /*^clear */
	       /*clear *//*_#FLDIX__L10*/ meltfnum[9] = 0;
		  /*^clear */
	       /*clear *//*_.IFCPP___V17*/ meltfptr[16] = 0;
		  /*^clear */
	       /*clear *//*_.FLD_OWNCLASS__V19*/ meltfptr[17] = 0;
		  /*^clear */
	       /*clear *//*_#eqeq__L12*/ meltfnum[10] = 0;
		  /*^clear */
	       /*clear *//*_._IF___V20*/ meltfptr[19] = 0;
		}		/*endciterblock FOREACH_IN_MULTIPLE */
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3812:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTBUF__V2*/ meltfptr[1]),
					    (1), 0);
		}
		;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3813:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[5];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "  MELTLENGTH_";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.CLASNAM__V12*/ meltfptr[11];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = " = ";
		  /*^apply.arg */
		  argtab[3].meltbp_long = /*_#NBFIELDS__L9*/ meltfnum[5];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = " } ;";
		  /*_.ADD2OUT__V24*/ meltfptr[21] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[3])),
				(melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_LONG
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
		/*_.LET___V11*/ meltfptr[7] =
		  /*_.ADD2OUT__V24*/ meltfptr[21];;

		MELT_LOCATION ("warmelt-modes.melt:3792:/ clear");
	      /*clear *//*_.CLASNAM__V12*/ meltfptr[11] = 0;
		/*^clear */
	      /*clear *//*_.CLASFIELDS__V13*/ meltfptr[12] = 0;
		/*^clear */
	      /*clear *//*_#NBFIELDS__L9*/ meltfnum[5] = 0;
		/*^clear */
	      /*clear *//*_.ADD2OUT__V14*/ meltfptr[13] = 0;
		/*^clear */
	      /*clear *//*_.ADD2OUT__V15*/ meltfptr[14] = 0;
		/*^clear */
	      /*clear *//*_.ADD2OUT__V24*/ meltfptr[21] = 0;
		/*_._IF___V10*/ meltfptr[8] = /*_.LET___V11*/ meltfptr[7];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:3791:/ clear");
	      /*clear *//*_.LET___V11*/ meltfptr[7] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

   /*_._IF___V10*/ meltfptr[8] = NULL;;
	    }
	  ;
	}			/*end foreach_long_upto meltcit1__EACHLONG */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3785:/ clear");
	    /*clear *//*_#PRIX__L5*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_#IS_A__L8*/ meltfnum[6] = 0;
      /*^clear */
	    /*clear *//*_._IF___V10*/ meltfptr[8] = 0;
    }				/*endciterblock FOREACH_LONG_UPTO */
    ;

    MELT_LOCATION ("warmelt-modes.melt:3780:/ clear");
	   /*clear *//*_.CURPREDEF__V7*/ meltfptr[2] = 0;
    /*^clear */
	   /*clear *//*_#NBPREDEF__L4*/ meltfnum[0] = 0;

    {
      MELT_LOCATION ("warmelt-modes.melt:3816:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3817:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
			   ("/** end of code generated by generate_runtypesupport_predef_fields **/"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3819:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3820:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t) ( /*_.OUTBUF__V2*/ meltfptr[1]),
				(0), 0);
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3821:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L14*/ meltfnum[12] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3821:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L14*/ meltfnum[12])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L15*/ meltfnum[5] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3821:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L15*/ meltfnum[5];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3821;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"generate_runtypesupport_predef_fields end outbuf=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTBUF__V2*/ meltfptr[1];
	      /*_.MELT_DEBUG_FUN__V26*/ meltfptr[20] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V25*/ meltfptr[22] =
	      /*_.MELT_DEBUG_FUN__V26*/ meltfptr[20];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3821:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L15*/ meltfnum[5] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V26*/ meltfptr[20] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V25*/ meltfptr[22] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3821:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L14*/ meltfnum[12] = 0;
      /*^clear */
	     /*clear *//*_._IF___V25*/ meltfptr[22] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */

    MELT_LOCATION ("warmelt-modes.melt:3771:/ clear");
	   /*clear *//*_.IFCPP___V5*/ meltfptr[3] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_60_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS
  (meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_,
   const melt_argdescr_cell_t meltxargdescr_[],
   union meltparam_un * meltxargtab_,
   const melt_argdescr_cell_t meltxresdescr_[],
   union meltparam_un * meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 102
    melt_ptr_t mcfr_varptr[102];
#define MELTFRAM_NBVARNUM 25
    long mcfr_varnum[25];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS_st
	 *) meltfirstargp_;
      /* use arguments meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 102; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS nbval 102*/
  meltfram__.mcfr_nbvar = 102 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS",
		    meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3827:/ getarg");
 /*_.OUTDECLBUF__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTCODEBUF__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


    {
      MELT_LOCATION ("warmelt-modes.melt:3828:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (0), 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3829:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (0), 0);
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:3830:/ quasiblock");


    /*_.CURPREDEF__V4*/ meltfptr[3] = ( /*nil */ NULL);;
    /*^compute */
 /*_#NBPREDEF__L1*/ meltfnum[0] = 0;;
    /*^compute */
    /*_.PARENV__V5*/ meltfptr[4] = ( /*!konst_0 */ meltfrout->tabval[0]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:3834:/ locexp");

#if MELT_HAVE_DEBUG
      if (melt_need_debug (0))
	melt_dbgshortbacktrace (("generate_runtypesupport_predefined_hooks"),
				(10));
#endif
      ;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3835:/ locexp");
		       /*GETNBPREDEFCHK__2 *//*_#NBPREDEF__L1*/ meltfnum[0] =
	MELTGLOB__LASTWIRED;;
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:3837:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring =
	"/* declarations generated by generate_runtypesupport_predefined_hooks\
 for ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBPREDEF__L1*/ meltfnum[0];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " predefined */";
      /*_.ADD2OUT__V6*/ meltfptr[5] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3838:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:3839:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring =
	"/*code generated by generate_runtypesupport_predefined_hooks for ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBPREDEF__L1*/ meltfnum[0];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " predefined */";
      /*_.ADD2OUT__V7*/ meltfptr[6] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3840:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (0), 0);
    }
    ;
    /*citerblock FOREACH_LONG_UPTO */
    {
      /* foreach_long_upto start meltcit1__EACHLONG */
      long meltcit1__EACHLONG_min = 1;
      long meltcit1__EACHLONG_max = /*_#NBPREDEF__L1*/ meltfnum[0];
      long meltcit1__EACHLONG_cur = 0;
      for (meltcit1__EACHLONG_cur = meltcit1__EACHLONG_min;
	   meltcit1__EACHLONG_cur <= meltcit1__EACHLONG_max;
	   meltcit1__EACHLONG_cur++)
	{
	    /*_#PRIX__L2*/ meltfnum[1] = meltcit1__EACHLONG_cur;




	  {
	    MELT_LOCATION ("warmelt-modes.melt:3844:/ locexp");
	    /*GETPREDEFCHK__2 *//*_.CURPREDEF__V4*/ meltfptr[3] =
	      melt_fetch_predefined ( /*_#PRIX__L2*/ meltfnum[1]);;
	  }
	  ;

	  MELT_CHECK_SIGNAL ();
	  ;
  /*_#IS_HOOK__L3*/ meltfnum[2] =
	    (melt_magic_discr
	     ((melt_ptr_t) ( /*_.CURPREDEF__V4*/ meltfptr[3])) ==
	     MELTOBMAG_HOOK);;
	  MELT_LOCATION ("warmelt-modes.melt:3846:/ cond");
	  /*cond */ if ( /*_#IS_HOOK__L3*/ meltfnum[2])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

		MELT_LOCATION ("warmelt-modes.melt:3847:/ quasiblock");


    /*_.HKNAME__V8*/ meltfptr[7] =
		  meltgc_hook_name_string ((melt_ptr_t) /*_.CURPREDEF__V4*/
					   meltfptr[3]);;
		/*^compute */
    /*_.HKSYMB__V9*/ meltfptr[8] =
		  melthookproc_HOOK_NAMED_SYMBOL (melt_string_str
						  ((melt_ptr_t)
						   ( /*_.HKNAME__V8*/
						    meltfptr[7])),
						  (long) MELT_GET);;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3849:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[1];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_aptr =
		    (melt_ptr_t *) & /*_.HKSYMB__V9*/ meltfptr[8];
		  /*_.HKBIND__V10*/ meltfptr[9] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!FIND_ENV */ meltfrout->tabval[2])),
				(melt_ptr_t) ( /*_.PARENV__V5*/ meltfptr[4]),
				(MELTBPARSTR_PTR ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;
    /*_.HKDATA__V11*/ meltfptr[10] =
		  melt_hook_data ((melt_ptr_t) /*_.CURPREDEF__V4*/
				  meltfptr[3]);;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3852:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTCODEBUF__V3*/
					     meltfptr[2]), (0), 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3853:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTDECLBUF__V2*/
					     meltfptr[1]), (0), 0);
		}
		;

#if MELT_HAVE_DEBUG
		MELT_LOCATION ("warmelt-modes.melt:3854:/ cppif.then");
		/*^block */
		/*anyblock */
		{


		  {
		    /*^locexp */
		    /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
		    melt_dbgcounter++;
#endif
		    ;
		  }
		  ;

		  MELT_CHECK_SIGNAL ();
		  ;
      /*_#MELT_NEED_DBG__L4*/ meltfnum[3] =
		    /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
		    ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
		    0		/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
		    ;;
		  MELT_LOCATION ("warmelt-modes.melt:3854:/ cond");
		  /*cond */ if ( /*_#MELT_NEED_DBG__L4*/ meltfnum[3])	/*then */
		    {
		      /*^cond.then */
		      /*^block */
		      /*anyblock */
		      {

	/*_#MELT_CALLCOUNT__L5*/ meltfnum[4] =
			  /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
			  meltcallcount	/* melt_callcount debugging */
#else
			  0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
			  ;;

			MELT_CHECK_SIGNAL ();
			;
			MELT_LOCATION ("warmelt-modes.melt:3854:/ apply");
			/*apply */
			{
			  union meltparam_un argtab[15];
			  memset (&argtab, 0, sizeof (argtab));
			  /*^apply.arg */
			  argtab[0].meltbp_long =
			    /*_#MELT_CALLCOUNT__L5*/ meltfnum[4];
			  /*^apply.arg */
			  argtab[1].meltbp_cstring = "warmelt-modes.melt";
			  /*^apply.arg */
			  argtab[2].meltbp_long = 3854;
			  /*^apply.arg */
			  argtab[3].meltbp_cstring =
			    "generate_runtypesupport_predefined_hooks prix#";
			  /*^apply.arg */
			  argtab[4].meltbp_long = /*_#PRIX__L2*/ meltfnum[1];
			  /*^apply.arg */
			  argtab[5].meltbp_cstring = " curpredef=";
			  /*^apply.arg */
			  argtab[6].meltbp_aptr =
			    (melt_ptr_t *) & /*_.CURPREDEF__V4*/ meltfptr[3];
			  /*^apply.arg */
			  argtab[7].meltbp_cstring = "\n hkname=";
			  /*^apply.arg */
			  argtab[8].meltbp_aptr =
			    (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			  /*^apply.arg */
			  argtab[9].meltbp_cstring = "\n.. hksymb=";
			  /*^apply.arg */
			  argtab[10].meltbp_aptr =
			    (melt_ptr_t *) & /*_.HKSYMB__V9*/ meltfptr[8];
			  /*^apply.arg */
			  argtab[11].meltbp_cstring = "\n.. hkbind=";
			  /*^apply.arg */
			  argtab[12].meltbp_aptr =
			    (melt_ptr_t *) & /*_.HKBIND__V10*/ meltfptr[9];
			  /*^apply.arg */
			  argtab[13].meltbp_cstring = "\n.. hkdata=";
			  /*^apply.arg */
			  argtab[14].meltbp_aptr =
			    (melt_ptr_t *) & /*_.HKDATA__V11*/ meltfptr[10];
			  /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
			    melt_apply ((meltclosure_ptr_t)
					(( /*!MELT_DEBUG_FUN */ meltfrout->
					  tabval[3])),
					(melt_ptr_t) (( /*nil */ NULL)),
					(MELTBPARSTR_LONG MELTBPARSTR_CSTRING
					 MELTBPARSTR_LONG MELTBPARSTR_CSTRING
					 MELTBPARSTR_LONG MELTBPARSTR_CSTRING
					 MELTBPARSTR_PTR MELTBPARSTR_CSTRING
					 MELTBPARSTR_PTR MELTBPARSTR_CSTRING
					 MELTBPARSTR_PTR MELTBPARSTR_CSTRING
					 MELTBPARSTR_PTR MELTBPARSTR_CSTRING
					 MELTBPARSTR_PTR ""), argtab, "",
					(union meltparam_un *) 0);
			}
			;
			/*_._IF___V12*/ meltfptr[11] =
			  /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
			/*epilog */

			MELT_LOCATION ("warmelt-modes.melt:3854:/ clear");
		  /*clear *//*_#MELT_CALLCOUNT__L5*/ meltfnum[4] = 0;
			/*^clear */
		  /*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
		      }
		      ;
		    }
		  else
		    {		/*^cond.else */

       /*_._IF___V12*/ meltfptr[11] = NULL;;
		    }
		  ;

		  {
		    MELT_LOCATION ("warmelt-modes.melt:3854:/ locexp");
		    /*void */ (void) 0;
		  }
		  ;
		  /*^quasiblock */


		  /*epilog */

		  /*^clear */
		/*clear *//*_#MELT_NEED_DBG__L4*/ meltfnum[3] = 0;
		  /*^clear */
		/*clear *//*_._IF___V12*/ meltfptr[11] = 0;
		}

#else /*MELT_HAVE_DEBUG */
		/*^cppif.else */
		/*^block */
		/*anyblock */
		{


		  {
		    /*^locexp */
		    /*void */ (void) 0;
		  }
		  ;
		  /*epilog */
		}

#endif /*MELT_HAVE_DEBUG */
		;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3856:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[5];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "/*predefined hook declaration ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = " #";
		  /*^apply.arg */
		  argtab[3].meltbp_long = /*_#PRIX__L2*/ meltfnum[1];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = "*/";
		  /*_.ADD2OUT__V14*/ meltfptr[12] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[1])),
				(melt_ptr_t) ( /*_.OUTDECLBUF__V2*/
					      meltfptr[1]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_LONG
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3857:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTDECLBUF__V2*/
					     meltfptr[1]), (0), 0);
		}
		;

		MELT_CHECK_SIGNAL ();
		;
		MELT_LOCATION ("warmelt-modes.melt:3858:/ apply");
		/*apply */
		{
		  union meltparam_un argtab[5];
		  memset (&argtab, 0, sizeof (argtab));
		  /*^apply.arg */
		  argtab[0].meltbp_cstring = "/*predefined hook definition ";
		  /*^apply.arg */
		  argtab[1].meltbp_aptr =
		    (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
		  /*^apply.arg */
		  argtab[2].meltbp_cstring = " #";
		  /*^apply.arg */
		  argtab[3].meltbp_long = /*_#PRIX__L2*/ meltfnum[1];
		  /*^apply.arg */
		  argtab[4].meltbp_cstring = "*/";
		  /*_.ADD2OUT__V15*/ meltfptr[11] =
		    melt_apply ((meltclosure_ptr_t)
				(( /*!ADD2OUT */ meltfrout->tabval[1])),
				(melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
					      meltfptr[2]),
				(MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				 MELTBPARSTR_CSTRING MELTBPARSTR_LONG
				 MELTBPARSTR_CSTRING ""), argtab, "",
				(union meltparam_un *) 0);
		}
		;

		{
		  MELT_LOCATION ("warmelt-modes.melt:3859:/ locexp");
		  meltgc_strbuf_add_indent ((melt_ptr_t)
					    ( /*_.OUTCODEBUF__V3*/
					     meltfptr[2]), (0), 0);
		}
		;

		MELT_CHECK_SIGNAL ();
		;
    /*_#IS_A__L6*/ meltfnum[4] =
		  melt_is_instance_of ((melt_ptr_t)
				       ( /*_.HKDATA__V11*/ meltfptr[10]),
				       (melt_ptr_t) (( /*!CLASS_HOOK_DESCRIPTOR */ meltfrout->tabval[4])));;
		MELT_LOCATION ("warmelt-modes.melt:3860:/ cond");
		/*cond */ if ( /*_#IS_A__L6*/ meltfnum[4])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {

		      MELT_LOCATION ("warmelt-modes.melt:3861:/ quasiblock");


		      /*^cond */
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.HKDATA__V11*/
							   meltfptr[10]),
							  (melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.HKDATA__V11*/ meltfptr[10])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 1,
						   "NAMED_NAME");
	/*_.DNAME__V16*/ meltfptr[15] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.DNAME__V16*/ meltfptr[15] = NULL;;
			}
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3862:/ cond");
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.HKDATA__V11*/
							   meltfptr[10]),
							  (melt_ptr_t) (( /*!CLASS_HOOK_DESCRIPTOR */ meltfrout->tabval[4])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.HKDATA__V11*/ meltfptr[10])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 2,
						   "HOOKDESC_IN_FORMALS");
	/*_.DINS__V17*/ meltfptr[16] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.DINS__V17*/ meltfptr[16] = NULL;;
			}
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3863:/ cond");
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.HKDATA__V11*/
							   meltfptr[10]),
							  (melt_ptr_t) (( /*!CLASS_HOOK_DESCRIPTOR */ meltfrout->tabval[4])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.HKDATA__V11*/ meltfptr[10])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 3,
						   "HOOKDESC_OUT_FORMALS");
	/*_.DOUTS__V18*/ meltfptr[17] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.DOUTS__V18*/ meltfptr[17] = NULL;;
			}
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3864:/ cond");
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.HKDATA__V11*/
							   meltfptr[10]),
							  (melt_ptr_t) (( /*!CLASS_HOOK_DESCRIPTOR */ meltfrout->tabval[4])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.HKDATA__V11*/ meltfptr[10])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 4,
						   "HOOKDESC_CTYPE");
	/*_.DCTYPE__V19*/ meltfptr[18] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.DCTYPE__V19*/ meltfptr[18] = NULL;;
			}
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3865:/ cond");
		      /*cond */ if (
				     /*ifisa */
				     melt_is_instance_of ((melt_ptr_t)
							  ( /*_.DCTYPE__V19*/
							   meltfptr[18]),
							  (melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			)	/*then */
			{
			  /*^cond.then */
			  /*^getslot */
			  {
			    melt_ptr_t slot = NULL, obj = NULL;
			    obj =
			      (melt_ptr_t) ( /*_.DCTYPE__V19*/ meltfptr[18])
			      /*=obj*/ ;
			    melt_object_get_field (slot, obj, 4,
						   "CTYPE_CNAME");
	/*_.CTYNAM__V20*/ meltfptr[19] = slot;
			  };
			  ;
			}
		      else
			{	/*^cond.else */

       /*_.CTYNAM__V20*/ meltfptr[19] = NULL;;
			}
		      ;
		      /*^compute */
      /*_#NBPARAM__L7*/ meltfnum[3] = 0;;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3868:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[5];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "MELT_EXTERN ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.CTYNAM__V20*/ meltfptr[19];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " melthookproc_";
			/*^apply.arg */
			argtab[3].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[4].meltbp_cstring = "(";
			/*_.ADD2OUT__V21*/ meltfptr[20] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/
						    meltfptr[1]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3869:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[4];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_aptr =
			  (melt_ptr_t *) & /*_.CTYNAM__V20*/ meltfptr[19];
			/*^apply.arg */
			argtab[1].meltbp_cstring = " melthookproc_";
			/*^apply.arg */
			argtab[2].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[3].meltbp_cstring = "(";
			/*_.ADD2OUT__V22*/ meltfptr[21] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				       MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				       ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit2__EACHTUP */
			long meltcit2__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DINS__V17*/
						meltfptr[16]);
			for ( /*_#INIX__L8*/ meltfnum[7] = 0;
			     ( /*_#INIX__L8*/ meltfnum[7] >= 0)
			     && ( /*_#INIX__L8*/ meltfnum[7] <
				 meltcit2__EACHTUP_ln);
	/*_#INIX__L8*/ meltfnum[7]++)
			  {
			    /*_.CURINSB__V23*/ meltfptr[22] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DINS__V17*/
						  meltfptr[16]),
						 /*_#INIX__L8*/ meltfnum[7]);




#if MELT_HAVE_DEBUG
			    MELT_LOCATION
			      ("warmelt-modes.melt:3873:/ cppif.then");
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
				melt_dbgcounter++;
#endif
				;
			      }
			      ;

			      MELT_CHECK_SIGNAL ();
			      ;
	 /*_#MELT_NEED_DBG__L9*/ meltfnum[8] =
				/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
				( /*melt_need_dbg */
				 melt_need_debug ((int) 0))
#else
				0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
				;;
			      MELT_LOCATION
				("warmelt-modes.melt:3873:/ cond");
			      /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[8])	/*then */
				{
				  /*^cond.then */
				  /*^block */
				  /*anyblock */
				  {

	   /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
				      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				      meltcallcount	/* melt_callcount debugging */
#else
				      0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				      ;;

				    MELT_CHECK_SIGNAL ();
				    ;
				    MELT_LOCATION
				      ("warmelt-modes.melt:3873:/ apply");
				    /*apply */
				    {
				      union meltparam_un argtab[7];
				      memset (&argtab, 0, sizeof (argtab));
				      /*^apply.arg */
				      argtab[0].meltbp_long =
					/*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
				      /*^apply.arg */
				      argtab[1].meltbp_cstring =
					"warmelt-modes.melt";
				      /*^apply.arg */
				      argtab[2].meltbp_long = 3873;
				      /*^apply.arg */
				      argtab[3].meltbp_cstring =
					"generate_runtypesupport_predefined_hooks curinsb=";
				      /*^apply.arg */
				      argtab[4].meltbp_aptr =
					(melt_ptr_t *) & /*_.CURINSB__V23*/
					meltfptr[22];
				      /*^apply.arg */
				      argtab[5].meltbp_cstring = " inix#";
				      /*^apply.arg */
				      argtab[6].meltbp_long =
					/*_#INIX__L8*/ meltfnum[7];
				      /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24] =
					melt_apply ((meltclosure_ptr_t)
						    (( /*!MELT_DEBUG_FUN */
						      meltfrout->tabval[3])),
						    (melt_ptr_t) (( /*nil */
								   NULL)),
						    (MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG ""),
						    argtab, "",
						    (union meltparam_un *) 0);
				    }
				    ;
				    /*_._IF___V24*/ meltfptr[23] =
				      /*_.MELT_DEBUG_FUN__V25*/ meltfptr[24];;
				    /*epilog */

				    MELT_LOCATION
				      ("warmelt-modes.melt:3873:/ clear");
		     /*clear *//*_#MELT_CALLCOUNT__L10*/
				      meltfnum[9] = 0;
				    /*^clear */
		     /*clear *//*_.MELT_DEBUG_FUN__V25*/
				      meltfptr[24] = 0;
				  }
				  ;
				}
			      else
				{	/*^cond.else */

	  /*_._IF___V24*/ meltfptr[23] = NULL;;
				}
			      ;

			      {
				MELT_LOCATION
				  ("warmelt-modes.melt:3873:/ locexp");
				/*void */ (void) 0;
			      }
			      ;
			      /*^quasiblock */


			      /*epilog */

			      /*^clear */
		   /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[8] =
				0;
			      /*^clear */
		   /*clear *//*_._IF___V24*/ meltfptr[23] = 0;
			    }

#else /*MELT_HAVE_DEBUG */
			    /*^cppif.else */
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*void */ (void) 0;
			      }
			      ;
			      /*epilog */
			    }

#endif /*MELT_HAVE_DEBUG */
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
       /*_#gtI__L11*/ meltfnum[9] =
			      (( /*_#NBPARAM__L7*/ meltfnum[3]) > (0));;
			    MELT_LOCATION ("warmelt-modes.melt:3874:/ cond");
			    /*cond */ if ( /*_#gtI__L11*/ meltfnum[9])	/*then */
			      {
				/*^cond.then */
				/*^block */
				/*anyblock */
				{


				  MELT_CHECK_SIGNAL ();
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3875:/ apply");
				  /*apply */
				  {
				    union meltparam_un argtab[1];
				    memset (&argtab, 0, sizeof (argtab));
				    /*^apply.arg */
				    argtab[0].meltbp_cstring = ", ";
				    /*_.ADD2OUT__V27*/ meltfptr[23] =
				      melt_apply ((meltclosure_ptr_t)
						  (( /*!ADD2OUT */ meltfrout->
						    tabval[1])),
						  (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
				  }
				  ;

				  MELT_CHECK_SIGNAL ();
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3876:/ apply");
				  /*apply */
				  {
				    union meltparam_un argtab[1];
				    memset (&argtab, 0, sizeof (argtab));
				    /*^apply.arg */
				    argtab[0].meltbp_cstring = ", ";
				    /*_.ADD2OUT__V28*/ meltfptr[27] =
				      melt_apply ((meltclosure_ptr_t)
						  (( /*!ADD2OUT */ meltfrout->
						    tabval[1])),
						  (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
				  }
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3874:/ quasiblock");


				  /*_.PROGN___V29*/ meltfptr[28] =
				    /*_.ADD2OUT__V28*/ meltfptr[27];;
				  /*^compute */
				  /*_._IF___V26*/ meltfptr[24] =
				    /*_.PROGN___V29*/ meltfptr[28];;
				  /*epilog */

				  MELT_LOCATION
				    ("warmelt-modes.melt:3874:/ clear");
		   /*clear *//*_.ADD2OUT__V27*/ meltfptr[23] =
				    0;
				  /*^clear */
		   /*clear *//*_.ADD2OUT__V28*/ meltfptr[27] =
				    0;
				  /*^clear */
		   /*clear *//*_.PROGN___V29*/ meltfptr[28] =
				    0;
				}
				;
			      }
			    else
			      {	/*^cond.else */

	/*_._IF___V26*/ meltfptr[24] = NULL;;
			      }
			    ;
			    /*^compute */
       /*_#plI__L12*/ meltfnum[8] =
			      (( /*_#NBPARAM__L7*/ meltfnum[3]) + (1));;
			    MELT_LOCATION
			      ("warmelt-modes.melt:3877:/ compute");
			    /*_#NBPARAM__L7*/ meltfnum[3] =
			      /*_#SETQ___L13*/ meltfnum[12] =
			      /*_#plI__L12*/ meltfnum[8];;

#if MELT_HAVE_DEBUG
			    MELT_LOCATION
			      ("warmelt-modes.melt:3878:/ cppif.then");
			    /*^block */
			    /*anyblock */
			    {


			      MELT_CHECK_SIGNAL ();
			      ;
	 /*_#IS_A__L14*/ meltfnum[13] =
				melt_is_instance_of ((melt_ptr_t)
						     ( /*_.CURINSB__V23*/
						      meltfptr[22]),
						     (melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])));;
			      MELT_LOCATION
				("warmelt-modes.melt:3878:/ cond");
			      /*cond */ if ( /*_#IS_A__L14*/ meltfnum[13])	/*then */
				{
				  /*^cond.then */
				  /*_._IFELSE___V31*/ meltfptr[27] =
				    ( /*nil */ NULL);;
				}
			      else
				{
				  MELT_LOCATION
				    ("warmelt-modes.melt:3878:/ cond.else");

				  /*^block */
				  /*anyblock */
				  {




				    {
				      /*^locexp */
				      melt_assert_failed (("check curinsb"),
							  ("warmelt-modes.melt")
							  ?
							  ("warmelt-modes.melt")
							  : __FILE__,
							  (3878) ? (3878) :
							  __LINE__,
							  __FUNCTION__);
				      ;
				    }
				    ;
		     /*clear *//*_._IFELSE___V31*/ meltfptr[27]
				      = 0;
				    /*epilog */
				  }
				  ;
				}
			      ;
			      /*^compute */
			      /*_.IFCPP___V30*/ meltfptr[23] =
				/*_._IFELSE___V31*/ meltfptr[27];;
			      /*epilog */

			      MELT_LOCATION
				("warmelt-modes.melt:3878:/ clear");
		   /*clear *//*_#IS_A__L14*/ meltfnum[13] = 0;
			      /*^clear */
		   /*clear *//*_._IFELSE___V31*/ meltfptr[27] = 0;
			    }

#else /*MELT_HAVE_DEBUG */
			    /*^cppif.else */
			    /*_.IFCPP___V30*/ meltfptr[23] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3879:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V23*/ meltfptr[22]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V23*/
						  meltfptr[22]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V32*/ meltfptr[28] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V32*/ meltfptr[28] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3879:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V32*/ meltfptr[28]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V32*/
						  meltfptr[28]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V33*/ meltfptr[27] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V33*/ meltfptr[27] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3879:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[1];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V33*/
				meltfptr[27];
			      /*_.ADD2OUT__V34*/ meltfptr[33] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3880:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V23*/ meltfptr[22]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V23*/
						  meltfptr[22]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V35*/ meltfptr[34] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V35*/ meltfptr[34] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3880:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V35*/ meltfptr[34]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V35*/
						  meltfptr[34]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V36*/ meltfptr[35] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V36*/ meltfptr[35] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3880:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[4];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " meltin_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V36*/
				meltfptr[35];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "_p";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#INIX__L8*/ meltfnum[7];
			      /*_.ADD2OUT__V37*/ meltfptr[36] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3881:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V23*/ meltfptr[22]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V23*/
						  meltfptr[22]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V38*/ meltfptr[37] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V38*/ meltfptr[37] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3881:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V38*/ meltfptr[37]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V38*/
						  meltfptr[37]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V39*/ meltfptr[38] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V39*/ meltfptr[38] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3881:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[1];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V39*/
				meltfptr[38];
			      /*_.ADD2OUT__V40*/ meltfptr[39] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3882:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V23*/ meltfptr[22]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V23*/
						  meltfptr[22]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V41*/ meltfptr[40] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V41*/ meltfptr[40] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3882:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V41*/ meltfptr[40]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V41*/
						  meltfptr[40]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V42*/ meltfptr[41] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V42*/ meltfptr[41] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3882:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[4];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " meltin_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V42*/
				meltfptr[41];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "_p";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#INIX__L8*/ meltfnum[7];
			      /*_.ADD2OUT__V43*/ meltfptr[42] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#INIX__L8*/ meltfnum[7] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit2__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3870:/ clear");
		 /*clear *//*_.CURINSB__V23*/ meltfptr[22] = 0;
			/*^clear */
		 /*clear *//*_#INIX__L8*/ meltfnum[7] = 0;
			/*^clear */
		 /*clear *//*_#gtI__L11*/ meltfnum[9] = 0;
			/*^clear */
		 /*clear *//*_._IF___V26*/ meltfptr[24] = 0;
			/*^clear */
		 /*clear *//*_#plI__L12*/ meltfnum[8] = 0;
			/*^clear */
		 /*clear *//*_#SETQ___L13*/ meltfnum[12] = 0;
			/*^clear */
		 /*clear *//*_.IFCPP___V30*/ meltfptr[23] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V32*/ meltfptr[28] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V33*/ meltfptr[27] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V34*/ meltfptr[33] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V35*/ meltfptr[34] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V36*/ meltfptr[35] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V37*/ meltfptr[36] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V38*/ meltfptr[37] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V39*/ meltfptr[38] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V40*/ meltfptr[39] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V41*/ meltfptr[40] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V42*/ meltfptr[41] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V43*/ meltfptr[42] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit3__EACHTUP */
			long meltcit3__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DOUTS__V18*/
						meltfptr[17]);
			for ( /*_#OUTIX__L15*/ meltfnum[13] = 0;
			     ( /*_#OUTIX__L15*/ meltfnum[13] >= 0)
			     && ( /*_#OUTIX__L15*/ meltfnum[13] <
				 meltcit3__EACHTUP_ln);
	/*_#OUTIX__L15*/ meltfnum[13]++)
			  {
			    /*_.CUROUTB__V44*/ meltfptr[43] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DOUTS__V18*/
						  meltfptr[17]),
						 /*_#OUTIX__L15*/
						 meltfnum[13]);




#if MELT_HAVE_DEBUG
			    MELT_LOCATION
			      ("warmelt-modes.melt:3887:/ cppif.then");
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
				melt_dbgcounter++;
#endif
				;
			      }
			      ;

			      MELT_CHECK_SIGNAL ();
			      ;
	 /*_#MELT_NEED_DBG__L16*/ meltfnum[15] =
				/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
				( /*melt_need_dbg */
				 melt_need_debug ((int) 0))
#else
				0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
				;;
			      MELT_LOCATION
				("warmelt-modes.melt:3887:/ cond");
			      /*cond */ if ( /*_#MELT_NEED_DBG__L16*/ meltfnum[15])	/*then */
				{
				  /*^cond.then */
				  /*^block */
				  /*anyblock */
				  {

	   /*_#MELT_CALLCOUNT__L17*/ meltfnum[16] =
				      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				      meltcallcount	/* melt_callcount debugging */
#else
				      0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				      ;;

				    MELT_CHECK_SIGNAL ();
				    ;
				    MELT_LOCATION
				      ("warmelt-modes.melt:3887:/ apply");
				    /*apply */
				    {
				      union meltparam_un argtab[7];
				      memset (&argtab, 0, sizeof (argtab));
				      /*^apply.arg */
				      argtab[0].meltbp_long =
					/*_#MELT_CALLCOUNT__L17*/
					meltfnum[16];
				      /*^apply.arg */
				      argtab[1].meltbp_cstring =
					"warmelt-modes.melt";
				      /*^apply.arg */
				      argtab[2].meltbp_long = 3887;
				      /*^apply.arg */
				      argtab[3].meltbp_cstring =
					"generate_runtypesupport_predefined_hooks curoutb=";
				      /*^apply.arg */
				      argtab[4].meltbp_aptr =
					(melt_ptr_t *) & /*_.CUROUTB__V44*/
					meltfptr[43];
				      /*^apply.arg */
				      argtab[5].meltbp_cstring = " outix#";
				      /*^apply.arg */
				      argtab[6].meltbp_long =
					/*_#OUTIX__L15*/ meltfnum[13];
				      /*_.MELT_DEBUG_FUN__V46*/ meltfptr[45] =
					melt_apply ((meltclosure_ptr_t)
						    (( /*!MELT_DEBUG_FUN */
						      meltfrout->tabval[3])),
						    (melt_ptr_t) (( /*nil */
								   NULL)),
						    (MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG ""),
						    argtab, "",
						    (union meltparam_un *) 0);
				    }
				    ;
				    /*_._IF___V45*/ meltfptr[44] =
				      /*_.MELT_DEBUG_FUN__V46*/ meltfptr[45];;
				    /*epilog */

				    MELT_LOCATION
				      ("warmelt-modes.melt:3887:/ clear");
		     /*clear *//*_#MELT_CALLCOUNT__L17*/
				      meltfnum[16] = 0;
				    /*^clear */
		     /*clear *//*_.MELT_DEBUG_FUN__V46*/
				      meltfptr[45] = 0;
				  }
				  ;
				}
			      else
				{	/*^cond.else */

	  /*_._IF___V45*/ meltfptr[44] = NULL;;
				}
			      ;

			      {
				MELT_LOCATION
				  ("warmelt-modes.melt:3887:/ locexp");
				/*void */ (void) 0;
			      }
			      ;
			      /*^quasiblock */


			      /*epilog */

			      /*^clear */
		   /*clear *//*_#MELT_NEED_DBG__L16*/ meltfnum[15]
				= 0;
			      /*^clear */
		   /*clear *//*_._IF___V45*/ meltfptr[44] = 0;
			    }

#else /*MELT_HAVE_DEBUG */
			    /*^cppif.else */
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*void */ (void) 0;
			      }
			      ;
			      /*epilog */
			    }

#endif /*MELT_HAVE_DEBUG */
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
       /*_#gtI__L18*/ meltfnum[16] =
			      (( /*_#NBPARAM__L7*/ meltfnum[3]) > (0));;
			    MELT_LOCATION ("warmelt-modes.melt:3888:/ cond");
			    /*cond */ if ( /*_#gtI__L18*/ meltfnum[16])	/*then */
			      {
				/*^cond.then */
				/*^block */
				/*anyblock */
				{


				  MELT_CHECK_SIGNAL ();
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3889:/ apply");
				  /*apply */
				  {
				    union meltparam_un argtab[1];
				    memset (&argtab, 0, sizeof (argtab));
				    /*^apply.arg */
				    argtab[0].meltbp_cstring = ", ";
				    /*_.ADD2OUT__V48*/ meltfptr[44] =
				      melt_apply ((meltclosure_ptr_t)
						  (( /*!ADD2OUT */ meltfrout->
						    tabval[1])),
						  (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
				  }
				  ;

				  MELT_CHECK_SIGNAL ();
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3890:/ apply");
				  /*apply */
				  {
				    union meltparam_un argtab[1];
				    memset (&argtab, 0, sizeof (argtab));
				    /*^apply.arg */
				    argtab[0].meltbp_cstring = ", ";
				    /*_.ADD2OUT__V49*/ meltfptr[48] =
				      melt_apply ((meltclosure_ptr_t)
						  (( /*!ADD2OUT */ meltfrout->
						    tabval[1])),
						  (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
				  }
				  ;
				  MELT_LOCATION
				    ("warmelt-modes.melt:3888:/ quasiblock");


				  /*_.PROGN___V50*/ meltfptr[49] =
				    /*_.ADD2OUT__V49*/ meltfptr[48];;
				  /*^compute */
				  /*_._IF___V47*/ meltfptr[45] =
				    /*_.PROGN___V50*/ meltfptr[49];;
				  /*epilog */

				  MELT_LOCATION
				    ("warmelt-modes.melt:3888:/ clear");
		   /*clear *//*_.ADD2OUT__V48*/ meltfptr[44] =
				    0;
				  /*^clear */
		   /*clear *//*_.ADD2OUT__V49*/ meltfptr[48] =
				    0;
				  /*^clear */
		   /*clear *//*_.PROGN___V50*/ meltfptr[49] =
				    0;
				}
				;
			      }
			    else
			      {	/*^cond.else */

	/*_._IF___V47*/ meltfptr[45] = NULL;;
			      }
			    ;
			    /*^compute */
       /*_#plI__L19*/ meltfnum[15] =
			      (( /*_#NBPARAM__L7*/ meltfnum[3]) + (1));;
			    MELT_LOCATION
			      ("warmelt-modes.melt:3891:/ compute");
			    /*_#NBPARAM__L7*/ meltfnum[3] =
			      /*_#SETQ___L20*/ meltfnum[19] =
			      /*_#plI__L19*/ meltfnum[15];;
			    MELT_LOCATION ("warmelt-modes.melt:3893:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V44*/ meltfptr[43]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V44*/
						  meltfptr[43]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V51*/ meltfptr[44] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V51*/ meltfptr[44] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3893:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V51*/ meltfptr[44]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V51*/
						  meltfptr[44]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V52*/ meltfptr[48] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V52*/ meltfptr[48] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3894:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V44*/ meltfptr[43]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V44*/
						  meltfptr[43]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V53*/ meltfptr[49] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V53*/ meltfptr[49] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3894:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V53*/ meltfptr[49]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V53*/
						  meltfptr[49]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V54*/ meltfptr[53] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V54*/ meltfptr[53] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3892:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[5];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V52*/
				meltfptr[48];
			      /*^apply.arg */
			      argtab[1].meltbp_cstring = "* meltout_";
			      /*^apply.arg */
			      argtab[2].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V54*/
				meltfptr[53];
			      /*^apply.arg */
			      argtab[3].meltbp_cstring = "_o";
			      /*^apply.arg */
			      argtab[4].meltbp_long =
				/*_#OUTIX__L15*/ meltfnum[13];
			      /*_.ADD2OUT__V55*/ meltfptr[54] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3895:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V44*/ meltfptr[43]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V44*/
						  meltfptr[43]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V56*/ meltfptr[55] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V56*/ meltfptr[55] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3895:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V56*/ meltfptr[55]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V56*/
						  meltfptr[55]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V57*/ meltfptr[56] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V57*/ meltfptr[56] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3895:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[1];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V57*/
				meltfptr[56];
			      /*_.ADD2OUT__V58*/ meltfptr[57] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3896:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V44*/ meltfptr[43]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V44*/
						  meltfptr[43]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V59*/ meltfptr[58] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V59*/ meltfptr[58] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3896:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V59*/ meltfptr[58]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V59*/
						  meltfptr[58]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V60*/ meltfptr[59] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V60*/ meltfptr[59] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3896:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[4];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = "* meltout_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V60*/
				meltfptr[59];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "_o";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#OUTIX__L15*/ meltfnum[13];
			      /*_.ADD2OUT__V61*/ meltfptr[60] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#OUTIX__L15*/ meltfnum[13] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit3__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3884:/ clear");
		 /*clear *//*_.CUROUTB__V44*/ meltfptr[43] = 0;
			/*^clear */
		 /*clear *//*_#OUTIX__L15*/ meltfnum[13] = 0;
			/*^clear */
		 /*clear *//*_#gtI__L18*/ meltfnum[16] = 0;
			/*^clear */
		 /*clear *//*_._IF___V47*/ meltfptr[45] = 0;
			/*^clear */
		 /*clear *//*_#plI__L19*/ meltfnum[15] = 0;
			/*^clear */
		 /*clear *//*_#SETQ___L20*/ meltfnum[19] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V51*/ meltfptr[44] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V52*/ meltfptr[48] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V53*/ meltfptr[49] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V54*/ meltfptr[53] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V55*/ meltfptr[54] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V56*/ meltfptr[55] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V57*/ meltfptr[56] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V58*/ meltfptr[57] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V59*/ meltfptr[58] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V60*/ meltfptr[59] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V61*/ meltfptr[60] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3898:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = ");";
			/*_.ADD2OUT__V62*/ meltfptr[61] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/
						    meltfptr[1]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3899:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = ")";
			/*_.ADD2OUT__V63*/ meltfptr[62] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3900:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTDECLBUF__V2*/
						   meltfptr[1]), (0), 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3901:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3902:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "{ /* code emitted by generate_runtypesupport_predefined_hooks for ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = "*/";
			/*_.ADD2OUT__V64*/ meltfptr[63] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3905:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3906:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "#ifndef MELT_SKIP_HOOK_PREDEFINED_CODE";
			/*_.ADD2OUT__V65*/ meltfptr[64] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3907:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3908:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "  melthook_ptr_t melthkp = (melthook_ptr_t) MELT_PREDEF (";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = ");";
			/*_.ADD2OUT__V66*/ meltfptr[65] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3910:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3911:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[5];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "typedef ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.CTYNAM__V20*/ meltfptr[19];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " melthooksig_";
			/*^apply.arg */
			argtab[3].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[4].meltbp_cstring = "_t (";
			/*_.ADD2OUT__V67*/ meltfptr[66] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3912:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "melt_ptr_t";
			/*_.ADD2OUT__V68*/ meltfptr[67] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit4__EACHTUP */
			long meltcit4__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DINS__V17*/
						meltfptr[16]);
			for ( /*_#INIX__L21*/ meltfnum[20] = 0;
			     ( /*_#INIX__L21*/ meltfnum[20] >= 0)
			     && ( /*_#INIX__L21*/ meltfnum[20] <
				 meltcit4__EACHTUP_ln);
	/*_#INIX__L21*/ meltfnum[20]++)
			  {
			    /*_.CURINSB__V69*/ meltfptr[68] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DINS__V17*/
						  meltfptr[16]),
						 /*_#INIX__L21*/
						 meltfnum[20]);



			    MELT_LOCATION ("warmelt-modes.melt:3916:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V69*/ meltfptr[68]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V69*/
						  meltfptr[68]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V70*/ meltfptr[69] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V70*/ meltfptr[69] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3916:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V70*/ meltfptr[69]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V70*/
						  meltfptr[69]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V71*/ meltfptr[70] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V71*/ meltfptr[70] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3916:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[2];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = ", ";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V71*/
				meltfptr[70];
			      /*_.ADD2OUT__V72*/ meltfptr[71] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#INIX__L21*/ meltfnum[20] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit4__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3913:/ clear");
		 /*clear *//*_.CURINSB__V69*/ meltfptr[68] = 0;
			/*^clear */
		 /*clear *//*_#INIX__L21*/ meltfnum[20] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V70*/ meltfptr[69] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V71*/ meltfptr[70] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V72*/ meltfptr[71] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit5__EACHTUP */
			long meltcit5__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DOUTS__V18*/
						meltfptr[17]);
			for ( /*_#OUTIX__L22*/ meltfnum[21] = 0;
			     ( /*_#OUTIX__L22*/ meltfnum[21] >= 0)
			     && ( /*_#OUTIX__L22*/ meltfnum[21] <
				 meltcit5__EACHTUP_ln);
	/*_#OUTIX__L22*/ meltfnum[21]++)
			  {
			    /*_.CUROUTB__V73*/ meltfptr[72] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DOUTS__V18*/
						  meltfptr[17]),
						 /*_#OUTIX__L22*/
						 meltfnum[21]);



			    MELT_LOCATION ("warmelt-modes.melt:3921:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V73*/ meltfptr[72]),
								(melt_ptr_t) (( /*!CLASS_FORMAL_BINDING */ meltfrout->tabval[7])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V73*/
						  meltfptr[72]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "FBIND_TYPE");
	 /*_.FBIND_TYPE__V74*/ meltfptr[73] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.FBIND_TYPE__V74*/ meltfptr[73] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3921:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.FBIND_TYPE__V74*/ meltfptr[73]),
								(melt_ptr_t) (( /*!CLASS_CTYPE */ meltfrout->tabval[6])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.FBIND_TYPE__V74*/
						  meltfptr[73]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 4,
							 "CTYPE_CNAME");
	 /*_.CTYPE_CNAME__V75*/ meltfptr[74] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.CTYPE_CNAME__V75*/ meltfptr[74] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3921:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[3];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = ", ";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.CTYPE_CNAME__V75*/
				meltfptr[74];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "* ";
			      /*_.ADD2OUT__V76*/ meltfptr[75] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#OUTIX__L22*/ meltfnum[21] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit5__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3918:/ clear");
		 /*clear *//*_.CUROUTB__V73*/ meltfptr[72] = 0;
			/*^clear */
		 /*clear *//*_#OUTIX__L22*/ meltfnum[21] = 0;
			/*^clear */
		 /*clear *//*_.FBIND_TYPE__V74*/ meltfptr[73] = 0;
			/*^clear */
		 /*clear *//*_.CTYPE_CNAME__V75*/ meltfptr[74] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V76*/ meltfptr[75] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3923:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = ");";
			/*_.ADD2OUT__V77*/ meltfptr[76] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3924:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3925:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "/*checkhook exist*/ melt_assertmsg (\" check predefhook ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " exists\", ";
			/*_.ADD2OUT__V78*/ meltfptr[77] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3926:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (15), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3927:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "             melthkp != NULL);";
			/*_.ADD2OUT__V79*/ meltfptr[78] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3928:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3929:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "/*checkhook ishook*/ melt_assertmsg (\" check predefhook ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " is hook\", ";
			/*_.ADD2OUT__V80*/ meltfptr[79] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3930:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (15), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3931:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "             melt_magic_discr ((melt_ptr_t) melthkp) == MELTOBMAG_HOOK);";
			/*_.ADD2OUT__V81*/ meltfptr[80] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3932:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3933:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[13];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = " /* check hook routine ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring =
			  " */\n                  melthooksig_";
			/*^apply.arg */
			argtab[3].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[4].meltbp_cstring = "_t *melthookptr_";
			/*^apply.arg */
			argtab[5].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[6].meltbp_cstring =
			  " = \n                  (melthooksig_";
			/*^apply.arg */
			argtab[7].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[8].meltbp_cstring =
			  "_t*) (melthkp->hookad) ;\n                  melt_assertmsg(\"check\
 predefhook routine ";
			/*^apply.arg */
			argtab[9].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[10].meltbp_cstring =
			  "\", \n                                 melthookptr_";
			/*^apply.arg */
			argtab[11].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[12].meltbp_cstring = ");\n";
			/*_.ADD2OUT__V82*/ meltfptr[81] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3941:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3942:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[7];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = " /* check predefhook ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring =
			  " name */\n\t\t  melt_assertmsg(\"check predefhook name ";
			/*^apply.arg */
			argtab[3].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[4].meltbp_cstring =
			  "\",\n\t\t\t\t !strncmp (melthkp->hookname,\
\n\t\t\t\t\t   \"";
			/*^apply.arg */
			argtab[5].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[6].meltbp_cstring =
			  "\", MELT_HOOKNAME_LEN-1));";
			/*_.ADD2OUT__V83*/ meltfptr[82] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3948:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (1), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3949:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "return (*melthookptr_";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = ") ((melt_ptr_t)melthkp";
			/*_.ADD2OUT__V84*/ meltfptr[83] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit6__EACHTUP */
			long meltcit6__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DINS__V17*/
						meltfptr[16]);
			for ( /*_#INIX__L23*/ meltfnum[22] = 0;
			     ( /*_#INIX__L23*/ meltfnum[22] >= 0)
			     && ( /*_#INIX__L23*/ meltfnum[22] <
				 meltcit6__EACHTUP_ln);
	/*_#INIX__L23*/ meltfnum[22]++)
			  {
			    /*_.CURINSB__V85*/ meltfptr[84] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DINS__V17*/
						  meltfptr[16]),
						 /*_#INIX__L23*/
						 meltfnum[22]);




			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3955:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[1];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = ",";
			      /*_.ADD2OUT__V86*/ meltfptr[85] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;

			    {
			      MELT_LOCATION
				("warmelt-modes.melt:3956:/ locexp");
			      meltgc_strbuf_add_indent ((melt_ptr_t)
							( /*_.OUTCODEBUF__V3*/
							 meltfptr[2]), (20),
							0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3957:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CURINSB__V85*/ meltfptr[84]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CURINSB__V85*/
						  meltfptr[84]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V87*/ meltfptr[86] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V87*/ meltfptr[86] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3957:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V87*/ meltfptr[86]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V87*/
						  meltfptr[86]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V88*/ meltfptr[87] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V88*/ meltfptr[87] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3957:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[4];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " meltin_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V88*/
				meltfptr[87];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "_p";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#INIX__L23*/ meltfnum[22];
			      /*_.ADD2OUT__V89*/ meltfptr[88] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#INIX__L23*/ meltfnum[22] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit6__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3952:/ clear");
		 /*clear *//*_.CURINSB__V85*/ meltfptr[84] = 0;
			/*^clear */
		 /*clear *//*_#INIX__L23*/ meltfnum[22] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V86*/ meltfptr[85] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V87*/ meltfptr[86] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V88*/ meltfptr[87] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V89*/ meltfptr[88] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;
		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit7__EACHTUP */
			long meltcit7__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.DOUTS__V18*/
						meltfptr[17]);
			for ( /*_#OUTIX__L24*/ meltfnum[23] = 0;
			     ( /*_#OUTIX__L24*/ meltfnum[23] >= 0)
			     && ( /*_#OUTIX__L24*/ meltfnum[23] <
				 meltcit7__EACHTUP_ln);
	/*_#OUTIX__L24*/ meltfnum[23]++)
			  {
			    /*_.CUROUTB__V90*/ meltfptr[89] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.DOUTS__V18*/
						  meltfptr[17]),
						 /*_#OUTIX__L24*/
						 meltfnum[23]);




			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3962:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[1];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = ",";
			      /*_.ADD2OUT__V91*/ meltfptr[90] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;

			    {
			      MELT_LOCATION
				("warmelt-modes.melt:3963:/ locexp");
			      meltgc_strbuf_add_indent ((melt_ptr_t)
							( /*_.OUTCODEBUF__V3*/
							 meltfptr[2]), (20),
							0);
			    }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3964:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.CUROUTB__V90*/ meltfptr[89]),
								(melt_ptr_t) (( /*!CLASS_ANY_BINDING */ meltfrout->tabval[8])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.CUROUTB__V90*/
						  meltfptr[89]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 0,
							 "BINDER");
	 /*_.BINDER__V92*/ meltfptr[91] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.BINDER__V92*/ meltfptr[91] = NULL;;
			      }
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3964:/ cond");
			    /*cond */ if (
					   /*ifisa */
					   melt_is_instance_of ((melt_ptr_t)
								( /*_.BINDER__V92*/ meltfptr[91]),
								(melt_ptr_t) (( /*!CLASS_NAMED */ meltfrout->tabval[5])))
			      )	/*then */
			      {
				/*^cond.then */
				/*^getslot */
				{
				  melt_ptr_t slot = NULL, obj = NULL;
				  obj =
				    (melt_ptr_t) ( /*_.BINDER__V92*/
						  meltfptr[91]) /*=obj*/ ;
				  melt_object_get_field (slot, obj, 1,
							 "NAMED_NAME");
	 /*_.NAMED_NAME__V93*/ meltfptr[92] = slot;
				};
				;
			      }
			    else
			      {	/*^cond.else */

	/*_.NAMED_NAME__V93*/ meltfptr[92] = NULL;;
			      }
			    ;

			    MELT_CHECK_SIGNAL ();
			    ;
			    MELT_LOCATION ("warmelt-modes.melt:3964:/ apply");
			    /*apply */
			    {
			      union meltparam_un argtab[4];
			      memset (&argtab, 0, sizeof (argtab));
			      /*^apply.arg */
			      argtab[0].meltbp_cstring = " meltout_";
			      /*^apply.arg */
			      argtab[1].meltbp_aptr =
				(melt_ptr_t *) & /*_.NAMED_NAME__V93*/
				meltfptr[92];
			      /*^apply.arg */
			      argtab[2].meltbp_cstring = "_o";
			      /*^apply.arg */
			      argtab[3].meltbp_long =
				/*_#OUTIX__L24*/ meltfnum[23];
			      /*_.ADD2OUT__V94*/ meltfptr[93] =
				melt_apply ((meltclosure_ptr_t)
					    (( /*!ADD2OUT */ meltfrout->
					      tabval[1])),
					    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un *) 0);
			    }
			    ;
			    if ( /*_#OUTIX__L24*/ meltfnum[23] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit7__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:3959:/ clear");
		 /*clear *//*_.CUROUTB__V90*/ meltfptr[89] = 0;
			/*^clear */
		 /*clear *//*_#OUTIX__L24*/ meltfnum[23] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V91*/ meltfptr[90] = 0;
			/*^clear */
		 /*clear *//*_.BINDER__V92*/ meltfptr[91] = 0;
			/*^clear */
		 /*clear *//*_.NAMED_NAME__V93*/ meltfptr[92] = 0;
			/*^clear */
		 /*clear *//*_.ADD2OUT__V94*/ meltfptr[93] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3966:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = ");";
			/*_.ADD2OUT__V95*/ meltfptr[94] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3967:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3968:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[1];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring =
			  "#endif /* MELT_SKIP_HOOK_PREDEFINED_CODE */";
			/*_.ADD2OUT__V96*/ meltfptr[95] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3969:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3970:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "} /* end  melthookproc_";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " */";
			/*_.ADD2OUT__V97*/ meltfptr[96] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3971:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3972:/ locexp");
			meltgc_strbuf_add_indent ((melt_ptr_t)
						  ( /*_.OUTCODEBUF__V3*/
						   meltfptr[2]), (0), 0);
		      }
		      ;

		      MELT_LOCATION ("warmelt-modes.melt:3861:/ clear");
		/*clear *//*_.DNAME__V16*/ meltfptr[15] = 0;
		      /*^clear */
		/*clear *//*_.DINS__V17*/ meltfptr[16] = 0;
		      /*^clear */
		/*clear *//*_.DOUTS__V18*/ meltfptr[17] = 0;
		      /*^clear */
		/*clear *//*_.DCTYPE__V19*/ meltfptr[18] = 0;
		      /*^clear */
		/*clear *//*_.CTYNAM__V20*/ meltfptr[19] = 0;
		      /*^clear */
		/*clear *//*_#NBPARAM__L7*/ meltfnum[3] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V21*/ meltfptr[20] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V22*/ meltfptr[21] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V62*/ meltfptr[61] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V63*/ meltfptr[62] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V64*/ meltfptr[63] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V65*/ meltfptr[64] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V66*/ meltfptr[65] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V67*/ meltfptr[66] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V68*/ meltfptr[67] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V77*/ meltfptr[76] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V78*/ meltfptr[77] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V79*/ meltfptr[78] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V80*/ meltfptr[79] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V81*/ meltfptr[80] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V82*/ meltfptr[81] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V83*/ meltfptr[82] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V84*/ meltfptr[83] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V95*/ meltfptr[94] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V96*/ meltfptr[95] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V97*/ meltfptr[96] = 0;
		      /*epilog */
		    }
		    ;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:3860:/ cond.else");

		    /*^block */
		    /*anyblock */
		    {


#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:3976:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			MELT_CHECK_SIGNAL ();
			;
	/*_#IS_NOT_A__L25*/ meltfnum[3] =
			  !melt_is_instance_of ((melt_ptr_t)
						( /*_.HKDATA__V11*/
						 meltfptr[10]),
						(melt_ptr_t) (( /*!CLASS_HOOK_DESCRIPTOR */ meltfrout->tabval[4])));;
			MELT_LOCATION ("warmelt-modes.melt:3976:/ cond");
			/*cond */ if ( /*_#IS_NOT_A__L25*/ meltfnum[3])	/*then */
			  {
			    /*^cond.then */
			    /*_._IFELSE___V99*/ meltfptr[16] =
			      ( /*nil */ NULL);;
			  }
			else
			  {
			    MELT_LOCATION
			      ("warmelt-modes.melt:3976:/ cond.else");

			    /*^block */
			    /*anyblock */
			    {




			      {
				/*^locexp */
				melt_assert_failed (("check hkdata is empty "), ("warmelt-modes.melt") ? ("warmelt-modes.melt") : __FILE__, (3976) ? (3976) : __LINE__, __FUNCTION__);
				;
			      }
			      ;
		    /*clear *//*_._IFELSE___V99*/ meltfptr[16] = 0;
			      /*epilog */
			    }
			    ;
			  }
			;
			/*^compute */
			/*_.IFCPP___V98*/ meltfptr[15] =
			  /*_._IFELSE___V99*/ meltfptr[16];;
			/*epilog */

			MELT_LOCATION ("warmelt-modes.melt:3976:/ clear");
		  /*clear *//*_#IS_NOT_A__L25*/ meltfnum[3] = 0;
			/*^clear */
		  /*clear *//*_._IFELSE___V99*/ meltfptr[16] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*_.IFCPP___V98*/ meltfptr[15] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		      ;

		      MELT_CHECK_SIGNAL ();
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3977:/ apply");
		      /*apply */
		      {
			union meltparam_un argtab[3];
			memset (&argtab, 0, sizeof (argtab));
			/*^apply.arg */
			argtab[0].meltbp_cstring = "#warning hook ";
			/*^apply.arg */
			argtab[1].meltbp_aptr =
			  (melt_ptr_t *) & /*_.HKNAME__V8*/ meltfptr[7];
			/*^apply.arg */
			argtab[2].meltbp_cstring = " without data";
			/*_.ADD2OUT__V100*/ meltfptr[17] =
			  melt_apply ((meltclosure_ptr_t)
				      (( /*!ADD2OUT */ meltfrout->tabval[1])),
				      (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/
						    meltfptr[2]),
				      (MELTBPARSTR_CSTRING MELTBPARSTR_PTR
				       MELTBPARSTR_CSTRING ""), argtab, "",
				      (union meltparam_un *) 0);
		      }
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:3978:/ locexp");
			meltgc_out_add_indent ((melt_ptr_t)
					       ( /*_.OUTCODEBUF__V3*/
						meltfptr[2]), (1), 0);;
		      }
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:3975:/ quasiblock");


		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:3860:/ clear");
		/*clear *//*_.IFCPP___V98*/ meltfptr[15] = 0;
		      /*^clear */
		/*clear *//*_.ADD2OUT__V100*/ meltfptr[17] = 0;
		    }
		    ;
		  }
		;

		MELT_LOCATION ("warmelt-modes.melt:3847:/ clear");
	      /*clear *//*_.HKNAME__V8*/ meltfptr[7] = 0;
		/*^clear */
	      /*clear *//*_.HKSYMB__V9*/ meltfptr[8] = 0;
		/*^clear */
	      /*clear *//*_.HKBIND__V10*/ meltfptr[9] = 0;
		/*^clear */
	      /*clear *//*_.HKDATA__V11*/ meltfptr[10] = 0;
		/*^clear */
	      /*clear *//*_.ADD2OUT__V14*/ meltfptr[12] = 0;
		/*^clear */
	      /*clear *//*_.ADD2OUT__V15*/ meltfptr[11] = 0;
		/*^clear */
	      /*clear *//*_#IS_A__L6*/ meltfnum[4] = 0;
		/*epilog */
	      }
	      ;
	    }			/*noelse */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:3982:/ locexp");
	    meltgc_strbuf_add_indent ((melt_ptr_t)
				      ( /*_.OUTCODEBUF__V3*/ meltfptr[2]),
				      (0), 0);
	  }
	  ;
	}			/*end foreach_long_upto meltcit1__EACHLONG */

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:3841:/ clear");
	    /*clear *//*_#PRIX__L2*/ meltfnum[1] = 0;
      /*^clear */
	    /*clear *//*_#IS_HOOK__L3*/ meltfnum[2] = 0;
    }				/*endciterblock FOREACH_LONG_UPTO */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:3985:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring =
	"/* end of declarations generated by generate_runtypesupport_predefined_hooks\
 for ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBPREDEF__L1*/ meltfnum[0];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " predefined */";
      /*_.ADD2OUT__V101*/ meltfptr[18] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTDECLBUF__V2*/ meltfptr[1]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3987:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V2*/ meltfptr[1]), (0), 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:3988:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_cstring =
	"/* end of code generated by generate_runtypesupport_predefined_hooks\
 for ";
      /*^apply.arg */
      argtab[1].meltbp_long = /*_#NBPREDEF__L1*/ meltfnum[0];
      /*^apply.arg */
      argtab[2].meltbp_cstring = " predefined */";
      /*_.ADD2OUT__V102*/ meltfptr[19] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!ADD2OUT */ meltfrout->tabval[1])),
		    (melt_ptr_t) ( /*_.OUTCODEBUF__V3*/ meltfptr[2]),
		    (MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING
		     ""), argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:3990:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTCODEBUF__V3*/ meltfptr[2]), (0), 0);
    }
    ;

    MELT_LOCATION ("warmelt-modes.melt:3830:/ clear");
	   /*clear *//*_.CURPREDEF__V4*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_#NBPREDEF__L1*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_.PARENV__V5*/ meltfptr[4] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V6*/ meltfptr[5] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V7*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V101*/ meltfptr[18] = 0;
    /*^clear */
	   /*clear *//*_.ADD2OUT__V102*/ meltfptr[19] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    /*epilog */
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*noretval */ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_61_WARMELTmiMODES_GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un *
						 meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un *
						 meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 61
    melt_ptr_t mcfr_varptr[61];
#define MELTFRAM_NBVARNUM 12
    long mcfr_varnum[12];
/*others*/
    const char *loc_CSTRING__o0;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct meltframe_meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD_st
	 *) meltfirstargp_;
      /* use arguments meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 61; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD nbval 61*/
  meltfram__.mcfr_nbvar = 61 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("RUNTYPESUPPORT_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:3994:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:3995:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:3995:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:3995:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 3995;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "start runtypesupport_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:3995:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:3995:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:3996:/ quasiblock");


 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("output");;
    /*^compute */
 /*_.MAKE_STRINGCONST__V7*/ meltfptr[3] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[2])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    MELT_LOCATION ("warmelt-modes.melt:3997:/ cond");
    /*cond */ if ( /*_.MAKE_STRINGCONST__V7*/ meltfptr[3])	/*then */
      {
	/*^cond.then */
	/*_.OUTARG__V8*/ meltfptr[7] =
	  /*_.MAKE_STRINGCONST__V7*/ meltfptr[3];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:3997:/ cond.else");

	/*_.OUTARG__V8*/ meltfptr[7] = ( /*!konst_1 */ meltfrout->tabval[1]);;
      }
    ;
    MELT_LOCATION ("warmelt-modes.melt:4000:/ quasiblock");


 /*_.NAMBUF__V10*/ meltfptr[9] =
      (melt_ptr_t)
      meltgc_new_strbuf ((meltobject_ptr_t)
			 (( /*!DISCR_STRBUF */ meltfrout->tabval[3])),
			 (const char *) 0);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4002:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.NAMBUF__V10*/ meltfptr[9]),
			   melt_string_str ((melt_ptr_t)
					    ( /*_.OUTARG__V8*/ meltfptr[7])));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4003:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.NAMBUF__V10*/ meltfptr[9]),
			   (".h"));
    }
    ;
 /*_.STRBUF2STRING__V11*/ meltfptr[10] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[2])),
	melt_strbuf_str ((melt_ptr_t) ( /*_.NAMBUF__V10*/ meltfptr[9]))));;
    /*^compute */
    /*_.LET___V9*/ meltfptr[8] = /*_.STRBUF2STRING__V11*/ meltfptr[10];;

    MELT_LOCATION ("warmelt-modes.melt:4000:/ clear");
	   /*clear *//*_.NAMBUF__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_.STRBUF2STRING__V11*/ meltfptr[10] = 0;
    /*_.OUTDECLNAME__V12*/ meltfptr[9] = /*_.LET___V9*/ meltfptr[8];;
    MELT_LOCATION ("warmelt-modes.melt:4006:/ quasiblock");


 /*_.NAMBUF__V14*/ meltfptr[13] =
      (melt_ptr_t)
      meltgc_new_strbuf ((meltobject_ptr_t)
			 (( /*!DISCR_STRBUF */ meltfrout->tabval[3])),
			 (const char *) 0);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4008:/ locexp");
      /*add2sbuf_string */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.NAMBUF__V14*/ meltfptr[13]),
			   melt_string_str ((melt_ptr_t)
					    ( /*_.OUTARG__V8*/ meltfptr[7])));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4009:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.NAMBUF__V14*/ meltfptr[13]),
			   ("-inc.c"));
    }
    ;
 /*_.STRBUF2STRING__V15*/ meltfptr[14] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[2])),
	melt_strbuf_str ((melt_ptr_t) ( /*_.NAMBUF__V14*/ meltfptr[13]))));;
    /*^compute */
    /*_.LET___V13*/ meltfptr[10] = /*_.STRBUF2STRING__V15*/ meltfptr[14];;

    MELT_LOCATION ("warmelt-modes.melt:4006:/ clear");
	   /*clear *//*_.NAMBUF__V14*/ meltfptr[13] = 0;
    /*^clear */
	   /*clear *//*_.STRBUF2STRING__V15*/ meltfptr[14] = 0;
    /*_.OUTCODENAME__V16*/ meltfptr[13] = /*_.LET___V13*/ meltfptr[10];;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4012:/ apply");
    /*apply */
    {
      /*_.DICTYPGTY__V17*/ meltfptr[14] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!RETRIEVE_DICTIONNARY_CTYPE_GTY */ meltfrout->
		      tabval[4])), (melt_ptr_t) (NULL), (""),
		    (union meltparam_un *) 0, "", (union meltparam_un *) 0);
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:4013:/ blockmultialloc");
    /*multiallocblock */
    {
      struct meltletrec_1_st
      {
	struct meltlist_st rlist_0__LIST_;
	long meltletrec_1_endgap;
      } *meltletrec_1_ptr = 0;
      meltletrec_1_ptr =
	(struct meltletrec_1_st *)
	meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
      /*^blockmultialloc.initfill */
      /*inilist rlist_0__LIST_ */
   /*_.LIST___V19*/ meltfptr[18] =
	(melt_ptr_t) & meltletrec_1_ptr->rlist_0__LIST_;
      meltletrec_1_ptr->rlist_0__LIST_.discr =
	(meltobject_ptr_t) (((melt_ptr_t) (MELT_PREDEF (DISCR_LIST))));



      /*_.RAWCTYPGTYLIST__V18*/ meltfptr[17] = /*_.LIST___V19*/ meltfptr[18];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:4013:/ clear");
	    /*clear *//*_.LIST___V19*/ meltfptr[18] = 0;
      /*^clear */
	    /*clear *//*_.LIST___V19*/ meltfptr[18] = 0;
    }				/*end multiallocblock */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4014:/ apply");
    /*apply */
    {
      /*_.DICTYP__V20*/ meltfptr[18] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!RETRIEVE_DICTIONNARY_CTYPE */ meltfrout->
		      tabval[5])), (melt_ptr_t) (NULL), (""),
		    (union meltparam_un *) 0, "", (union meltparam_un *) 0);
    }
    ;
    MELT_LOCATION ("warmelt-modes.melt:4015:/ blockmultialloc");
    /*multiallocblock */
    {
      struct meltletrec_2_st
      {
	struct meltlist_st rlist_0__LIST_;
	long meltletrec_2_endgap;
      } *meltletrec_2_ptr = 0;
      meltletrec_2_ptr =
	(struct meltletrec_2_st *)
	meltgc_allocate (sizeof (struct meltletrec_2_st), 0);
      /*^blockmultialloc.initfill */
      /*inilist rlist_0__LIST_ */
   /*_.LIST___V22*/ meltfptr[21] =
	(melt_ptr_t) & meltletrec_2_ptr->rlist_0__LIST_;
      meltletrec_2_ptr->rlist_0__LIST_.discr =
	(meltobject_ptr_t) (((melt_ptr_t) (MELT_PREDEF (DISCR_LIST))));



      /*_.RAWCTYPLIST__V21*/ meltfptr[20] = /*_.LIST___V22*/ meltfptr[21];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:4015:/ clear");
	    /*clear *//*_.LIST___V22*/ meltfptr[21] = 0;
      /*^clear */
	    /*clear *//*_.LIST___V22*/ meltfptr[21] = 0;
    }				/*end multiallocblock */
    ;
 /*_.OUTDECLBUF__V23*/ meltfptr[21] =
      (melt_ptr_t)
      meltgc_new_strbuf ((meltobject_ptr_t)
			 (( /*!DISCR_STRBUF */ meltfrout->tabval[3])),
			 (const char *) 0);;
    /*^compute */
 /*_.OUTCODEBUF__V24*/ meltfptr[23] =
      (melt_ptr_t)
      meltgc_new_strbuf ((meltobject_ptr_t)
			 (( /*!DISCR_STRBUF */ meltfrout->tabval[3])),
			 (const char *) 0);;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4019:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4019:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4019:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4019;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "runtypesupport_docmd dictypgty=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.DICTYPGTY__V17*/ meltfptr[14];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V26*/ meltfptr[25] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V25*/ meltfptr[24] =
	      /*_.MELT_DEBUG_FUN__V26*/ meltfptr[25];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4019:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V26*/ meltfptr[25] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V25*/ meltfptr[24] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4019:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V25*/ meltfptr[24] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4021:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLNAME__V12*/ meltfptr[9];
      /*_.GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT__V27*/ meltfptr[25] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT */
		      meltfrout->tabval[6])),
		    (melt_ptr_t) ( /*_.OUTDECLBUF__V23*/ meltfptr[21]),
		    (MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4022:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODENAME__V16*/ meltfptr[13];
      /*_.GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT__V28*/ meltfptr[24] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT */
		      meltfrout->tabval[6])),
		    (melt_ptr_t) ( /*_.OUTCODEBUF__V24*/ meltfptr[23]),
		    (MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;
    /*citerblock FOREACH_IN_MAPSTRING */
    {
      /*foreach_in_mapstring meltcit1__EACHSTRMAP : */ int
	meltcit1__EACHSTRMAP_ix = 0, meltcit1__EACHSTRMAP_siz = 0;
      for (meltcit1__EACHSTRMAP_ix = 0;
	   /* we retrieve in meltcit1__EACHSTRMAP_siz the size at each iteration since it could change. */
	   meltcit1__EACHSTRMAP_ix >= 0
	   && (meltcit1__EACHSTRMAP_siz =
	       melt_size_mapstrings ((struct meltmapstrings_st *)
				     /*_.DICTYPGTY__V17*/ meltfptr[14])) > 0
	   && meltcit1__EACHSTRMAP_ix < meltcit1__EACHSTRMAP_siz;
	   meltcit1__EACHSTRMAP_ix++)
	{
	  const char *meltcit1__EACHSTRMAP_str = NULL;
	  const char *meltcit1__EACHSTRMAP_nam = NULL;
    /*_.CURSTR__V29*/ meltfptr[28] = NULL;
    /*_.CURCTY__V30*/ meltfptr[29] = NULL;
	  meltcit1__EACHSTRMAP_str =
	    ((struct meltmapstrings_st *) /*_.DICTYPGTY__V17*/ meltfptr[14])->
	    entab[meltcit1__EACHSTRMAP_ix].e_at;
	  if (!meltcit1__EACHSTRMAP_str
	      || meltcit1__EACHSTRMAP_str == HTAB_DELETED_ENTRY)
	    continue;		/*foreach_in_mapstring meltcit1__EACHSTRMAP inside before */
	  /*_.CURCTY__V30*/ meltfptr[29] =
	    ((struct meltmapstrings_st *) /*_.DICTYPGTY__V17*/ meltfptr[14])->
	    entab[meltcit1__EACHSTRMAP_ix].e_va;
	  if (! /*_.CURCTY__V30*/ meltfptr[29])
	    continue;
	  if (melt_is_instance_of
	      ((melt_ptr_t) /*_.CURCTY__V30*/ meltfptr[29],
	       (melt_ptr_t) MELT_PREDEF (CLASS_NAMED))
	      && ( /*_.CURSTR__V29*/ meltfptr[28] =
		  melt_object_nth_field ((melt_ptr_t) /*_.CURCTY__V30*/
					 meltfptr[29],
					 MELTFIELD_NAMED_NAME)) != NULL
	      && (meltcit1__EACHSTRMAP_nam =
		  melt_string_str ((melt_ptr_t) /*_.CURSTR__V29*/
				   meltfptr[28])) != (char *) 0
	      && !strcmp (meltcit1__EACHSTRMAP_nam, meltcit1__EACHSTRMAP_str))
	    /*_.CURSTR__V29*/ meltfptr[28] = /*_.CURSTR__V29*/ meltfptr[28];
	  else
	    {
      /*_.CURSTR__V29*/ meltfptr[28] = NULL;
      /*_.CURSTR__V29*/ meltfptr[28] =
		meltgc_new_stringdup ((meltobject_ptr_t)
				      MELT_PREDEF (DISCR_STRING),
				      meltcit1__EACHSTRMAP_str);
	    }
	  meltcit1__EACHSTRMAP_str = (const char *) 0;
	  meltcit1__EACHSTRMAP_nam = (const char *) 0;




	  {
	    MELT_LOCATION ("warmelt-modes.melt:4026:/ locexp");
	    meltgc_append_list ((melt_ptr_t)
				( /*_.RAWCTYPGTYLIST__V18*/ meltfptr[17]),
				(melt_ptr_t) ( /*_.CURCTY__V30*/
					      meltfptr[29]));
	  }
	  ;
	  /* end foreach_in_mapstring meltcit1__EACHSTRMAP */
    /*_.CURSTR__V29*/ meltfptr[28] = NULL;
    /*_.CURCTY__V30*/ meltfptr[29] = NULL;
	}

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:4023:/ clear");
	    /*clear *//*_.CURSTR__V29*/ meltfptr[28] = 0;
      /*^clear */
	    /*clear *//*_.CURCTY__V30*/ meltfptr[29] = 0;
    }				/*endciterblock FOREACH_IN_MAPSTRING */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4028:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L5*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4028:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L5*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L6*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4028:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L6*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4028;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"runtypesupport_docmd rawctypgtylist=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.RAWCTYPGTYLIST__V18*/ meltfptr[17];
	      /*_.MELT_DEBUG_FUN__V32*/ meltfptr[31] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V31*/ meltfptr[30] =
	      /*_.MELT_DEBUG_FUN__V32*/ meltfptr[31];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4028:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L6*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V32*/ meltfptr[31] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V31*/ meltfptr[30] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4028:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L5*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V31*/ meltfptr[30] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    /*citerblock FOREACH_IN_MAPSTRING */
    {
      /*foreach_in_mapstring meltcit2__EACHSTRMAP : */ int
	meltcit2__EACHSTRMAP_ix = 0, meltcit2__EACHSTRMAP_siz = 0;
      for (meltcit2__EACHSTRMAP_ix = 0;
	   /* we retrieve in meltcit2__EACHSTRMAP_siz the size at each iteration since it could change. */
	   meltcit2__EACHSTRMAP_ix >= 0
	   && (meltcit2__EACHSTRMAP_siz =
	       melt_size_mapstrings ((struct meltmapstrings_st *)
				     /*_.DICTYP__V20*/ meltfptr[18])) > 0
	   && meltcit2__EACHSTRMAP_ix < meltcit2__EACHSTRMAP_siz;
	   meltcit2__EACHSTRMAP_ix++)
	{
	  const char *meltcit2__EACHSTRMAP_str = NULL;
	  const char *meltcit2__EACHSTRMAP_nam = NULL;
    /*_.CURSTR__V33*/ meltfptr[31] = NULL;
    /*_.CURCTY__V34*/ meltfptr[30] = NULL;
	  meltcit2__EACHSTRMAP_str =
	    ((struct meltmapstrings_st *) /*_.DICTYP__V20*/ meltfptr[18])->
	    entab[meltcit2__EACHSTRMAP_ix].e_at;
	  if (!meltcit2__EACHSTRMAP_str
	      || meltcit2__EACHSTRMAP_str == HTAB_DELETED_ENTRY)
	    continue;		/*foreach_in_mapstring meltcit2__EACHSTRMAP inside before */
	  /*_.CURCTY__V34*/ meltfptr[30] =
	    ((struct meltmapstrings_st *) /*_.DICTYP__V20*/ meltfptr[18])->
	    entab[meltcit2__EACHSTRMAP_ix].e_va;
	  if (! /*_.CURCTY__V34*/ meltfptr[30])
	    continue;
	  if (melt_is_instance_of
	      ((melt_ptr_t) /*_.CURCTY__V34*/ meltfptr[30],
	       (melt_ptr_t) MELT_PREDEF (CLASS_NAMED))
	      && ( /*_.CURSTR__V33*/ meltfptr[31] =
		  melt_object_nth_field ((melt_ptr_t) /*_.CURCTY__V34*/
					 meltfptr[30],
					 MELTFIELD_NAMED_NAME)) != NULL
	      && (meltcit2__EACHSTRMAP_nam =
		  melt_string_str ((melt_ptr_t) /*_.CURSTR__V33*/
				   meltfptr[31])) != (char *) 0
	      && !strcmp (meltcit2__EACHSTRMAP_nam, meltcit2__EACHSTRMAP_str))
	    /*_.CURSTR__V33*/ meltfptr[31] = /*_.CURSTR__V33*/ meltfptr[31];
	  else
	    {
      /*_.CURSTR__V33*/ meltfptr[31] = NULL;
      /*_.CURSTR__V33*/ meltfptr[31] =
		meltgc_new_stringdup ((meltobject_ptr_t)
				      MELT_PREDEF (DISCR_STRING),
				      meltcit2__EACHSTRMAP_str);
	    }
	  meltcit2__EACHSTRMAP_str = (const char *) 0;
	  meltcit2__EACHSTRMAP_nam = (const char *) 0;




	  {
	    MELT_LOCATION ("warmelt-modes.melt:4032:/ locexp");
	    meltgc_append_list ((melt_ptr_t)
				( /*_.RAWCTYPLIST__V21*/ meltfptr[20]),
				(melt_ptr_t) ( /*_.CURCTY__V34*/
					      meltfptr[30]));
	  }
	  ;
	  /* end foreach_in_mapstring meltcit2__EACHSTRMAP */
    /*_.CURSTR__V33*/ meltfptr[31] = NULL;
    /*_.CURCTY__V34*/ meltfptr[30] = NULL;
	}

      /*citerepilog */

      MELT_LOCATION ("warmelt-modes.melt:4029:/ clear");
	    /*clear *//*_.CURSTR__V33*/ meltfptr[31] = 0;
      /*^clear */
	    /*clear *//*_.CURCTY__V34*/ meltfptr[30] = 0;
    }				/*endciterblock FOREACH_IN_MAPSTRING */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4034:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L7*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4034:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L7*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L8*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4034:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L8*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4034;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "runtypesupport_docmd rawctyplist=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.RAWCTYPLIST__V21*/ meltfptr[20];
	      /*_.MELT_DEBUG_FUN__V36*/ meltfptr[35] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V35*/ meltfptr[34] =
	      /*_.MELT_DEBUG_FUN__V36*/ meltfptr[35];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4034:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L8*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V36*/ meltfptr[35] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V35*/ meltfptr[34] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4034:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L7*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V35*/ meltfptr[34] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4035:/ quasiblock");



    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4036:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & ( /*!DISCR_MULTIPLE */ meltfrout->tabval[8]);
      /*_.LIST_TO_MULTIPLE__V38*/ meltfptr[34] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!LIST_TO_MULTIPLE */ meltfrout->tabval[7])),
		    (melt_ptr_t) ( /*_.RAWCTYPGTYLIST__V18*/ meltfptr[17]),
		    (MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;
 /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38] =
      meltgc_sort_multiple ((melt_ptr_t)
			    ( /*_.LIST_TO_MULTIPLE__V38*/ meltfptr[34]),
			    (melt_ptr_t) (( /*!COMPARE_NAMED_ALPHA */
					   meltfrout->tabval[9])),
			    (melt_ptr_t) (( /*!DISCR_MULTIPLE */ meltfrout->
					   tabval[8])));;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4039:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & ( /*!DISCR_MULTIPLE */ meltfrout->tabval[8]);
      /*_.LIST_TO_MULTIPLE__V40*/ meltfptr[39] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!LIST_TO_MULTIPLE */ meltfrout->tabval[7])),
		    (melt_ptr_t) ( /*_.RAWCTYPLIST__V21*/ meltfptr[20]),
		    (MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;
 /*_.SORTEDCTYTUPLE__V41*/ meltfptr[40] =
      meltgc_sort_multiple ((melt_ptr_t)
			    ( /*_.LIST_TO_MULTIPLE__V40*/ meltfptr[39]),
			    (melt_ptr_t) (( /*!COMPARE_NAMED_ALPHA */
					   meltfrout->tabval[9])),
			    (melt_ptr_t) (( /*!DISCR_MULTIPLE */ meltfrout->
					   tabval[8])));;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4042:/ apply");
    /*apply */
    {
      /*_.RETRIEVE_VALUE_DESCRIPTOR_LIST__V42*/ meltfptr[41] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!RETRIEVE_VALUE_DESCRIPTOR_LIST */ meltfrout->
		      tabval[10])), (melt_ptr_t) (NULL), (""),
		    (union meltparam_un *) 0, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    /*^apply */
    /*apply */
    {
      /*_.RAWVALDESCTUPLE__V43*/ meltfptr[42] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!LIST_TO_MULTIPLE */ meltfrout->tabval[7])),
		    (melt_ptr_t) ( /*_.RETRIEVE_VALUE_DESCRIPTOR_LIST__V42*/
				  meltfptr[41]), (""),
		    (union meltparam_un *) 0, "", (union meltparam_un *) 0);
    }
    ;
 /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43] =
      meltgc_sort_multiple ((melt_ptr_t)
			    ( /*_.RAWVALDESCTUPLE__V43*/ meltfptr[42]),
			    (melt_ptr_t) (( /*!COMPARE_NAMED_ALPHA */
					   meltfrout->tabval[9])),
			    (melt_ptr_t) (( /*!DISCR_MULTIPLE */ meltfrout->
					   tabval[8])));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4047:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L9*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4047:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L10*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4047:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4047;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"runtypesupport_docmd sortedctygtytuple=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " sortedvaldesctuple=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
	      /*_.MELT_DEBUG_FUN__V46*/ meltfptr[45] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V45*/ meltfptr[44] =
	      /*_.MELT_DEBUG_FUN__V46*/ meltfptr[45];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4047:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L10*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V46*/ meltfptr[45] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V45*/ meltfptr[44] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4047:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V45*/ meltfptr[44] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4051:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*_.GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC__V47*/ meltfptr[45] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC */ meltfrout->
		      tabval[11])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4055:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*_.GENERATE_RUNTYPESUPPORT_GTY__V48*/ meltfptr[44] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_GTY */ meltfrout->
		      tabval[12])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4059:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*_.GENERATE_RUNTYPESUPPORT_PARAM__V49*/ meltfptr[48] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_PARAM */ meltfrout->
		      tabval[13])),
		    (melt_ptr_t) ( /*_.SORTEDCTYTUPLE__V41*/ meltfptr[40]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4062:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_COD2CTYPE__V50*/ meltfptr[49] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_COD2CTYPE */ meltfrout->
		      tabval[14])),
		    (melt_ptr_t) ( /*_.SORTEDCTYTUPLE__V41*/ meltfptr[40]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4064:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V23*/ meltfptr[21]), (0),
				0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4065:/ locexp");
      /*add2sbuf_strconst */
	meltgc_add_strbuf ((melt_ptr_t) ( /*_.OUTDECLBUF__V23*/ meltfptr[21]),
			   ("melt_ptr_t melt_code_to_ctype (int);"));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4066:/ locexp");
      meltgc_strbuf_add_indent ((melt_ptr_t)
				( /*_.OUTDECLBUF__V23*/ meltfptr[21]), (0),
				0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4068:/ apply");
    /*apply */
    {
      union meltparam_un argtab[4];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*^apply.arg */
      argtab[3].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_MAG2STR__V51*/ meltfptr[50] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_MAG2STR */ meltfrout->
		      tabval[15])),
		    (melt_ptr_t) ( /*_.SORTEDCTYTUPLE__V41*/ meltfptr[40]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR
		     MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4071:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN__V52*/ meltfptr[51] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN */ meltfrout->
		      tabval[16])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4075:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_SCANNING__V53*/ meltfptr[52] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_SCANNING */ meltfrout->
		      tabval[17])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4079:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_BOXINGFUN__V54*/ meltfptr[53] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_BOXINGFUN */ meltfrout->
		      tabval[18])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4082:/ apply");
    /*apply */
    {
      union meltparam_un argtab[3];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_CLONING_FUN__V55*/ meltfptr[54] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_CLONING_FUN */ meltfrout->
		      tabval[19])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR ""),
		    argtab, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4086:/ apply");
    /*apply */
    {
      union meltparam_un argtab[2];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTDECLBUF__V23*/ meltfptr[21];
      /*_.GENERATE_RUNTYPESUPPORT_MAPFUN__V56*/ meltfptr[55] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_MAPFUN */ meltfrout->
		      tabval[20])),
		    (melt_ptr_t) ( /*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4088:/ apply");
    /*apply */
    {
      /*_.GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS__V57*/ meltfptr[56] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS */ meltfrout->
		      tabval[21])),
		    (melt_ptr_t) ( /*_.OUTDECLBUF__V23*/ meltfptr[21]), (""),
		    (union meltparam_un *) 0, "", (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4090:/ apply");
    /*apply */
    {
      union meltparam_un argtab[1];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTCODEBUF__V24*/ meltfptr[23];
      /*_.GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS__V58*/ meltfptr[57] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS */
		      meltfrout->tabval[22])),
		    (melt_ptr_t) ( /*_.OUTDECLBUF__V23*/ meltfptr[21]),
		    (MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4095:/ locexp");
      /* runtypesupport_docmd TERMCOMMENTDECLCHK__1 */
      {
	time_t nowdecl = 0;
	char decldatebuf[48];
	memset (decldatebuf, 0, sizeof (decldatebuf));
	time (&nowdecl);
	strftime (decldatebuf, sizeof (decldatebuf) - 1,
		  "%Y %b %d", localtime (&nowdecl));
	meltgc_out_printf ((melt_ptr_t) /*_.OUTDECLBUF__V23*/ meltfptr[21],
			   "\n/*** End of declaration file %s generated on %s\n"
			   " * by GCC MELT %s . ***/\n",
			   melt_string_str ((melt_ptr_t)
					    /*_.OUTDECLNAME__V12*/
					    meltfptr[9]),
			   decldatebuf, melt_gccversionstr);
      } /* end  TERMCOMMENTDECLCHK__1 runtypesupport_docmd */ ;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4109:/ locexp");
      /*output_sbuf_strval */
	melt_output_strbuf_to_file ((melt_ptr_t)
				    ( /*_.OUTDECLBUF__V23*/ meltfptr[21]),
				    melt_string_str ((melt_ptr_t)
						     /*_.OUTDECLNAME__V12*/
						     meltfptr[9]));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4110:/ locexp");
      inform (UNKNOWN_LOCATION, ("MELT INFORM [#%ld]: %s - %s"),
	      melt_dbgcounter, ("generated runtype support declaration file"),
	      melt_string_str ((melt_ptr_t)
			       ( /*_.OUTDECLNAME__V12*/ meltfptr[9])));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4112:/ locexp");
      /* runtypesupport_docmd TERMCOMMENTCODECHK__1 */
      {
	time_t nowcode = 0;
	char codedatebuf[48];
	memset (codedatebuf, 0, sizeof (codedatebuf));
	time (&nowcode);
	strftime (codedatebuf, sizeof (codedatebuf) - 1,
		  "%Y %b %d", localtime (&nowcode));
	meltgc_out_printf ((melt_ptr_t) /*_.OUTCODEBUF__V24*/ meltfptr[23],
			   "\n/*** End of code file %s generated on %s\n"
			   " * by GCC MELT %s . ***/\n",
			   melt_string_str ((melt_ptr_t)
					    /*_.OUTCODENAME__V16*/
					    meltfptr[13]),
			   codedatebuf, melt_gccversionstr);
      } /* end  TERMCOMMENTCODECHK__1 runtypesupport_docmd */ ;
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4127:/ locexp");
      /*output_sbuf_strval */
	melt_output_strbuf_to_file ((melt_ptr_t)
				    ( /*_.OUTCODEBUF__V24*/ meltfptr[23]),
				    melt_string_str ((melt_ptr_t)
						     /*_.OUTCODENAME__V16*/
						     meltfptr[13]));
    }
    ;

    {
      MELT_LOCATION ("warmelt-modes.melt:4128:/ locexp");
      inform (UNKNOWN_LOCATION, ("MELT INFORM [#%ld]: %s - %s"),
	      melt_dbgcounter,
	      ("generated runtype support implementation file"),
	      melt_string_str ((melt_ptr_t)
			       ( /*_.OUTCODENAME__V16*/ meltfptr[13])));
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4130:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L11*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4130:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L11*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L12*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4130:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L12*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4130;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "runtypesupport_docmd done outarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V60*/ meltfptr[59] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V59*/ meltfptr[58] =
	      /*_.MELT_DEBUG_FUN__V60*/ meltfptr[59];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4130:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L12*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V60*/ meltfptr[59] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V59*/ meltfptr[58] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4130:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L11*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V59*/ meltfptr[58] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4131:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_23_TRUE */ meltfrout->tabval[23]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4131:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*_.LET___V37*/ meltfptr[35] = /*_.RETURN___V61*/ meltfptr[59];;

    MELT_LOCATION ("warmelt-modes.melt:4035:/ clear");
	   /*clear *//*_.LIST_TO_MULTIPLE__V38*/ meltfptr[34] = 0;
    /*^clear */
	   /*clear *//*_.SORTEDCTYGTYTUPLE__V39*/ meltfptr[38] = 0;
    /*^clear */
	   /*clear *//*_.LIST_TO_MULTIPLE__V40*/ meltfptr[39] = 0;
    /*^clear */
	   /*clear *//*_.SORTEDCTYTUPLE__V41*/ meltfptr[40] = 0;
    /*^clear */
	   /*clear *//*_.RETRIEVE_VALUE_DESCRIPTOR_LIST__V42*/ meltfptr[41] = 0;
    /*^clear */
	   /*clear *//*_.RAWVALDESCTUPLE__V43*/ meltfptr[42] = 0;
    /*^clear */
	   /*clear *//*_.SORTEDVALDESCTUPLE__V44*/ meltfptr[43] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_ENUM_OBJMAGIC__V47*/ meltfptr[45] =
      0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_GTY__V48*/ meltfptr[44] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_PARAM__V49*/ meltfptr[48] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_COD2CTYPE__V50*/ meltfptr[49] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_MAG2STR__V51*/ meltfptr[50] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_FORWCOPY_FUN__V52*/ meltfptr[51] =
      0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_SCANNING__V53*/ meltfptr[52] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_BOXINGFUN__V54*/ meltfptr[53] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_CLONING_FUN__V55*/ meltfptr[54] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_MAPFUN__V56*/ meltfptr[55] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_PREDEF_FIELDS__V57*/ meltfptr[56] =
      0;
    /*^clear */
	   /*clear *//*_.GENERATE_RUNTYPESUPPORT_PREDEFINED_HOOKS__V58*/ meltfptr[57]
      = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V61*/ meltfptr[59] = 0;
    /*_.LET___V6*/ meltfptr[4] = /*_.LET___V37*/ meltfptr[35];;

    MELT_LOCATION ("warmelt-modes.melt:3996:/ clear");
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.MAKE_STRINGCONST__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_.LET___V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_.OUTDECLNAME__V12*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_.LET___V13*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.OUTCODENAME__V16*/ meltfptr[13] = 0;
    /*^clear */
	   /*clear *//*_.DICTYPGTY__V17*/ meltfptr[14] = 0;
    /*^clear */
	   /*clear *//*_.RAWCTYPGTYLIST__V18*/ meltfptr[17] = 0;
    /*^clear */
	   /*clear *//*_.DICTYP__V20*/ meltfptr[18] = 0;
    /*^clear */
	   /*clear *//*_.RAWCTYPLIST__V21*/ meltfptr[20] = 0;
    /*^clear */
	   /*clear *//*_.OUTDECLBUF__V23*/ meltfptr[21] = 0;
    /*^clear */
	   /*clear *//*_.OUTCODEBUF__V24*/ meltfptr[23] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT__V27*/
      meltfptr[25] = 0;
    /*^clear */
	   /*clear *//*_.GENERATE_GPLV3PLUS_COPYRIGHT_NOTICE_C_COMMENT__V28*/
      meltfptr[24] = 0;
    /*^clear */
	   /*clear *//*_.LET___V37*/ meltfptr[35] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:3994:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:3994:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("RUNTYPESUPPORT_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_62_WARMELTmiMODES_RUNTYPESUPPORT_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE (meltclosure_ptr_t
							 meltclosp_,
							 melt_ptr_t
							 meltfirstargp_,
							 const
							 melt_argdescr_cell_t
							 meltxargdescr_[],
							 union meltparam_un *
							 meltxargtab_,
							 const
							 melt_argdescr_cell_t
							 meltxresdescr_[],
							 union meltparam_un *
							 meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 42
    melt_ptr_t mcfr_varptr[42];
#define MELTFRAM_NBVARNUM 19
    long mcfr_varnum[19];
/*others*/
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE_st
	 *) meltfirstargp_;
      /* use arguments meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 42; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE nbval 42*/
  meltfram__.mcfr_nbvar = 42 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATE_TO_FLAVORED_MODULE", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4148:/ getarg");
 /*_.INARG__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.OUTARG__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.OUTARG__V3*/ meltfptr[2])) !=
	      NULL);


  /*getarg#2 */
  /*^getarg */
  if (meltxargdescr_[1] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.CARG__V4*/ meltfptr[3] =
    (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.CARG__V4*/ meltfptr[3])) !=
	      NULL);


  /*getarg#3 */
  /*^getarg */
  if (meltxargdescr_[2] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.FLAVORS__V5*/ meltfptr[4] =
    (meltxargtab_[2].meltbp_aptr) ? (*(meltxargtab_[2].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.FLAVORS__V5*/ meltfptr[4])) !=
	      NULL);


  /*getarg#4 */
  /*^getarg */
  if (meltxargdescr_[3] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.CURENV__V6*/ meltfptr[5] =
    (meltxargtab_[3].meltbp_aptr) ? (*(meltxargtab_[3].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.CURENV__V6*/ meltfptr[5])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4149:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4149:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4149:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[13];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4149;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"translate_to_flavored_module inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V3*/ meltfptr[2];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " carg=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.CARG__V4*/ meltfptr[3];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " flavors=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & /*_.FLAVORS__V5*/ meltfptr[4];
	      /*^apply.arg */
	      argtab[11].meltbp_cstring = " curenv=";
	      /*^apply.arg */
	      argtab[12].meltbp_aptr =
		(melt_ptr_t *) & /*_.CURENV__V6*/ meltfptr[5];
	      /*_.MELT_DEBUG_FUN__V8*/ meltfptr[7] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V7*/ meltfptr[6] =
	      /*_.MELT_DEBUG_FUN__V8*/ meltfptr[7];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4149:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V8*/ meltfptr[7] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V7*/ meltfptr[6] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4149:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V7*/ meltfptr[6] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4151:/ quasiblock");



    MELT_CHECK_SIGNAL ();
    ;
 /*_#IS_STRING__L3*/ meltfnum[1] =
      (melt_magic_discr ((melt_ptr_t) ( /*_.OUTARG__V3*/ meltfptr[2])) ==
       MELTOBMAG_STRING);;
    MELT_LOCATION ("warmelt-modes.melt:4154:/ cond");
    /*cond */ if ( /*_#IS_STRING__L3*/ meltfnum[1])	/*then */
      {
	/*^cond.then */
	/*^block */
	/*anyblock */
	{

   /*_.MAKE_STRING_WITHOUT_SUFFIX__V11*/ meltfptr[10] =
	    /*make_string_without_suffix */
	    (meltgc_new_string_without_suffix
	     ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[1])),
	      melt_string_str ((melt_ptr_t) ( /*_.OUTARG__V3*/ meltfptr[2])),
	      (".c")));;
	  /*^compute */
	  /*_.BASNAM__V10*/ meltfptr[6] =
	    /*_.MAKE_STRING_WITHOUT_SUFFIX__V11*/ meltfptr[10];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4154:/ clear");
	     /*clear *//*_.MAKE_STRING_WITHOUT_SUFFIX__V11*/ meltfptr[10] = 0;
	}
	;
      }
    else
      {				/*^cond.else */

	/*^block */
	/*anyblock */
	{


	  MELT_CHECK_SIGNAL ();
	  ;
   /*_#IS_STRING__L4*/ meltfnum[0] =
	    (melt_magic_discr ((melt_ptr_t) ( /*_.INARG__V2*/ meltfptr[1])) ==
	     MELTOBMAG_STRING);;
	  MELT_LOCATION ("warmelt-modes.melt:4156:/ cond");
	  /*cond */ if ( /*_#IS_STRING__L4*/ meltfnum[0])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

     /*_.MAKE_STRING_NAKEDBASENAME__V13*/ meltfptr[12] =
		  (meltgc_new_string_nakedbasename
		   ((meltobject_ptr_t)
		    (( /*!DISCR_STRING */ meltfrout->tabval[1])),
		    melt_string_str ((melt_ptr_t)
				     ( /*_.INARG__V2*/ meltfptr[1]))));;
		/*^compute */
		/*_._IFELSE___V12*/ meltfptr[10] =
		  /*_.MAKE_STRING_NAKEDBASENAME__V13*/ meltfptr[12];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4156:/ clear");
	       /*clear *//*_.MAKE_STRING_NAKEDBASENAME__V13*/ meltfptr[12] =
		  0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:4159:/ locexp");
		  error ("MELT ERROR MSG [#%ld]::: %s", melt_dbgcounter,
			 ("invalid translate to flavored module arguments"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:4160:/ quasiblock");


     /*_._RETVAL___V1*/ meltfptr[0] = NULL;;

		{
		  MELT_LOCATION ("warmelt-modes.melt:4160:/ locexp");
		  /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
		  if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
		    melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
		  ;
		}
		;
		/*^finalreturn */
		;
		/*finalret */ goto meltlabend_rout;
		MELT_LOCATION ("warmelt-modes.melt:4158:/ quasiblock");


		/*_.PROGN___V15*/ meltfptr[14] =
		  /*_.RETURN___V14*/ meltfptr[12];;
		/*^compute */
		/*_._IFELSE___V12*/ meltfptr[10] =
		  /*_.PROGN___V15*/ meltfptr[14];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4156:/ clear");
	       /*clear *//*_.RETURN___V14*/ meltfptr[12] = 0;
		/*^clear */
	       /*clear *//*_.PROGN___V15*/ meltfptr[14] = 0;
	      }
	      ;
	    }
	  ;
	  /*_.BASNAM__V10*/ meltfptr[6] = /*_._IFELSE___V12*/ meltfptr[10];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4154:/ clear");
	     /*clear *//*_#IS_STRING__L4*/ meltfnum[0] = 0;
	  /*^clear */
	     /*clear *//*_._IFELSE___V12*/ meltfptr[10] = 0;
	}
	;
      }
    ;
    MELT_LOCATION ("warmelt-modes.melt:4162:/ cond");
    /*cond */ if ( /*_.OUTARG__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.OUTNAM__V16*/ meltfptr[12] = /*_.OUTARG__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4162:/ cond.else");

	/*_.OUTNAM__V16*/ meltfptr[12] = /*_.BASNAM__V10*/ meltfptr[6];;
      }
    ;
    /*^compute */
 /*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[14] =
      /*make_string_without_suffix */
      (meltgc_new_string_without_suffix
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[1])),
	melt_string_str ((melt_ptr_t) ( /*_.CARG__V4*/ meltfptr[3])),
	(".c")));;
    MELT_LOCATION ("warmelt-modes.melt:4163:/ cond");
    /*cond */ if ( /*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[14])	/*then */
      {
	/*^cond.then */
	/*_.RAWSRCNAM__V18*/ meltfptr[10] =
	  /*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[14];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4163:/ cond.else");

	/*^block */
	/*anyblock */
	{

   /*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18] =
	    (meltgc_new_string_nakedbasename
	     ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[1])),
	      melt_string_str ((melt_ptr_t)
			       ( /*_.OUTNAM__V16*/ meltfptr[12]))));;
	  /*^compute */
	  /*_.RAWSRCNAM__V18*/ meltfptr[10] =
	    /*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4163:/ clear");
	     /*clear *//*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18] = 0;
	}
	;
      }
    ;
 /*_.OUTBASE__V20*/ meltfptr[18] =
      /*make_string_without_suffix */
      (meltgc_new_string_without_suffix
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[1])),
	melt_string_str ((melt_ptr_t) ( /*_.OUTNAM__V16*/ meltfptr[12])),
	(".c")));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4167:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_A__L5*/ meltfnum[0] =
	melt_is_instance_of ((melt_ptr_t) ( /*_.CURENV__V6*/ meltfptr[5]),
			     (melt_ptr_t) (( /*!CLASS_ENVIRONMENT */
					    meltfrout->tabval[2])));;
      MELT_LOCATION ("warmelt-modes.melt:4167:/ cond");
      /*cond */ if ( /*_#IS_A__L5*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V22*/ meltfptr[21] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:4167:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check curenv"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (4167) ? (4167) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V22*/ meltfptr[21] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V21*/ meltfptr[20] = /*_._IFELSE___V22*/ meltfptr[21];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:4167:/ clear");
	     /*clear *//*_#IS_A__L5*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V22*/ meltfptr[21] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V21*/ meltfptr[20] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4168:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L6*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4168:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L6*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L7*/ meltfnum[6] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4168:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[9];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L7*/ meltfnum[6];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4168;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"translate_to_flavored_module basnam=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.BASNAM__V10*/ meltfptr[6];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " rawsrcnam=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.RAWSRCNAM__V18*/ meltfptr[10];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " outbase=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTBASE__V20*/ meltfptr[18];
	      /*_.MELT_DEBUG_FUN__V24*/ meltfptr[23] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V23*/ meltfptr[21] =
	      /*_.MELT_DEBUG_FUN__V24*/ meltfptr[23];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4168:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L7*/ meltfnum[6] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V24*/ meltfptr[23] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V23*/ meltfptr[21] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4168:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L6*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V23*/ meltfptr[21] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4170:/ apply");
    /*apply */
    {
      union meltparam_un argtab[2];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr =
	(melt_ptr_t *) & /*_.OUTBASE__V20*/ meltfptr[18];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V6*/ meltfptr[5];
      /*_.TRANSLATE_TO_C_MODULE_MELT_SOURCES__V25*/ meltfptr[23] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_C_MODULE_MELT_SOURCES */ meltfrout->
		      tabval[3])),
		    (melt_ptr_t) ( /*_.INARG__V2*/ meltfptr[1]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
 /*_#IS_STRING__L8*/ meltfnum[6] =
      (melt_magic_discr ((melt_ptr_t) ( /*_.FLAVORS__V5*/ meltfptr[4])) ==
       MELTOBMAG_STRING);;
    MELT_LOCATION ("warmelt-modes.melt:4172:/ cond");
    /*cond */ if ( /*_#IS_STRING__L8*/ meltfnum[6])	/*then */
      {
	/*^cond.then */
	/*^block */
	/*anyblock */
	{


#if MELT_HAVE_DEBUG
	  MELT_LOCATION ("warmelt-modes.melt:4173:/ cppif.then");
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	      melt_dbgcounter++;
#endif
	      ;
	    }
	    ;

	    MELT_CHECK_SIGNAL ();
	    ;
     /*_#MELT_NEED_DBG__L9*/ meltfnum[0] =
	      /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	      ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	      0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	      ;;
	    MELT_LOCATION ("warmelt-modes.melt:4173:/ cond");
	    /*cond */ if ( /*_#MELT_NEED_DBG__L9*/ meltfnum[0])	/*then */
	      {
		/*^cond.then */
		/*^block */
		/*anyblock */
		{

       /*_#MELT_CALLCOUNT__L10*/ meltfnum[9] =
		    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
		    meltcallcount	/* melt_callcount debugging */
#else
		    0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
		    ;;

		  MELT_CHECK_SIGNAL ();
		  ;
		  MELT_LOCATION ("warmelt-modes.melt:4173:/ apply");
		  /*apply */
		  {
		    union meltparam_un argtab[9];
		    memset (&argtab, 0, sizeof (argtab));
		    /*^apply.arg */
		    argtab[0].meltbp_long =
		      /*_#MELT_CALLCOUNT__L10*/ meltfnum[9];
		    /*^apply.arg */
		    argtab[1].meltbp_cstring = "warmelt-modes.melt";
		    /*^apply.arg */
		    argtab[2].meltbp_long = 4173;
		    /*^apply.arg */
		    argtab[3].meltbp_cstring =
		      "before generate_flavored_melt_module rawsrcnam=";
		    /*^apply.arg */
		    argtab[4].meltbp_aptr =
		      (melt_ptr_t *) & /*_.RAWSRCNAM__V18*/ meltfptr[10];
		    /*^apply.arg */
		    argtab[5].meltbp_cstring = " outnam=";
		    /*^apply.arg */
		    argtab[6].meltbp_aptr =
		      (melt_ptr_t *) & /*_.OUTNAM__V16*/ meltfptr[12];
		    /*^apply.arg */
		    argtab[7].meltbp_cstring = "flavor=";
		    /*^apply.arg */
		    argtab[8].meltbp_aptr =
		      (melt_ptr_t *) & /*_.FLAVORS__V5*/ meltfptr[4];
		    /*_.MELT_DEBUG_FUN__V28*/ meltfptr[27] =
		      melt_apply ((meltclosure_ptr_t)
				  (( /*!MELT_DEBUG_FUN */ meltfrout->
				    tabval[0])),
				  (melt_ptr_t) (( /*nil */ NULL)),
				  (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_LONG MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR MELTBPARSTR_CSTRING
				   MELTBPARSTR_PTR ""), argtab, "",
				  (union meltparam_un *) 0);
		  }
		  ;
		  /*_._IF___V27*/ meltfptr[26] =
		    /*_.MELT_DEBUG_FUN__V28*/ meltfptr[27];;
		  /*epilog */

		  MELT_LOCATION ("warmelt-modes.melt:4173:/ clear");
		 /*clear *//*_#MELT_CALLCOUNT__L10*/ meltfnum[9] = 0;
		  /*^clear */
		 /*clear *//*_.MELT_DEBUG_FUN__V28*/ meltfptr[27] = 0;
		}
		;
	      }
	    else
	      {			/*^cond.else */

      /*_._IF___V27*/ meltfptr[26] = NULL;;
	      }
	    ;

	    {
	      MELT_LOCATION ("warmelt-modes.melt:4173:/ locexp");
	      /*void */ (void) 0;
	    }
	    ;
	    /*^quasiblock */


	    /*epilog */

	    /*^clear */
	       /*clear *//*_#MELT_NEED_DBG__L9*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_._IF___V27*/ meltfptr[26] = 0;
	  }

#else /*MELT_HAVE_DEBUG */
	  /*^cppif.else */
	  /*^block */
	  /*anyblock */
	  {


	    {
	      /*^locexp */
	      /*void */ (void) 0;
	    }
	    ;
	    /*epilog */
	  }

#endif /*MELT_HAVE_DEBUG */
	  ;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:4175:/ locexp");
	    /*generate_flavored_melt_module */
	      melt_compile_source (melt_string_str
				   ((melt_ptr_t) /*_.RAWSRCNAM__V18*/
				    meltfptr[10]),
				   melt_string_str ((melt_ptr_t)
						    /*_.OUTNAM__V16*/
						    meltfptr[12]),
				   NULL, melt_string_str ((melt_ptr_t) /*_.FLAVORS__V5*/ meltfptr[4]));	/*generate_flavored_melt_module */
	    ;
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:4172:/ quasiblock");


	  /*epilog */
	}
	;
      }
    else
      {				/*^cond.else */

	/*^block */
	/*anyblock */
	{


	  MELT_CHECK_SIGNAL ();
	  ;
   /*_#IS_LIST__L11*/ meltfnum[9] =
	    (melt_magic_discr ((melt_ptr_t) ( /*_.FLAVORS__V5*/ meltfptr[4]))
	     == MELTOBMAG_LIST);;
	  MELT_LOCATION ("warmelt-modes.melt:4176:/ cond");
	  /*cond */ if ( /*_#IS_LIST__L11*/ meltfnum[9])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {

		/*citerblock FOREACH_IN_LIST */
		{
		  /* start foreach_in_list meltcit1__EACHLIST */
		  for ( /*_.CURPAIR__V30*/ meltfptr[26] =
		       melt_list_first ((melt_ptr_t) /*_.FLAVORS__V5*/
					meltfptr[4]);
		       melt_magic_discr ((melt_ptr_t) /*_.CURPAIR__V30*/
					 meltfptr[26]) == MELTOBMAG_PAIR;
		       /*_.CURPAIR__V30*/ meltfptr[26] =
		       melt_pair_tail ((melt_ptr_t) /*_.CURPAIR__V30*/
				       meltfptr[26]))
		    {
		      /*_.CURFLAVOR__V31*/ meltfptr[30] =
			melt_pair_head ((melt_ptr_t) /*_.CURPAIR__V30*/
					meltfptr[26]);



#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:4180:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			{
			  /*^locexp */
			  /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
			  melt_dbgcounter++;
#endif
			  ;
			}
			;

			MELT_CHECK_SIGNAL ();
			;
	/*_#MELT_NEED_DBG__L12*/ meltfnum[0] =
			  /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
			  ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
			  0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
			  ;;
			MELT_LOCATION ("warmelt-modes.melt:4180:/ cond");
			/*cond */ if ( /*_#MELT_NEED_DBG__L12*/ meltfnum[0])	/*then */
			  {
			    /*^cond.then */
			    /*^block */
			    /*anyblock */
			    {

	  /*_#MELT_CALLCOUNT__L13*/ meltfnum[12] =
				/* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				meltcallcount	/* melt_callcount debugging */
#else
				0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				;;

			      MELT_CHECK_SIGNAL ();
			      ;
			      MELT_LOCATION
				("warmelt-modes.melt:4180:/ apply");
			      /*apply */
			      {
				union meltparam_un argtab[9];
				memset (&argtab, 0, sizeof (argtab));
				/*^apply.arg */
				argtab[0].meltbp_long =
				  /*_#MELT_CALLCOUNT__L13*/ meltfnum[12];
				/*^apply.arg */
				argtab[1].meltbp_cstring =
				  "warmelt-modes.melt";
				/*^apply.arg */
				argtab[2].meltbp_long = 4180;
				/*^apply.arg */
				argtab[3].meltbp_cstring =
				  "before generate_flavored_melt_module rawsrcnam=";
				/*^apply.arg */
				argtab[4].meltbp_aptr =
				  (melt_ptr_t *) & /*_.RAWSRCNAM__V18*/
				  meltfptr[10];
				/*^apply.arg */
				argtab[5].meltbp_cstring = " outnam=";
				/*^apply.arg */
				argtab[6].meltbp_aptr =
				  (melt_ptr_t *) & /*_.OUTNAM__V16*/
				  meltfptr[12];
				/*^apply.arg */
				argtab[7].meltbp_cstring = "flavor=";
				/*^apply.arg */
				argtab[8].meltbp_aptr =
				  (melt_ptr_t *) & /*_.CURFLAVOR__V31*/
				  meltfptr[30];
				/*_.MELT_DEBUG_FUN__V33*/ meltfptr[32] =
				  melt_apply ((meltclosure_ptr_t)
					      (( /*!MELT_DEBUG_FUN */
						meltfrout->tabval[0])),
					      (melt_ptr_t) (( /*nil */ NULL)),
					      (MELTBPARSTR_LONG
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_LONG
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_PTR
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_PTR
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_PTR ""), argtab,
					      "", (union meltparam_un *) 0);
			      }
			      ;
			      /*_._IF___V32*/ meltfptr[31] =
				/*_.MELT_DEBUG_FUN__V33*/ meltfptr[32];;
			      /*epilog */

			      MELT_LOCATION
				("warmelt-modes.melt:4180:/ clear");
		    /*clear *//*_#MELT_CALLCOUNT__L13*/ meltfnum[12]
				= 0;
			      /*^clear */
		    /*clear *//*_.MELT_DEBUG_FUN__V33*/ meltfptr[32]
				= 0;
			    }
			    ;
			  }
			else
			  {	/*^cond.else */

	 /*_._IF___V32*/ meltfptr[31] = NULL;;
			  }
			;

			{
			  MELT_LOCATION ("warmelt-modes.melt:4180:/ locexp");
			  /*void */ (void) 0;
			}
			;
			/*^quasiblock */


			/*epilog */

			/*^clear */
		  /*clear *//*_#MELT_NEED_DBG__L12*/ meltfnum[0] = 0;
			/*^clear */
		  /*clear *//*_._IF___V32*/ meltfptr[31] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*^block */
		      /*anyblock */
		      {


			{
			  /*^locexp */
			  /*void */ (void) 0;
			}
			;
			/*epilog */
		      }

#endif /*MELT_HAVE_DEBUG */
		      ;

		      {
			MELT_LOCATION ("warmelt-modes.melt:4182:/ locexp");
			/*generate_flavored_melt_module */
			  melt_compile_source (melt_string_str
					       ((melt_ptr_t)
						/*_.RAWSRCNAM__V18*/
						meltfptr[10]),
					       melt_string_str ((melt_ptr_t)
								/*_.OUTNAM__V16*/
								meltfptr[12]),
					       NULL, melt_string_str ((melt_ptr_t) /*_.CURFLAVOR__V31*/ meltfptr[30]));	/*generate_flavored_melt_module */
			;
		      }
		      ;
		    }		/* end foreach_in_list meltcit1__EACHLIST */
     /*_.CURPAIR__V30*/ meltfptr[26] = NULL;
     /*_.CURFLAVOR__V31*/ meltfptr[30] = NULL;


		  /*citerepilog */

		  MELT_LOCATION ("warmelt-modes.melt:4177:/ clear");
		/*clear *//*_.CURPAIR__V30*/ meltfptr[26] = 0;
		  /*^clear */
		/*clear *//*_.CURFLAVOR__V31*/ meltfptr[30] = 0;
		}		/*endciterblock FOREACH_IN_LIST */
		;
		/*epilog */
	      }
	      ;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:4176:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
     /*_#IS_MULTIPLE__L14*/ meltfnum[12] =
		  (melt_magic_discr
		   ((melt_ptr_t) ( /*_.FLAVORS__V5*/ meltfptr[4])) ==
		   MELTOBMAG_MULTIPLE);;
		MELT_LOCATION ("warmelt-modes.melt:4183:/ cond");
		/*cond */ if ( /*_#IS_MULTIPLE__L14*/ meltfnum[12])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {

		      /*citerblock FOREACH_IN_MULTIPLE */
		      {
			/* start foreach_in_multiple meltcit2__EACHTUP */
			long meltcit2__EACHTUP_ln =
			  melt_multiple_length ((melt_ptr_t) /*_.FLAVORS__V5*/
						meltfptr[4]);
			for ( /*_#FLIX__L15*/ meltfnum[0] = 0;
			     ( /*_#FLIX__L15*/ meltfnum[0] >= 0)
			     && ( /*_#FLIX__L15*/ meltfnum[0] <
				 meltcit2__EACHTUP_ln);
	/*_#FLIX__L15*/ meltfnum[0]++)
			  {
			    /*_.CURFLAVOR__V35*/ meltfptr[31] =
			      melt_multiple_nth ((melt_ptr_t)
						 ( /*_.FLAVORS__V5*/
						  meltfptr[4]),
						 /*_#FLIX__L15*/ meltfnum[0]);




#if MELT_HAVE_DEBUG
			    MELT_LOCATION
			      ("warmelt-modes.melt:4187:/ cppif.then");
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
				melt_dbgcounter++;
#endif
				;
			      }
			      ;

			      MELT_CHECK_SIGNAL ();
			      ;
	  /*_#MELT_NEED_DBG__L16*/ meltfnum[15] =
				/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
				( /*melt_need_dbg */
				 melt_need_debug ((int) 0))
#else
				0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
				;;
			      MELT_LOCATION
				("warmelt-modes.melt:4187:/ cond");
			      /*cond */ if ( /*_#MELT_NEED_DBG__L16*/ meltfnum[15])	/*then */
				{
				  /*^cond.then */
				  /*^block */
				  /*anyblock */
				  {

	    /*_#MELT_CALLCOUNT__L17*/ meltfnum[16] =
				      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				      meltcallcount	/* melt_callcount debugging */
#else
				      0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				      ;;

				    MELT_CHECK_SIGNAL ();
				    ;
				    MELT_LOCATION
				      ("warmelt-modes.melt:4187:/ apply");
				    /*apply */
				    {
				      union meltparam_un argtab[11];
				      memset (&argtab, 0, sizeof (argtab));
				      /*^apply.arg */
				      argtab[0].meltbp_long =
					/*_#MELT_CALLCOUNT__L17*/
					meltfnum[16];
				      /*^apply.arg */
				      argtab[1].meltbp_cstring =
					"warmelt-modes.melt";
				      /*^apply.arg */
				      argtab[2].meltbp_long = 4187;
				      /*^apply.arg */
				      argtab[3].meltbp_cstring =
					"before generate_flavored_melt_module rawsrcnam=";
				      /*^apply.arg */
				      argtab[4].meltbp_aptr =
					(melt_ptr_t *) & /*_.RAWSRCNAM__V18*/
					meltfptr[10];
				      /*^apply.arg */
				      argtab[5].meltbp_cstring = " outnam=";
				      /*^apply.arg */
				      argtab[6].meltbp_aptr =
					(melt_ptr_t *) & /*_.OUTNAM__V16*/
					meltfptr[12];
				      /*^apply.arg */
				      argtab[7].meltbp_cstring = "flavor=";
				      /*^apply.arg */
				      argtab[8].meltbp_aptr =
					(melt_ptr_t *) & /*_.CURFLAVOR__V35*/
					meltfptr[31];
				      /*^apply.arg */
				      argtab[9].meltbp_cstring = " flix=";
				      /*^apply.arg */
				      argtab[10].meltbp_long =
					/*_#FLIX__L15*/ meltfnum[0];
				      /*_.MELT_DEBUG_FUN__V37*/ meltfptr[36] =
					melt_apply ((meltclosure_ptr_t)
						    (( /*!MELT_DEBUG_FUN */
						      meltfrout->tabval[0])),
						    (melt_ptr_t) (( /*nil */
								   NULL)),
						    (MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_PTR
						     MELTBPARSTR_CSTRING
						     MELTBPARSTR_LONG ""),
						    argtab, "",
						    (union meltparam_un *) 0);
				    }
				    ;
				    /*_._IF___V36*/ meltfptr[35] =
				      /*_.MELT_DEBUG_FUN__V37*/ meltfptr[36];;
				    /*epilog */

				    MELT_LOCATION
				      ("warmelt-modes.melt:4187:/ clear");
		      /*clear *//*_#MELT_CALLCOUNT__L17*/
				      meltfnum[16] = 0;
				    /*^clear */
		      /*clear *//*_.MELT_DEBUG_FUN__V37*/
				      meltfptr[36] = 0;
				  }
				  ;
				}
			      else
				{	/*^cond.else */

	   /*_._IF___V36*/ meltfptr[35] = NULL;;
				}
			      ;

			      {
				MELT_LOCATION
				  ("warmelt-modes.melt:4187:/ locexp");
				/*void */ (void) 0;
			      }
			      ;
			      /*^quasiblock */


			      /*epilog */

			      /*^clear */
		    /*clear *//*_#MELT_NEED_DBG__L16*/ meltfnum[15]
				= 0;
			      /*^clear */
		    /*clear *//*_._IF___V36*/ meltfptr[35] = 0;
			    }

#else /*MELT_HAVE_DEBUG */
			    /*^cppif.else */
			    /*^block */
			    /*anyblock */
			    {


			      {
				/*^locexp */
				/*void */ (void) 0;
			      }
			      ;
			      /*epilog */
			    }

#endif /*MELT_HAVE_DEBUG */
			    ;

			    {
			      MELT_LOCATION
				("warmelt-modes.melt:4189:/ locexp");
			      /*generate_flavored_melt_module */
				melt_compile_source (melt_string_str
						     ((melt_ptr_t)
						      /*_.RAWSRCNAM__V18*/
						      meltfptr[10]),
						     melt_string_str ((melt_ptr_t) /*_.OUTNAM__V16*/ meltfptr[12]),
						     NULL, melt_string_str ((melt_ptr_t) /*_.CURFLAVOR__V35*/ meltfptr[31]));	/*generate_flavored_melt_module */
			      ;
			    }
			    ;
			    if ( /*_#FLIX__L15*/ meltfnum[0] < 0)
			      break;
			  }	/* end  foreach_in_multiple meltcit2__EACHTUP */

			/*citerepilog */

			MELT_LOCATION ("warmelt-modes.melt:4184:/ clear");
		  /*clear *//*_.CURFLAVOR__V35*/ meltfptr[31] = 0;
			/*^clear */
		  /*clear *//*_#FLIX__L15*/ meltfnum[0] = 0;
		      }		/*endciterblock FOREACH_IN_MULTIPLE */
		      ;
		      /*epilog */
		    }
		    ;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:4183:/ cond.else");

		    /*^block */
		    /*anyblock */
		    {


#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:4191:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			{
			  /*^locexp */
			  /*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
			  melt_dbgcounter++;
#endif
			  ;
			}
			;

			MELT_CHECK_SIGNAL ();
			;
	 /*_#MELT_NEED_DBG__L18*/ meltfnum[16] =
			  /*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
			  ( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
			  0	/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
			  ;;
			MELT_LOCATION ("warmelt-modes.melt:4191:/ cond");
			/*cond */ if ( /*_#MELT_NEED_DBG__L18*/ meltfnum[16])	/*then */
			  {
			    /*^cond.then */
			    /*^block */
			    /*anyblock */
			    {

	   /*_#MELT_CALLCOUNT__L19*/ meltfnum[15] =
				/* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
				meltcallcount	/* melt_callcount debugging */
#else
				0L	/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
				;;

			      MELT_CHECK_SIGNAL ();
			      ;
			      MELT_LOCATION
				("warmelt-modes.melt:4191:/ apply");
			      /*apply */
			      {
				union meltparam_un argtab[5];
				memset (&argtab, 0, sizeof (argtab));
				/*^apply.arg */
				argtab[0].meltbp_long =
				  /*_#MELT_CALLCOUNT__L19*/ meltfnum[15];
				/*^apply.arg */
				argtab[1].meltbp_cstring =
				  "warmelt-modes.melt";
				/*^apply.arg */
				argtab[2].meltbp_long = 4191;
				/*^apply.arg */
				argtab[3].meltbp_cstring =
				  "translate_to_flavored_module bad flavors=";
				/*^apply.arg */
				argtab[4].meltbp_aptr =
				  (melt_ptr_t *) & /*_.FLAVORS__V5*/
				  meltfptr[4];
				/*_.MELT_DEBUG_FUN__V39*/ meltfptr[35] =
				  melt_apply ((meltclosure_ptr_t)
					      (( /*!MELT_DEBUG_FUN */
						meltfrout->tabval[0])),
					      (melt_ptr_t) (( /*nil */ NULL)),
					      (MELTBPARSTR_LONG
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_LONG
					       MELTBPARSTR_CSTRING
					       MELTBPARSTR_PTR ""), argtab,
					      "", (union meltparam_un *) 0);
			      }
			      ;
			      /*_._IF___V38*/ meltfptr[36] =
				/*_.MELT_DEBUG_FUN__V39*/ meltfptr[35];;
			      /*epilog */

			      MELT_LOCATION
				("warmelt-modes.melt:4191:/ clear");
		     /*clear *//*_#MELT_CALLCOUNT__L19*/ meltfnum[15]
				= 0;
			      /*^clear */
		     /*clear *//*_.MELT_DEBUG_FUN__V39*/ meltfptr[35]
				= 0;
			    }
			    ;
			  }
			else
			  {	/*^cond.else */

	  /*_._IF___V38*/ meltfptr[36] = NULL;;
			  }
			;

			{
			  MELT_LOCATION ("warmelt-modes.melt:4191:/ locexp");
			  /*void */ (void) 0;
			}
			;
			/*^quasiblock */


			/*epilog */

			/*^clear */
		   /*clear *//*_#MELT_NEED_DBG__L18*/ meltfnum[16] = 0;
			/*^clear */
		   /*clear *//*_._IF___V38*/ meltfptr[36] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*^block */
		      /*anyblock */
		      {


			{
			  /*^locexp */
			  /*void */ (void) 0;
			}
			;
			/*epilog */
		      }

#endif /*MELT_HAVE_DEBUG */
		      ;

#if MELT_HAVE_DEBUG
		      MELT_LOCATION ("warmelt-modes.melt:4192:/ cppif.then");
		      /*^block */
		      /*anyblock */
		      {


			MELT_CHECK_SIGNAL ();
			;
			/*^cond */
			/*cond */ if (( /*nil */ NULL))	/*then */
			  {
			    /*^cond.then */
			    /*_._IFELSE___V41*/ meltfptr[36] =
			      ( /*nil */ NULL);;
			  }
			else
			  {
			    MELT_LOCATION
			      ("warmelt-modes.melt:4192:/ cond.else");

			    /*^block */
			    /*anyblock */
			    {




			      {
				/*^locexp */
				melt_assert_failed (("invalid flavors"),
						    ("warmelt-modes.melt")
						    ? ("warmelt-modes.melt") :
						    __FILE__,
						    (4192) ? (4192) :
						    __LINE__, __FUNCTION__);
				;
			      }
			      ;
		     /*clear *//*_._IFELSE___V41*/ meltfptr[36] = 0;
			      /*epilog */
			    }
			    ;
			  }
			;
			/*^compute */
			/*_.IFCPP___V40*/ meltfptr[35] =
			  /*_._IFELSE___V41*/ meltfptr[36];;
			/*epilog */

			MELT_LOCATION ("warmelt-modes.melt:4192:/ clear");
		   /*clear *//*_._IFELSE___V41*/ meltfptr[36] = 0;
		      }

#else /*MELT_HAVE_DEBUG */
		      /*^cppif.else */
		      /*_.IFCPP___V40*/ meltfptr[35] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
		      ;
		      MELT_LOCATION ("warmelt-modes.melt:4190:/ quasiblock");


		      /*_.PROGN___V42*/ meltfptr[36] =
			/*_.IFCPP___V40*/ meltfptr[35];;
		      /*^compute */
		      /*_._IFELSE___V34*/ meltfptr[32] =
			/*_.PROGN___V42*/ meltfptr[36];;
		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:4183:/ clear");
		 /*clear *//*_.IFCPP___V40*/ meltfptr[35] = 0;
		      /*^clear */
		 /*clear *//*_.PROGN___V42*/ meltfptr[36] = 0;
		    }
		    ;
		  }
		;
		/*_._IFELSE___V29*/ meltfptr[27] =
		  /*_._IFELSE___V34*/ meltfptr[32];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4176:/ clear");
	       /*clear *//*_#IS_MULTIPLE__L14*/ meltfnum[12] = 0;
		/*^clear */
	       /*clear *//*_._IFELSE___V34*/ meltfptr[32] = 0;
	      }
	      ;
	    }
	  ;
	  /*_._IFELSE___V26*/ meltfptr[21] =
	    /*_._IFELSE___V29*/ meltfptr[27];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4172:/ clear");
	     /*clear *//*_#IS_LIST__L11*/ meltfnum[9] = 0;
	  /*^clear */
	     /*clear *//*_._IFELSE___V29*/ meltfptr[27] = 0;
	}
	;
      }
    ;
    /*_.LET___V9*/ meltfptr[7] = /*_._IFELSE___V26*/ meltfptr[21];;

    MELT_LOCATION ("warmelt-modes.melt:4151:/ clear");
	   /*clear *//*_#IS_STRING__L3*/ meltfnum[1] = 0;
    /*^clear */
	   /*clear *//*_.BASNAM__V10*/ meltfptr[6] = 0;
    /*^clear */
	   /*clear *//*_.OUTNAM__V16*/ meltfptr[12] = 0;
    /*^clear */
	   /*clear *//*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[14] = 0;
    /*^clear */
	   /*clear *//*_.RAWSRCNAM__V18*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.OUTBASE__V20*/ meltfptr[18] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V21*/ meltfptr[20] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_C_MODULE_MELT_SOURCES__V25*/ meltfptr[23] = 0;
    /*^clear */
	   /*clear *//*_#IS_STRING__L8*/ meltfnum[6] = 0;
    /*^clear */
	   /*clear *//*_._IFELSE___V26*/ meltfptr[21] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4148:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V9*/ meltfptr[7];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4148:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V9*/ meltfptr[7] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATE_TO_FLAVORED_MODULE", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_63_WARMELTmiMODES_TRANSLATE_TO_FLAVORED_MODULE */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD (meltclosure_ptr_t
						    meltclosp_,
						    melt_ptr_t meltfirstargp_,
						    const melt_argdescr_cell_t
						    meltxargdescr_[],
						    union meltparam_un *
						    meltxargtab_,
						    const melt_argdescr_cell_t
						    meltxresdescr_[],
						    union meltparam_un *
						    meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 17
    melt_ptr_t mcfr_varptr[17];
#define MELTFRAM_NBVARNUM 4
    long mcfr_varnum[4];
/*others*/
    const char *loc_CSTRING__o0;
    const char *loc_CSTRING__o1;
    const char *loc_CSTRING__o2;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD_st *)
	meltfirstargp_;
      /* use arguments meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 17; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD nbval 17*/
  meltfram__.mcfr_nbvar = 17 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATETOMODULE_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4196:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


    {
      MELT_LOCATION ("warmelt-modes.melt:4197:/ locexp");
      debugeputs (("starting translatetomodule_docmd"));
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4198:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4198:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4198:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4198;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "start translatetomodule_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4198:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4198:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4199:/ quasiblock");


    /*_.PARMODENV__V7*/ meltfptr[3] = ( /*!konst_1 */ meltfrout->tabval[1]);;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4201:/ cond");
    /*cond */ if ( /*_.MODULDATA__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.CURENV__V8*/ meltfptr[7] = /*_.MODULDATA__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4201:/ cond.else");

	/*_.CURENV__V8*/ meltfptr[7] =
	  ( /*!INITIAL_ENVIRONMENT */ meltfrout->tabval[2]);;
      }
    ;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("arg");;
    /*^compute */
 /*_.INARG__V9*/ meltfptr[8] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o1 =
      melt_argument ("output");;
    /*^compute */
 /*_.OUTARG__V10*/ meltfptr[9] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o1)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o2 =
      melt_argument ("coutput");;
    /*^compute */
 /*_.COUTARG__V11*/ meltfptr[10] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o2)));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4206:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4206:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4206:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[11];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4206;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translatetomodule_docmd inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V9*/ meltfptr[8];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " coutarg=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " curenv=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V12*/ meltfptr[11] =
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4206:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V12*/ meltfptr[11] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4206:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V12*/ meltfptr[11] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4209:/ blockmultialloc");
    /*multiallocblock */
    {
      struct meltletrec_1_st
      {
	struct MELT_MULTIPLE_STRUCT (3) rtup_0__TUPLREC__x1;
	long meltletrec_1_endgap;
      } *meltletrec_1_ptr = 0;
      meltletrec_1_ptr =
	(struct meltletrec_1_st *)
	meltgc_allocate (sizeof (struct meltletrec_1_st), 0);
      /*^blockmultialloc.initfill */
      /*inimult rtup_0__TUPLREC__x1 */
 /*_.TUPLREC___V15*/ meltfptr[11] =
	(melt_ptr_t) & meltletrec_1_ptr->rtup_0__TUPLREC__x1;
      meltletrec_1_ptr->rtup_0__TUPLREC__x1.discr =
	(meltobject_ptr_t) (((melt_ptr_t) (MELT_PREDEF (DISCR_MULTIPLE))));
      meltletrec_1_ptr->rtup_0__TUPLREC__x1.nbval = 3;


      /*^putuple */
      /*putupl#1 */
      melt_assertmsg ("putupl [:4209] #1 checktup",
		      melt_magic_discr ((melt_ptr_t)
					( /*_.TUPLREC___V15*/ meltfptr[11]))
		      == MELTOBMAG_MULTIPLE);
      melt_assertmsg ("putupl [:4209] #1 checkoff",
		      (0 >= 0
		       && 0 <
		       melt_multiple_length ((melt_ptr_t)
					     ( /*_.TUPLREC___V15*/
					      meltfptr[11]))));
      ((meltmultiple_ptr_t) ( /*_.TUPLREC___V15*/ meltfptr[11]))->tabval[0] =
	(melt_ptr_t) (( /*!konst_5 */ meltfrout->tabval[5]));
      ;
      /*^putuple */
      /*putupl#2 */
      melt_assertmsg ("putupl [:4209] #2 checktup",
		      melt_magic_discr ((melt_ptr_t)
					( /*_.TUPLREC___V15*/ meltfptr[11]))
		      == MELTOBMAG_MULTIPLE);
      melt_assertmsg ("putupl [:4209] #2 checkoff",
		      (1 >= 0
		       && 1 <
		       melt_multiple_length ((melt_ptr_t)
					     ( /*_.TUPLREC___V15*/
					      meltfptr[11]))));
      ((meltmultiple_ptr_t) ( /*_.TUPLREC___V15*/ meltfptr[11]))->tabval[1] =
	(melt_ptr_t) (( /*!konst_6 */ meltfrout->tabval[6]));
      ;
      /*^putuple */
      /*putupl#3 */
      melt_assertmsg ("putupl [:4209] #3 checktup",
		      melt_magic_discr ((melt_ptr_t)
					( /*_.TUPLREC___V15*/ meltfptr[11]))
		      == MELTOBMAG_MULTIPLE);
      melt_assertmsg ("putupl [:4209] #3 checkoff",
		      (2 >= 0
		       && 2 <
		       melt_multiple_length ((melt_ptr_t)
					     ( /*_.TUPLREC___V15*/
					      meltfptr[11]))));
      ((meltmultiple_ptr_t) ( /*_.TUPLREC___V15*/ meltfptr[11]))->tabval[2] =
	(melt_ptr_t) (( /*!konst_7 */ meltfrout->tabval[7]));
      ;
      /*^touch */
      meltgc_touch ( /*_.TUPLREC___V15*/ meltfptr[11]);
      ;
      /*_.TUPLE___V14*/ meltfptr[12] = /*_.TUPLREC___V15*/ meltfptr[11];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:4209:/ clear");
	    /*clear *//*_.TUPLREC___V15*/ meltfptr[11] = 0;
      /*^clear */
	    /*clear *//*_.TUPLREC___V15*/ meltfptr[11] = 0;
    }				/*end multiallocblock */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4208:/ apply");
    /*apply */
    {
      union meltparam_un argtab[4];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
      /*^apply.arg */
      argtab[2].meltbp_aptr = (melt_ptr_t *) & /*_.TUPLE___V14*/ meltfptr[12];
      /*^apply.arg */
      argtab[3].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
      /*_.TRANSLATE_TO_FLAVORED_MODULE__V16*/ meltfptr[11] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_FLAVORED_MODULE */ meltfrout->
		      tabval[4])),
		    (melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR
		     MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4211:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_8_TRUE */ meltfrout->tabval[8]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4211:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*_.LET___V6*/ meltfptr[4] = /*_.RETURN___V17*/ meltfptr[16];;

    MELT_LOCATION ("warmelt-modes.melt:4199:/ clear");
	   /*clear *//*_.PARMODENV__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.CURENV__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.INARG__V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o1 = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o2 = 0;
    /*^clear */
	   /*clear *//*_.COUTARG__V11*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.TUPLE___V14*/ meltfptr[12] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_FLAVORED_MODULE__V16*/ meltfptr[11] = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V17*/ meltfptr[16] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4196:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4196:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATETOMODULE_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_64_WARMELTmiMODES_TRANSLATETOMODULE_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD (meltclosure_ptr_t meltclosp_,
						 melt_ptr_t meltfirstargp_,
						 const melt_argdescr_cell_t
						 meltxargdescr_[],
						 union meltparam_un *
						 meltxargtab_,
						 const melt_argdescr_cell_t
						 meltxresdescr_[],
						 union meltparam_un *
						 meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 15
    melt_ptr_t mcfr_varptr[15];
#define MELTFRAM_NBVARNUM 4
    long mcfr_varnum[4];
/*others*/
    const char *loc_CSTRING__o0;
    const char *loc_CSTRING__o1;
    const char *loc_CSTRING__o2;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct meltframe_meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD_st
	 *) meltfirstargp_;
      /* use arguments meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 15; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD nbval 15*/
  meltfram__.mcfr_nbvar = 15 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATEDEBUG_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4225:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4226:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4226:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4226:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4226;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "start translatedebug_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4226:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4226:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4227:/ quasiblock");


    /*_.PARMODENV__V7*/ meltfptr[3] = ( /*!konst_1 */ meltfrout->tabval[1]);;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4229:/ cond");
    /*cond */ if ( /*_.MODULDATA__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.CURENV__V8*/ meltfptr[7] = /*_.MODULDATA__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4229:/ cond.else");

	/*_.CURENV__V8*/ meltfptr[7] =
	  ( /*!INITIAL_ENVIRONMENT */ meltfrout->tabval[2]);;
      }
    ;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("arg");;
    /*^compute */
 /*_.INARG__V9*/ meltfptr[8] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o1 =
      melt_argument ("output");;
    /*^compute */
 /*_.OUTARG__V10*/ meltfptr[9] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o1)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o2 =
      melt_argument ("coutput");;
    /*^compute */
 /*_.COUTARG__V11*/ meltfptr[10] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o2)));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4234:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4234:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4234:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[11];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4234;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translatedebug_docmd inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V9*/ meltfptr[8];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " coutarg=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " curenv=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V12*/ meltfptr[11] =
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4234:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V12*/ meltfptr[11] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4234:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V12*/ meltfptr[11] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4236:/ apply");
    /*apply */
    {
      union meltparam_un argtab[4];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & ( /*!konst_5 */ meltfrout->tabval[5]);
      /*^apply.arg */
      argtab[3].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
      /*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_FLAVORED_MODULE */ meltfrout->
		      tabval[4])),
		    (melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR
		     MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;
    /*_.LET___V6*/ meltfptr[4] =
      /*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12];;

    MELT_LOCATION ("warmelt-modes.melt:4227:/ clear");
	   /*clear *//*_.PARMODENV__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.CURENV__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.INARG__V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o1 = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o2 = 0;
    /*^clear */
	   /*clear *//*_.COUTARG__V11*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4237:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_6_TRUE */ meltfrout->tabval[6]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4237:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4225:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.RETURN___V15*/ meltfptr[11];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4225:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V15*/ meltfptr[11] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATEDEBUG_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_65_WARMELTmiMODES_TRANSLATEDEBUG_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD (meltclosure_ptr_t
						   meltclosp_,
						   melt_ptr_t meltfirstargp_,
						   const melt_argdescr_cell_t
						   meltxargdescr_[],
						   union meltparam_un *
						   meltxargtab_,
						   const melt_argdescr_cell_t
						   meltxresdescr_[],
						   union meltparam_un *
						   meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 15
    melt_ptr_t mcfr_varptr[15];
#define MELTFRAM_NBVARNUM 4
    long mcfr_varnum[4];
/*others*/
    const char *loc_CSTRING__o0;
    const char *loc_CSTRING__o1;
    const char *loc_CSTRING__o2;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct meltframe_meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD_st
	 *) meltfirstargp_;
      /* use arguments meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 15; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD nbval 15*/
  meltfram__.mcfr_nbvar = 15 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATEQUICKLY_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4254:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4255:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4255:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4255:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4255;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "start translatequickly_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4255:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4255:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4256:/ quasiblock");


    /*_.PARMODENV__V7*/ meltfptr[3] = ( /*!konst_1 */ meltfrout->tabval[1]);;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4258:/ cond");
    /*cond */ if ( /*_.MODULDATA__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.CURENV__V8*/ meltfptr[7] = /*_.MODULDATA__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4258:/ cond.else");

	/*_.CURENV__V8*/ meltfptr[7] =
	  ( /*!INITIAL_ENVIRONMENT */ meltfrout->tabval[2]);;
      }
    ;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("arg");;
    /*^compute */
 /*_.INARG__V9*/ meltfptr[8] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o1 =
      melt_argument ("output");;
    /*^compute */
 /*_.OUTARG__V10*/ meltfptr[9] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o1)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o2 =
      melt_argument ("coutput");;
    /*^compute */
 /*_.COUTARG__V11*/ meltfptr[10] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o2)));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4263:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4263:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4263:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[11];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4263;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translatequickly_docmd inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V9*/ meltfptr[8];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " coutarg=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " curenv=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V12*/ meltfptr[11] =
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4263:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V12*/ meltfptr[11] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4263:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V12*/ meltfptr[11] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4265:/ apply");
    /*apply */
    {
      union meltparam_un argtab[4];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & ( /*!konst_5 */ meltfrout->tabval[5]);
      /*^apply.arg */
      argtab[3].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
      /*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_FLAVORED_MODULE */ meltfrout->
		      tabval[4])),
		    (melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR
		     MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4266:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_6_TRUE */ meltfrout->tabval[6]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4266:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*_.LET___V6*/ meltfptr[4] = /*_.RETURN___V15*/ meltfptr[11];;

    MELT_LOCATION ("warmelt-modes.melt:4256:/ clear");
	   /*clear *//*_.PARMODENV__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.CURENV__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.INARG__V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o1 = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o2 = 0;
    /*^clear */
	   /*clear *//*_.COUTARG__V11*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V15*/ meltfptr[11] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4254:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4254:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATEQUICKLY_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_66_WARMELTmiMODES_TRANSLATEQUICKLY_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD (meltclosure_ptr_t
						     meltclosp_,
						     melt_ptr_t
						     meltfirstargp_,
						     const
						     melt_argdescr_cell_t
						     meltxargdescr_[],
						     union meltparam_un *
						     meltxargtab_,
						     const
						     melt_argdescr_cell_t
						     meltxresdescr_[],
						     union meltparam_un *
						     meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 15
    melt_ptr_t mcfr_varptr[15];
#define MELTFRAM_NBVARNUM 4
    long mcfr_varnum[4];
/*others*/
    const char *loc_CSTRING__o0;
    const char *loc_CSTRING__o1;
    const char *loc_CSTRING__o2;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct
	 meltframe_meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD_st *)
	meltfirstargp_;
      /* use arguments meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 15; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD nbval 15*/
  meltfram__.mcfr_nbvar = 15 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATEOPTIMIZED_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4282:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4283:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4283:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4283:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4283;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring =
		"start translateoptimized_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4283:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4283:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4284:/ quasiblock");


    /*_.PARMODENV__V7*/ meltfptr[3] = ( /*!konst_1 */ meltfrout->tabval[1]);;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4286:/ cond");
    /*cond */ if ( /*_.MODULDATA__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.CURENV__V8*/ meltfptr[7] = /*_.MODULDATA__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4286:/ cond.else");

	/*_.CURENV__V8*/ meltfptr[7] =
	  ( /*!INITIAL_ENVIRONMENT */ meltfrout->tabval[2]);;
      }
    ;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("arg");;
    /*^compute */
 /*_.INARG__V9*/ meltfptr[8] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o1 =
      melt_argument ("output");;
    /*^compute */
 /*_.OUTARG__V10*/ meltfptr[9] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o1)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o2 =
      melt_argument ("coutput");;
    /*^compute */
 /*_.COUTARG__V11*/ meltfptr[10] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o2)));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4291:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4291:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4291:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[11];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4291;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translateoptimized_docmd inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V9*/ meltfptr[8];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " coutarg=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " curenv=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V12*/ meltfptr[11] =
	      /*_.MELT_DEBUG_FUN__V13*/ meltfptr[12];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4291:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V13*/ meltfptr[12] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V12*/ meltfptr[11] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4291:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V12*/ meltfptr[11] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4293:/ apply");
    /*apply */
    {
      union meltparam_un argtab[4];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
      /*^apply.arg */
      argtab[1].meltbp_aptr =
	(melt_ptr_t *) & /*_.COUTARG__V11*/ meltfptr[10];
      /*^apply.arg */
      argtab[2].meltbp_aptr =
	(melt_ptr_t *) & ( /*!konst_5 */ meltfrout->tabval[5]);
      /*^apply.arg */
      argtab[3].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
      /*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_FLAVORED_MODULE */ meltfrout->
		      tabval[4])),
		    (melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR MELTBPARSTR_PTR
		     MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4294:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_6_TRUE */ meltfrout->tabval[6]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4294:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*_.LET___V6*/ meltfptr[4] = /*_.RETURN___V15*/ meltfptr[11];;

    MELT_LOCATION ("warmelt-modes.melt:4284:/ clear");
	   /*clear *//*_.PARMODENV__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.CURENV__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.INARG__V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o1 = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o2 = 0;
    /*^clear */
	   /*clear *//*_.COUTARG__V11*/ meltfptr[10] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_FLAVORED_MODULE__V14*/ meltfptr[12] = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V15*/ meltfptr[11] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4282:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4282:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATEOPTIMIZED_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_67_WARMELTmiMODES_TRANSLATEOPTIMIZED_DOCMD */





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD (meltclosure_ptr_t meltclosp_,
						melt_ptr_t meltfirstargp_,
						const melt_argdescr_cell_t
						meltxargdescr_[],
						union meltparam_un *
						meltxargtab_,
						const melt_argdescr_cell_t
						meltxresdescr_[],
						union meltparam_un *
						meltxrestab_)
{
  long
    current_blocklevel_signals_meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD_melt
    = melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
  static long melt_call_counter__;
  long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif

  struct meltframe_meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD_st
  {
    int mcfr_nbvar;
#if MELT_HAVE_DEBUG
    const char *mcfr_flocs;
#else				/*!MELT_HAVE_DEBUG */
    const char *mcfr_unusedflocs;
#endif				/*MELT_HAVE_DEBUG */
    struct meltclosure_st *mcfr_clos;
    struct excepth_melt_st *mcfr_exh;
    struct melt_callframe_st *mcfr_prev;
#undef MELTFRAM_NBVARPTR
#undef MELTFRAM_NBVARNUM
#define MELTFRAM_NBVARPTR 29
    melt_ptr_t mcfr_varptr[29];
#define MELTFRAM_NBVARNUM 18
    long mcfr_varnum[18];
/*others*/
    const char *loc_CSTRING__o0;
    const char *loc_CSTRING__o1;
    long _spare_;
  }
   *meltframptr_ = 0, meltfram__;	/*declfrastruct */
#define meltframe meltfram__
  /*meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD is not initial declstructinit */
  if (MELT_UNLIKELY (meltxargdescr_ == MELTPAR_MARKGGC))
    {				/*mark for ggc */
      int meltix;
      meltframptr_ =
	(struct meltframe_meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD_st *)
	meltfirstargp_;
      /* use arguments meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD output_curframe_declstruct_init */
      (void) meltclosp_;
      (void) meltfirstargp_;
      (void) meltxargdescr_;
      (void) meltxargtab_;
      (void) meltxresdescr_;
      (void) meltxrestab_;
      /* marking closure */
      gt_ggc_mx_melt_un (meltframptr_->mcfr_clos);
      for (meltix = 0; meltix < 29; meltix++)
	if (meltframptr_->mcfr_varptr[meltix])
	  gt_ggc_mx_melt_un (meltframptr_->mcfr_varptr[meltix]);
      return NULL;
    } /*end markggc */ ;
  memset (&meltfram__, 0, sizeof (meltfram__));
/* declstructinit plain routine meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD nbval 29*/
  meltfram__.mcfr_nbvar = 29 /*nbval */ ;
  meltfram__.mcfr_clos = meltclosp_;
  meltfram__.mcfr_prev = (struct melt_callframe_st *) melt_topframe;
  melt_topframe = (struct melt_callframe_st *) &meltfram__;
  melt_trace_start ("TRANSLATEFILE_DOCMD", meltcallcount);
/*getargs*/

  /*getarg#0 */
  MELT_LOCATION ("warmelt-modes.melt:4311:/ getarg");
 /*_.CMD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

  /*getarg#1 */
  /*^getarg */
  if (meltxargdescr_[0] != MELTBPAR_PTR)
    goto meltlab_endgetargs;
 /*_.MODULDATA__V3*/ meltfptr[2] =
    (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
  gcc_assert (melt_discr ((melt_ptr_t) ( /*_.MODULDATA__V3*/ meltfptr[2])) !=
	      NULL);

  ;
  goto meltlab_endgetargs;
meltlab_endgetargs:;
/*body*/
/*^block*/
/*anyblock*/
  {


    {
      MELT_LOCATION ("warmelt-modes.melt:4312:/ locexp");
      debugeputs (("starting translatefile_docmd"));
    }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4313:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4313:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L1*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4313:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[7];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4313;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "start translatefile_docmd cmd=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.CMD__V2*/ meltfptr[1];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " moduldata=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.MODULDATA__V3*/ meltfptr[2];
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V4*/ meltfptr[3] =
	      /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4313:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V4*/ meltfptr[3] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4313:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IF___V4*/ meltfptr[3] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4314:/ quasiblock");


    /*_.PARMODENV__V7*/ meltfptr[3] = ( /*!konst_1 */ meltfrout->tabval[1]);;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4316:/ cond");
    /*cond */ if ( /*_.MODULDATA__V3*/ meltfptr[2])	/*then */
      {
	/*^cond.then */
	/*_.CURENV__V8*/ meltfptr[7] = /*_.MODULDATA__V3*/ meltfptr[2];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4316:/ cond.else");

	/*_.CURENV__V8*/ meltfptr[7] =
	  ( /*!INITIAL_ENVIRONMENT */ meltfrout->tabval[2]);;
      }
    ;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o0 =
      melt_argument ("arg");;
    /*^compute */
 /*_.INARG__V9*/ meltfptr[8] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o0)));;
    /*^compute */
 /*_?*/ meltfram__.loc_CSTRING__o1 =
      melt_argument ("output");;
    /*^compute */
 /*_.OUTARG__V10*/ meltfptr[9] =
      (meltgc_new_stringdup
       ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	( /*_?*/ meltfram__.loc_CSTRING__o1)));;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4320:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L3*/ meltfnum[1] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4320:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L3*/ meltfnum[1])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L4*/ meltfnum[0] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4320:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[11];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L4*/ meltfnum[0];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4320;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translatefile_docmd inarg=";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.INARG__V9*/ meltfptr[8];
	      /*^apply.arg */
	      argtab[5].meltbp_cstring = " outarg=";
	      /*^apply.arg */
	      argtab[6].meltbp_aptr =
		(melt_ptr_t *) & /*_.OUTARG__V10*/ meltfptr[9];
	      /*^apply.arg */
	      argtab[7].meltbp_cstring = " parmodenv=";
	      /*^apply.arg */
	      argtab[8].meltbp_aptr =
		(melt_ptr_t *) & /*_.PARMODENV__V7*/ meltfptr[3];
	      /*^apply.arg */
	      argtab[9].meltbp_cstring = " initial_environment=";
	      /*^apply.arg */
	      argtab[10].meltbp_aptr =
		(melt_ptr_t *) & ( /*!INITIAL_ENVIRONMENT */ meltfrout->
				  tabval[2]);
	      /*_.MELT_DEBUG_FUN__V12*/ meltfptr[11] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V11*/ meltfptr[10] =
	      /*_.MELT_DEBUG_FUN__V12*/ meltfptr[11];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4320:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L4*/ meltfnum[0] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V12*/ meltfptr[11] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V11*/ meltfptr[10] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4320:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L3*/ meltfnum[1] = 0;
      /*^clear */
	     /*clear *//*_._IF___V11*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4323:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      MELT_CHECK_SIGNAL ();
      ;
   /*_#IS_A__L5*/ meltfnum[0] =
	melt_is_instance_of ((melt_ptr_t) ( /*_.CURENV__V8*/ meltfptr[7]),
			     (melt_ptr_t) (( /*!CLASS_ENVIRONMENT */
					    meltfrout->tabval[4])));;
      MELT_LOCATION ("warmelt-modes.melt:4323:/ cond");
      /*cond */ if ( /*_#IS_A__L5*/ meltfnum[0])	/*then */
	{
	  /*^cond.then */
	  /*_._IFELSE___V14*/ meltfptr[10] = ( /*nil */ NULL);;
	}
      else
	{
	  MELT_LOCATION ("warmelt-modes.melt:4323:/ cond.else");

	  /*^block */
	  /*anyblock */
	  {




	    {
	      /*^locexp */
	      melt_assert_failed (("check curenv"),
				  ("warmelt-modes.melt")
				  ? ("warmelt-modes.melt") : __FILE__,
				  (4323) ? (4323) : __LINE__, __FUNCTION__);
	      ;
	    }
	    ;
	       /*clear *//*_._IFELSE___V14*/ meltfptr[10] = 0;
	    /*epilog */
	  }
	  ;
	}
      ;
      /*^compute */
      /*_.IFCPP___V13*/ meltfptr[11] = /*_._IFELSE___V14*/ meltfptr[10];;
      /*epilog */

      MELT_LOCATION ("warmelt-modes.melt:4323:/ clear");
	     /*clear *//*_#IS_A__L5*/ meltfnum[0] = 0;
      /*^clear */
	     /*clear *//*_._IFELSE___V14*/ meltfptr[10] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*_.IFCPP___V13*/ meltfptr[11] = ( /*nil */ NULL);
#endif /*MELT_HAVE_DEBUG */
    ;
    MELT_LOCATION ("warmelt-modes.melt:4324:/ quasiblock");



    MELT_CHECK_SIGNAL ();
    ;
 /*_#IS_STRING__L6*/ meltfnum[1] =
      (melt_magic_discr ((melt_ptr_t) ( /*_.OUTARG__V10*/ meltfptr[9])) ==
       MELTOBMAG_STRING);;
    MELT_LOCATION ("warmelt-modes.melt:4325:/ cond");
    /*cond */ if ( /*_#IS_STRING__L6*/ meltfnum[1])	/*then */
      {
	/*^cond.then */
	/*^block */
	/*anyblock */
	{

   /*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[16] =
	    /*make_string_without_suffix */
	    (meltgc_new_string_without_suffix
	     ((meltobject_ptr_t) (( /*!DISCR_STRING */ meltfrout->tabval[3])),
	      melt_string_str ((melt_ptr_t) ( /*_.OUTARG__V10*/ meltfptr[9])),
	      (".c")));;
	  /*^compute */
	  /*_.BASNAM__V16*/ meltfptr[15] =
	    /*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[16];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4325:/ clear");
	     /*clear *//*_.MAKE_STRING_WITHOUT_SUFFIX__V17*/ meltfptr[16] = 0;
	}
	;
      }
    else
      {				/*^cond.else */

	/*^block */
	/*anyblock */
	{


	  MELT_CHECK_SIGNAL ();
	  ;
   /*_#IS_STRING__L7*/ meltfnum[0] =
	    (melt_magic_discr ((melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8])) ==
	     MELTOBMAG_STRING);;
	  MELT_LOCATION ("warmelt-modes.melt:4328:/ cond");
	  /*cond */ if ( /*_#IS_STRING__L7*/ meltfnum[0])	/*then */
	    {
	      /*^cond.then */
	      /*^block */
	      /*anyblock */
	      {


		MELT_CHECK_SIGNAL ();
		;
     /*_#STRING_SUFFIXED__L8*/ meltfnum[7] =
		  /*string_suffixed: */
		  (melt_string_is_ending
		   ((melt_ptr_t) /*_.INARG__V9*/ meltfptr[8], ".melt"));;
		/*^compute */
     /*_#NOT__L9*/ meltfnum[8] =
		  (!( /*_#STRING_SUFFIXED__L8*/ meltfnum[7]));;
		MELT_LOCATION ("warmelt-modes.melt:4329:/ cond");
		/*cond */ if ( /*_#NOT__L9*/ meltfnum[8])	/*then */
		  {
		    /*^cond.then */
		    /*^block */
		    /*anyblock */
		    {


		      {
			MELT_LOCATION ("warmelt-modes.melt:4330:/ locexp");
			warning (0, "MELT WARNING MSG [#%ld]::: %s - %s",
				 melt_dbgcounter,
				 ("MELT translated input file without .melt suffix"),
				 melt_string_str ((melt_ptr_t)
						  ( /*_.INARG__V9*/
						   meltfptr[8])));
		      }
		      ;
		      /*epilog */
		    }
		    ;
		  }		/*noelse */
		;
     /*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18] =
		  (meltgc_new_string_nakedbasename
		   ((meltobject_ptr_t)
		    (( /*!DISCR_STRING */ meltfrout->tabval[3])),
		    melt_string_str ((melt_ptr_t)
				     ( /*_.INARG__V9*/ meltfptr[8]))));;
		MELT_LOCATION ("warmelt-modes.melt:4328:/ quasiblock");


		/*_.PROGN___V20*/ meltfptr[19] =
		  /*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18];;
		/*^compute */
		/*_._IFELSE___V18*/ meltfptr[16] =
		  /*_.PROGN___V20*/ meltfptr[19];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4328:/ clear");
	       /*clear *//*_#STRING_SUFFIXED__L8*/ meltfnum[7] = 0;
		/*^clear */
	       /*clear *//*_#NOT__L9*/ meltfnum[8] = 0;
		/*^clear */
	       /*clear *//*_.MAKE_STRING_NAKEDBASENAME__V19*/ meltfptr[18] =
		  0;
		/*^clear */
	       /*clear *//*_.PROGN___V20*/ meltfptr[19] = 0;
	      }
	      ;
	    }
	  else
	    {			/*^cond.else */

	      /*^block */
	      /*anyblock */
	      {


		{
		  MELT_LOCATION ("warmelt-modes.melt:4334:/ locexp");
		  error ("MELT ERROR MSG [#%ld]::: %s", melt_dbgcounter,
			 ("invalid translatefile mode"));
		}
		;
		MELT_LOCATION ("warmelt-modes.melt:4335:/ quasiblock");


     /*_._RETVAL___V1*/ meltfptr[0] = NULL;;

		{
		  MELT_LOCATION ("warmelt-modes.melt:4335:/ locexp");
		  /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
		  if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
		    melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
		  ;
		}
		;
		/*^finalreturn */
		;
		/*finalret */ goto meltlabend_rout;
		MELT_LOCATION ("warmelt-modes.melt:4333:/ quasiblock");


		/*_.PROGN___V22*/ meltfptr[19] =
		  /*_.RETURN___V21*/ meltfptr[18];;
		/*^compute */
		/*_._IFELSE___V18*/ meltfptr[16] =
		  /*_.PROGN___V22*/ meltfptr[19];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4328:/ clear");
	       /*clear *//*_.RETURN___V21*/ meltfptr[18] = 0;
		/*^clear */
	       /*clear *//*_.PROGN___V22*/ meltfptr[19] = 0;
	      }
	      ;
	    }
	  ;
	  /*_.BASNAM__V16*/ meltfptr[15] = /*_._IFELSE___V18*/ meltfptr[16];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4325:/ clear");
	     /*clear *//*_#IS_STRING__L7*/ meltfnum[0] = 0;
	  /*^clear */
	     /*clear *//*_._IFELSE___V18*/ meltfptr[16] = 0;
	}
	;
      }
    ;

#if MELT_HAVE_DEBUG
    MELT_LOCATION ("warmelt-modes.melt:4338:/ cppif.then");
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*melt_increment_dbgcounter */
#if MELT_HAVE_DEBUG
	melt_dbgcounter++;
#endif
	;
      }
      ;

      MELT_CHECK_SIGNAL ();
      ;
   /*_#MELT_NEED_DBG__L10*/ meltfnum[7] =
	/*MELT_NEED_DBG */
#if MELT_HAVE_DEBUG
	( /*melt_need_dbg */ melt_need_debug ((int) 0))
#else
	0			/* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG */
	;;
      MELT_LOCATION ("warmelt-modes.melt:4338:/ cond");
      /*cond */ if ( /*_#MELT_NEED_DBG__L10*/ meltfnum[7])	/*then */
	{
	  /*^cond.then */
	  /*^block */
	  /*anyblock */
	  {

     /*_#MELT_CALLCOUNT__L11*/ meltfnum[8] =
	      /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
	      meltcallcount	/* melt_callcount debugging */
#else
	      0L		/* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
	      ;;

	    MELT_CHECK_SIGNAL ();
	    ;
	    MELT_LOCATION ("warmelt-modes.melt:4338:/ apply");
	    /*apply */
	    {
	      union meltparam_un argtab[5];
	      memset (&argtab, 0, sizeof (argtab));
	      /*^apply.arg */
	      argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L11*/ meltfnum[8];
	      /*^apply.arg */
	      argtab[1].meltbp_cstring = "warmelt-modes.melt";
	      /*^apply.arg */
	      argtab[2].meltbp_long = 4338;
	      /*^apply.arg */
	      argtab[3].meltbp_cstring = "translatefile_mode basnam";
	      /*^apply.arg */
	      argtab[4].meltbp_aptr =
		(melt_ptr_t *) & /*_.BASNAM__V16*/ meltfptr[15];
	      /*_.MELT_DEBUG_FUN__V24*/ meltfptr[19] =
		melt_apply ((meltclosure_ptr_t)
			    (( /*!MELT_DEBUG_FUN */ meltfrout->tabval[0])),
			    (melt_ptr_t) (( /*nil */ NULL)),
			    (MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_LONG MELTBPARSTR_CSTRING
			     MELTBPARSTR_PTR ""), argtab, "",
			    (union meltparam_un *) 0);
	    }
	    ;
	    /*_._IF___V23*/ meltfptr[18] =
	      /*_.MELT_DEBUG_FUN__V24*/ meltfptr[19];;
	    /*epilog */

	    MELT_LOCATION ("warmelt-modes.melt:4338:/ clear");
	       /*clear *//*_#MELT_CALLCOUNT__L11*/ meltfnum[8] = 0;
	    /*^clear */
	       /*clear *//*_.MELT_DEBUG_FUN__V24*/ meltfptr[19] = 0;
	  }
	  ;
	}
      else
	{			/*^cond.else */

    /*_._IF___V23*/ meltfptr[18] = NULL;;
	}
      ;

      {
	MELT_LOCATION ("warmelt-modes.melt:4338:/ locexp");
	/*void */ (void) 0;
      }
      ;
      /*^quasiblock */


      /*epilog */

      /*^clear */
	     /*clear *//*_#MELT_NEED_DBG__L10*/ meltfnum[7] = 0;
      /*^clear */
	     /*clear *//*_._IF___V23*/ meltfptr[18] = 0;
    }

#else /*MELT_HAVE_DEBUG */
    /*^cppif.else */
    /*^block */
    /*anyblock */
    {


      {
	/*^locexp */
	/*void */ (void) 0;
      }
      ;
      /*epilog */
    }

#endif /*MELT_HAVE_DEBUG */
    ;

    MELT_CHECK_SIGNAL ();
    ;
 /*_#STRING_DYNLOADED_SUFFIXED__L12*/ meltfnum[0] =
      /*string_dynloaded_suffixed: */
      (melt_string_is_ending ((melt_ptr_t) /*_.BASNAM__V16*/ meltfptr[15],
			      MELT_DYNLOADED_SUFFIX));;
    MELT_LOCATION ("warmelt-modes.melt:4339:/ cond");
    /*cond */ if ( /*_#STRING_DYNLOADED_SUFFIXED__L12*/ meltfnum[0])	/*then */
      {
	/*^cond.then */
	/*_#OR___L13*/ meltfnum[8] =
	  /*_#STRING_DYNLOADED_SUFFIXED__L12*/ meltfnum[0];;
      }
    else
      {
	MELT_LOCATION ("warmelt-modes.melt:4339:/ cond.else");

	/*^block */
	/*anyblock */
	{

   /*_#STRING_SUFFIXED__L14*/ meltfnum[7] =
	    /*string_suffixed: */
	    (melt_string_is_ending
	     ((melt_ptr_t) /*_.BASNAM__V16*/ meltfptr[15], ".melt"));;
	  MELT_LOCATION ("warmelt-modes.melt:4339:/ cond");
	  /*cond */ if ( /*_#STRING_SUFFIXED__L14*/ meltfnum[7])	/*then */
	    {
	      /*^cond.then */
	      /*_#OR___L15*/ meltfnum[14] =
		/*_#STRING_SUFFIXED__L14*/ meltfnum[7];;
	    }
	  else
	    {
	      MELT_LOCATION ("warmelt-modes.melt:4339:/ cond.else");

	      /*^block */
	      /*anyblock */
	      {

     /*_#STRING_SUFFIXED__L16*/ meltfnum[15] =
		  /*string_suffixed: */
		  (melt_string_is_ending
		   ((melt_ptr_t) /*_.BASNAM__V16*/ meltfptr[15], ".o"));;
		MELT_LOCATION ("warmelt-modes.melt:4339:/ cond");
		/*cond */ if ( /*_#STRING_SUFFIXED__L16*/ meltfnum[15])	/*then */
		  {
		    /*^cond.then */
		    /*_#OR___L17*/ meltfnum[16] =
		      /*_#STRING_SUFFIXED__L16*/ meltfnum[15];;
		  }
		else
		  {
		    MELT_LOCATION ("warmelt-modes.melt:4339:/ cond.else");

		    /*^block */
		    /*anyblock */
		    {

       /*_#STRING_SUFFIXED__L18*/ meltfnum[17] =
			/*string_suffixed: */
			(melt_string_is_ending
			 ((melt_ptr_t) /*_.BASNAM__V16*/ meltfptr[15],
			  ".c"));;
		      /*^compute */
		      /*_#OR___L17*/ meltfnum[16] =
			/*_#STRING_SUFFIXED__L18*/ meltfnum[17];;
		      /*epilog */

		      MELT_LOCATION ("warmelt-modes.melt:4339:/ clear");
		 /*clear *//*_#STRING_SUFFIXED__L18*/ meltfnum[17] = 0;
		    }
		    ;
		  }
		;
		/*_#OR___L15*/ meltfnum[14] = /*_#OR___L17*/ meltfnum[16];;
		/*epilog */

		MELT_LOCATION ("warmelt-modes.melt:4339:/ clear");
	       /*clear *//*_#STRING_SUFFIXED__L16*/ meltfnum[15] = 0;
		/*^clear */
	       /*clear *//*_#OR___L17*/ meltfnum[16] = 0;
	      }
	      ;
	    }
	  ;
	  /*_#OR___L13*/ meltfnum[8] = /*_#OR___L15*/ meltfnum[14];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4339:/ clear");
	     /*clear *//*_#STRING_SUFFIXED__L14*/ meltfnum[7] = 0;
	  /*^clear */
	     /*clear *//*_#OR___L15*/ meltfnum[14] = 0;
	}
	;
      }
    ;
    /*^cond */
    /*cond */ if ( /*_#OR___L13*/ meltfnum[8])	/*then */
      {
	/*^cond.then */
	/*^block */
	/*anyblock */
	{


	  {
	    MELT_LOCATION ("warmelt-modes.melt:4344:/ locexp");
	    error ("MELT ERROR MSG [#%ld]::: %s - %s", melt_dbgcounter,
		   ("tranlatefile mode needs a base name without suffix"),
		   melt_string_str ((melt_ptr_t)
				    ( /*_.BASNAM__V16*/ meltfptr[15])));
	  }
	  ;
	  MELT_LOCATION ("warmelt-modes.melt:4346:/ quasiblock");


   /*_._RETVAL___V1*/ meltfptr[0] = NULL;;

	  {
	    MELT_LOCATION ("warmelt-modes.melt:4346:/ locexp");
	    /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
	    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	      melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
	    ;
	  }
	  ;
	  /*^finalreturn */
	  ;
	  /*finalret */ goto meltlabend_rout;
	  MELT_LOCATION ("warmelt-modes.melt:4343:/ quasiblock");


	  /*_.PROGN___V27*/ meltfptr[18] = /*_.RETURN___V26*/ meltfptr[19];;
	  /*^compute */
	  /*_._IF___V25*/ meltfptr[16] = /*_.PROGN___V27*/ meltfptr[18];;
	  /*epilog */

	  MELT_LOCATION ("warmelt-modes.melt:4339:/ clear");
	     /*clear *//*_.RETURN___V26*/ meltfptr[19] = 0;
	  /*^clear */
	     /*clear *//*_.PROGN___V27*/ meltfptr[18] = 0;
	}
	;
      }
    else
      {				/*^cond.else */

  /*_._IF___V25*/ meltfptr[16] = NULL;;
      }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4348:/ apply");
    /*apply */
    {
      union meltparam_un argtab[2];
      memset (&argtab, 0, sizeof (argtab));
      /*^apply.arg */
      argtab[0].meltbp_aptr = (melt_ptr_t *) & /*_.BASNAM__V16*/ meltfptr[15];
      /*^apply.arg */
      argtab[1].meltbp_aptr = (melt_ptr_t *) & /*_.CURENV__V8*/ meltfptr[7];
      /*_.TRANSLATE_TO_C_MODULE_MELT_SOURCES__V28*/ meltfptr[19] =
	melt_apply ((meltclosure_ptr_t)
		    (( /*!TRANSLATE_TO_C_MODULE_MELT_SOURCES */ meltfrout->
		      tabval[5])),
		    (melt_ptr_t) ( /*_.INARG__V9*/ meltfptr[8]),
		    (MELTBPARSTR_PTR MELTBPARSTR_PTR ""), argtab, "",
		    (union meltparam_un *) 0);
    }
    ;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4349:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] =
      ( /*!konst_6_TRUE */ meltfrout->tabval[6]);;

    {
      MELT_LOCATION ("warmelt-modes.melt:4349:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*_.LET___V15*/ meltfptr[10] = /*_.RETURN___V29*/ meltfptr[18];;

    MELT_LOCATION ("warmelt-modes.melt:4324:/ clear");
	   /*clear *//*_#IS_STRING__L6*/ meltfnum[1] = 0;
    /*^clear */
	   /*clear *//*_.BASNAM__V16*/ meltfptr[15] = 0;
    /*^clear */
	   /*clear *//*_#STRING_DYNLOADED_SUFFIXED__L12*/ meltfnum[0] = 0;
    /*^clear */
	   /*clear *//*_#OR___L13*/ meltfnum[8] = 0;
    /*^clear */
	   /*clear *//*_._IF___V25*/ meltfptr[16] = 0;
    /*^clear */
	   /*clear *//*_.TRANSLATE_TO_C_MODULE_MELT_SOURCES__V28*/ meltfptr[19] = 0;
    /*^clear */
	   /*clear *//*_.RETURN___V29*/ meltfptr[18] = 0;
    /*_.LET___V6*/ meltfptr[4] = /*_.LET___V15*/ meltfptr[10];;

    MELT_LOCATION ("warmelt-modes.melt:4314:/ clear");
	   /*clear *//*_.PARMODENV__V7*/ meltfptr[3] = 0;
    /*^clear */
	   /*clear *//*_.CURENV__V8*/ meltfptr[7] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o0 = 0;
    /*^clear */
	   /*clear *//*_.INARG__V9*/ meltfptr[8] = 0;
    /*^clear */
	   /*clear *//*_?*/ meltfram__.loc_CSTRING__o1 = 0;
    /*^clear */
	   /*clear *//*_.OUTARG__V10*/ meltfptr[9] = 0;
    /*^clear */
	   /*clear *//*_.IFCPP___V13*/ meltfptr[11] = 0;
    /*^clear */
	   /*clear *//*_.LET___V15*/ meltfptr[10] = 0;

    MELT_CHECK_SIGNAL ();
    ;
    MELT_LOCATION ("warmelt-modes.melt:4311:/ quasiblock");


    /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V6*/ meltfptr[4];;

    {
      MELT_LOCATION ("warmelt-modes.melt:4311:/ locexp");
      /*ochecknores compilobj_nrep_return */
#if MELT_HAVE_DEBUG
      if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
	melt_warn_for_no_expected_secondary_results ();
/* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG */
      ;
    }
    ;
    /*^finalreturn */
    ;
    /*finalret */ goto meltlabend_rout;
    /*epilog */

    /*^clear */
	   /*clear *//*_.LET___V6*/ meltfptr[4] = 0;
  }

  ;
  goto meltlabend_rout;
meltlabend_rout:
  melt_trace_end ("TRANSLATEFILE_DOCMD", meltcallcount);
  MELT_TRACE_EXIT_LOCATION ();
  melt_blocklevel_signals =
    current_blocklevel_signals_meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD_melt;
  melt_topframe = (struct melt_callframe_st *) meltfram__.mcfr_prev;
  return (melt_ptr_t) ( /*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
}				/*end meltrout_68_WARMELTmiMODES_TRANSLATEFILE_DOCMD */



/**** end of warmelt-modes+02.c ****/

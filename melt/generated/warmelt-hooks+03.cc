/* GCC MELT GENERATED C++ FILE warmelt-hooks+03.cc - DO NOT EDIT - see http://gcc-melt.org/ */
/* secondary MELT generated C++ file of rank #3 */
#include "melt-run.h"


/* used hash from melt-run.h when compiling this file: */
MELT_EXTERN const char meltrun_used_md5_melt_f3[] = MELT_RUN_HASHMD5 /* from melt-run.h */;


/**** warmelt-hooks+03.cc declarations ****/
/**** MELT GENERATED DECLARATIONS for warmelt-hooks ** DO NOT EDIT ; see gcc-melt.org ****/

/****++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
***
    Copyright 2012 - 2013 Free Software Foundation, Inc.
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


/** ordinary MELT module meltbuild-sources/warmelt-hooks**/
#define MELT_HAS_INITIAL_ENVIRONMENT 1 /*usualmodule*/



class Melt_InitialClassyFrame_WARMELTmiHOOKS_h968001928; // forward declaration fromline 6543
typedef Melt_InitialClassyFrame_WARMELTmiHOOKS_h968001928 Melt_InitialFrame;
/*** 3 MELT module variables declarations ****/
MELT_EXTERN void melt_forwarding_module_data (void);
MELT_EXTERN void melt_marking_module_data (void);

MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY melt_WARMELTmiHOOKS_module_var_ptr_tab[16];
MELT_EXTERN bool MELT_MODULE_VISIBILITY melt_WARMELTmiHOOKS_module_var_flags[1];

static inline melt_ptr_t
melt_module_var_fetch (int ix)
{
    return (ix > 0  &&  ix <= 3)?melt_WARMELTmiHOOKS_module_var_ptr_tab[ix]:NULL;
}

static inline void
melt_module_var_put (int ix, melt_ptr_t val)
{
    if (ix > 0  &&  ix <= 3)
        {
            melt_WARMELTmiHOOKS_module_var_ptr_tab[ix]= val;
            melt_WARMELTmiHOOKS_module_var_flags[ix/16] = true;
        }
}

/* MELT module variables indexes */
enum
{
    meltmodatix_none,
    meltmodvarix_MELT_INPCHANBUCK_symb = 1,
    meltmodvarix_MELT_ALARMBUCKET_symb = 2,
    meltmodvarix_MELT_CHILDBUCK_symb = 3,
    meltmodatix_last
}; /* end MELT module variables indexes */

/*** 3 MELT called hook declarations ***/

/*declare MELT called hook #0 HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_FRESH_ENVIRONMENT_REFERENCE_MAKER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_PREVENV, const char* meltinp1_MODULNAME);

/*declare MELT called hook #1 HOOK_SYMBOL_IMPORTER **/
MELT_EXTERN melt_ptr_t melthook_HOOK_SYMBOL_IMPORTER (melt_ptr_t melthookdatap, const char* meltinp0_SYMNAMESTR, const char* meltinp1_MODULENAMESTR, melt_ptr_t meltinp2_PARENV);

/*declare MELT called hook #2 HOOK_VALUE_EXPORTER **/
MELT_EXTERN void melthook_HOOK_VALUE_EXPORTER (melt_ptr_t melthookdatap, melt_ptr_t meltinp0_SYM, melt_ptr_t meltinp1_VAL, melt_ptr_t meltinp2_CONTENV);

/*** end of 3 MELT called hook declarations ***/

/*** 27 extra MELT c-headers ***/


/** MELT extra c-header 1 : **/


static void
melt_override_gate_callback (void* gccdata,
                             void* userdata ATTRIBUTE_UNUSED)
{
    bool *pgatestatus = (bool*) gccdata;
    bool gatsta = false;
    long oldgatstalng = 0, newgatstalng = 0;
    gcc_assert (pgatestatus != NULL);
    gatsta = *pgatestatus;
    oldgatstalng = newgatstalng = (long)gatsta;
    melthookproc_HOOK_OVERRIDE_GATE (oldgatstalng, &newgatstalng);
    gatsta = (newgatstalng != 0L);
    *pgatestatus = gatsta;
} /* end of  melt_override_gate_callback */

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 2 : **/

/* flag for PLUGIN_OVERRIDE_GATE */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_override_gate_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 3 : **/

/* flag for PLUGIN_START_UNIT */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_start_unit_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 4 : **/


void MELT_MODULE_VISIBILITY
melt_startunithook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                             void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 5 : **/

/* flag for PLUGIN_FINISH_UNIT */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_finish_unit_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 6 : **/


void MELT_MODULE_VISIBILITY
melt_finishunithook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                              void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 7 : **/

/* flag for PLUGIN_ALL_PASSES_START declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_all_passes_start_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 8 : **/


void MELT_MODULE_VISIBILITY
melt_all_passes_start_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                     void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 9 : **/

/* flag for PLUGIN_ALL_PASSES_END declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_all_passes_end_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 10 : **/


void MELT_MODULE_VISIBILITY
melt_all_passes_end_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                   void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 11 : **/

/* flag for PLUGIN_ALL_IPA_PASSES_START declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_all_ipa_passes_start_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 12 : **/


void MELT_MODULE_VISIBILITY
melt_all_ipa_passes_start_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
        void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 13 : **/

/* flag for PLUGIN_ALL_IPA_PASSES_END declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_all_ipa_passes_end_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 14 : **/


void MELT_MODULE_VISIBILITY
melt_all_ipa_passes_end_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                       void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 15 : **/

/* flag for PLUGIN_EARLY_GIMPLE_PASSES_START declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_early_gimple_passes_start_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 16 : **/


void MELT_MODULE_VISIBILITY
melt_early_gimple_passes_start_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
        void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 17 : **/

/* flag for PLUGIN_EARLY_GIMPLE_PASSES_END declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_early_gimple_passes_end_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 18 : **/


void MELT_MODULE_VISIBILITY
melt_early_gimple_passes_end_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
        void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 19 : **/

/* flag for PLUGIN_PRE_GENERICIZE declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_pre_genericize_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 20 : **/


void MELT_MODULE_VISIBILITY
melt_pre_genericize_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                   void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 21 : **/

/* flag for PLUGIN_FINISH_TYPE declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_finish_type_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 22 : **/


void MELT_MODULE_VISIBILITY
melt_finish_type_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 23 : **/

/* flag for PLUGIN_FINISH_DECL declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_finish_decl_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 24 : **/


void MELT_MODULE_VISIBILITY
melt_finish_decl_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 25 : **/

/* flag for PLUGIN_PASS_EXECUTION declare */
MELT_EXTERN bool MELT_MODULE_VISIBILITY  melthk_pass_execution_registered_flag;

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 26 : **/


void MELT_MODULE_VISIBILITY
melt_pass_execution_hook_callback (void* gcc_data ATTRIBUTE_UNUSED,
                                   void* user_data ATTRIBUTE_UNUSED);

/*** end of 27 extra MELT c-headers ***/


/** MELT extra c-header 27 : **/

/* header from warmelt-hooks.melt for poll etc... */
#include <poll.h>

#define MELT_BUFSIZE 8192
#define MELT_POLL_DELAY_MILLISEC 500

/*** end of 27 extra MELT c-headers ***/

/** start of declaration for hook melthook_HOOK_LOW_DEBUG_VALUE_AT**/

/** declaration of hook melthook_HOOK_LOW_DEBUG_VALUE_AT */
MELT_EXTERN
void melthook_HOOK_LOW_DEBUG_VALUE_AT(melt_ptr_t melthookdatap,
                                      melt_ptr_t meltinp0_VAL,
                                      const char* meltinp1_FILENAME,
                                      long meltinp2_LINENO,
                                      const char* meltinp3_MSG,
                                      long meltinp4_COUNT)
;



/** end of declaration for hook melthook_HOOK_LOW_DEBUG_VALUE_AT**/



/** start of declaration for hook melthook_HOOK_LOW_STDERR_VALUE_AT**/

/** declaration of hook melthook_HOOK_LOW_STDERR_VALUE_AT */
MELT_EXTERN
void melthook_HOOK_LOW_STDERR_VALUE_AT(melt_ptr_t melthookdatap,
                                       melt_ptr_t meltinp0_VAL,
                                       const char* meltinp1_FILENAME,
                                       long meltinp2_LINENO,
                                       const char* meltinp3_MSG,
                                       long meltinp4_COUNT)
;



/** end of declaration for hook melthook_HOOK_LOW_STDERR_VALUE_AT**/



/** start of declaration for hook melthook_HOOK_OVERRIDE_GATE**/

/** declaration of hook melthook_HOOK_OVERRIDE_GATE */
MELT_EXTERN
void melthook_HOOK_OVERRIDE_GATE(melt_ptr_t melthookdatap,
                                 long meltinp0_BEFOREGATE,
                                 long* meltoutp0_AFTERGATE)
;



/** end of declaration for hook melthook_HOOK_OVERRIDE_GATE**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_4_WARMELTmiHOOKS_ENABLE_OVERRIDE_GATE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_5_WARMELTmiHOOKS_MAYBE_DISABLE_OVERRIDE_GATE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_6_WARMELTmiHOOKS_REGISTER_OVERRIDE_GATE_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_7_WARMELTmiHOOKS_REGISTER_OVERRIDE_GATE_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_8_WARMELTmiHOOKS_UNREGISTER_OVERRIDE_GATE_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_9_WARMELTmiHOOKS_UNREGISTER_OVERRIDE_GATE_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_10_WARMELTmiHOOKS_LAMBDA_cl1(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_11_WARMELTmiHOOKS_LAMBDA_cl2(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_12_WARMELTmiHOOKS_LAMBDA_cl3(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_START_UNIT**/

/** declaration of hook melthook_HOOK_START_UNIT */
MELT_EXTERN
void melthook_HOOK_START_UNIT(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_START_UNIT**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_14_WARMELTmiHOOKS_ENABLE_START_UNIT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_15_WARMELTmiHOOKS_AT_START_UNIT_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_16_WARMELTmiHOOKS_AT_START_UNIT_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_17_WARMELTmiHOOKS_LAMBDA_cl4(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_18_WARMELTmiHOOKS_LAMBDA_cl5(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_19_WARMELTmiHOOKS_LAMBDA_cl6(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_FINISH_UNIT**/

/** declaration of hook melthook_HOOK_FINISH_UNIT */
MELT_EXTERN
void melthook_HOOK_FINISH_UNIT(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_FINISH_UNIT**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_21_WARMELTmiHOOKS_ENABLE_FINISH_UNIT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_22_WARMELTmiHOOKS_AT_FINISH_UNIT_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_23_WARMELTmiHOOKS_AT_FINISH_UNIT_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_ALL_PASSES_START**/

/** declaration of hook melthook_HOOK_ALL_PASSES_START */
MELT_EXTERN
void melthook_HOOK_ALL_PASSES_START(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_ALL_PASSES_START**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_25_WARMELTmiHOOKS_ENABLE_ALL_PASSES_START(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_26_WARMELTmiHOOKS_REGISTER_ALL_PASSES_START_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_27_WARMELTmiHOOKS_REGISTER_ALL_PASSES_START_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_ALL_PASSES_END**/

/** declaration of hook melthook_HOOK_ALL_PASSES_END */
MELT_EXTERN
void melthook_HOOK_ALL_PASSES_END(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_ALL_PASSES_END**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_29_WARMELTmiHOOKS_ENABLE_ALL_PASSES_END(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_30_WARMELTmiHOOKS_REGISTER_ALL_PASSES_END_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_31_WARMELTmiHOOKS_REGISTER_ALL_PASSES_END_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_ALL_IPA_PASSES_START**/

/** declaration of hook melthook_HOOK_ALL_IPA_PASSES_START */
MELT_EXTERN
void melthook_HOOK_ALL_IPA_PASSES_START(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_ALL_IPA_PASSES_START**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_33_WARMELTmiHOOKS_ENABLE_ALL_IPA_PASSES_START(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_34_WARMELTmiHOOKS_REGISTER_ALL_IPA_PASSES_START_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_35_WARMELTmiHOOKS_REGISTER_ALL_IPA_PASSES_START_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_ALL_IPA_PASSES_END**/

/** declaration of hook melthook_HOOK_ALL_IPA_PASSES_END */
MELT_EXTERN
void melthook_HOOK_ALL_IPA_PASSES_END(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_ALL_IPA_PASSES_END**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_37_WARMELTmiHOOKS_ENABLE_ALL_IPA_PASSES_END(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_38_WARMELTmiHOOKS_REGISTER_ALL_IPA_PASSES_END_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_39_WARMELTmiHOOKS_REGISTER_ALL_IPA_PASSES_END_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_EARLY_GIMPLE_PASSES_START**/

/** declaration of hook melthook_HOOK_EARLY_GIMPLE_PASSES_START */
MELT_EXTERN
void melthook_HOOK_EARLY_GIMPLE_PASSES_START(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_EARLY_GIMPLE_PASSES_START**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_41_WARMELTmiHOOKS_ENABLE_EARLY_GIMPLE_PASSES_START(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_42_WARMELTmiHOOKS_REGISTER_EARLY_GIMPLE_PASSES_START_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_43_WARMELTmiHOOKS_REGISTER_EARLY_GIMPLE_PASSES_START_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_EARLY_GIMPLE_PASSES_END**/

/** declaration of hook melthook_HOOK_EARLY_GIMPLE_PASSES_END */
MELT_EXTERN
void melthook_HOOK_EARLY_GIMPLE_PASSES_END(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_EARLY_GIMPLE_PASSES_END**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_45_WARMELTmiHOOKS_ENABLE_EARLY_GIMPLE_PASSES_END(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_46_WARMELTmiHOOKS_REGISTER_EARLY_GIMPLE_PASSES_END_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_47_WARMELTmiHOOKS_REGISTER_EARLY_GIMPLE_PASSES_END_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_48_WARMELTmiHOOKS_ENABLE_PRE_GENERICIZE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_PRE_GENERICIZE**/

/** declaration of hook melthook_HOOK_PRE_GENERICIZE */
MELT_EXTERN
void melthook_HOOK_PRE_GENERICIZE(melt_ptr_t melthookdatap,
                                  tree meltinp0_TFNDECL)
;



/** end of declaration for hook melthook_HOOK_PRE_GENERICIZE**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_50_WARMELTmiHOOKS_REGISTER_PRE_GENERICIZE_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_51_WARMELTmiHOOKS_REGISTER_PRE_GENERICIZE_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_52_WARMELTmiHOOKS_ENABLE_FINISH_TYPE(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_FINISH_TYPE**/

/** declaration of hook melthook_HOOK_FINISH_TYPE */
MELT_EXTERN
void melthook_HOOK_FINISH_TYPE(melt_ptr_t melthookdatap,
                               tree meltinp0_TFNDECL)
;



/** end of declaration for hook melthook_HOOK_FINISH_TYPE**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_54_WARMELTmiHOOKS_REGISTER_FINISH_TYPE_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_55_WARMELTmiHOOKS_REGISTER_FINISH_TYPE_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_56_WARMELTmiHOOKS_RUN_ENDMELTPASS_FUNCTIONS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_57_WARMELTmiHOOKS_AT_END_OF_THIS_MELT_PASS_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_58_WARMELTmiHOOKS_AT_END_OF_THIS_MELT_PASS_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_59_WARMELTmiHOOKS_ENABLE_FINISH_DECL(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_FINISH_DECL**/

/** declaration of hook melthook_HOOK_FINISH_DECL */
MELT_EXTERN
void melthook_HOOK_FINISH_DECL(melt_ptr_t melthookdatap,
                               tree meltinp0_TFNDECL)
;



/** end of declaration for hook melthook_HOOK_FINISH_DECL**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_61_WARMELTmiHOOKS_REGISTER_FINISH_DECL_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_62_WARMELTmiHOOKS_REGISTER_FINISH_DECL_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_PASS_EXECUTION**/

/** declaration of hook melthook_HOOK_PASS_EXECUTION */
MELT_EXTERN
void melthook_HOOK_PASS_EXECUTION(melt_ptr_t melthookdatap,
                                  const char* meltinp0_PASSNAME,
                                  long meltinp1_PASSNUM,
                                  long meltinp2_TYPENUM)
;



/** end of declaration for hook melthook_HOOK_PASS_EXECUTION**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_64_WARMELTmiHOOKS_REGISTER_PASS_EXECUTION_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_65_WARMELTmiHOOKS_REGISTER_PASS_EXECUTION_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_GIMPLE_GATE**/

/** declaration of hook melthook_HOOK_GIMPLE_GATE */
MELT_EXTERN
long melthook_HOOK_GIMPLE_GATE(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_GIMPLE_GATE**/



/** start of declaration for hook melthook_HOOK_GIMPLE_EXECUTE**/

/** declaration of hook melthook_HOOK_GIMPLE_EXECUTE */
MELT_EXTERN
long melthook_HOOK_GIMPLE_EXECUTE(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_GIMPLE_EXECUTE**/



/** start of declaration for hook melthook_HOOK_RTL_GATE**/

/** declaration of hook melthook_HOOK_RTL_GATE */
MELT_EXTERN
long melthook_HOOK_RTL_GATE(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_RTL_GATE**/



/** start of declaration for hook melthook_HOOK_RTL_EXECUTE**/

/** declaration of hook melthook_HOOK_RTL_EXECUTE */
MELT_EXTERN
long melthook_HOOK_RTL_EXECUTE(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_RTL_EXECUTE**/



/** start of declaration for hook melthook_HOOK_SIMPLE_IPA_EXECUTE**/

/** declaration of hook melthook_HOOK_SIMPLE_IPA_EXECUTE */
MELT_EXTERN
long melthook_HOOK_SIMPLE_IPA_EXECUTE(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_SIMPLE_IPA_EXECUTE**/



/** start of declaration for hook melthook_HOOK_MELT_ATTRIBUTE_DEFINER**/

/** declaration of hook melthook_HOOK_MELT_ATTRIBUTE_DEFINER */
MELT_EXTERN
void melthook_HOOK_MELT_ATTRIBUTE_DEFINER(melt_ptr_t melthookdatap,
        tree meltinp0_DECL,
        tree meltinp1_NAME,
        melt_ptr_t meltinp2_ATTRSEQ,
        const char* meltinp3_FILELOC,
        long meltinp4_LINENO)
;



/** end of declaration for hook melthook_HOOK_MELT_ATTRIBUTE_DEFINER**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_72_WARMELTmiHOOKS_AT_MELT_ATTRIBUTE_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_73_WARMELTmiHOOKS_AT_MELT_ATTRIBUTE_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_EXIT_FINALIZER**/

/** declaration of hook melthook_HOOK_EXIT_FINALIZER */
MELT_EXTERN
void melthook_HOOK_EXIT_FINALIZER(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_EXIT_FINALIZER**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_75_WARMELTmiHOOKS_AT_EXIT_FIRST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_POLL_INPUTS**/

/** declaration of hook melthook_HOOK_POLL_INPUTS */
MELT_EXTERN
void melthook_HOOK_POLL_INPUTS(melt_ptr_t melthookdatap,
                               long meltinp0_DELAYMS)
;



/** end of declaration for hook melthook_HOOK_POLL_INPUTS**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_HANDLE_SIGIO**/

/** declaration of hook melthook_HOOK_HANDLE_SIGIO */
MELT_EXTERN
void melthook_HOOK_HANDLE_SIGIO(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_HANDLE_SIGIO**/



/** start of declaration for hook melthook_HOOK_HANDLE_SIGALRM**/

/** declaration of hook melthook_HOOK_HANDLE_SIGALRM */
MELT_EXTERN
void melthook_HOOK_HANDLE_SIGALRM(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_HANDLE_SIGALRM**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);

/** start of declaration for hook melthook_HOOK_HANDLE_SIGCHLD**/

/** declaration of hook melthook_HOOK_HANDLE_SIGCHLD */
MELT_EXTERN
void melthook_HOOK_HANDLE_SIGCHLD(melt_ptr_t melthookdatap)
;



/** end of declaration for hook melthook_HOOK_HANDLE_SIGCHLD**/






MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);




MELT_EXTERN melt_ptr_t MELT_MODULE_VISIBILITY meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_, const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_);


MELT_EXTERN void* melt_start_this_module (void*); /*mandatory start of module*/


/*declare opaque initial frame: */

typedef Melt_InitialClassyFrame_WARMELTmiHOOKS_h968001928 /*opaqueinitialclassy*/ meltinitial_frame_t;


/* define different names when debugging or not */
#if MELT_HAVE_DEBUG
MELT_EXTERN const char meltmodule_WARMELTmiHOOKS__melt_have_debug_enabled[];
#define melt_have_debug_string meltmodule_WARMELTmiHOOKS__melt_have_debug_enabled
#else /*!MELT_HAVE_DEBUG*/
MELT_EXTERN const char meltmodule_WARMELTmiHOOKS__melt_have_debug_disabled[];
#define melt_have_debug_string meltmodule_WARMELTmiHOOKS__melt_have_debug_disabled
#endif /*!MELT_HAVE_DEBUG*/



void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_0 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_1 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_2 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_3 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_4 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_5 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_6 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_7 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_8 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_9 (meltinitial_frame_t*, char*);
void MELT_MODULE_VISIBILITY meltmod__WARMELTmiHOOKS__initialmeltchunk_10 (meltinitial_frame_t*, char*);


/**** warmelt-hooks+03.cc implementations ****/




melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
                                        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST fromline 1719 */

    /** start of frame for meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST// fromline 1535
        : public Melt_CallFrameWithValues<3>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[1];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST), clos) {};
        MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST() //the constructor fromline 1609
            : Melt_CallFrameWithValues<3> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST)) {};
        MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<3> (fil,lin, sizeof(MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST


    /** end of frame for meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST fromline 1664**/

    /* end of frame for routine meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST fromline 1723 */

    /* classy proc frame meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST */ MeltFrame_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("AT_EXIT_LAST", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2263:/ getarg");
    /*_.FUN__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {

        MELT_LOCATION("warmelt-hooks.melt:2266:/ quasiblock");


        /*^getslot*/
        {
            melt_ptr_t slot=NULL, obj=NULL;
            obj = (melt_ptr_t)((/*!FINAL_EXIT_DELAYED_QUEUE*/ meltfrout->tabval[0])) /*=obj*/;
            melt_object_get_field(slot,obj, 3, "DELQU_LAST");
            /*_.LASTLIST__V3*/ meltfptr[2] = slot;
        };
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_CLOSURE__L1*/ meltfnum[0] =
            (melt_magic_discr((melt_ptr_t)(/*_.FUN__V2*/ meltfptr[1])) == MELTOBMAG_CLOSURE);;
        MELT_LOCATION("warmelt-hooks.melt:2268:/ cond");
        /*cond*/ if (/*_#IS_CLOSURE__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        /*^locexp*/
                        meltgc_append_list((melt_ptr_t)(/*_.LASTLIST__V3*/ meltfptr[2]), (melt_ptr_t)(/*_.FUN__V2*/ meltfptr[1]));
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_LOCATION("warmelt-hooks.melt:2266:/ clear");
        /*clear*/ /*_.LASTLIST__V3*/ meltfptr[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_CLOSURE__L1*/ meltfnum[0] = 0 ;
        /*epilog*/
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("AT_EXIT_LAST", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST_melt;
    return (melt_ptr_t)(/*noretval*/ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_76_WARMELTmiHOOKS_AT_EXIT_LAST*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS fromline 1719 */

    /** start of frame for meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS// fromline 1535
        : public Melt_CallFrameWithValues<44>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[23];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<44> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS), clos) {};
        MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS() //the constructor fromline 1609
            : Melt_CallFrameWithValues<44> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<44> (fil,lin, sizeof(MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS)) {};
        MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<44> (fil,lin, sizeof(MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS


    /** end of frame for meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS fromline 1664**/

    /* end of frame for routine meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS fromline 1723 */

    /* classy proc frame meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS */ MeltFrame_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("MELT_INVOKE_INPUT_CALLBACKS", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2337:/ getarg");
    /*_.TUPINCH__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.TUPSTATE__V3*/ meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.TUPSTATE__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_LONG) goto meltlab_endgetargs;
    /*_#NBINS__L1*/ meltfnum[0] = meltxargtab_[1].meltbp_long;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2338:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L2*/ meltfnum[1] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2338:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L2*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2338:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[9];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L3*/ meltfnum[2];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2338;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks tupinch=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.TUPINCH__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  "\n.. tupstate=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.TUPSTATE__V3*/ meltfptr[2];
                            /*^apply.arg*/
                            argtab[7].meltbp_cstring =  "\n.. nbins=";
                            /*^apply.arg*/
                            argtab[8].meltbp_long = /*_#NBINS__L1*/ meltfnum[0];
                            /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V4*/ meltfptr[3] = /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2338:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V4*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2338:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L2*/ meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V4*/ meltfptr[3] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        /*citerblock BLOCK_SIGNALS*/
        {
            /* block_signals meltcit1__BLKSIGNAL start */
            long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
            melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



            MELT_LOCATION("warmelt-hooks.melt:2343:/ quasiblock");


            /*_.REMOVELIST__V6*/ meltfptr[4] =
                (meltgc_new_list((meltobject_ptr_t)((/*!DISCR_LIST*/ meltfrout->tabval[1]))));;
            /*^compute*/
            /*_.BUCK__V7*/ meltfptr[3] =  (melt_module_var_fetch (meltmodvarix_MELT_INPCHANBUCK_symb));;
            /*^compute*/
            /*_#miI__L4*/ meltfnum[2] =
                ((/*_#NBINS__L1*/ meltfnum[0]) - (1));;
            /*citerblock FOREACH_LONG_UPTO*/
            {
                /* foreach_long_upto start meltcit2__EACHLONG */
                long meltcit2__EACHLONG_min =  0;
                long meltcit2__EACHLONG_max = /*_#miI__L4*/ meltfnum[2];
                long meltcit2__EACHLONG_cur = 0;
                for (meltcit2__EACHLONG_cur = meltcit2__EACHLONG_min;
                        meltcit2__EACHLONG_cur <= meltcit2__EACHLONG_max;
                        meltcit2__EACHLONG_cur ++)
                    {
                        /*_#IX__L5*/ meltfnum[1] = meltcit2__EACHLONG_cur;



                        MELT_LOCATION("warmelt-hooks.melt:2349:/ quasiblock");


                        /*_.CURINCH__V9*/ meltfptr[8] =
                            (melt_multiple_nth((melt_ptr_t)(/*_.TUPINCH__V2*/ meltfptr[1]), (/*_#IX__L5*/ meltfnum[1])));;
                        /*^compute*/
                        /*_.CURSTATE__V10*/ meltfptr[9] =
                            (melt_multiple_nth((melt_ptr_t)(/*_.TUPSTATE__V3*/ meltfptr[2]), (/*_#IX__L5*/ meltfnum[1])));;
                        /*^compute*/
                        /*_#CURFD__L6*/ meltfnum[5] =
                            (melt_get_int((melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8])));;
                        /*^compute*/
                        /*_#READCNT__L7*/ meltfnum[6] = -2;;
                        MELT_LOCATION("warmelt-hooks.melt:2353:/ cond");
                        /*cond*/ if (
                            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]),
                                                          (melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[2])))
                        ) /*then*/
                            {
                                /*^cond.then*/
                                /*^getslot*/
                                {
                                    melt_ptr_t slot=NULL, obj=NULL;
                                    obj = (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]) /*=obj*/;
                                    melt_object_get_field(slot,obj, 1, "INCH_SBUF");
                                    /*_.SBUF__V11*/ meltfptr[10] = slot;
                                };
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_.SBUF__V11*/ meltfptr[10] =  /*reallynil*/ NULL ;;
                            }
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2354:/ cond");
                        /*cond*/ if (
                            /*ifisa*/ melt_is_instance_of((melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]),
                                                          (melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[2])))
                        ) /*then*/
                            {
                                /*^cond.then*/
                                /*^getslot*/
                                {
                                    melt_ptr_t slot=NULL, obj=NULL;
                                    obj = (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]) /*=obj*/;
                                    melt_object_get_field(slot,obj, 2, "INCH_CLOS");
                                    /*_.CLOS__V12*/ meltfptr[11] = slot;
                                };
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_.CLOS__V12*/ meltfptr[11] =  /*reallynil*/ NULL ;;
                            }
                        ;

#if MELT_HAVE_DEBUG
                        MELT_LOCATION("warmelt-hooks.melt:2356:/ cppif.then");
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                /*^locexp*/
                                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                melt_dbgcounter++;
#endif
                                ;
                            }
                            ;

                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#MELT_NEED_DBG__L8*/ meltfnum[7] =
                                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                ;;
                            MELT_LOCATION("warmelt-hooks.melt:2356:/ cond");
                            /*cond*/ if (/*_#MELT_NEED_DBG__L8*/ meltfnum[7]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        /*_#MELT_CALLCOUNT__L9*/ meltfnum[8] =
                                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                            meltcallcount  /* melt_callcount debugging */
#else
                                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                            ;;

                                        MELT_CHECK_SIGNAL();
                                        ;
                                        MELT_LOCATION("warmelt-hooks.melt:2356:/ apply");
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[11];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L9*/ meltfnum[8];
                                            /*^apply.arg*/
                                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                            /*^apply.arg*/
                                            argtab[2].meltbp_long = 2356;
                                            /*^apply.arg*/
                                            argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks ix#";
                                            /*^apply.arg*/
                                            argtab[4].meltbp_long = /*_#IX__L5*/ meltfnum[1];
                                            /*^apply.arg*/
                                            argtab[5].meltbp_cstring =  " curfd#";
                                            /*^apply.arg*/
                                            argtab[6].meltbp_long = /*_#CURFD__L6*/ meltfnum[5];
                                            /*^apply.arg*/
                                            argtab[7].meltbp_cstring =  " curinch=";
                                            /*^apply.arg*/
                                            argtab[8].meltbp_aptr = (melt_ptr_t*) &/*_.CURINCH__V9*/ meltfptr[8];
                                            /*^apply.arg*/
                                            argtab[9].meltbp_cstring =  "\n.. curstate=";
                                            /*^apply.arg*/
                                            argtab[10].meltbp_aptr = (melt_ptr_t*) &/*_.CURSTATE__V10*/ meltfptr[9];
                                            /*_.MELT_DEBUG_FUN__V14*/ meltfptr[13] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*_._IF___V13*/ meltfptr[12] = /*_.MELT_DEBUG_FUN__V14*/ meltfptr[13];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2356:/ clear");
                                        /*clear*/ /*_#MELT_CALLCOUNT__L9*/ meltfnum[8] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.MELT_DEBUG_FUN__V14*/ meltfptr[13] = 0 ;
                                    }
                                    ;
                                }
                            else    /*^cond.else*/
                                {

                                    /*_._IF___V13*/ meltfptr[12] =  /*reallynil*/ NULL ;;
                                }
                            ;

                            {
                                MELT_LOCATION("warmelt-hooks.melt:2356:/ locexp");
                                /*void*/(void)0;
                            }
                            ;
                            /*^quasiblock*/


                            /*epilog*/

                            /*^clear*/
                            /*clear*/ /*_#MELT_NEED_DBG__L8*/ meltfnum[7] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IF___V13*/ meltfptr[12] = 0 ;
                        }

#else /*MELT_HAVE_DEBUG*/
                        /*^cppif.else*/
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                /*^locexp*/
                                /*void*/(void)0;
                            }
                            ;
                            /*epilog*/
                        }

#endif /*MELT_HAVE_DEBUG*/
                        ;

#if MELT_HAVE_DEBUG
                        MELT_LOCATION("warmelt-hooks.melt:2358:/ cppif.then");
                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#IS_A__L10*/ meltfnum[8] =
                                melt_is_instance_of((melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]), (melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[2])));;
                            MELT_LOCATION("warmelt-hooks.melt:2358:/ cond");
                            /*cond*/ if (/*_#IS_A__L10*/ meltfnum[8]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*_._IFELSE___V16*/ meltfptr[12] = (/*nil*/NULL);;
                                }
                            else
                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2358:/ cond.else");

                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*^apply*/
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[4];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_cstring =  "check curinch";
                                            /*^apply.arg*/
                                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                            /*^apply.arg*/
                                            argtab[2].meltbp_long = 2358;
                                            /*^apply.arg*/
                                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.CURINCH__V9*/ meltfptr[8];
                                            /*_.MELT_ASSERT_FAILURE_FUN__V17*/ meltfptr[16] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*_._IFELSE___V16*/ meltfptr[12] = /*_.MELT_ASSERT_FAILURE_FUN__V17*/ meltfptr[16];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2358:/ clear");
                                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V17*/ meltfptr[16] = 0 ;
                                    }
                                    ;
                                }
                            ;
                            /*_.IFCPP___V15*/ meltfptr[13] = /*_._IFELSE___V16*/ meltfptr[12];;
                            /*epilog*/

                            MELT_LOCATION("warmelt-hooks.melt:2358:/ clear");
                            /*clear*/ /*_#IS_A__L10*/ meltfnum[8] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IFELSE___V16*/ meltfptr[12] = 0 ;
                        }

#else /*MELT_HAVE_DEBUG*/
                        /*^cppif.else*/
                        /*_.IFCPP___V15*/ meltfptr[13] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                        ;

#if MELT_HAVE_DEBUG
                        MELT_LOCATION("warmelt-hooks.melt:2359:/ cppif.then");
                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#gteqI__L11*/ meltfnum[7] =
                                ((/*_#CURFD__L6*/ meltfnum[5]) >= (0));;
                            MELT_LOCATION("warmelt-hooks.melt:2359:/ cond");
                            /*cond*/ if (/*_#gteqI__L11*/ meltfnum[7]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*_._IFELSE___V19*/ meltfptr[12] = (/*nil*/NULL);;
                                }
                            else
                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2359:/ cond.else");

                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*^apply*/
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[4];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_cstring =  "check curfd";
                                            /*^apply.arg*/
                                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                            /*^apply.arg*/
                                            argtab[2].meltbp_long = 2359;
                                            /*^apply.arg*/
                                            argtab[3].meltbp_long = /*_#CURFD__L6*/ meltfnum[5];
                                            /*_.MELT_ASSERT_FAILURE_FUN__V20*/ meltfptr[19] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[3])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*_._IFELSE___V19*/ meltfptr[12] = /*_.MELT_ASSERT_FAILURE_FUN__V20*/ meltfptr[19];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2359:/ clear");
                                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V20*/ meltfptr[19] = 0 ;
                                    }
                                    ;
                                }
                            ;
                            /*_.IFCPP___V18*/ meltfptr[16] = /*_._IFELSE___V19*/ meltfptr[12];;
                            /*epilog*/

                            MELT_LOCATION("warmelt-hooks.melt:2359:/ clear");
                            /*clear*/ /*_#gteqI__L11*/ meltfnum[7] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IFELSE___V19*/ meltfptr[12] = 0 ;
                        }

#else /*MELT_HAVE_DEBUG*/
                        /*^cppif.else*/
                        /*_.IFCPP___V18*/ meltfptr[16] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2360:/ cond");
                        /*cond*/ if (/*_.CURSTATE__V10*/ meltfptr[9]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2362:/ locexp");
                                        /* melt_invoke_input_callbacks READ_CHK__1 */
                                        static char rdbuf[MELT_BUFSIZE] ;
                                        memset (&rdbuf, 0, sizeof (rdbuf)) ;
                                        /*_#READCNT__L7*/ meltfnum[6] = read (/*_#CURFD__L6*/ meltfnum[5], rdbuf, sizeof(rdbuf)) ;
                                        if (/*_#READCNT__L7*/ meltfnum[6] > 0)
                                            meltgc_add_out_raw_len ((melt_ptr_t) /*_.SBUF__V11*/ meltfptr[10], rdbuf, /*_#READCNT__L7*/ meltfnum[6]) ;
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#eqeqI__L12*/ meltfnum[8] =
                                        ((/*_#READCNT__L7*/ meltfnum[6]) == (0));;
                                    MELT_LOCATION("warmelt-hooks.melt:2371:/ cond");
                                    /*cond*/ if (/*_#eqeqI__L12*/ meltfnum[8]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    MELT_LOCATION("warmelt-hooks.melt:2372:/ locexp");
                                                    meltgc_append_list((melt_ptr_t)(/*_.REMOVELIST__V6*/ meltfptr[4]), (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]));
                                                }
                                                ;
                                                MELT_LOCATION("warmelt-hooks.melt:2373:/ compute");
                                                /*_.CURSTATE__V10*/ meltfptr[9] = /*_.SETQ___V22*/ meltfptr[12] = (/*nil*/NULL);;
                                                MELT_LOCATION("warmelt-hooks.melt:2371:/ quasiblock");


                                                /*_.PROGN___V23*/ meltfptr[22] = /*_.SETQ___V22*/ meltfptr[12];;
                                                /*^compute*/
                                                /*_._IF___V21*/ meltfptr[19] = /*_.PROGN___V23*/ meltfptr[22];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2371:/ clear");
                                                /*clear*/ /*_.SETQ___V22*/ meltfptr[12] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.PROGN___V23*/ meltfptr[22] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V21*/ meltfptr[19] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2374:/ locexp");
                                        /*void*/(void)0;
                                    }
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2361:/ quasiblock");


                                    /*epilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2360:/ clear");
                                    /*clear*/ /*_#eqeqI__L12*/ meltfnum[8] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V21*/ meltfptr[19] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2377:/ locexp");
                                        meltgc_append_list((melt_ptr_t)(/*_.REMOVELIST__V6*/ meltfptr[4]), (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]));
                                    }
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2376:/ quasiblock");


                                    /*epilog*/
                                }
                                ;
                            }
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2380:/ loop");
                        /*loop*/
                        {
meltlabloop_SCANLOOP_1:;/*^loopbody*/

                            /*^block*/
                            /*anyblock*/
                            {


                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2382:/ quasiblock");


                                /*_#STOP__L13*/ meltfnum[7] = 0;;
                                /*^compute*/
                                /*_.SEQV__V26*/ meltfptr[19] = (/*nil*/NULL);;

                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2385:/ locexp");
                                    /* melt_invoke_input_callbacks EAT_CHK__1 */
                                    const char* bufdata = melt_strbuf_str ((melt_ptr_t) /*_.SBUF__V11*/ meltfptr[10]);
                                    char* buf2nl = bufdata
                                                   ? CONST_CAST (char*, strstr(bufdata,"\n\n"))
                                                   : NULL;
                                    if (buf2nl)
                                        {
                                            int paralen = buf2nl - bufdata + 2;
                                            ((char*) buf2nl)[1] = '\0';
                                            /*_.SEQV__V26*/ meltfptr[19] =  meltgc_read_from_rawstring (bufdata, NULL,
                                                                            UNKNOWN_LOCATION);
                                            melt_strbuf_consume ((melt_ptr_t) /*_.SBUF__V11*/ meltfptr[10], paralen);
                                        }
                                    else
                                        {
                                            /*_#STOP__L13*/ meltfnum[7] = 1;
                                            if (!/*_.CURSTATE__V10*/ meltfptr[9] && bufdata)
                                                {
                                                    int buflen = strlen (bufdata);
                                                    /*_.SEQV__V26*/ meltfptr[19] = meltgc_read_from_rawstring (bufdata, NULL,
                                                                                   UNKNOWN_LOCATION);
                                                    melt_strbuf_consume ((melt_ptr_t) /*_.SBUF__V11*/ meltfptr[10], buflen);
                                                }
                                        }
                                    ;
                                }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2411:/ cond");
                                /*cond*/ if (/*_.SEQV__V26*/ meltfptr[19]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {


#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-hooks.melt:2412:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L14*/ meltfnum[8] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-hooks.melt:2412:/ cond");
                                                /*cond*/ if (/*_#MELT_NEED_DBG__L14*/ meltfnum[8]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L15*/ meltfnum[14] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-hooks.melt:2412:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[7];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L15*/ meltfnum[14];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 2412;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks seqv=";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.SEQV__V26*/ meltfptr[19];
                                                                /*^apply.arg*/
                                                                argtab[5].meltbp_cstring =  "\n curinch=";
                                                                /*^apply.arg*/
                                                                argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.CURINCH__V9*/ meltfptr[8];
                                                                /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V28*/ meltfptr[27] = /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-hooks.melt:2412:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L15*/ meltfnum[14] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V29*/ meltfptr[28] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V28*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-hooks.melt:2412:/ locexp");
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L14*/ meltfnum[8] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V28*/ meltfptr[27] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-hooks.melt:2413:/ apply");
                                            /*apply*/
                                            {
                                                union meltparam_un argtab[1];
                                                memset(&argtab, 0, sizeof(argtab));
                                                /*^apply.arg*/
                                                argtab[0].meltbp_aptr = (melt_ptr_t*) &/*_.SEQV__V26*/ meltfptr[19];
                                                /*_.CLOS__V30*/ meltfptr[28] =  melt_apply ((meltclosure_ptr_t)(/*_.CLOS__V12*/ meltfptr[11]), (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                            }
                                            ;
                                            MELT_LOCATION("warmelt-hooks.melt:2411:/ quasiblock");


                                            /*_.PROGN___V31*/ meltfptr[27] = /*_.CLOS__V30*/ meltfptr[28];;
                                            /*^compute*/
                                            /*_._IF___V27*/ meltfptr[26] = /*_.PROGN___V31*/ meltfptr[27];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-hooks.melt:2411:/ clear");
                                            /*clear*/ /*_.CLOS__V30*/ meltfptr[28] = 0 ;
                                            /*^clear*/
                                            /*clear*/ /*_.PROGN___V31*/ meltfptr[27] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V27*/ meltfptr[26] =  /*reallynil*/ NULL ;;
                                    }
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2414:/ cond");
                                /*cond*/ if (/*_#STOP__L13*/ meltfnum[7]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*^quasiblock*/


                                            /*^compute*/
                                            /*_.SCANLOOP__V25*/ meltfptr[22] =  /*reallynil*/ NULL ;;

                                            /*^exit*/
                                            /*exit*/
                                            {
                                                goto meltlabexit_SCANLOOP_1;
                                            }
                                            ;
                                            /*epilog*/
                                        }
                                        ;
                                    } /*noelse*/
                                ;

                                MELT_LOCATION("warmelt-hooks.melt:2382:/ clear");
                                /*clear*/ /*_#STOP__L13*/ meltfnum[7] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.SEQV__V26*/ meltfptr[19] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V27*/ meltfptr[26] = 0 ;
                                /*epilog*/
                            }
                            ;
                            ;
                            goto meltlabloop_SCANLOOP_1;
meltlabexit_SCANLOOP_1:
                            ;
                            MELT_LOCATION("warmelt-hooks.melt:2380:/ loopepilog");
                            /*loopepilog*/
                            /*_.FOREVER___V24*/ meltfptr[12] = /*_.SCANLOOP__V25*/ meltfptr[22];;
                        }
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*^compute*/
                        /*_#NULL__L16*/ meltfnum[14] =
                            ((/*_.CURSTATE__V10*/ meltfptr[9]) == NULL);;
                        MELT_LOCATION("warmelt-hooks.melt:2417:/ cond");
                        /*cond*/ if (/*_#NULL__L16*/ meltfnum[14]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {


#if MELT_HAVE_DEBUG
                                    MELT_LOCATION("warmelt-hooks.melt:2418:/ cppif.then");
                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        {
                                            /*^locexp*/
                                            /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                            melt_dbgcounter++;
#endif
                                            ;
                                        }
                                        ;

                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*_#MELT_NEED_DBG__L17*/ meltfnum[8] =
                                            /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                            (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                            0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                            ;;
                                        MELT_LOCATION("warmelt-hooks.melt:2418:/ cond");
                                        /*cond*/ if (/*_#MELT_NEED_DBG__L17*/ meltfnum[8]) /*then*/
                                            {
                                                /*^cond.then*/
                                                /*^block*/
                                                /*anyblock*/
                                                {

                                                    /*_#MELT_CALLCOUNT__L18*/ meltfnum[7] =
                                                        /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                        meltcallcount  /* melt_callcount debugging */
#else
                                                        0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                        ;;

                                                    MELT_CHECK_SIGNAL();
                                                    ;
                                                    MELT_LOCATION("warmelt-hooks.melt:2418:/ apply");
                                                    /*apply*/
                                                    {
                                                        union meltparam_un argtab[5];
                                                        memset(&argtab, 0, sizeof(argtab));
                                                        /*^apply.arg*/
                                                        argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L18*/ meltfnum[7];
                                                        /*^apply.arg*/
                                                        argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                        /*^apply.arg*/
                                                        argtab[2].meltbp_long = 2418;
                                                        /*^apply.arg*/
                                                        argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks eof curinch=";
                                                        /*^apply.arg*/
                                                        argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURINCH__V9*/ meltfptr[8];
                                                        /*_.MELT_DEBUG_FUN__V34*/ meltfptr[19] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                    }
                                                    ;
                                                    /*_._IF___V33*/ meltfptr[27] = /*_.MELT_DEBUG_FUN__V34*/ meltfptr[19];;
                                                    /*epilog*/

                                                    MELT_LOCATION("warmelt-hooks.melt:2418:/ clear");
                                                    /*clear*/ /*_#MELT_CALLCOUNT__L18*/ meltfnum[7] = 0 ;
                                                    /*^clear*/
                                                    /*clear*/ /*_.MELT_DEBUG_FUN__V34*/ meltfptr[19] = 0 ;
                                                }
                                                ;
                                            }
                                        else    /*^cond.else*/
                                            {

                                                /*_._IF___V33*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                                            }
                                        ;

                                        {
                                            MELT_LOCATION("warmelt-hooks.melt:2418:/ locexp");
                                            /*void*/(void)0;
                                        }
                                        ;
                                        /*^quasiblock*/


                                        /*epilog*/

                                        /*^clear*/
                                        /*clear*/ /*_#MELT_NEED_DBG__L17*/ meltfnum[8] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_._IF___V33*/ meltfptr[27] = 0 ;
                                    }

#else /*MELT_HAVE_DEBUG*/
                                    /*^cppif.else*/
                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        {
                                            /*^locexp*/
                                            /*void*/(void)0;
                                        }
                                        ;
                                        /*epilog*/
                                    }

#endif /*MELT_HAVE_DEBUG*/
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2419:/ apply");
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[1];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_aptr = /*nil*/(melt_ptr_t*)NULL;
                                        /*_.CLOS__V35*/ meltfptr[26] =  melt_apply ((meltclosure_ptr_t)(/*_.CLOS__V12*/ meltfptr[11]), (melt_ptr_t)(/*_.CURINCH__V9*/ meltfptr[8]), (MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2417:/ quasiblock");


                                    /*_.PROGN___V36*/ meltfptr[19] = /*_.CLOS__V35*/ meltfptr[26];;
                                    /*^compute*/
                                    /*_._IF___V32*/ meltfptr[28] = /*_.PROGN___V36*/ meltfptr[19];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2417:/ clear");
                                    /*clear*/ /*_.CLOS__V35*/ meltfptr[26] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.PROGN___V36*/ meltfptr[19] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V32*/ meltfptr[28] =  /*reallynil*/ NULL ;;
                            }
                        ;
                        /*^compute*/
                        /*_.LET___V8*/ meltfptr[7] = /*_._IF___V32*/ meltfptr[28];;

                        MELT_LOCATION("warmelt-hooks.melt:2349:/ clear");
                        /*clear*/ /*_.CURINCH__V9*/ meltfptr[8] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.CURSTATE__V10*/ meltfptr[9] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_#CURFD__L6*/ meltfnum[5] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_#READCNT__L7*/ meltfnum[6] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.SBUF__V11*/ meltfptr[10] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.CLOS__V12*/ meltfptr[11] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.IFCPP___V15*/ meltfptr[13] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.IFCPP___V18*/ meltfptr[16] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.FOREVER___V24*/ meltfptr[12] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_#NULL__L16*/ meltfnum[14] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V32*/ meltfptr[28] = 0 ;
                    } /*end foreach_long_upto meltcit2__EACHLONG */

                /*citerepilog*/

                MELT_LOCATION("warmelt-hooks.melt:2346:/ clear");
                /*clear*/ /*_#IX__L5*/ meltfnum[1] = 0 ;
                /*^clear*/
                /*clear*/ /*_.LET___V8*/ meltfptr[7] = 0 ;
            } /*endciterblock FOREACH_LONG_UPTO*/
            ;

#if MELT_HAVE_DEBUG
            MELT_LOCATION("warmelt-hooks.melt:2423:/ cppif.then");
            /*^block*/
            /*anyblock*/
            {


                {
                    /*^locexp*/
                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                    melt_dbgcounter++;
#endif
                    ;
                }
                ;

                MELT_CHECK_SIGNAL();
                ;
                /*_#MELT_NEED_DBG__L19*/ meltfnum[7] =
                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                    ;;
                MELT_LOCATION("warmelt-hooks.melt:2423:/ cond");
                /*cond*/ if (/*_#MELT_NEED_DBG__L19*/ meltfnum[7]) /*then*/
                    {
                        /*^cond.then*/
                        /*^block*/
                        /*anyblock*/
                        {

                            /*_#MELT_CALLCOUNT__L20*/ meltfnum[8] =
                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                meltcallcount  /* melt_callcount debugging */
#else
                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                ;;

                            MELT_CHECK_SIGNAL();
                            ;
                            MELT_LOCATION("warmelt-hooks.melt:2423:/ apply");
                            /*apply*/
                            {
                                union meltparam_un argtab[5];
                                memset(&argtab, 0, sizeof(argtab));
                                /*^apply.arg*/
                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L20*/ meltfnum[8];
                                /*^apply.arg*/
                                argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                /*^apply.arg*/
                                argtab[2].meltbp_long = 2423;
                                /*^apply.arg*/
                                argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks removelist=";
                                /*^apply.arg*/
                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.REMOVELIST__V6*/ meltfptr[4];
                                /*_.MELT_DEBUG_FUN__V38*/ meltfptr[26] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                            }
                            ;
                            /*_._IF___V37*/ meltfptr[27] = /*_.MELT_DEBUG_FUN__V38*/ meltfptr[26];;
                            /*epilog*/

                            MELT_LOCATION("warmelt-hooks.melt:2423:/ clear");
                            /*clear*/ /*_#MELT_CALLCOUNT__L20*/ meltfnum[8] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.MELT_DEBUG_FUN__V38*/ meltfptr[26] = 0 ;
                        }
                        ;
                    }
                else    /*^cond.else*/
                    {

                        /*_._IF___V37*/ meltfptr[27] =  /*reallynil*/ NULL ;;
                    }
                ;

                {
                    MELT_LOCATION("warmelt-hooks.melt:2423:/ locexp");
                    /*void*/(void)0;
                }
                ;
                /*^quasiblock*/


                /*epilog*/

                /*^clear*/
                /*clear*/ /*_#MELT_NEED_DBG__L19*/ meltfnum[7] = 0 ;
                /*^clear*/
                /*clear*/ /*_._IF___V37*/ meltfptr[27] = 0 ;
            }

#else /*MELT_HAVE_DEBUG*/
            /*^cppif.else*/
            /*^block*/
            /*anyblock*/
            {


                {
                    /*^locexp*/
                    /*void*/(void)0;
                }
                ;
                /*epilog*/
            }

#endif /*MELT_HAVE_DEBUG*/
            ;
            /*citerblock FOREACH_PAIR_COMPONENT_IN_LIST*/
            {
                /* start foreach_pair_component_in_list meltcit3__EACHLIST */
                for (/*_.CURPAIR__V39*/ meltfptr[19] = melt_list_first( (melt_ptr_t)/*_.REMOVELIST__V6*/ meltfptr[4]);
                                        melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V39*/ meltfptr[19]) == MELTOBMAG_PAIR;
                                        /*_.CURPAIR__V39*/ meltfptr[19] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V39*/ meltfptr[19]))
                    {
                        /*_.CUREMOVE__V40*/ meltfptr[8] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V39*/ meltfptr[19]);



#if MELT_HAVE_DEBUG
                        MELT_LOCATION("warmelt-hooks.melt:2427:/ cppif.then");
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                /*^locexp*/
                                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                melt_dbgcounter++;
#endif
                                ;
                            }
                            ;

                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#MELT_NEED_DBG__L21*/ meltfnum[5] =
                                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                ;;
                            MELT_LOCATION("warmelt-hooks.melt:2427:/ cond");
                            /*cond*/ if (/*_#MELT_NEED_DBG__L21*/ meltfnum[5]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*^block*/
                                    /*anyblock*/
                                    {

                                        /*_#MELT_CALLCOUNT__L22*/ meltfnum[6] =
                                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                            meltcallcount  /* melt_callcount debugging */
#else
                                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                            ;;

                                        MELT_CHECK_SIGNAL();
                                        ;
                                        MELT_LOCATION("warmelt-hooks.melt:2427:/ apply");
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[5];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L22*/ meltfnum[6];
                                            /*^apply.arg*/
                                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                            /*^apply.arg*/
                                            argtab[2].meltbp_long = 2427;
                                            /*^apply.arg*/
                                            argtab[3].meltbp_cstring =  "melt_invoke_input_callbacks curemove=";
                                            /*^apply.arg*/
                                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CUREMOVE__V40*/ meltfptr[8];
                                            /*_.MELT_DEBUG_FUN__V42*/ meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*_._IF___V41*/ meltfptr[9] = /*_.MELT_DEBUG_FUN__V42*/ meltfptr[10];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2427:/ clear");
                                        /*clear*/ /*_#MELT_CALLCOUNT__L22*/ meltfnum[6] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_.MELT_DEBUG_FUN__V42*/ meltfptr[10] = 0 ;
                                    }
                                    ;
                                }
                            else    /*^cond.else*/
                                {

                                    /*_._IF___V41*/ meltfptr[9] =  /*reallynil*/ NULL ;;
                                }
                            ;

                            {
                                MELT_LOCATION("warmelt-hooks.melt:2427:/ locexp");
                                /*void*/(void)0;
                            }
                            ;
                            /*^quasiblock*/


                            /*epilog*/

                            /*^clear*/
                            /*clear*/ /*_#MELT_NEED_DBG__L21*/ meltfnum[5] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IF___V41*/ meltfptr[9] = 0 ;
                        }

#else /*MELT_HAVE_DEBUG*/
                        /*^cppif.else*/
                        /*^block*/
                        /*anyblock*/
                        {


                            {
                                /*^locexp*/
                                /*void*/(void)0;
                            }
                            ;
                            /*epilog*/
                        }

#endif /*MELT_HAVE_DEBUG*/
                        ;
                        /*_#GET_INT__L23*/ meltfnum[14] =
                            (melt_get_int((melt_ptr_t)(/*_.CUREMOVE__V40*/ meltfptr[8])));;
                        /*^compute*/
                        /*_.BUCKETLONG_REMOVE__V43*/ meltfptr[11] =
                            meltgc_longsbucket_remove ((melt_ptr_t) /*_.BUCK__V7*/ meltfptr[3], (/*_#GET_INT__L23*/ meltfnum[14]));;
                        MELT_LOCATION("warmelt-hooks.melt:2428:/ compute");
                        /*_.BUCK__V7*/ meltfptr[3] = /*_.SETQ___V44*/ meltfptr[13] = /*_.BUCKETLONG_REMOVE__V43*/ meltfptr[11];;
                    } /* end foreach_pair_component_in_list meltcit3__EACHLIST */
                /*_.CURPAIR__V39*/ meltfptr[19] = NULL;
                /*_.CUREMOVE__V40*/ meltfptr[8] = NULL;


                /*citerepilog*/

                MELT_LOCATION("warmelt-hooks.melt:2424:/ clear");
                /*clear*/ /*_.CURPAIR__V39*/ meltfptr[19] = 0 ;
                /*^clear*/
                /*clear*/ /*_.CUREMOVE__V40*/ meltfptr[8] = 0 ;
                /*^clear*/
                /*clear*/ /*_#GET_INT__L23*/ meltfnum[14] = 0 ;
                /*^clear*/
                /*clear*/ /*_.BUCKETLONG_REMOVE__V43*/ meltfptr[11] = 0 ;
                /*^clear*/
                /*clear*/ /*_.SETQ___V44*/ meltfptr[13] = 0 ;
            } /*endciterblock FOREACH_PAIR_COMPONENT_IN_LIST*/
            ;
            MELT_LOCATION("warmelt-hooks.melt:2430:/ putmodvar");
            melt_module_var_put (meltmodvarix_MELT_INPCHANBUCK_symb, (melt_ptr_t)(/*_.BUCK__V7*/ meltfptr[3]));
            ;

            MELT_LOCATION("warmelt-hooks.melt:2343:/ clear");
            /*clear*/ /*_.REMOVELIST__V6*/ meltfptr[4] = 0 ;
            /*^clear*/
            /*clear*/ /*_.BUCK__V7*/ meltfptr[3] = 0 ;
            /*^clear*/
            /*clear*/ /*_#miI__L4*/ meltfnum[2] = 0 ;
            /* block_signals meltcit1__BLKSIGNAL end */
            melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
            MELT_CHECK_SIGNAL();


            /*citerepilog*/
        } /*endciterblock BLOCK_SIGNALS*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("MELT_INVOKE_INPUT_CALLBACKS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS_melt;
    return (melt_ptr_t)(/*noretval*/ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_77_WARMELTmiHOOKS_MELT_INVOKE_INPUT_CALLBACKS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS fromline 1719 */

    /** start of frame for meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS// fromline 1535
        : public Melt_CallFrameWithValues<6>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[1];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<6> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS), clos) {};
        MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS() //the constructor fromline 1609
            : Melt_CallFrameWithValues<6> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<6> (fil,lin, sizeof(MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS)) {};
        MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<6> (fil,lin, sizeof(MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS


    /** end of frame for meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS fromline 1664**/

    /* end of frame for routine meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS fromline 1723 */

    /* classy proc frame meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS */ MeltFrame_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("IS_POLLING_INPUTS", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    MELT_LOCATION("warmelt-hooks.melt:2542:/ block");
    /*anyblock*/
    {

        MELT_LOCATION("warmelt-hooks.melt:2545:/ quasiblock");


        /*_.INCHBUCK__V3*/ meltfptr[2] =  (melt_module_var_fetch (meltmodvarix_MELT_INPCHANBUCK_symb));;
        /*^compute*/
        /*_#NBINCH__L1*/ meltfnum[0] =
            melt_longsbucket_count ((melt_ptr_t) /*_.INCHBUCK__V3*/ meltfptr[2]);;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2548:/ cond");
        /*cond*/ if (/*_#NBINCH__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*^quasiblock*/


                    /*_._RETVAL___V1*/ meltfptr[0] = (/*!konst_0_TRUE*/ meltfrout->tabval[0]);;
                    MELT_LOCATION("warmelt-hooks.melt:2548:/ putxtraresult");
                    if (!meltxrestab_ || !meltxresdescr_) goto meltlabend_rout;
                    if (meltxresdescr_[0] != MELTBPAR_LONG) goto meltlabend_rout;
                    if (meltxrestab_[0].meltbp_longptr) *(meltxrestab_[0].meltbp_longptr) = (/*_#NBINCH__L1*/ meltfnum[0]);
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/ goto meltlabend_rout ;
                    /*_._IFELSE___V4*/ meltfptr[3] = /*_.RETURN___V5*/ meltfptr[4];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2548:/ clear");
                    /*clear*/ /*_.RETURN___V5*/ meltfptr[4] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    MELT_LOCATION("warmelt-hooks.melt:2549:/ quasiblock");


                    /*_._RETVAL___V1*/ meltfptr[0] = (/*nil*/NULL);;
                    MELT_LOCATION("warmelt-hooks.melt:2549:/ putxtraresult");
                    if (!meltxrestab_ || !meltxresdescr_) goto meltlabend_rout;
                    if (meltxresdescr_[0] != MELTBPAR_LONG) goto meltlabend_rout;
                    if (meltxrestab_[0].meltbp_longptr) *(meltxrestab_[0].meltbp_longptr) = (0);
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/ goto meltlabend_rout ;
                    /*_._IFELSE___V4*/ meltfptr[3] = /*_.RETURN___V6*/ meltfptr[4];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2548:/ clear");
                    /*clear*/ /*_.RETURN___V6*/ meltfptr[4] = 0 ;
                }
                ;
            }
        ;
        /*_.LET___V2*/ meltfptr[1] = /*_._IFELSE___V4*/ meltfptr[3];;

        MELT_LOCATION("warmelt-hooks.melt:2545:/ clear");
        /*clear*/ /*_.INCHBUCK__V3*/ meltfptr[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBINCH__L1*/ meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V4*/ meltfptr[3] = 0 ;
        MELT_LOCATION("warmelt-hooks.melt:2542:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V2*/ meltfptr[1];;

        {
            MELT_LOCATION("warmelt-hooks.melt:2542:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.LET___V2*/ meltfptr[1] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("IS_POLLING_INPUTS", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_79_WARMELTmiHOOKS_IS_POLLING_INPUTS*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT fromline 1719 */

    /** start of frame for meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT// fromline 1535
        : public Melt_CallFrameWithValues<12>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[7];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<12> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT), clos) {};
        MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT() //the constructor fromline 1609
            : Melt_CallFrameWithValues<12> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<12> (fil,lin, sizeof(MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT)) {};
        MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<12> (fil,lin, sizeof(MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT


    /** end of frame for meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT fromline 1664**/

    /* end of frame for routine meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT fromline 1723 */

    /* classy proc frame meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT */ MeltFrame_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("EVERY_POLLING_INPUT", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2552:/ getarg");
    /*_.F__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {

        MELT_LOCATION("warmelt-hooks.melt:2555:/ quasiblock");


        /*_.INCHBUCK__V3*/ meltfptr[2] =  (melt_module_var_fetch (meltmodvarix_MELT_INPCHANBUCK_symb));;
        /*^compute*/
        /*_#NBINCH__L1*/ meltfnum[0] =
            melt_longsbucket_count ((melt_ptr_t) /*_.INCHBUCK__V3*/ meltfptr[2]);;
        /*^compute*/
        /*_.LISCHAN__V4*/ meltfptr[3] =
            (meltgc_new_list((meltobject_ptr_t)((/*!DISCR_LIST*/ meltfrout->tabval[0]))));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2559:/ cond");
        /*cond*/ if (/*_#NBINCH__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*citerblock BLOCK_SIGNALS*/
                    {
                        /* block_signals meltcit1__BLKSIGNAL start */
                        long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
                        melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



                        /*citerblock FOREACH_IN_BUCKETLONG*/
                        {
                            /*foreach_in_bucketlong meltcit2__EACHBUCKLONG*/ unsigned meltcit2__EACHBUCKLONG_ix = 0, meltcit2__EACHBUCKLONG_cnt =0;
                            /*_#FD__L2*/ meltfnum[1] = 0L;
                            /*_.CHV__V5*/ meltfptr[4] = NULL;
                            for (meltcit2__EACHBUCKLONG_ix = 0;
                                    /* retrieve in meltcit2__EACHBUCKLONG iteration the count, it might change! */
                                    (meltcit2__EACHBUCKLONG_cnt = melt_longsbucket_count ((melt_ptr_t) /*_.INCHBUCK__V3*/ meltfptr[2])) > 0
                                    && meltcit2__EACHBUCKLONG_ix < meltcit2__EACHBUCKLONG_cnt;
                                    meltcit2__EACHBUCKLONG_ix++)
                                {
                                    /*_#FD__L2*/ meltfnum[1] = 0L;
                                    /*_.CHV__V5*/ meltfptr[4] = NULL;
                                    {
                                        struct melt_bucketlongentry_st* meltcit2__EACHBUCKLONG_buent
                                        = ((struct meltbucketlongs_st*)/*_.INCHBUCK__V3*/ meltfptr[2])->buckl_entab + meltcit2__EACHBUCKLONG_ix;
                                        if (!meltcit2__EACHBUCKLONG_buent->ebl_va)
                                            continue;
                                        /*_#FD__L2*/ meltfnum[1] = meltcit2__EACHBUCKLONG_buent->ebl_at;
                                        /*_.CHV__V5*/ meltfptr[4] = meltcit2__EACHBUCKLONG_buent->ebl_va;
                                        meltcit2__EACHBUCKLONG_buent = NULL;
                                    }
                                    /*foreach_in_bucketlong meltcit2__EACHBUCKLONG body:*/




                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#IS_A__L3*/ meltfnum[2] =
                                        melt_is_instance_of((melt_ptr_t)(/*_.CHV__V5*/ meltfptr[4]), (melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[1])));;
                                    MELT_LOCATION("warmelt-hooks.melt:2565:/ cond");
                                    /*cond*/ if (/*_#IS_A__L3*/ meltfnum[2]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    MELT_LOCATION("warmelt-hooks.melt:2566:/ locexp");
                                                    meltgc_append_list((melt_ptr_t)(/*_.LISCHAN__V4*/ meltfptr[3]), (melt_ptr_t)(/*_.CHV__V5*/ meltfptr[4]));
                                                }
                                                ;
                                                /*epilog*/
                                            }
                                            ;
                                        } /*noelse*/
                                    ;
                                    /* ending foreach_in_bucketlong meltcit2__EACHBUCKLONG*/
                                    /*_#FD__L2*/ meltfnum[1] = 0L;
                                    /*_.CHV__V5*/ meltfptr[4] = NULL;
                                } /* end foreach_in_bucketlong meltcit2__EACHBUCKLONG_ix */


                            /*citerepilog*/

                            MELT_LOCATION("warmelt-hooks.melt:2562:/ clear");
                            /*clear*/ /*_#FD__L2*/ meltfnum[1] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_.CHV__V5*/ meltfptr[4] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_#IS_A__L3*/ meltfnum[2] = 0 ;
                        } /*endciterblock FOREACH_IN_BUCKETLONG*/
                        ;
                        /* block_signals meltcit1__BLKSIGNAL end */
                        melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
                        MELT_CHECK_SIGNAL();


                        /*citerepilog*/
                    } /*endciterblock BLOCK_SIGNALS*/
                    ;

                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#IS_CLOSURE__L4*/ meltfnum[3] =
                        (melt_magic_discr((melt_ptr_t)(/*_.F__V2*/ meltfptr[1])) == MELTOBMAG_CLOSURE);;
                    MELT_LOCATION("warmelt-hooks.melt:2568:/ cond");
                    /*cond*/ if (/*_#IS_CLOSURE__L4*/ meltfnum[3]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                /*citerblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                {
                                    /* start foreach_pair_component_in_list meltcit3__EACHLIST */
                                    for (/*_.CURPAIR__V6*/ meltfptr[5] = melt_list_first( (melt_ptr_t)/*_.LISCHAN__V4*/ meltfptr[3]);
                                                           melt_magic_discr((melt_ptr_t) /*_.CURPAIR__V6*/ meltfptr[5]) == MELTOBMAG_PAIR;
                                                           /*_.CURPAIR__V6*/ meltfptr[5] = melt_pair_tail((melt_ptr_t) /*_.CURPAIR__V6*/ meltfptr[5]))
                                        {
                                            /*_.CURCHAN__V7*/ meltfptr[6] = melt_pair_head((melt_ptr_t) /*_.CURPAIR__V6*/ meltfptr[5]);



#if MELT_HAVE_DEBUG
                                            MELT_LOCATION("warmelt-hooks.melt:2572:/ cppif.then");
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                                    melt_dbgcounter++;
#endif
                                                    ;
                                                }
                                                ;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                /*_#MELT_NEED_DBG__L5*/ meltfnum[4] =
                                                    /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                                    (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                                    0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                                    ;;
                                                MELT_LOCATION("warmelt-hooks.melt:2572:/ cond");
                                                /*cond*/ if (/*_#MELT_NEED_DBG__L5*/ meltfnum[4]) /*then*/
                                                    {
                                                        /*^cond.then*/
                                                        /*^block*/
                                                        /*anyblock*/
                                                        {

                                                            /*_#MELT_CALLCOUNT__L6*/ meltfnum[5] =
                                                                /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                                meltcallcount  /* melt_callcount debugging */
#else
                                                                0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                                ;;

                                                            MELT_CHECK_SIGNAL();
                                                            ;
                                                            MELT_LOCATION("warmelt-hooks.melt:2572:/ apply");
                                                            /*apply*/
                                                            {
                                                                union meltparam_un argtab[5];
                                                                memset(&argtab, 0, sizeof(argtab));
                                                                /*^apply.arg*/
                                                                argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L6*/ meltfnum[5];
                                                                /*^apply.arg*/
                                                                argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                                /*^apply.arg*/
                                                                argtab[2].meltbp_long = 2572;
                                                                /*^apply.arg*/
                                                                argtab[3].meltbp_cstring =  "every_polling_input curchan=";
                                                                /*^apply.arg*/
                                                                argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CURCHAN__V7*/ meltfptr[6];
                                                                /*_.MELT_DEBUG_FUN__V9*/ meltfptr[8] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                            }
                                                            ;
                                                            /*_._IF___V8*/ meltfptr[7] = /*_.MELT_DEBUG_FUN__V9*/ meltfptr[8];;
                                                            /*epilog*/

                                                            MELT_LOCATION("warmelt-hooks.melt:2572:/ clear");
                                                            /*clear*/ /*_#MELT_CALLCOUNT__L6*/ meltfnum[5] = 0 ;
                                                            /*^clear*/
                                                            /*clear*/ /*_.MELT_DEBUG_FUN__V9*/ meltfptr[8] = 0 ;
                                                        }
                                                        ;
                                                    }
                                                else    /*^cond.else*/
                                                    {

                                                        /*_._IF___V8*/ meltfptr[7] =  /*reallynil*/ NULL ;;
                                                    }
                                                ;

                                                {
                                                    MELT_LOCATION("warmelt-hooks.melt:2572:/ locexp");
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*^quasiblock*/


                                                /*epilog*/

                                                /*^clear*/
                                                /*clear*/ /*_#MELT_NEED_DBG__L5*/ meltfnum[4] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_._IF___V8*/ meltfptr[7] = 0 ;
                                            }

#else /*MELT_HAVE_DEBUG*/
                                            /*^cppif.else*/
                                            /*^block*/
                                            /*anyblock*/
                                            {


                                                {
                                                    /*^locexp*/
                                                    /*void*/(void)0;
                                                }
                                                ;
                                                /*epilog*/
                                            }

#endif /*MELT_HAVE_DEBUG*/
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;

                                            MELT_CHECK_SIGNAL();
                                            ;
                                            MELT_LOCATION("warmelt-hooks.melt:2573:/ apply");
                                            /*apply*/
                                            {
                                                /*_.F__V10*/ meltfptr[8] =  melt_apply ((meltclosure_ptr_t)(/*_.F__V2*/ meltfptr[1]), (melt_ptr_t)(/*_.CURCHAN__V7*/ meltfptr[6]), (""), (union meltparam_un*)0, "", (union meltparam_un*)0);
                                            }
                                            ;
                                            /*_#NULL__L7*/ meltfnum[5] =
                                                ((/*_.F__V10*/ meltfptr[8]) == NULL);;
                                            MELT_LOCATION("warmelt-hooks.melt:2573:/ cond");
                                            /*cond*/ if (/*_#NULL__L7*/ meltfnum[5]) /*then*/
                                                {
                                                    /*^cond.then*/
                                                    /*^block*/
                                                    /*anyblock*/
                                                    {

                                                        MELT_LOCATION("warmelt-hooks.melt:2574:/ compute");
                                                        /*_.CURPAIR__V6*/ meltfptr[5] = /*_.SETQ___V12*/ meltfptr[11] = (/*nil*/NULL);;
                                                        /*_._IF___V11*/ meltfptr[7] = /*_.SETQ___V12*/ meltfptr[11];;
                                                        /*epilog*/

                                                        MELT_LOCATION("warmelt-hooks.melt:2573:/ clear");
                                                        /*clear*/ /*_.SETQ___V12*/ meltfptr[11] = 0 ;
                                                    }
                                                    ;
                                                }
                                            else    /*^cond.else*/
                                                {

                                                    /*_._IF___V11*/ meltfptr[7] =  /*reallynil*/ NULL ;;
                                                }
                                            ;
                                        } /* end foreach_pair_component_in_list meltcit3__EACHLIST */
                                    /*_.CURPAIR__V6*/ meltfptr[5] = NULL;
                                    /*_.CURCHAN__V7*/ meltfptr[6] = NULL;


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2569:/ clear");
                                    /*clear*/ /*_.CURPAIR__V6*/ meltfptr[5] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.CURCHAN__V7*/ meltfptr[6] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.F__V10*/ meltfptr[8] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#NULL__L7*/ meltfnum[5] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V11*/ meltfptr[7] = 0 ;
                                } /*endciterblock FOREACH_PAIR_COMPONENT_IN_LIST*/
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2568:/ quasiblock");


                                /*epilog*/
                            }
                            ;
                        } /*noelse*/
                    ;
                    MELT_LOCATION("warmelt-hooks.melt:2559:/ quasiblock");


                    /*epilog*/

                    /*^clear*/
                    /*clear*/ /*_#IS_CLOSURE__L4*/ meltfnum[3] = 0 ;
                }
                ;
            } /*noelse*/
        ;

        MELT_LOCATION("warmelt-hooks.melt:2555:/ clear");
        /*clear*/ /*_.INCHBUCK__V3*/ meltfptr[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBINCH__L1*/ meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_.LISCHAN__V4*/ meltfptr[3] = 0 ;
        /*epilog*/
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("EVERY_POLLING_INPUT", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT_melt;
    return (melt_ptr_t)(/*noretval*/ NULL);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_80_WARMELTmiHOOKS_EVERY_POLLING_INPUT*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT fromline 1719 */

    /** start of frame for meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT// fromline 1535
        : public Melt_CallFrameWithValues<9>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[3];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<9> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT), clos) {};
        MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT() //the constructor fromline 1609
            : Melt_CallFrameWithValues<9> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<9> (fil,lin, sizeof(MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT)) {};
        MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<9> (fil,lin, sizeof(MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT


    /** end of frame for meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT fromline 1664**/

    /* end of frame for routine meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT fromline 1723 */

    /* classy proc frame meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT */ MeltFrame_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("GET_POLLING_INPUT", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2576:/ getarg");
    /*_.BI__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {

        MELT_LOCATION("warmelt-hooks.melt:2578:/ quasiblock");


        /*_.INCHBUCK__V4*/ meltfptr[3] =  (melt_module_var_fetch (meltmodvarix_MELT_INPCHANBUCK_symb));;
        /*^compute*/
        /*_#NBINCH__L1*/ meltfnum[0] =
            melt_longsbucket_count ((melt_ptr_t) /*_.INCHBUCK__V4*/ meltfptr[3]);;
        /*^compute*/
        /*_#I__L2*/ meltfnum[1] =
            (melt_get_int((melt_ptr_t)(/*_.BI__V2*/ meltfptr[1])));;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2582:/ cond");
        /*cond*/ if (/*_#NBINCH__L1*/ meltfnum[0]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*citerblock BLOCK_SIGNALS*/
                    {
                        /* block_signals meltcit1__BLKSIGNAL start */
                        long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
                        melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



                        MELT_LOCATION("warmelt-hooks.melt:2585:/ quasiblock");


                        /*_.CURB__V6*/ meltfptr[5] =
                            melt_longsbucket_get((melt_ptr_t)/*_.INCHBUCK__V4*/ meltfptr[3], /*_#I__L2*/ meltfnum[1]);;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*^compute*/
                        /*_#IS_A__L3*/ meltfnum[2] =
                            melt_is_instance_of((melt_ptr_t)(/*_.CURB__V6*/ meltfptr[5]), (melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[0])));;
                        MELT_LOCATION("warmelt-hooks.melt:2587:/ cond");
                        /*cond*/ if (/*_#IS_A__L3*/ meltfnum[2]) /*then*/
                            {
                                /*^cond.then*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2588:/ quasiblock");


                                    /*_._RETVAL___V1*/ meltfptr[0] = /*_.CURB__V6*/ meltfptr[5];;

                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2588:/ locexp");
                                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                            melt_warn_for_no_expected_secondary_results();
                                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                        ;
                                    }
                                    ;
                                    /*^finalreturn*/
                                    ;
                                    /*finalret*/ goto meltlabend_rout ;
                                    /*_._IF___V7*/ meltfptr[6] = /*_.RETURN___V8*/ meltfptr[7];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2587:/ clear");
                                    /*clear*/ /*_.RETURN___V8*/ meltfptr[7] = 0 ;
                                }
                                ;
                            }
                        else    /*^cond.else*/
                            {

                                /*_._IF___V7*/ meltfptr[6] =  /*reallynil*/ NULL ;;
                            }
                        ;
                        /*^compute*/
                        /*_.LET___V5*/ meltfptr[4] = /*_._IF___V7*/ meltfptr[6];;

                        MELT_LOCATION("warmelt-hooks.melt:2585:/ clear");
                        /*clear*/ /*_.CURB__V6*/ meltfptr[5] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_#IS_A__L3*/ meltfnum[2] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IF___V7*/ meltfptr[6] = 0 ;
                        /* block_signals meltcit1__BLKSIGNAL end */
                        melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
                        MELT_CHECK_SIGNAL();


                        /*citerepilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2583:/ clear");
                        /*clear*/ /*_.LET___V5*/ meltfptr[4] = 0 ;
                    } /*endciterblock BLOCK_SIGNALS*/
                    ;
                    MELT_LOCATION("warmelt-hooks.melt:2582:/ quasiblock");


                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2589:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = (/*nil*/NULL);;

        {
            MELT_LOCATION("warmelt-hooks.melt:2589:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*_.LET___V3*/ meltfptr[2] = /*_.RETURN___V9*/ meltfptr[7];;

        MELT_LOCATION("warmelt-hooks.melt:2578:/ clear");
        /*clear*/ /*_.INCHBUCK__V4*/ meltfptr[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NBINCH__L1*/ meltfnum[0] = 0 ;
        /*^clear*/
        /*clear*/ /*_#I__L2*/ meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_.RETURN___V9*/ meltfptr[7] = 0 ;
        MELT_LOCATION("warmelt-hooks.melt:2576:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = /*_.LET___V3*/ meltfptr[2];;

        {
            MELT_LOCATION("warmelt-hooks.melt:2576:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.LET___V3*/ meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("GET_POLLING_INPUT", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_81_WARMELTmiHOOKS_GET_POLLING_INPUT*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER fromline 1719 */

    /** start of frame for meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER// fromline 1535
        : public Melt_CallFrameWithValues<17>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[10];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<17> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER), clos) {};
        MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER() //the constructor fromline 1609
            : Melt_CallFrameWithValues<17> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<17> (fil,lin, sizeof(MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER)) {};
        MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<17> (fil,lin, sizeof(MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER


    /** end of frame for meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER fromline 1664**/

    /* end of frame for routine meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER fromline 1723 */

    /* classy proc frame meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER */ MeltFrame_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("REGISTER_INPUT_CHANNEL_HANDLER", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2593:/ getarg");
    /*_.CLOS__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.DATA__V3*/ meltfptr[2] = (meltxargtab_[0].meltbp_aptr) ? (*(meltxargtab_[0].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.DATA__V3*/ meltfptr[2])) != NULL);


    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_LONG) goto meltlab_endgetargs;
    /*_#INCHFD__L1*/ meltfnum[0] = meltxargtab_[1].meltbp_long;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2604:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L2*/ meltfnum[1] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2604:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L2*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2604:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[9];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L3*/ meltfnum[2];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2604;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "register_input_channel_handler clos=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CLOS__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " data=";
                            /*^apply.arg*/
                            argtab[6].meltbp_aptr = (melt_ptr_t*) &/*_.DATA__V3*/ meltfptr[2];
                            /*^apply.arg*/
                            argtab[7].meltbp_cstring =  " inchfd=";
                            /*^apply.arg*/
                            argtab[8].meltbp_long = /*_#INCHFD__L1*/ meltfnum[0];
                            /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V4*/ meltfptr[3] = /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2604:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V4*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2604:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L2*/ meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V4*/ meltfptr[3] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;
        MELT_LOCATION("warmelt-hooks.melt:2606:/ quasiblock");


        /*_#GOODINCHFD__L4*/ meltfnum[2] = 0;;

        MELT_CHECK_SIGNAL();
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*^compute*/
        /*_#IS_CLOSURE__L5*/ meltfnum[1] =
            (melt_magic_discr((melt_ptr_t)(/*_.CLOS__V2*/ meltfptr[1])) == MELTOBMAG_CLOSURE);;
        MELT_LOCATION("warmelt-hooks.melt:2607:/ cond");
        /*cond*/ if (/*_#IS_CLOSURE__L5*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*_#gteqI__L7*/ meltfnum[6] =
                        ((/*_#INCHFD__L1*/ meltfnum[0]) >= (0));;
                    /*^compute*/
                    /*_#_IF___L6*/ meltfnum[5] = /*_#gteqI__L7*/ meltfnum[6];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2607:/ clear");
                    /*clear*/ /*_#gteqI__L7*/ meltfnum[6] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_#_IF___L6*/ meltfnum[5] = 0;;
            }
        ;
        MELT_LOCATION("warmelt-hooks.melt:2607:/ cond");
        /*cond*/ if (/*_#_IF___L6*/ meltfnum[5]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    {
                        MELT_LOCATION("warmelt-hooks.melt:2609:/ locexp");
                        /*register_input_channel_handler STATINCHFDCHK__1 */
                        {
                            struct stat STATINCHFDCHK__1_stat;
                            memset (& STATINCHFDCHK__1_stat, 0, sizeof(struct stat));
                            if (fstat (/*_#INCHFD__L1*/ meltfnum[0], & STATINCHFDCHK__1_stat))
                                warning(0, "MELT bad registered input channel fd#%d - %s",
                                        (int) /*_#INCHFD__L1*/ meltfnum[0], xstrerror (errno));
                            else
                                /*_#GOODINCHFD__L4*/ meltfnum[2] = 1;
                        } /* end STATINCHFDCHK__1 */ ;
                    }
                    ;
                    /*epilog*/
                }
                ;
            } /*noelse*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#NOT__L8*/ meltfnum[6] =
            (!(/*_#GOODINCHFD__L4*/ meltfnum[2]));;
        MELT_LOCATION("warmelt-hooks.melt:2621:/ cond");
        /*cond*/ if (/*_#NOT__L8*/ meltfnum[6]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    /*^quasiblock*/


                    /*_._RETVAL___V1*/ meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-hooks.melt:2621:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/ goto meltlabend_rout ;
                    /*_._IF___V7*/ meltfptr[3] = /*_.RETURN___V8*/ meltfptr[7];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2621:/ clear");
                    /*clear*/ /*_.RETURN___V8*/ meltfptr[7] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V7*/ meltfptr[3] =  /*reallynil*/ NULL ;;
            }
        ;
        /*^compute*/
        /*_.LET___V6*/ meltfptr[4] = /*_._IF___V7*/ meltfptr[3];;

        MELT_LOCATION("warmelt-hooks.melt:2606:/ clear");
        /*clear*/ /*_#GOODINCHFD__L4*/ meltfnum[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_CLOSURE__L5*/ meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_#_IF___L6*/ meltfnum[5] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L8*/ meltfnum[6] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V7*/ meltfptr[3] = 0 ;
        MELT_LOCATION("warmelt-hooks.melt:2622:/ quasiblock");


        /*_.INSBUF__V9*/ meltfptr[7] =
            (melt_ptr_t) meltgc_new_strbuf((meltobject_ptr_t)((/*!DISCR_STRBUF*/ meltfrout->tabval[1])), (const char*)0);;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2623:/ quasiblock");


        /*^rawallocobj*/
        /*rawallocobj*/
        {
            melt_ptr_t newobj = 0;
            melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_INPUT_CHANNEL_HANDLER*/ meltfrout->tabval[2])), (4), "CLASS_INPUT_CHANNEL_HANDLER");
            /*_.INST__V11*/ meltfptr[10] =
                newobj;
        };
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @INCH_SBUF", melt_magic_discr((melt_ptr_t)(/*_.INST__V11*/ meltfptr[10])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V11*/ meltfptr[10]), (1), (/*_.INSBUF__V9*/ meltfptr[7]), "INCH_SBUF");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @INCH_CLOS", melt_magic_discr((melt_ptr_t)(/*_.INST__V11*/ meltfptr[10])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V11*/ meltfptr[10]), (2), (/*_.CLOS__V2*/ meltfptr[1]), "INCH_CLOS");
        ;
        /*^putslot*/
        /*putslot*/
        melt_assertmsg("checkobj putslot  _ @INCH_DATA", melt_magic_discr((melt_ptr_t)(/*_.INST__V11*/ meltfptr[10])) == MELTOBMAG_OBJECT);
        melt_putfield_object((/*_.INST__V11*/ meltfptr[10]), (3), (/*_.DATA__V3*/ meltfptr[2]), "INCH_DATA");
        ;
        /*^touchobj*/

        melt_dbgtrace_written_object (/*_.INST__V11*/ meltfptr[10], "newly made instance");
        ;
        /*_.INCHDLR__V10*/ meltfptr[3] = /*_.INST__V11*/ meltfptr[10];;
        /*^compute*/
        /*_.INBUCK__V12*/ meltfptr[11] =  (melt_module_var_fetch (meltmodvarix_MELT_INPCHANBUCK_symb));;

        {
            MELT_LOCATION("warmelt-hooks.melt:2629:/ locexp");
            melt_put_int((melt_ptr_t)(/*_.INCHDLR__V10*/ meltfptr[3]), (/*_#INCHFD__L1*/ meltfnum[0]));
        }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_BUCKETLONG__L9*/ meltfnum[2] =
            (melt_magic_discr((melt_ptr_t) (/*_.INBUCK__V12*/ meltfptr[11])) == MELTOBMAG_BUCKETLONGS);;
        /*^compute*/
        /*_#NOT__L10*/ meltfnum[1] =
            (!(/*_#IS_BUCKETLONG__L9*/ meltfnum[2]));;
        MELT_LOCATION("warmelt-hooks.melt:2630:/ cond");
        /*cond*/ if (/*_#NOT__L10*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {

                    MELT_LOCATION("warmelt-hooks.melt:2631:/ quasiblock");


                    /*_.NEWINBUCK__V15*/ meltfptr[14] =
                        (meltgc_new_longsbucket((meltobject_ptr_t) (/*!DISCR_BUCKET_LONGS*/ meltfrout->tabval[3]), (50)));;
                    MELT_LOCATION("warmelt-hooks.melt:2633:/ compute");
                    /*_.INBUCK__V12*/ meltfptr[11] = /*_.SETQ___V16*/ meltfptr[15] = /*_.NEWINBUCK__V15*/ meltfptr[14];;
                    /*_.LET___V14*/ meltfptr[13] = /*_.SETQ___V16*/ meltfptr[15];;

                    MELT_LOCATION("warmelt-hooks.melt:2631:/ clear");
                    /*clear*/ /*_.NEWINBUCK__V15*/ meltfptr[14] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.SETQ___V16*/ meltfptr[15] = 0 ;
                    /*_._IF___V13*/ meltfptr[12] = /*_.LET___V14*/ meltfptr[13];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2630:/ clear");
                    /*clear*/ /*_.LET___V14*/ meltfptr[13] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V13*/ meltfptr[12] =  /*reallynil*/ NULL ;;
            }
        ;
        MELT_LOCATION("warmelt-hooks.melt:2634:/ quasiblock");


        /*_.UPDATEDINBUCK__V17*/ meltfptr[14] =
            meltgc_longsbucket_put ((melt_ptr_t) /*_.INBUCK__V12*/ meltfptr[11], (/*_#INCHFD__L1*/ meltfnum[0]), (melt_ptr_t) /*_.INCHDLR__V10*/ meltfptr[3]);;
        MELT_LOCATION("warmelt-hooks.melt:2636:/ putmodvar");
        melt_module_var_put (meltmodvarix_MELT_INPCHANBUCK_symb, (melt_ptr_t)(/*_.UPDATEDINBUCK__V17*/ meltfptr[14]));
        ;

        {
            MELT_LOCATION("warmelt-hooks.melt:2637:/ locexp");
            /* FCNTLINCHFDCHK__1 start */
            if (fcntl (/*_#INCHFD__L1*/ meltfnum[0], F_SETOWN, getpid()))
                melt_fatal_error("MELT failed to set ownership (F_SETOWN) fd #%d - %s",
                                 (int) /*_#INCHFD__L1*/ meltfnum[0], xstrerror (errno));
            /* end  FCNTLINCHFDCHK__1 */
            ;
        }
        ;

        MELT_LOCATION("warmelt-hooks.melt:2634:/ clear");
        /*clear*/ /*_.UPDATEDINBUCK__V17*/ meltfptr[14] = 0 ;

        MELT_LOCATION("warmelt-hooks.melt:2622:/ clear");
        /*clear*/ /*_.INSBUF__V9*/ meltfptr[7] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INCHDLR__V10*/ meltfptr[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_.INBUCK__V12*/ meltfptr[11] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_BUCKETLONG__L9*/ meltfnum[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_#NOT__L10*/ meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V13*/ meltfptr[12] = 0 ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/

        MELT_LOCATION("warmelt-hooks.melt:2593:/ clear");
        /*clear*/ /*_.LET___V6*/ meltfptr[4] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("REGISTER_INPUT_CHANNEL_HANDLER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_82_WARMELTmiHOOKS_REGISTER_INPUT_CHANNEL_HANDLER*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER fromline 1719 */

    /** start of frame for meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER// fromline 1535
        : public Melt_CallFrameWithValues<18>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[10];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<18> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER), clos) {};
        MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER() //the constructor fromline 1609
            : Melt_CallFrameWithValues<18> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<18> (fil,lin, sizeof(MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER)) {};
        MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<18> (fil,lin, sizeof(MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER


    /** end of frame for meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER fromline 1664**/

    /* end of frame for routine meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER fromline 1723 */

    /* classy proc frame meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER */ MeltFrame_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("REGISTER_ALARM_TIMER", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2733:/ getarg");
    /*_.CLOS__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_LONG) goto meltlab_endgetargs;
    /*_#PERIODMS__L1*/ meltfnum[0] = meltxargtab_[0].meltbp_long;

    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.DATA__V3*/ meltfptr[2] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.DATA__V3*/ meltfptr[2])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2739:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L2*/ meltfnum[1] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2739:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L2*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2739:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[7];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L3*/ meltfnum[2];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2739;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "register_alarm_timer clos=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CLOS__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " periodms=";
                            /*^apply.arg*/
                            argtab[6].meltbp_long = /*_#PERIODMS__L1*/ meltfnum[0];
                            /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V4*/ meltfptr[3] = /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2739:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V4*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2739:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L2*/ meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V4*/ meltfptr[3] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_CLOSURE__L4*/ meltfnum[2] =
            (melt_magic_discr((melt_ptr_t)(/*_.CLOS__V2*/ meltfptr[1])) == MELTOBMAG_CLOSURE);;
        MELT_LOCATION("warmelt-hooks.melt:2740:/ cond");
        /*cond*/ if (/*_#IS_CLOSURE__L4*/ meltfnum[2]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#gteqI__L5*/ meltfnum[1] =
                        ((/*_#PERIODMS__L1*/ meltfnum[0]) >= (50));;
                    MELT_LOCATION("warmelt-hooks.melt:2741:/ cond");
                    /*cond*/ if (/*_#gteqI__L5*/ meltfnum[1]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-hooks.melt:2742:/ quasiblock");


                                /*_.RES__V9*/ meltfptr[8] = (/*nil*/NULL);;
                                /*citerblock BLOCK_SIGNALS*/
                                {
                                    /* block_signals meltcit1__BLKSIGNAL start */
                                    long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
                                    melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



                                    MELT_LOCATION("warmelt-hooks.melt:2746:/ quasiblock");


                                    /*_.PERIODBOX__V11*/ meltfptr[10] =
                                        (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_CONSTANT_INTEGER*/ meltfrout->tabval[1])), (/*_#PERIODMS__L1*/ meltfnum[0])));;
                                    MELT_LOCATION("warmelt-hooks.melt:2747:/ cond");
                                    /*cond*/ if ( (melt_module_var_fetch (meltmodvarix_MELT_ALARMBUCKET_symb))) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*_.OLDBUCK__V12*/ meltfptr[11] =  (melt_module_var_fetch (meltmodvarix_MELT_ALARMBUCKET_symb));;
                                        }
                                    else
                                        {
                                            MELT_LOCATION("warmelt-hooks.melt:2747:/ cond.else");

                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_.MAKE_BUCKETLONG__V13*/ meltfptr[12] =
                                                    (meltgc_new_longsbucket((meltobject_ptr_t) (/*!DISCR_BUCKET_LONGS*/ meltfrout->tabval[2]), (31)));;
                                                /*^compute*/
                                                /*_.OLDBUCK__V12*/ meltfptr[11] = /*_.MAKE_BUCKETLONG__V13*/ meltfptr[12];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2747:/ clear");
                                                /*clear*/ /*_.MAKE_BUCKETLONG__V13*/ meltfptr[12] = 0 ;
                                            }
                                            ;
                                        }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2748:/ quasiblock");


                                    /*^rawallocobj*/
                                    /*rawallocobj*/
                                    {
                                        melt_ptr_t newobj = 0;
                                        melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_ALARM_HANDLER*/ meltfrout->tabval[3])), (4), "CLASS_ALARM_HANDLER");
                                        /*_.INST__V15*/ meltfptr[14] =
                                            newobj;
                                    };
                                    ;
                                    /*^putslot*/
                                    /*putslot*/
                                    melt_assertmsg("checkobj putslot  _ @ALARMH_PERIOD", melt_magic_discr((melt_ptr_t)(/*_.INST__V15*/ meltfptr[14])) == MELTOBMAG_OBJECT);
                                    melt_putfield_object((/*_.INST__V15*/ meltfptr[14]), (1), (/*_.PERIODBOX__V11*/ meltfptr[10]), "ALARMH_PERIOD");
                                    ;
                                    /*^putslot*/
                                    /*putslot*/
                                    melt_assertmsg("checkobj putslot  _ @ALARMH_CLOS", melt_magic_discr((melt_ptr_t)(/*_.INST__V15*/ meltfptr[14])) == MELTOBMAG_OBJECT);
                                    melt_putfield_object((/*_.INST__V15*/ meltfptr[14]), (2), (/*_.CLOS__V2*/ meltfptr[1]), "ALARMH_CLOS");
                                    ;
                                    /*^putslot*/
                                    /*putslot*/
                                    melt_assertmsg("checkobj putslot  _ @ALARMH_DATA", melt_magic_discr((melt_ptr_t)(/*_.INST__V15*/ meltfptr[14])) == MELTOBMAG_OBJECT);
                                    melt_putfield_object((/*_.INST__V15*/ meltfptr[14]), (3), (/*_.DATA__V3*/ meltfptr[2]), "ALARMH_DATA");
                                    ;
                                    /*^touchobj*/

                                    melt_dbgtrace_written_object (/*_.INST__V15*/ meltfptr[14], "newly made instance");
                                    ;
                                    /*_.ALHD__V14*/ meltfptr[12] = /*_.INST__V15*/ meltfptr[14];;
                                    /*^compute*/
                                    /*_#CURELTIM__L6*/ meltfnum[5] =
                                        melt_relative_time_millisec();;
                                    /*^compute*/
                                    /*_#NEXTIM__L7*/ meltfnum[6] =
                                        ((/*_#CURELTIM__L6*/ meltfnum[5]) + (/*_#PERIODMS__L1*/ meltfnum[0]));;
                                    /*^compute*/
                                    /*_.NEWBUCK__V16*/ meltfptr[15] =
                                        meltgc_longsbucket_put ((melt_ptr_t) /*_.OLDBUCK__V12*/ meltfptr[11], (/*_#NEXTIM__L7*/ meltfnum[6]), (melt_ptr_t) /*_.ALHD__V14*/ meltfptr[12]);;
                                    /*^compute*/
                                    /*_#FIRSTKEY__L8*/ meltfnum[7] =
                                        melt_longsbucket_nth_key ((melt_ptr_t) /*_.NEWBUCK__V16*/ meltfptr[15], (int)0);;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2756:/ cond");
                                    /*cond*/ if (/*_#FIRSTKEY__L8*/ meltfnum[7]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#miI__L10*/ meltfnum[9] =
                                                    ((/*_#FIRSTKEY__L8*/ meltfnum[7]) - (/*_#CURELTIM__L6*/ meltfnum[5]));;
                                                /*^compute*/
                                                /*_#FIRSTDELAY__L9*/ meltfnum[8] = /*_#miI__L10*/ meltfnum[9];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2756:/ clear");
                                                /*clear*/ /*_#miI__L10*/ meltfnum[9] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_#FIRSTDELAY__L9*/ meltfnum[8] = 0;;
                                        }
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2758:/ putmodvar");
                                    melt_module_var_put (meltmodvarix_MELT_ALARMBUCKET_symb, (melt_ptr_t)(/*_.NEWBUCK__V16*/ meltfptr[15]));
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2759:/ locexp");
                                        melt_set_real_timer_millisec(/*_#FIRSTDELAY__L9*/ meltfnum[8]);
                                    }
                                    ;
                                    MELT_LOCATION("warmelt-hooks.melt:2760:/ compute");
                                    /*_.RES__V9*/ meltfptr[8] = /*_.SETQ___V17*/ meltfptr[16] = /*_.ALHD__V14*/ meltfptr[12];;
                                    /*_.LET___V10*/ meltfptr[9] = /*_.SETQ___V17*/ meltfptr[16];;

                                    MELT_LOCATION("warmelt-hooks.melt:2746:/ clear");
                                    /*clear*/ /*_.PERIODBOX__V11*/ meltfptr[10] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.OLDBUCK__V12*/ meltfptr[11] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.ALHD__V14*/ meltfptr[12] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#CURELTIM__L6*/ meltfnum[5] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#NEXTIM__L7*/ meltfnum[6] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.NEWBUCK__V16*/ meltfptr[15] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#FIRSTKEY__L8*/ meltfnum[7] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_#FIRSTDELAY__L9*/ meltfnum[8] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.SETQ___V17*/ meltfptr[16] = 0 ;
                                    /* block_signals meltcit1__BLKSIGNAL end */
                                    melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
                                    MELT_CHECK_SIGNAL();


                                    /*citerepilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2744:/ clear");
                                    /*clear*/ /*_.LET___V10*/ meltfptr[9] = 0 ;
                                } /*endciterblock BLOCK_SIGNALS*/
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2761:/ quasiblock");


                                /*_._RETVAL___V1*/ meltfptr[0] = /*_.RES__V9*/ meltfptr[8];;

                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2761:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/ goto meltlabend_rout ;
                                /*_.LET___V8*/ meltfptr[7] = /*_.RETURN___V18*/ meltfptr[10];;

                                MELT_LOCATION("warmelt-hooks.melt:2742:/ clear");
                                /*clear*/ /*_.RES__V9*/ meltfptr[8] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.RETURN___V18*/ meltfptr[10] = 0 ;
                                /*_._IF___V7*/ meltfptr[3] = /*_.LET___V8*/ meltfptr[7];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-hooks.melt:2741:/ clear");
                                /*clear*/ /*_.LET___V8*/ meltfptr[7] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IF___V7*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                        }
                    ;
                    /*^compute*/
                    /*_._IF___V6*/ meltfptr[4] = /*_._IF___V7*/ meltfptr[3];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2740:/ clear");
                    /*clear*/ /*_#gteqI__L5*/ meltfnum[1] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IF___V7*/ meltfptr[3] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V6*/ meltfptr[4] =  /*reallynil*/ NULL ;;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2733:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = /*_._IF___V6*/ meltfptr[4];;

        {
            MELT_LOCATION("warmelt-hooks.melt:2733:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_#IS_CLOSURE__L4*/ meltfnum[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V6*/ meltfptr[4] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("REGISTER_ALARM_TIMER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_85_WARMELTmiHOOKS_REGISTER_ALARM_TIMER*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER fromline 1719 */

    /** start of frame for meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER// fromline 1535
        : public Melt_CallFrameWithValues<26>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[8];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER), clos) {};
        MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER() //the constructor fromline 1609
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER)) {};
        MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER


    /** end of frame for meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER fromline 1664**/

    /* end of frame for routine meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER fromline 1723 */

    /* classy proc frame meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER */ MeltFrame_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("UNREGISTER_ALARM_TIMER", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2765:/ getarg");
    /*_.TIM__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2767:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2767:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2767:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2767;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "unregister_alarm_timer tim=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.TIM__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V3*/ meltfptr[2] = /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2767:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V3*/ meltfptr[2] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2767:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V3*/ meltfptr[2] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2768:/ cond");
        /*cond*/ if (/*_.TIM__V2*/ meltfptr[1]) /*then*/
            {
                /*^cond.then*/
                /*_._IFELSE___V5*/ meltfptr[3] = (/*nil*/NULL);;
            }
        else
            {
                MELT_LOCATION("warmelt-hooks.melt:2768:/ cond.else");

                /*^block*/
                /*anyblock*/
                {

                    /*^quasiblock*/


                    /*_._RETVAL___V1*/ meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-hooks.melt:2768:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/ goto meltlabend_rout ;
                    /*^quasiblock*/


                    /*_.PROGN___V7*/ meltfptr[6] = /*_.RETURN___V6*/ meltfptr[2];;
                    /*^compute*/
                    /*_._IFELSE___V5*/ meltfptr[3] = /*_.PROGN___V7*/ meltfptr[6];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2768:/ clear");
                    /*clear*/ /*_.RETURN___V6*/ meltfptr[2] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V7*/ meltfptr[6] = 0 ;
                }
                ;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_NOT_A__L3*/ meltfnum[1] =
            !melt_is_instance_of((melt_ptr_t)(/*_.TIM__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_ALARM_HANDLER*/ meltfrout->tabval[1])));;
        MELT_LOCATION("warmelt-hooks.melt:2769:/ cond");
        /*cond*/ if (/*_#IS_NOT_A__L3*/ meltfnum[1]) /*then*/
            {
                /*^cond.then*/
                /*_._IFELSE___V8*/ meltfptr[2] = (/*nil*/NULL);;
            }
        else
            {
                MELT_LOCATION("warmelt-hooks.melt:2769:/ cond.else");

                /*^block*/
                /*anyblock*/
                {


#if MELT_HAVE_DEBUG
                    MELT_LOCATION("warmelt-hooks.melt:2770:/ cppif.then");
                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*_#IS_A__L4*/ meltfnum[0] =
                            melt_is_instance_of((melt_ptr_t)(/*_.TIM__V2*/ meltfptr[1]), (melt_ptr_t)((/*!CLASS_ALARM_HANDLER*/ meltfrout->tabval[1])));;
                        MELT_LOCATION("warmelt-hooks.melt:2770:/ cond");
                        /*cond*/ if (/*_#IS_A__L4*/ meltfnum[0]) /*then*/
                            {
                                /*^cond.then*/
                                /*_._IFELSE___V10*/ meltfptr[9] = (/*nil*/NULL);;
                            }
                        else
                            {
                                MELT_LOCATION("warmelt-hooks.melt:2770:/ cond.else");

                                /*^block*/
                                /*anyblock*/
                                {


                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*^apply*/
                                    /*apply*/
                                    {
                                        union meltparam_un argtab[4];
                                        memset(&argtab, 0, sizeof(argtab));
                                        /*^apply.arg*/
                                        argtab[0].meltbp_cstring =  "check tim";
                                        /*^apply.arg*/
                                        argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                        /*^apply.arg*/
                                        argtab[2].meltbp_long = 2770;
                                        /*^apply.arg*/
                                        argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.TIM__V2*/ meltfptr[1];
                                        /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                    }
                                    ;
                                    /*_._IFELSE___V10*/ meltfptr[9] = /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2770:/ clear");
                                    /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V11*/ meltfptr[10] = 0 ;
                                }
                                ;
                            }
                        ;
                        /*_.IFCPP___V9*/ meltfptr[6] = /*_._IFELSE___V10*/ meltfptr[9];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2770:/ clear");
                        /*clear*/ /*_#IS_A__L4*/ meltfnum[0] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_._IFELSE___V10*/ meltfptr[9] = 0 ;
                    }

#else /*MELT_HAVE_DEBUG*/
                    /*^cppif.else*/
                    /*_.IFCPP___V9*/ meltfptr[6] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                    ;
                    MELT_LOCATION("warmelt-hooks.melt:2771:/ quasiblock");


                    /*_._RETVAL___V1*/ meltfptr[0] =  /*reallynil*/ NULL ;;

                    {
                        MELT_LOCATION("warmelt-hooks.melt:2771:/ locexp");
                        /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                        if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                            melt_warn_for_no_expected_secondary_results();
                        /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                        ;
                    }
                    ;
                    /*^finalreturn*/
                    ;
                    /*finalret*/ goto meltlabend_rout ;
                    MELT_LOCATION("warmelt-hooks.melt:2769:/ quasiblock");


                    /*_.PROGN___V13*/ meltfptr[9] = /*_.RETURN___V12*/ meltfptr[10];;
                    /*^compute*/
                    /*_._IFELSE___V8*/ meltfptr[2] = /*_.PROGN___V13*/ meltfptr[9];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2769:/ clear");
                    /*clear*/ /*_.IFCPP___V9*/ meltfptr[6] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.RETURN___V12*/ meltfptr[10] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_.PROGN___V13*/ meltfptr[9] = 0 ;
                }
                ;
            }
        ;
        /*citerblock BLOCK_SIGNALS*/
        {
            /* block_signals meltcit1__BLKSIGNAL start */
            long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
            melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



            MELT_LOCATION("warmelt-hooks.melt:2774:/ quasiblock");


            /*_.OLDBUCK__V14*/ meltfptr[6] =  (melt_module_var_fetch (meltmodvarix_MELT_ALARMBUCKET_symb));;
            /*^compute*/
            /*_#OLDBUCKLEN__L5*/ meltfnum[0] =
                melt_longsbucket_count ((melt_ptr_t) /*_.OLDBUCK__V14*/ meltfptr[6]);;
            /*^compute*/
            /*_.NEWBUCK__V15*/ meltfptr[10] =
                (meltgc_new_longsbucket((meltobject_ptr_t) (/*!DISCR_BUCKET_LONGS*/ meltfrout->tabval[3]), (/*_#OLDBUCKLEN__L5*/ meltfnum[0])));;

            MELT_CHECK_SIGNAL();
            ;
            MELT_LOCATION("warmelt-hooks.melt:2778:/ cond");
            /*cond*/ if (/*_#OLDBUCKLEN__L5*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V16*/ meltfptr[9] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-hooks.melt:2778:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {

                        MELT_LOCATION("warmelt-hooks.melt:2780:/ putmodvar");
                        melt_module_var_put (meltmodvarix_MELT_ALARMBUCKET_symb, (melt_ptr_t)((/*nil*/NULL)));
                        ;

                        {
                            MELT_LOCATION("warmelt-hooks.melt:2781:/ locexp");
                            melt_set_real_timer_millisec(0);
                        }
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2782:/ quasiblock");


                        /*_._RETVAL___V1*/ meltfptr[0] =  /*reallynil*/ NULL ;;

                        {
                            MELT_LOCATION("warmelt-hooks.melt:2782:/ locexp");
                            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                melt_warn_for_no_expected_secondary_results();
                            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                            ;
                        }
                        ;
                        /*^finalreturn*/
                        ;
                        /*finalret*/ goto meltlabend_rout ;
                        MELT_LOCATION("warmelt-hooks.melt:2778:/ quasiblock");


                        /*_.PROGN___V18*/ meltfptr[17] = /*_.RETURN___V17*/ meltfptr[16];;
                        /*^compute*/
                        /*_._IFELSE___V16*/ meltfptr[9] = /*_.PROGN___V18*/ meltfptr[17];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2778:/ clear");
                        /*clear*/ /*_.RETURN___V17*/ meltfptr[16] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.PROGN___V18*/ meltfptr[17] = 0 ;
                    }
                    ;
                }
            ;
            /*citerblock FOREACH_IN_BUCKETLONG*/
            {
                /*foreach_in_bucketlong meltcit2__EACHBUCKLONG*/ unsigned meltcit2__EACHBUCKLONG_ix = 0, meltcit2__EACHBUCKLONG_cnt =0;
                /*_#OLDKEY__L6*/ meltfnum[5] = 0L;
                /*_.OLDALA__V19*/ meltfptr[16] = NULL;
                for (meltcit2__EACHBUCKLONG_ix = 0;
                        /* retrieve in meltcit2__EACHBUCKLONG iteration the count, it might change! */
                        (meltcit2__EACHBUCKLONG_cnt = melt_longsbucket_count ((melt_ptr_t) /*_.OLDBUCK__V14*/ meltfptr[6])) > 0
                        && meltcit2__EACHBUCKLONG_ix < meltcit2__EACHBUCKLONG_cnt;
                        meltcit2__EACHBUCKLONG_ix++)
                    {
                        /*_#OLDKEY__L6*/ meltfnum[5] = 0L;
                        /*_.OLDALA__V19*/ meltfptr[16] = NULL;
                        {
                            struct melt_bucketlongentry_st* meltcit2__EACHBUCKLONG_buent
                            = ((struct meltbucketlongs_st*)/*_.OLDBUCK__V14*/ meltfptr[6])->buckl_entab + meltcit2__EACHBUCKLONG_ix;
                            if (!meltcit2__EACHBUCKLONG_buent->ebl_va)
                                continue;
                            /*_#OLDKEY__L6*/ meltfnum[5] = meltcit2__EACHBUCKLONG_buent->ebl_at;
                            /*_.OLDALA__V19*/ meltfptr[16] = meltcit2__EACHBUCKLONG_buent->ebl_va;
                            meltcit2__EACHBUCKLONG_buent = NULL;
                        }
                        /*foreach_in_bucketlong meltcit2__EACHBUCKLONG body:*/




#if MELT_HAVE_DEBUG
                        MELT_LOCATION("warmelt-hooks.melt:2786:/ cppif.then");
                        /*^block*/
                        /*anyblock*/
                        {


                            MELT_CHECK_SIGNAL();
                            ;
                            /*_#IS_A__L7*/ meltfnum[6] =
                                melt_is_instance_of((melt_ptr_t)(/*_.OLDALA__V19*/ meltfptr[16]), (melt_ptr_t)((/*!CLASS_ALARM_HANDLER*/ meltfrout->tabval[1])));;
                            MELT_LOCATION("warmelt-hooks.melt:2786:/ cond");
                            /*cond*/ if (/*_#IS_A__L7*/ meltfnum[6]) /*then*/
                                {
                                    /*^cond.then*/
                                    /*_._IFELSE___V21*/ meltfptr[20] = (/*nil*/NULL);;
                                }
                            else
                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2786:/ cond.else");

                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*^apply*/
                                        /*apply*/
                                        {
                                            union meltparam_un argtab[4];
                                            memset(&argtab, 0, sizeof(argtab));
                                            /*^apply.arg*/
                                            argtab[0].meltbp_cstring =  "check oldala";
                                            /*^apply.arg*/
                                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                            /*^apply.arg*/
                                            argtab[2].meltbp_long = 2786;
                                            /*^apply.arg*/
                                            argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.OLDALA__V19*/ meltfptr[16];
                                            /*_.MELT_ASSERT_FAILURE_FUN__V22*/ meltfptr[21] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[2])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                        }
                                        ;
                                        /*_._IFELSE___V21*/ meltfptr[20] = /*_.MELT_ASSERT_FAILURE_FUN__V22*/ meltfptr[21];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2786:/ clear");
                                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V22*/ meltfptr[21] = 0 ;
                                    }
                                    ;
                                }
                            ;
                            /*_.IFCPP___V20*/ meltfptr[17] = /*_._IFELSE___V21*/ meltfptr[20];;
                            /*epilog*/

                            MELT_LOCATION("warmelt-hooks.melt:2786:/ clear");
                            /*clear*/ /*_#IS_A__L7*/ meltfnum[6] = 0 ;
                            /*^clear*/
                            /*clear*/ /*_._IFELSE___V21*/ meltfptr[20] = 0 ;
                        }

#else /*MELT_HAVE_DEBUG*/
                        /*^cppif.else*/
                        /*_.IFCPP___V20*/ meltfptr[17] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                        ;

                        MELT_CHECK_SIGNAL();
                        ;
                        /*^compute*/
                        /*_#eqeq__L8*/ meltfnum[6] =
                            ((/*_.OLDALA__V19*/ meltfptr[16]) == (/*_.TIM__V2*/ meltfptr[1]));;
                        MELT_LOCATION("warmelt-hooks.melt:2787:/ cond");
                        /*cond*/ if (/*_#eqeq__L8*/ meltfnum[6]) /*then*/
                            {
                                /*^cond.then*/
                                /*_._IFELSE___V23*/ meltfptr[21] = (/*nil*/NULL);;
                            }
                        else
                            {
                                MELT_LOCATION("warmelt-hooks.melt:2787:/ cond.else");

                                /*^block*/
                                /*anyblock*/
                                {

                                    /*_.BUCKETLONG_PUT__V24*/ meltfptr[20] =
                                        meltgc_longsbucket_put ((melt_ptr_t) /*_.NEWBUCK__V15*/ meltfptr[10], (/*_#OLDKEY__L6*/ meltfnum[5]), (melt_ptr_t) /*_.OLDALA__V19*/ meltfptr[16]);;
                                    MELT_LOCATION("warmelt-hooks.melt:2788:/ compute");
                                    /*_.NEWBUCK__V15*/ meltfptr[10] = /*_.SETQ___V25*/ meltfptr[24] = /*_.BUCKETLONG_PUT__V24*/ meltfptr[20];;
                                    MELT_LOCATION("warmelt-hooks.melt:2787:/ quasiblock");


                                    /*_.PROGN___V26*/ meltfptr[25] = /*_.SETQ___V25*/ meltfptr[24];;
                                    /*^compute*/
                                    /*_._IFELSE___V23*/ meltfptr[21] = /*_.PROGN___V26*/ meltfptr[25];;
                                    /*epilog*/

                                    MELT_LOCATION("warmelt-hooks.melt:2787:/ clear");
                                    /*clear*/ /*_.BUCKETLONG_PUT__V24*/ meltfptr[20] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.SETQ___V25*/ meltfptr[24] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.PROGN___V26*/ meltfptr[25] = 0 ;
                                }
                                ;
                            }
                        ;
                        /* ending foreach_in_bucketlong meltcit2__EACHBUCKLONG*/
                        /*_#OLDKEY__L6*/ meltfnum[5] = 0L;
                        /*_.OLDALA__V19*/ meltfptr[16] = NULL;
                    } /* end foreach_in_bucketlong meltcit2__EACHBUCKLONG_ix */


                /*citerepilog*/

                MELT_LOCATION("warmelt-hooks.melt:2783:/ clear");
                /*clear*/ /*_#OLDKEY__L6*/ meltfnum[5] = 0 ;
                /*^clear*/
                /*clear*/ /*_.OLDALA__V19*/ meltfptr[16] = 0 ;
                /*^clear*/
                /*clear*/ /*_.IFCPP___V20*/ meltfptr[17] = 0 ;
                /*^clear*/
                /*clear*/ /*_#eqeq__L8*/ meltfnum[6] = 0 ;
                /*^clear*/
                /*clear*/ /*_._IFELSE___V23*/ meltfptr[21] = 0 ;
            } /*endciterblock FOREACH_IN_BUCKETLONG*/
            ;
            MELT_LOCATION("warmelt-hooks.melt:2790:/ putmodvar");
            melt_module_var_put (meltmodvarix_MELT_ALARMBUCKET_symb, (melt_ptr_t)(/*_.NEWBUCK__V15*/ meltfptr[10]));
            ;

            MELT_LOCATION("warmelt-hooks.melt:2774:/ clear");
            /*clear*/ /*_.OLDBUCK__V14*/ meltfptr[6] = 0 ;
            /*^clear*/
            /*clear*/ /*_#OLDBUCKLEN__L5*/ meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_.NEWBUCK__V15*/ meltfptr[10] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IFELSE___V16*/ meltfptr[9] = 0 ;
            /* block_signals meltcit1__BLKSIGNAL end */
            melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
            MELT_CHECK_SIGNAL();


            /*citerepilog*/
        } /*endciterblock BLOCK_SIGNALS*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*epilog*/

        MELT_LOCATION("warmelt-hooks.melt:2765:/ clear");
        /*clear*/ /*_._IFELSE___V5*/ meltfptr[3] = 0 ;
        /*^clear*/
        /*clear*/ /*_#IS_NOT_A__L3*/ meltfnum[1] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IFELSE___V8*/ meltfptr[2] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("UNREGISTER_ALARM_TIMER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_86_WARMELTmiHOOKS_UNREGISTER_ALARM_TIMER*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER fromline 1719 */

    /** start of frame for meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER// fromline 1535
        : public Melt_CallFrameWithValues<26>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[11];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER), clos) {};
        MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER() //the constructor fromline 1609
            : Melt_CallFrameWithValues<26> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER)) {};
        MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<26> (fil,lin, sizeof(MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER


    /** end of frame for meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER fromline 1664**/

    /* end of frame for routine meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER fromline 1723 */

    /* classy proc frame meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER */ MeltFrame_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("REGISTER_CHILD_PROCESS_HANDLER", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2913:/ getarg");
    /*_.CLOS__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;

    /*getarg#1*/
    /*^getarg*/
    if (meltxargdescr_[0] != MELTBPAR_LONG) goto meltlab_endgetargs;
    /*_#PID__L1*/ meltfnum[0] = meltxargtab_[0].meltbp_long;

    /*getarg#2*/
    /*^getarg*/
    if (meltxargdescr_[1] != MELTBPAR_PTR) goto meltlab_endgetargs;
    /*_.DATA__V3*/ meltfptr[2] = (meltxargtab_[1].meltbp_aptr) ? (*(meltxargtab_[1].meltbp_aptr)) : NULL;
    gcc_assert(melt_discr((melt_ptr_t)(/*_.DATA__V3*/ meltfptr[2])) != NULL);

    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2917:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L2*/ meltfnum[1] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2917:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L2*/ meltfnum[1]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2917:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[9];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L3*/ meltfnum[2];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2917;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "register_child_process_handler clos=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CLOS__V2*/ meltfptr[1];
                            /*^apply.arg*/
                            argtab[5].meltbp_cstring =  " pid=";
                            /*^apply.arg*/
                            argtab[6].meltbp_long = /*_#PID__L1*/ meltfnum[0];
                            /*^apply.arg*/
                            argtab[7].meltbp_cstring =  " data=";
                            /*^apply.arg*/
                            argtab[8].meltbp_aptr = (melt_ptr_t*) &/*_.DATA__V3*/ meltfptr[2];
                            /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V4*/ meltfptr[3] = /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2917:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L3*/ meltfnum[2] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V5*/ meltfptr[4] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V4*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2917:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L2*/ meltfnum[1] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V4*/ meltfptr[3] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        /*_#IS_CLOSURE__L4*/ meltfnum[2] =
            (melt_magic_discr((melt_ptr_t)(/*_.CLOS__V2*/ meltfptr[1])) == MELTOBMAG_CLOSURE);;
        MELT_LOCATION("warmelt-hooks.melt:2918:/ cond");
        /*cond*/ if (/*_#IS_CLOSURE__L4*/ meltfnum[2]) /*then*/
            {
                /*^cond.then*/
                /*^block*/
                /*anyblock*/
                {


                    MELT_CHECK_SIGNAL();
                    ;
                    /*_#gtI__L5*/ meltfnum[1] =
                        ((/*_#PID__L1*/ meltfnum[0]) > (0));;
                    MELT_LOCATION("warmelt-hooks.melt:2919:/ cond");
                    /*cond*/ if (/*_#gtI__L5*/ meltfnum[1]) /*then*/
                        {
                            /*^cond.then*/
                            /*^block*/
                            /*anyblock*/
                            {

                                MELT_LOCATION("warmelt-hooks.melt:2920:/ quasiblock");


                                /*_#PIDISBAD__L6*/ meltfnum[5] = 0;;

                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2922:/ locexp");
                                    /* register_child_process_handler TRYKILLCHK__1 */
                                    if (kill ((pid_t) /*_#PID__L1*/ meltfnum[0], 0))
                                        /*_#PIDISBAD__L6*/ meltfnum[5] = -1L		;
                                    ;
                                }
                                ;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-hooks.melt:2928:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L7*/ meltfnum[6] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-hooks.melt:2928:/ cond");
                                    /*cond*/ if (/*_#MELT_NEED_DBG__L7*/ meltfnum[6]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-hooks.melt:2928:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L8*/ meltfnum[7];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 2928;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "register_child_process_handler pidisbad=";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_long = /*_#PIDISBAD__L6*/ meltfnum[5];
                                                    /*_.MELT_DEBUG_FUN__V10*/ meltfptr[9] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V9*/ meltfptr[8] = /*_.MELT_DEBUG_FUN__V10*/ meltfptr[9];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2928:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L8*/ meltfnum[7] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V10*/ meltfptr[9] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V9*/ meltfptr[8] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2928:/ locexp");
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L7*/ meltfnum[6] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V9*/ meltfptr[8] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2929:/ cond");
                                /*cond*/ if (/*_#PIDISBAD__L6*/ meltfnum[5]) /*then*/
                                    {
                                        /*^cond.then*/
                                        /*^block*/
                                        /*anyblock*/
                                        {

                                            /*^quasiblock*/


                                            /*_._RETVAL___V1*/ meltfptr[0] =  /*reallynil*/ NULL ;;

                                            {
                                                MELT_LOCATION("warmelt-hooks.melt:2929:/ locexp");
                                                /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                                if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                                    melt_warn_for_no_expected_secondary_results();
                                                /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                                ;
                                            }
                                            ;
                                            /*^finalreturn*/
                                            ;
                                            /*finalret*/ goto meltlabend_rout ;
                                            /*_._IF___V11*/ meltfptr[9] = /*_.RETURN___V12*/ meltfptr[8];;
                                            /*epilog*/

                                            MELT_LOCATION("warmelt-hooks.melt:2929:/ clear");
                                            /*clear*/ /*_.RETURN___V12*/ meltfptr[8] = 0 ;
                                        }
                                        ;
                                    }
                                else    /*^cond.else*/
                                    {

                                        /*_._IF___V11*/ meltfptr[9] =  /*reallynil*/ NULL ;;
                                    }
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2930:/ quasiblock");



                                MELT_CHECK_SIGNAL();
                                ;
                                /*_.MAKE_INTEGERBOX__V14*/ meltfptr[13] =
                                    (meltgc_new_int((meltobject_ptr_t)((/*!DISCR_CONSTANT_INTEGER*/ meltfrout->tabval[2])), (/*_#PID__L1*/ meltfnum[0])));;
                                MELT_LOCATION("warmelt-hooks.melt:2930:/ quasiblock");


                                /*^rawallocobj*/
                                /*rawallocobj*/
                                {
                                    melt_ptr_t newobj = 0;
                                    melt_raw_object_create(newobj,(melt_ptr_t)((/*!CLASS_CHILD_PROCESS_HANDLER*/ meltfrout->tabval[1])), (4), "CLASS_CHILD_PROCESS_HANDLER");
                                    /*_.INST__V16*/ meltfptr[15] =
                                        newobj;
                                };
                                ;
                                /*^putslot*/
                                /*putslot*/
                                melt_assertmsg("checkobj putslot  _ @CHILPROH_PID", melt_magic_discr((melt_ptr_t)(/*_.INST__V16*/ meltfptr[15])) == MELTOBMAG_OBJECT);
                                melt_putfield_object((/*_.INST__V16*/ meltfptr[15]), (1), (/*_.MAKE_INTEGERBOX__V14*/ meltfptr[13]), "CHILPROH_PID");
                                ;
                                /*^putslot*/
                                /*putslot*/
                                melt_assertmsg("checkobj putslot  _ @CHILPROH_CLOS", melt_magic_discr((melt_ptr_t)(/*_.INST__V16*/ meltfptr[15])) == MELTOBMAG_OBJECT);
                                melt_putfield_object((/*_.INST__V16*/ meltfptr[15]), (2), (/*_.CLOS__V2*/ meltfptr[1]), "CHILPROH_CLOS");
                                ;
                                /*^putslot*/
                                /*putslot*/
                                melt_assertmsg("checkobj putslot  _ @CHILPROH_DATA", melt_magic_discr((melt_ptr_t)(/*_.INST__V16*/ meltfptr[15])) == MELTOBMAG_OBJECT);
                                melt_putfield_object((/*_.INST__V16*/ meltfptr[15]), (3), (/*_.DATA__V3*/ meltfptr[2]), "CHILPROH_DATA");
                                ;
                                /*^touchobj*/

                                melt_dbgtrace_written_object (/*_.INST__V16*/ meltfptr[15], "newly made instance");
                                ;
                                /*_.CHPH__V15*/ meltfptr[14] = /*_.INST__V16*/ meltfptr[15];;

#if MELT_HAVE_DEBUG
                                MELT_LOCATION("warmelt-hooks.melt:2936:/ cppif.then");
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                                        melt_dbgcounter++;
#endif
                                        ;
                                    }
                                    ;

                                    MELT_CHECK_SIGNAL();
                                    ;
                                    /*_#MELT_NEED_DBG__L9*/ meltfnum[7] =
                                        /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                                        (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                                        0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                                        ;;
                                    MELT_LOCATION("warmelt-hooks.melt:2936:/ cond");
                                    /*cond*/ if (/*_#MELT_NEED_DBG__L9*/ meltfnum[7]) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_#MELT_CALLCOUNT__L10*/ meltfnum[6] =
                                                    /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                                                    meltcallcount  /* melt_callcount debugging */
#else
                                                    0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                                                    ;;

                                                MELT_CHECK_SIGNAL();
                                                ;
                                                MELT_LOCATION("warmelt-hooks.melt:2936:/ apply");
                                                /*apply*/
                                                {
                                                    union meltparam_un argtab[5];
                                                    memset(&argtab, 0, sizeof(argtab));
                                                    /*^apply.arg*/
                                                    argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L10*/ meltfnum[6];
                                                    /*^apply.arg*/
                                                    argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                    /*^apply.arg*/
                                                    argtab[2].meltbp_long = 2936;
                                                    /*^apply.arg*/
                                                    argtab[3].meltbp_cstring =  "register_child_process_handler chph=";
                                                    /*^apply.arg*/
                                                    argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CHPH__V15*/ meltfptr[14];
                                                    /*_.MELT_DEBUG_FUN__V18*/ meltfptr[17] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                }
                                                ;
                                                /*_._IF___V17*/ meltfptr[16] = /*_.MELT_DEBUG_FUN__V18*/ meltfptr[17];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2936:/ clear");
                                                /*clear*/ /*_#MELT_CALLCOUNT__L10*/ meltfnum[6] = 0 ;
                                                /*^clear*/
                                                /*clear*/ /*_.MELT_DEBUG_FUN__V18*/ meltfptr[17] = 0 ;
                                            }
                                            ;
                                        }
                                    else    /*^cond.else*/
                                        {

                                            /*_._IF___V17*/ meltfptr[16] =  /*reallynil*/ NULL ;;
                                        }
                                    ;

                                    {
                                        MELT_LOCATION("warmelt-hooks.melt:2936:/ locexp");
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*^quasiblock*/


                                    /*epilog*/

                                    /*^clear*/
                                    /*clear*/ /*_#MELT_NEED_DBG__L9*/ meltfnum[7] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_._IF___V17*/ meltfptr[16] = 0 ;
                                }

#else /*MELT_HAVE_DEBUG*/
                                /*^cppif.else*/
                                /*^block*/
                                /*anyblock*/
                                {


                                    {
                                        /*^locexp*/
                                        /*void*/(void)0;
                                    }
                                    ;
                                    /*epilog*/
                                }

#endif /*MELT_HAVE_DEBUG*/
                                ;
                                /*citerblock BLOCK_SIGNALS*/
                                {
                                    /* block_signals meltcit1__BLKSIGNAL start */
                                    long meltcit1__BLKSIGNAL_lev = melt_blocklevel_signals;
                                    melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev + 1;



                                    MELT_LOCATION("warmelt-hooks.melt:2939:/ quasiblock");


                                    /*^cond*/
                                    /*cond*/ if ( (melt_module_var_fetch (meltmodvarix_MELT_CHILDBUCK_symb))) /*then*/
                                        {
                                            /*^cond.then*/
                                            /*_.BUCK__V19*/ meltfptr[17] =  (melt_module_var_fetch (meltmodvarix_MELT_CHILDBUCK_symb));;
                                        }
                                    else
                                        {
                                            MELT_LOCATION("warmelt-hooks.melt:2939:/ cond.else");

                                            /*^block*/
                                            /*anyblock*/
                                            {

                                                /*_.MAKE_BUCKETLONG__V20*/ meltfptr[16] =
                                                    (meltgc_new_longsbucket((meltobject_ptr_t) (/*!DISCR_BUCKET_LONGS*/ meltfrout->tabval[3]), (13)));;
                                                /*^compute*/
                                                /*_.BUCK__V19*/ meltfptr[17] = /*_.MAKE_BUCKETLONG__V20*/ meltfptr[16];;
                                                /*epilog*/

                                                MELT_LOCATION("warmelt-hooks.melt:2939:/ clear");
                                                /*clear*/ /*_.MAKE_BUCKETLONG__V20*/ meltfptr[16] = 0 ;
                                            }
                                            ;
                                        }
                                    ;

#if MELT_HAVE_DEBUG
                                    MELT_LOCATION("warmelt-hooks.melt:2942:/ cppif.then");
                                    /*^block*/
                                    /*anyblock*/
                                    {


                                        MELT_CHECK_SIGNAL();
                                        ;
                                        /*_#IS_BUCKETLONG__L11*/ meltfnum[6] =
                                            (melt_magic_discr((melt_ptr_t) (/*_.BUCK__V19*/ meltfptr[17])) == MELTOBMAG_BUCKETLONGS);;
                                        MELT_LOCATION("warmelt-hooks.melt:2942:/ cond");
                                        /*cond*/ if (/*_#IS_BUCKETLONG__L11*/ meltfnum[6]) /*then*/
                                            {
                                                /*^cond.then*/
                                                /*_._IFELSE___V22*/ meltfptr[21] = (/*nil*/NULL);;
                                            }
                                        else
                                            {
                                                MELT_LOCATION("warmelt-hooks.melt:2942:/ cond.else");

                                                /*^block*/
                                                /*anyblock*/
                                                {


                                                    MELT_CHECK_SIGNAL();
                                                    ;
                                                    /*^apply*/
                                                    /*apply*/
                                                    {
                                                        union meltparam_un argtab[4];
                                                        memset(&argtab, 0, sizeof(argtab));
                                                        /*^apply.arg*/
                                                        argtab[0].meltbp_cstring =  "check buck";
                                                        /*^apply.arg*/
                                                        argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                                                        /*^apply.arg*/
                                                        argtab[2].meltbp_long = 2942;
                                                        /*^apply.arg*/
                                                        argtab[3].meltbp_aptr = (melt_ptr_t*) &/*_.BUCK__V19*/ meltfptr[17];
                                                        /*_.MELT_ASSERT_FAILURE_FUN__V23*/ meltfptr[22] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[4])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                                                    }
                                                    ;
                                                    /*_._IFELSE___V22*/ meltfptr[21] = /*_.MELT_ASSERT_FAILURE_FUN__V23*/ meltfptr[22];;
                                                    /*epilog*/

                                                    MELT_LOCATION("warmelt-hooks.melt:2942:/ clear");
                                                    /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V23*/ meltfptr[22] = 0 ;
                                                }
                                                ;
                                            }
                                        ;
                                        /*_.IFCPP___V21*/ meltfptr[16] = /*_._IFELSE___V22*/ meltfptr[21];;
                                        /*epilog*/

                                        MELT_LOCATION("warmelt-hooks.melt:2942:/ clear");
                                        /*clear*/ /*_#IS_BUCKETLONG__L11*/ meltfnum[6] = 0 ;
                                        /*^clear*/
                                        /*clear*/ /*_._IFELSE___V22*/ meltfptr[21] = 0 ;
                                    }

#else /*MELT_HAVE_DEBUG*/
                                    /*^cppif.else*/
                                    /*_.IFCPP___V21*/ meltfptr[16] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                    /*^compute*/
                                    /*_.BUCKETLONG_PUT__V24*/ meltfptr[22] =
                                        meltgc_longsbucket_put ((melt_ptr_t) /*_.BUCK__V19*/ meltfptr[17], (/*_#PID__L1*/ meltfnum[0]), (melt_ptr_t) /*_.CHPH__V15*/ meltfptr[14]);;
                                    MELT_LOCATION("warmelt-hooks.melt:2943:/ compute");
                                    /*_.BUCK__V19*/ meltfptr[17] = /*_.SETQ___V25*/ meltfptr[21] = /*_.BUCKETLONG_PUT__V24*/ meltfptr[22];;
                                    MELT_LOCATION("warmelt-hooks.melt:2944:/ putmodvar");
                                    melt_module_var_put (meltmodvarix_MELT_CHILDBUCK_symb, (melt_ptr_t)(/*_.BUCK__V19*/ meltfptr[17]));
                                    ;

                                    MELT_LOCATION("warmelt-hooks.melt:2939:/ clear");
                                    /*clear*/ /*_.BUCK__V19*/ meltfptr[17] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.IFCPP___V21*/ meltfptr[16] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.BUCKETLONG_PUT__V24*/ meltfptr[22] = 0 ;
                                    /*^clear*/
                                    /*clear*/ /*_.SETQ___V25*/ meltfptr[21] = 0 ;
                                    /* block_signals meltcit1__BLKSIGNAL end */
                                    melt_blocklevel_signals = meltcit1__BLKSIGNAL_lev;
                                    MELT_CHECK_SIGNAL();


                                    /*citerepilog*/
                                } /*endciterblock BLOCK_SIGNALS*/
                                ;

                                MELT_CHECK_SIGNAL();
                                ;
                                MELT_LOCATION("warmelt-hooks.melt:2947:/ quasiblock");


                                /*_._RETVAL___V1*/ meltfptr[0] = /*_.CHPH__V15*/ meltfptr[14];;

                                {
                                    MELT_LOCATION("warmelt-hooks.melt:2947:/ locexp");
                                    /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
                                    if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                                        melt_warn_for_no_expected_secondary_results();
                                    /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
                                    ;
                                }
                                ;
                                /*^finalreturn*/
                                ;
                                /*finalret*/ goto meltlabend_rout ;
                                /*_.LET___V13*/ meltfptr[8] = /*_.RETURN___V26*/ meltfptr[17];;

                                MELT_LOCATION("warmelt-hooks.melt:2930:/ clear");
                                /*clear*/ /*_.MAKE_INTEGERBOX__V14*/ meltfptr[13] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.CHPH__V15*/ meltfptr[14] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.RETURN___V26*/ meltfptr[17] = 0 ;
                                /*_.LET___V8*/ meltfptr[7] = /*_.LET___V13*/ meltfptr[8];;

                                MELT_LOCATION("warmelt-hooks.melt:2920:/ clear");
                                /*clear*/ /*_#PIDISBAD__L6*/ meltfnum[5] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_._IF___V11*/ meltfptr[9] = 0 ;
                                /*^clear*/
                                /*clear*/ /*_.LET___V13*/ meltfptr[8] = 0 ;
                                /*_._IF___V7*/ meltfptr[3] = /*_.LET___V8*/ meltfptr[7];;
                                /*epilog*/

                                MELT_LOCATION("warmelt-hooks.melt:2919:/ clear");
                                /*clear*/ /*_.LET___V8*/ meltfptr[7] = 0 ;
                            }
                            ;
                        }
                    else    /*^cond.else*/
                        {

                            /*_._IF___V7*/ meltfptr[3] =  /*reallynil*/ NULL ;;
                        }
                    ;
                    /*^compute*/
                    /*_._IF___V6*/ meltfptr[4] = /*_._IF___V7*/ meltfptr[3];;
                    /*epilog*/

                    MELT_LOCATION("warmelt-hooks.melt:2918:/ clear");
                    /*clear*/ /*_#gtI__L5*/ meltfnum[1] = 0 ;
                    /*^clear*/
                    /*clear*/ /*_._IF___V7*/ meltfptr[3] = 0 ;
                }
                ;
            }
        else    /*^cond.else*/
            {

                /*_._IF___V6*/ meltfptr[4] =  /*reallynil*/ NULL ;;
            }
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2913:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = /*_._IF___V6*/ meltfptr[4];;

        {
            MELT_LOCATION("warmelt-hooks.melt:2913:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_#IS_CLOSURE__L4*/ meltfnum[2] = 0 ;
        /*^clear*/
        /*clear*/ /*_._IF___V6*/ meltfptr[4] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("REGISTER_CHILD_PROCESS_HANDLER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_88_WARMELTmiHOOKS_REGISTER_CHILD_PROCESS_HANDLER*/





melt_ptr_t MELT_MODULE_VISIBILITY
meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t meltclosp_, melt_ptr_t meltfirstargp_, const melt_argdescr_cell_t meltxargdescr_[], union meltparam_un *meltxargtab_,
        const melt_argdescr_cell_t meltxresdescr_[], union meltparam_un *meltxrestab_)
{
    long current_blocklevel_signals_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER_melt =  melt_blocklevel_signals;

#if MELT_HAVE_DEBUG
    static long melt_call_counter__;
    long melt_thiscallcounter__ ATTRIBUTE_UNUSED = ++ melt_call_counter__;
#undef meltcallcount
#define meltcallcount melt_thiscallcounter__
#else
#undef meltcallcount
#define meltcallcount 0L
#endif
//// emitted by output_curframe_declstruct_init using OUTPUT_CURFRAME_DECLSTRUCT @warmelt-outobj.melt:1505

    /* start of frame for routine meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER fromline 1719 */

    /** start of frame for meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER of CLASS_PROCROUTINEOBJ from 1522**/

    /*curframdeclclassy*/ class MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER// fromline 1535
        : public Melt_CallFrameWithValues<7>
    {
    public: /* fromline 1539*/
        long mcfr_varnum[2];
        /*classy others*/
        long _meltsparel;
        void melt_mark_stuff (void)
        {
        } /*end melt_mark_stuff*/
        virtual void melt_mark_ggc_data (void)
        {
            melt_mark_values ();
            melt_mark_stuff ();
        }; /*end melt_mark_ggc_data*/
        MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER(meltclosure_ptr_t clos) //the closure constructor fromline 1597
            : Melt_CallFrameWithValues<7> (
#if ENABLE_CHECKING /*fromline 1601*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1605*/
                sizeof(MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER), clos) {};
        MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER() //the constructor fromline 1609
            : Melt_CallFrameWithValues<7> (
#if ENABLE_CHECKING /*fromline 1613*/
                __FILE__, __LINE__,
#endif /* ENABLE_CHECKING fromline 1617*/
                sizeof(MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER)) {};
#if ENABLE_CHECKING /*fromline 1621*/
        MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER(const char*fil, int lin) //the constructor fromline 1623
            : Melt_CallFrameWithValues<7> (fil,lin, sizeof(MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER)) {};
        MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER(const char*fil, int lin, meltclosure_ptr_t clos) //the closure constructor fromline 1628
            : Melt_CallFrameWithValues<7> (fil,lin, sizeof(MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER), clos) {};
#endif /* ENABLE_CHECKING fromline 1633*/

    }; // end  class MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER


    /** end of frame for meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER fromline 1664**/

    /* end of frame for routine meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER fromline 1723 */

    /* classy proc frame meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER */ MeltFrame_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER
    meltfram__ /*declfrastruct fromline 1747*/
    /*classyprocarg meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER fromline 1752*/
#if ENABLE_CHECKING
    (__FILE__, __LINE__, meltclosp_) /* fromline 1756*/
#else /*ENABLE_CHECKING */
    (meltclosp_) /* fromline 1760*/
#endif /*ENABLE_CHECKING */

    ;
#define meltframe meltfram__

    melt_trace_start("UNREGISTER_CHILD_PROCESS_HANDLER", meltcallcount);
    /*use arguments*/ (void) meltclosp_;
    (void)meltfirstargp_;
    (void)meltxargdescr_;
    (void)meltxargtab_;
    (void)meltxresdescr_;
    (void)meltxrestab_;
    /*getargs*/

    /*getarg#0*/
    MELT_LOCATION("warmelt-hooks.melt:2952:/ getarg");
    /*_.CHD__V2*/ meltfptr[1] = (melt_ptr_t) meltfirstargp_;
    ;
    goto meltlab_endgetargs;
meltlab_endgetargs:
    ;
    /*body*/
    /*^block*/
    /*anyblock*/
    {


#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2954:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*melt_increment_dbgcounter*/
#if MELT_HAVE_DEBUG
                melt_dbgcounter++;
#endif
                ;
            }
            ;

            MELT_CHECK_SIGNAL();
            ;
            /*_#MELT_NEED_DBG__L1*/ meltfnum[0] =
                /*MELT_NEED_DBG*/
#if MELT_HAVE_DEBUG
                (/*melt_need_dbg*/ melt_need_debug ((int) 0))
#else
                0 /* no melt_need_dbg */
#endif /*MELT_HAVE_DEBUG*/
                ;;
            MELT_LOCATION("warmelt-hooks.melt:2954:/ cond");
            /*cond*/ if (/*_#MELT_NEED_DBG__L1*/ meltfnum[0]) /*then*/
                {
                    /*^cond.then*/
                    /*^block*/
                    /*anyblock*/
                    {

                        /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] =
                            /* for melt_callcount */
#if MELT_HAVE_DEBUG && defined (meltcallcount)
                            meltcallcount  /* melt_callcount debugging */
#else
                            0L  /* melt_callcount without debug */
#endif /* MELT_HAVE_DEBUG melt_callcount */
                            ;;

                        MELT_CHECK_SIGNAL();
                        ;
                        MELT_LOCATION("warmelt-hooks.melt:2954:/ apply");
                        /*apply*/
                        {
                            union meltparam_un argtab[5];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_long = /*_#MELT_CALLCOUNT__L2*/ meltfnum[1];
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2954;
                            /*^apply.arg*/
                            argtab[3].meltbp_cstring =  "unregister_child_process_handler chd=";
                            /*^apply.arg*/
                            argtab[4].meltbp_aptr = (melt_ptr_t*) &/*_.CHD__V2*/ meltfptr[1];
                            /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_DEBUG_FUN*/ meltfrout->tabval[0])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_LONG MELTBPARSTR_CSTRING MELTBPARSTR_PTR ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IF___V3*/ meltfptr[2] = /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2954:/ clear");
                        /*clear*/ /*_#MELT_CALLCOUNT__L2*/ meltfnum[1] = 0 ;
                        /*^clear*/
                        /*clear*/ /*_.MELT_DEBUG_FUN__V4*/ meltfptr[3] = 0 ;
                    }
                    ;
                }
            else    /*^cond.else*/
                {

                    /*_._IF___V3*/ meltfptr[2] =  /*reallynil*/ NULL ;;
                }
            ;

            {
                MELT_LOCATION("warmelt-hooks.melt:2954:/ locexp");
                /*void*/(void)0;
            }
            ;
            /*^quasiblock*/


            /*epilog*/

            /*^clear*/
            /*clear*/ /*_#MELT_NEED_DBG__L1*/ meltfnum[0] = 0 ;
            /*^clear*/
            /*clear*/ /*_._IF___V3*/ meltfptr[2] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*^block*/
        /*anyblock*/
        {


            {
                /*^locexp*/
                /*void*/(void)0;
            }
            ;
            /*epilog*/
        }

#endif /*MELT_HAVE_DEBUG*/
        ;

#if MELT_HAVE_DEBUG
        MELT_LOCATION("warmelt-hooks.melt:2955:/ cppif.then");
        /*^block*/
        /*anyblock*/
        {


            MELT_CHECK_SIGNAL();
            ;
            /*^cond*/
            /*cond*/ if ((/*nil*/NULL)) /*then*/
                {
                    /*^cond.then*/
                    /*_._IFELSE___V6*/ meltfptr[2] = (/*nil*/NULL);;
                }
            else
                {
                    MELT_LOCATION("warmelt-hooks.melt:2955:/ cond.else");

                    /*^block*/
                    /*anyblock*/
                    {


                        MELT_CHECK_SIGNAL();
                        ;
                        /*^apply*/
                        /*apply*/
                        {
                            union meltparam_un argtab[3];
                            memset(&argtab, 0, sizeof(argtab));
                            /*^apply.arg*/
                            argtab[0].meltbp_cstring =  "@$@unimplemented unregister_child_process_handler";
                            /*^apply.arg*/
                            argtab[1].meltbp_cstring =  "warmelt-hooks.melt";
                            /*^apply.arg*/
                            argtab[2].meltbp_long = 2955;
                            /*_.MELT_ASSERT_FAILURE_FUN__V7*/ meltfptr[6] =  melt_apply ((meltclosure_ptr_t)((/*!MELT_ASSERT_FAILURE_FUN*/ meltfrout->tabval[1])), (melt_ptr_t)((/*nil*/NULL)), (MELTBPARSTR_CSTRING MELTBPARSTR_CSTRING MELTBPARSTR_LONG ""), argtab, "", (union meltparam_un*)0);
                        }
                        ;
                        /*_._IFELSE___V6*/ meltfptr[2] = /*_.MELT_ASSERT_FAILURE_FUN__V7*/ meltfptr[6];;
                        /*epilog*/

                        MELT_LOCATION("warmelt-hooks.melt:2955:/ clear");
                        /*clear*/ /*_.MELT_ASSERT_FAILURE_FUN__V7*/ meltfptr[6] = 0 ;
                    }
                    ;
                }
            ;
            /*_.IFCPP___V5*/ meltfptr[3] = /*_._IFELSE___V6*/ meltfptr[2];;
            /*epilog*/

            MELT_LOCATION("warmelt-hooks.melt:2955:/ clear");
            /*clear*/ /*_._IFELSE___V6*/ meltfptr[2] = 0 ;
        }

#else /*MELT_HAVE_DEBUG*/
        /*^cppif.else*/
        /*_.IFCPP___V5*/ meltfptr[3] = (/*nil*/NULL);
#endif /*MELT_HAVE_DEBUG*/
        ;

        MELT_CHECK_SIGNAL();
        ;
        MELT_LOCATION("warmelt-hooks.melt:2952:/ quasiblock");


        /*_._RETVAL___V1*/ meltfptr[0] = /*_.IFCPP___V5*/ meltfptr[3];;

        {
            MELT_LOCATION("warmelt-hooks.melt:2952:/ locexp");
            /*ochecknores compilobj_nrep_return*/
#if MELT_HAVE_DEBUG
            if (meltxresdescr_ && meltxresdescr_[0] && meltxrestab_)
                melt_warn_for_no_expected_secondary_results();
            /* we warned when secondary results are expected but not returned. */
#endif /*MELT_HAVE_DEBUG*/
            ;
        }
        ;
        /*^finalreturn*/
        ;
        /*finalret*/ goto meltlabend_rout ;
        /*epilog*/

        /*^clear*/
        /*clear*/ /*_.IFCPP___V5*/ meltfptr[3] = 0 ;
    }

    ;
    goto meltlabend_rout;
meltlabend_rout:
    melt_trace_end("UNREGISTER_CHILD_PROCESS_HANDLER", meltcallcount);
    melt_blocklevel_signals = current_blocklevel_signals_meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER_melt;
    return (melt_ptr_t)(/*_._RETVAL___V1*/ meltfptr[0]);
#undef meltcallcount
#undef meltfram__
#undef MELTFRAM_NBVARNUM
#undef MELTFRAM_NBVARPTR
} /*end meltrout_89_WARMELTmiHOOKS_UNREGISTER_CHILD_PROCESS_HANDLER*/



/**** end of warmelt-hooks+03.cc ****/

/*
 * Test of sane/sane.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sane/sane.h"



#ifdef TET_TEST
void sane_sane_h()
{
#else
int sane_sane_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sane/sane.h\n");
#if _LSB_DEFAULT_ARCH
cnt++;
#ifndef sane_h
Msg( "Error: Constant not found: sane_h\n");
#else
pcnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CURRENT_MAJOR
	CompareConstant(SANE_CURRENT_MAJOR,1,20987,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CURRENT_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CURRENT_MINOR
	CompareConstant(SANE_CURRENT_MINOR,0,20988,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CURRENT_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VERSION_CODE(major,minor,build) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VERSION_MAJOR(code) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VERSION_MINOR(code) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_VERSION_BUILD(code) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_FALSE
	CompareConstant(SANE_FALSE,0,20993,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_FALSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_TRUE
	CompareConstant(SANE_TRUE,1,20994,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_TRUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_FIXED_SCALE_SHIFT
	CompareConstant(SANE_FIXED_SCALE_SHIFT,16,20995,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_FIXED_SCALE_SHIFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_FIX(v) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_UNFIX(v) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_SOFT_SELECT
	CompareConstant(SANE_CAP_SOFT_SELECT,(1 << 0),20998,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_SOFT_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_HARD_SELECT
	CompareConstant(SANE_CAP_HARD_SELECT,(1 << 1),20999,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_HARD_SELECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_SOFT_DETECT
	CompareConstant(SANE_CAP_SOFT_DETECT,(1 << 2),21000,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_SOFT_DETECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_EMULATED
	CompareConstant(SANE_CAP_EMULATED,(1 << 3),21001,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_EMULATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_AUTOMATIC
	CompareConstant(SANE_CAP_AUTOMATIC,(1 << 4),21002,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_AUTOMATIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_INACTIVE
	CompareConstant(SANE_CAP_INACTIVE,(1 << 5),21003,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_INACTIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_ADVANCED
	CompareConstant(SANE_CAP_ADVANCED,(1 << 6),21004,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_ADVANCED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_CAP_ALWAYS_SETTABLE
	CompareConstant(SANE_CAP_ALWAYS_SETTABLE,(1 << 7),21005,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_CAP_ALWAYS_SETTABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_OPTION_IS_ACTIVE(cap) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SANE_OPTION_IS_SETTABLE(cap) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_INFO_INEXACT
	CompareConstant(SANE_INFO_INEXACT,(1 << 0),21008,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_INFO_INEXACT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_INFO_RELOAD_OPTIONS
	CompareConstant(SANE_INFO_RELOAD_OPTIONS,(1 << 1),21009,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_INFO_RELOAD_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_INFO_RELOAD_PARAMS
	CompareConstant(SANE_INFO_RELOAD_PARAMS,(1 << 2),21010,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_INFO_RELOAD_PARAMS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_MAX_USERNAME_LEN
	CompareConstant(SANE_MAX_USERNAME_LEN,128,21011,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_MAX_USERNAME_LEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SANE_MAX_PASSWORD_LEN
	CompareConstant(SANE_MAX_PASSWORD_LEN,128,21012,architecture,5.0,NULL)
#else
Msg( "Error: Constant not found: SANE_MAX_PASSWORD_LEN\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SANE_Byte,0, 40529, 1, 5.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(SANE_Word,0, 40530, 1, 5.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(SANE_Bool,0, 40531, 1, 5.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(SANE_Int,0, 40532, 1, 5.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(SANE_Char,0, 40533, 1, 5.0, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(SANE_String,0, 40534, 1, 5.0, NULL, 40535, NULL)
#endif

#if 1
CheckTypeSize(SANE_String_Const,0, 40536, 1, 5.0, NULL, 40538, NULL)
#endif

#if 1
CheckTypeSize(SANE_Handle,0, 40539, 1, 5.0, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(SANE_Fixed,0, 40540, 1, 5.0, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(SANE_Status,0, 40542, 1, 5.0, NULL, 40541, NULL)
#endif

#if 1
CheckTypeSize(SANE_Value_Type,0, 40544, 1, 5.0, NULL, 40543, NULL)
#endif

#if 1
CheckTypeSize(SANE_Unit,0, 40546, 1, 5.0, NULL, 40545, NULL)
#endif

#if 1
CheckTypeSize(SANE_Device,0, 40548, 1, 5.0, NULL, 40547, NULL)
#endif

#if 1
CheckTypeSize(SANE_Constraint_Type,0, 40550, 1, 5.0, NULL, 40549, NULL)
#endif

#if 1
CheckTypeSize(SANE_Range,0, 40552, 1, 5.0, NULL, 40551, NULL)
#endif

#if 1
CheckTypeSize(SANE_Option_Descriptor,0, 40561, 1, 5.0, NULL, 40560, NULL)
#endif

#if 1
CheckTypeSize(SANE_Action,0, 40563, 1, 5.0, NULL, 40562, NULL)
#endif

#if 1
CheckTypeSize(SANE_Frame,0, 40565, 1, 5.0, NULL, 40564, NULL)
#endif

#if 1
CheckTypeSize(SANE_Parameters,0, 40567, 1, 5.0, NULL, 40566, NULL)
#endif

#if 1
CheckTypeSize(SANE_Auth_Callback,0, 40569, 1, 5.0, NULL, 40570, NULL)
#endif

#if 1
/* All */
typedef void (*SANE_Auth_Callback_db)(SANE_String_Const, SANE_Char *, SANE_Char *);
CheckFunctionTypedef(SANE_Auth_Callback,SANE_Auth_Callback_db);
#endif

extern  sane_init_db(SANE_Int *, SANE_Auth_Callback);
CheckInterfacedef(sane_init,sane_init_db);
extern  sane_exit_db(void);
CheckInterfacedef(sane_exit,sane_exit_db);
extern  sane_get_devices_db(const SANE_Device * * *, SANE_Bool);
CheckInterfacedef(sane_get_devices,sane_get_devices_db);
extern  sane_open_db(SANE_String_Const, SANE_Handle *);
CheckInterfacedef(sane_open,sane_open_db);
extern  sane_close_db(SANE_Handle);
CheckInterfacedef(sane_close,sane_close_db);
extern  sane_get_option_descriptor_db(SANE_Handle, SANE_Int);
CheckInterfacedef(sane_get_option_descriptor,sane_get_option_descriptor_db);
extern  sane_control_option_db(SANE_Handle, SANE_Int, SANE_Action, void *, SANE_Int *);
CheckInterfacedef(sane_control_option,sane_control_option_db);
extern  sane_get_parameters_db(SANE_Handle, SANE_Parameters *);
CheckInterfacedef(sane_get_parameters,sane_get_parameters_db);
extern  sane_start_db(SANE_Handle);
CheckInterfacedef(sane_start,sane_start_db);
extern  sane_read_db(SANE_Handle, SANE_Byte *, SANE_Int, SANE_Int *);
CheckInterfacedef(sane_read,sane_read_db);
extern  sane_cancel_db(SANE_Handle);
CheckInterfacedef(sane_cancel,sane_cancel_db);
extern  sane_set_io_mode_db(SANE_Handle, SANE_Bool);
CheckInterfacedef(sane_set_io_mode,sane_set_io_mode_db);
extern  sane_get_select_fd_db(SANE_Handle, SANE_Int *);
CheckInterfacedef(sane_get_select_fd,sane_get_select_fd_db);
extern  sane_strstatus_db(SANE_Status);
CheckInterfacedef(sane_strstatus,sane_strstatus_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in sane/sane.h\n\n",pcnt,cnt);
return cnt;
#endif

}

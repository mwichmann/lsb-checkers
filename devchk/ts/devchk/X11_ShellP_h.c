/*
 * Test of X11/ShellP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <stdio.h>
#include "X11/IntrinsicP.h"
#include "X11/ShellP.h"



#ifdef TET_TEST
void X11_ShellP_h()
{
#else
int X11_ShellP_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/ShellP.h\n");
#endif

printf("Checking data structures in X11/ShellP.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XtShellExtensionVersion
	CompareLongConstant(XtShellExtensionVersion,1L,16743,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XtShellExtensionVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtInheritRootGeometryManager */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtShellPositionValid
	CompareConstant(_XtShellPositionValid,((Boolean)(1<<0)),16745,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: _XtShellPositionValid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtShellNotReparented
	CompareConstant(_XtShellNotReparented,((Boolean)(1<<1)),16746,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: _XtShellNotReparented\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtShellPPositionOK
	CompareConstant(_XtShellPPositionOK,((Boolean)(1<<2)),16747,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: _XtShellPPositionOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XtShellGeometryParsed
	CompareConstant(_XtShellGeometryParsed,((Boolean)(1<<3)),16748,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: _XtShellGeometryParsed\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct _ShellClassRec,0, 9786, 1, , NULL, 0, NULL)
Msg("Missing member data for _ShellClassRec on All\n");
CheckOffset(struct _ShellClassRec,core_class,0,1,216697)
CheckOffset(struct _ShellClassRec,composite_class,0,1,216698)
CheckOffset(struct _ShellClassRec,shell_class,0,1,216699)
#endif

#if 1
CheckTypeSize(struct _OverrideShellClassRec,0, 9789, 1, , NULL, 0, NULL)
Msg("Missing member data for _OverrideShellClassRec on All\n");
CheckOffset(struct _OverrideShellClassRec,core_class,0,1,216719)
CheckOffset(struct _OverrideShellClassRec,composite_class,0,1,216720)
CheckOffset(struct _OverrideShellClassRec,shell_class,0,1,216721)
CheckOffset(struct _OverrideShellClassRec,override_shell_class,0,1,216722)
#endif

#if 1
CheckTypeSize(struct _WMShellClassRec,0, 9792, 1, , NULL, 0, NULL)
Msg("Missing member data for _WMShellClassRec on All\n");
CheckOffset(struct _WMShellClassRec,core_class,0,1,216729)
CheckOffset(struct _WMShellClassRec,composite_class,0,1,216730)
CheckOffset(struct _WMShellClassRec,shell_class,0,1,216731)
CheckOffset(struct _WMShellClassRec,wm_shell_class,0,1,216732)
#endif

#if 1
CheckTypeSize(struct _TransientShellClassRec,0, 9795, 1, , NULL, 0, NULL)
Msg("Missing member data for _TransientShellClassRec on All\n");
CheckOffset(struct _TransientShellClassRec,core_class,0,1,216767)
CheckOffset(struct _TransientShellClassRec,composite_class,0,1,216768)
CheckOffset(struct _TransientShellClassRec,shell_class,0,1,216769)
CheckOffset(struct _TransientShellClassRec,wm_shell_class,0,1,216770)
CheckOffset(struct _TransientShellClassRec,vendor_shell_class,0,1,216771)
CheckOffset(struct _TransientShellClassRec,transient_shell_class,0,1,216772)
#endif

#if 1
CheckTypeSize(struct _TopLevelShellClassRec,0, 9798, 1, , NULL, 0, NULL)
Msg("Missing member data for _TopLevelShellClassRec on All\n");
CheckOffset(struct _TopLevelShellClassRec,core_class,0,1,216781)
CheckOffset(struct _TopLevelShellClassRec,composite_class,0,1,216782)
CheckOffset(struct _TopLevelShellClassRec,shell_class,0,1,216783)
CheckOffset(struct _TopLevelShellClassRec,wm_shell_class,0,1,216784)
CheckOffset(struct _TopLevelShellClassRec,vendor_shell_class,0,1,216785)
CheckOffset(struct _TopLevelShellClassRec,top_level_shell_class,0,1,216786)
#endif

#if 1
CheckTypeSize(struct _ApplicationShellClassRec,0, 9801, 1, , NULL, 0, NULL)
Msg("Missing member data for _ApplicationShellClassRec on All\n");
CheckOffset(struct _ApplicationShellClassRec,core_class,0,1,216797)
CheckOffset(struct _ApplicationShellClassRec,composite_class,0,1,216798)
CheckOffset(struct _ApplicationShellClassRec,shell_class,0,1,216799)
CheckOffset(struct _ApplicationShellClassRec,wm_shell_class,0,1,216800)
CheckOffset(struct _ApplicationShellClassRec,vendor_shell_class,0,1,216801)
CheckOffset(struct _ApplicationShellClassRec,top_level_shell_class,0,1,216802)
CheckOffset(struct _ApplicationShellClassRec,application_shell_class,0,1,216803)
#endif

#if 1
CheckTypeSize(struct _SessionShellClassRec,0, 9804, 1, , NULL, 0, NULL)
Msg("Missing member data for _SessionShellClassRec on All\n");
CheckOffset(struct _SessionShellClassRec,core_class,0,1,216816)
CheckOffset(struct _SessionShellClassRec,composite_class,0,1,216817)
CheckOffset(struct _SessionShellClassRec,shell_class,0,1,216818)
CheckOffset(struct _SessionShellClassRec,wm_shell_class,0,1,216819)
CheckOffset(struct _SessionShellClassRec,vendor_shell_class,0,1,216820)
CheckOffset(struct _SessionShellClassRec,top_level_shell_class,0,1,216821)
CheckOffset(struct _SessionShellClassRec,application_shell_class,0,1,216822)
CheckOffset(struct _SessionShellClassRec,session_shell_class,0,1,216823)
#endif

#if 1
CheckTypeSize(ShellClassPart,0, 36993, 1, 1.0, NULL, 36992, NULL)
#endif

#if 1
CheckTypeSize(ShellClassExtensionRec,0, 36995, 1, 1.0, NULL, 36994, NULL)
#endif

#if 1
CheckTypeSize(ShellClassExtension,0, 36996, 1, 1.0, NULL, 36997, NULL)
#endif

#if 1
CheckTypeSize(ShellClassRec,0, 36998, 1, 1.0, NULL, 9786, NULL)
#endif

#if 1
CheckTypeSize(ShellPart,0, 37001, 1, 1.0, NULL, 37000, NULL)
#endif

#if 1
CheckTypeSize(ShellRec,0, 37003, 1, 1.0, NULL, 37002, NULL)
#endif

#if 1
CheckTypeSize(ShellWidget,0, 37004, 1, 1.0, NULL, 37005, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellClassPart,0, 37007, 1, 1.0, NULL, 37006, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellClassRec,0, 37008, 1, 1.0, NULL, 9789, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellPart,0, 37010, 1, 1.0, NULL, 37009, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellRec,0, 37012, 1, 1.0, NULL, 37011, NULL)
#endif

#if 1
CheckTypeSize(OverrideShellWidget,0, 37013, 1, 1.0, NULL, 37014, NULL)
#endif

#if 1
CheckTypeSize(WMShellClassPart,0, 37016, 1, 1.0, NULL, 37015, NULL)
#endif

#if 1
CheckTypeSize(WMShellClassRec,0, 37017, 1, 1.0, NULL, 9792, NULL)
#endif

#if 1
CheckTypeSize(WMShellPart,0, 37021, 1, 1.0, NULL, 37020, NULL)
#endif

#if 1
CheckTypeSize(WMShellRec,0, 37023, 1, 1.0, NULL, 37022, NULL)
#endif

#if 1
CheckTypeSize(WMShellWidget,0, 37024, 1, 1.0, NULL, 37025, NULL)
#endif

#if 1
CheckTypeSize(TransientShellClassPart,0, 37027, 1, 1.0, NULL, 37026, NULL)
#endif

#if 1
CheckTypeSize(TransientShellClassRec,0, 37028, 1, 1.0, NULL, 9795, NULL)
#endif

#if 1
CheckTypeSize(TransientShellPart,0, 37030, 1, 1.0, NULL, 37029, NULL)
#endif

#if 1
CheckTypeSize(TransientShellRec,0, 37032, 1, 1.0, NULL, 37031, NULL)
#endif

#if 1
CheckTypeSize(TransientShellWidget,0, 37033, 1, 1.0, NULL, 37034, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellClassPart,0, 37036, 1, 1.0, NULL, 37035, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellClassRec,0, 37037, 1, 1.0, NULL, 9798, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellPart,0, 37039, 1, 1.0, NULL, 37038, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellRec,0, 37041, 1, 1.0, NULL, 37040, NULL)
#endif

#if 1
CheckTypeSize(TopLevelShellWidget,0, 37042, 1, 1.0, NULL, 37043, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellClassPart,0, 37045, 1, 1.0, NULL, 37044, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellClassRec,0, 37046, 1, 1.0, NULL, 9801, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellPart,0, 37048, 1, 1.0, NULL, 37047, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellRec,0, 37050, 1, 1.0, NULL, 37049, NULL)
#endif

#if 1
CheckTypeSize(ApplicationShellWidget,0, 37051, 1, 1.0, NULL, 37052, NULL)
#endif

#if 1
CheckTypeSize(SessionShellClassPart,0, 37054, 1, 1.0, NULL, 37053, NULL)
#endif

#if 1
CheckTypeSize(SessionShellClassRec,0, 37055, 1, 1.0, NULL, 9804, NULL)
#endif

#if 1
CheckTypeSize(XtSaveYourself,0, 37057, 1, 1.0, NULL, 37058, NULL)
#endif

#if 1
CheckTypeSize(SessionShellPart,0, 37060, 1, 1.0, NULL, 37059, NULL)
#endif

#if 1
CheckTypeSize(SessionShellRec,0, 37062, 1, 1.0, NULL, 37061, NULL)
#endif

#if 1
CheckTypeSize(SessionShellWidget,0, 37063, 1, 1.0, NULL, 37064, NULL)
#endif

#if 1
CheckTypeSize(struct _OldXSizeHints,0, 37019, 1, 1.0, NULL, 0, NULL)
Msg("Missing member data for _OldXSizeHints on All\n");
CheckOffset(struct _OldXSizeHints,flags,0,1,216735)
CheckOffset(struct _OldXSizeHints,x,0,1,216736)
CheckOffset(struct _OldXSizeHints,y,0,1,216737)
CheckOffset(struct _OldXSizeHints,width,0,1,216738)
CheckOffset(struct _OldXSizeHints,height,0,1,216739)
CheckOffset(struct _OldXSizeHints,min_width,0,1,216740)
CheckOffset(struct _OldXSizeHints,min_height,0,1,216741)
CheckOffset(struct _OldXSizeHints,max_width,0,1,216742)
CheckOffset(struct _OldXSizeHints,max_height,0,1,216743)
CheckOffset(struct _OldXSizeHints,width_inc,0,1,216744)
CheckOffset(struct _OldXSizeHints,height_inc,0,1,216745)
CheckOffset(struct _OldXSizeHints,min_aspect,0,1,216746)
CheckOffset(struct _OldXSizeHints,max_aspect,0,1,216747)
#endif

OverrideShellClassRec overrideShellClassRec_db ;
CheckGlobalVar(overrideShellClassRec_db, overrideShellClassRec);
SessionShellClassRec sessionShellClassRec_db ;
CheckGlobalVar(sessionShellClassRec_db, sessionShellClassRec);
ShellClassRec shellClassRec_db ;
CheckGlobalVar(shellClassRec_db, shellClassRec);
TopLevelShellClassRec topLevelShellClassRec_db ;
CheckGlobalVar(topLevelShellClassRec_db, topLevelShellClassRec);
TransientShellClassRec transientShellClassRec_db ;
CheckGlobalVar(transientShellClassRec_db, transientShellClassRec);
WMShellClassRec wmShellClassRec_db ;
CheckGlobalVar(wmShellClassRec_db, wmShellClassRec);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ShellP.h\n\n",pcnt,cnt);
return cnt;
#endif

}

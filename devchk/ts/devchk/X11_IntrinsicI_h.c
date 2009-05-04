/*
 * Test of X11/IntrinsicI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifdef LSBCC_MODE
#include <X11/Intrinsic.h>
#endif
#include "X11/IntrinsicI.h"



#ifdef TET_TEST
void X11_IntrinsicI_h()
{
#else
int X11_IntrinsicI_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/IntrinsicI.h\n");
#endif

printf("Checking data structures in X11/IntrinsicI.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _XtintrinsicI_h
Msg( "Error: Constant not found: _XtintrinsicI_h\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RectObjClassFlag
	CompareConstant(RectObjClassFlag,0x02,16655,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RectObjClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WidgetClassFlag
	CompareConstant(WidgetClassFlag,0x04,16656,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WidgetClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CompositeClassFlag
	CompareConstant(CompositeClassFlag,0x08,16657,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: CompositeClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ConstraintClassFlag
	CompareConstant(ConstraintClassFlag,0x10,16658,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ConstraintClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ShellClassFlag
	CompareConstant(ShellClassFlag,0x20,16659,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ShellClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WMShellClassFlag
	CompareConstant(WMShellClassFlag,0x40,16660,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WMShellClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TopLevelClassFlag
	CompareConstant(TopLevelClassFlag,0x80,16661,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: TopLevelClassFlag\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtDisplayOfObject(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtScreenOfObject(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtWindowOfObject(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsManaged(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtIsSensitive(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _XBCOPYFUNC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtMemmove(dst,src,size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtBZero(dst,size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtMemcmp(b1,b2,size) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtStackAlloc(size,stack_cache_array) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XtStackFree(pointer,stack_cache_array) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFILESEARCHPATHDEFAULT
	CompareStringConstant(XFILESEARCHPATHDEFAULT,"/usr/lib/X11/%L/%T/%N%S:/usr/lib/X11/%l/%T/%N%S:/usr/lib/X11/%T/%N%S",16673,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XFILESEARCHPATHDEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTERROR_PREFIX
	CompareStringConstant(XTERROR_PREFIX,"",16674,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XTERROR_PREFIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTWARNING_PREFIX
	CompareStringConstant(XTWARNING_PREFIX,"",16675,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XTWARNING_PREFIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ERRORDB
	CompareStringConstant(ERRORDB,"/usr/lib/X11/XtErrorDB",16676,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ERRORDB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for CALLGEOTAT(f) */
#endif

String XtCXtToolkitError_db ;
CheckGlobalVar(XtCXtToolkitError_db, XtCXtToolkitError);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/IntrinsicI.h\n\n",pcnt,cnt);
return cnt;
#endif

}

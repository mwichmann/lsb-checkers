/*
 * Test of X11/IntrinsicI.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in X11/IntrinsicI.h\n");
#endif

printf("Checking data structures in X11/IntrinsicI.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtintrinsicI_h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RectObjClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WidgetClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CompositeClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ConstraintClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ShellClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WMShellClassFlag */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for TopLevelClassFlag */
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

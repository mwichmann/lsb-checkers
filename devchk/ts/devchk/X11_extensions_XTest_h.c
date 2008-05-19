/*
 * Test of X11/extensions/XTest.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/XTest.h"



#ifdef TET_TEST
void X11_extensions_XTest_h()
{
#else
int X11_extensions_XTest_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XTest.h\n");
#endif

printf("Checking data structures in X11/extensions/XTest.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef X_XTestGetVersion
	CompareConstant(X_XTestGetVersion,0,15527,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_XTestGetVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_XTestCompareCursor
	CompareConstant(X_XTestCompareCursor,1,15528,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_XTestCompareCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_XTestFakeInput
	CompareConstant(X_XTestFakeInput,2,15529,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_XTestFakeInput\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_XTestGrabControl
	CompareConstant(X_XTestGrabControl,3,15530,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: X_XTestGrabControl\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTestNumberEvents
	CompareConstant(XTestNumberEvents,0,15531,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XTestNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTestNumberErrors
	CompareConstant(XTestNumberErrors,0,15532,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XTestNumberErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTestMajorVersion
	CompareConstant(XTestMajorVersion,2,15533,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XTestMajorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XTestMinorVersion
	CompareConstant(XTestMinorVersion,2,15534,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XTestMinorVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XTestExtensionName */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XTest.h\n\n",pcnt,cnt);
return cnt;
#endif

}

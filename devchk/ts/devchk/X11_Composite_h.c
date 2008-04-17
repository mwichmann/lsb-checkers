/*
 * Test of X11/Composite.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/IntrinsicP.h>
#include <X11/Core.h>
#include <X11/CoreP.h>
#include "X11/Composite.h"



#ifdef TET_TEST
void X11_Composite_h()
{
#else
int X11_Composite_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Composite.h\n");
#endif

printf("Checking data structures in X11/Composite.h\n");
#if 1
CheckTypeSize(XtDoChangeProc,8, 100410, 1, 1.2, NULL, 100409, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Composite.h\n\n",pcnt,cnt);
return cnt;
#endif

}

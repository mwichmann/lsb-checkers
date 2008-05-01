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
#if defined __i386__
CheckTypeSize(XtDoChangeProc,4, 100410, 2, 1.2, NULL, 100409, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDoChangeProc,4, 100410, 6, 1.2, NULL, 100409, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtDoChangeProc,4, 100410, 10, 1.2, NULL, 100409, NULL)
#elif defined __s390x__
CheckTypeSize(XtDoChangeProc,8, 100410, 12, 1.2, NULL, 100409, NULL)
#elif defined __x86_64__
CheckTypeSize(XtDoChangeProc,8, 100410, 11, 1.2, NULL, 100409, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtDoChangeProc,8, 100410, 9, 1.2, NULL, 100409, NULL)
#elif defined __ia64__
CheckTypeSize(XtDoChangeProc,8, 100410, 3, 1.2, NULL, 100409, NULL)
#else
Msg("Find size of XtDoChangeProc (100410)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100409, NULL);\n",architecture,100410,0);
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

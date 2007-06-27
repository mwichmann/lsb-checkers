/*
 * Test of X11/Composite.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if defined __ia64__
CheckTypeSize(XtOrderProc,8, 10245, 3, 1.3, NULL, 10246, NULL)
#elif defined __i386__
CheckTypeSize(XtOrderProc,4, 10245, 2, 1.2, NULL, 10246, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtOrderProc,4, 10245, 6, 1.2, NULL, 10246, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtOrderProc,4, 10245, 10, 1.3, NULL, 10246, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtOrderProc,8, 10245, 9, 2.0, NULL, 10246, NULL)
#elif defined __s390x__
CheckTypeSize(XtOrderProc,8, 10245, 12, 1.3, NULL, 10246, NULL)
#elif defined __x86_64__
CheckTypeSize(XtOrderProc,8, 10245, 11, 2.0, NULL, 10246, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10246,NULL);\n",architecture,10245,0);
Msg("Find size of XtOrderProc (10245)\n");
#endif

#if defined __ia64__
CheckTypeSize(XtDoChangeProc,8, 10248, 3, 1.3, NULL, 10247, NULL)
#elif defined __i386__
CheckTypeSize(XtDoChangeProc,4, 10248, 2, 1.2, NULL, 10247, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XtDoChangeProc,4, 10248, 6, 1.2, NULL, 10247, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XtDoChangeProc,4, 10248, 10, 1.3, NULL, 10247, NULL)
#elif defined __powerpc64__
CheckTypeSize(XtDoChangeProc,8, 10248, 9, 2.0, NULL, 10247, NULL)
#elif defined __s390x__
CheckTypeSize(XtDoChangeProc,8, 10248, 12, 1.3, NULL, 10247, NULL)
#elif defined __x86_64__
CheckTypeSize(XtDoChangeProc,8, 10248, 11, 2.0, NULL, 10247, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,10247, NULL);\n",architecture,10248,0);
Msg("Find size of XtDoChangeProc (10248)\n");
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

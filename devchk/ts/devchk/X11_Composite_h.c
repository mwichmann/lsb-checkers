/*
 * Test of X11/Composite.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/Composite.h\n");
#endif

#if __ia64__
CheckTypeSize(XtOrderProc,8, 10245, 3)
#elif __i386__
CheckTypeSize(XtOrderProc,4, 10245, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtOrderProc,4, 10245, 6)
#elif __s390__
CheckTypeSize(XtOrderProc,4, 10245, 10)
#elif __powerpc64__
CheckTypeSize(XtOrderProc,0, 10245, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10245,0);
Msg("Find size of XtOrderProc (10245)\n");
#endif

#if __ia64__
CheckTypeSize(XtDoChangeProc,8, 10248, 3)
#elif __i386__
CheckTypeSize(XtDoChangeProc,4, 10248, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(XtDoChangeProc,4, 10248, 6)
#elif __s390__
CheckTypeSize(XtDoChangeProc,4, 10248, 10)
#elif __powerpc64__
CheckTypeSize(XtDoChangeProc,0, 10248, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10248,0);
Msg("Find size of XtDoChangeProc (10248)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/Composite.h\n",cnt);
return cnt;
#endif

}

/*
 * Test of X11/Composite.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(XtDoChangeProc,4, 10248, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10248,0);
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

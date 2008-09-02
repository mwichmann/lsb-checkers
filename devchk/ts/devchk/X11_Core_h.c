/*
 * Test of X11/Core.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <X11/Intrinsic.h>
#include "X11/Core.h"



#ifdef TET_TEST
void X11_Core_h()
{
#else
int X11_Core_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Core.h\n");
#endif

printf("Checking data structures in X11/Core.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for _XtCore_h */
#endif

#if 1
CheckTypeSize(CoreWidgetClass,0, 1008029, 1, 1.2, NULL, 1008027, NULL)
#endif

#if 1
CheckTypeSize(CoreWidget,0, 1008030, 1, 1.2, NULL, 1008028, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Core.h\n\n",pcnt,cnt);
return cnt;
#endif

}

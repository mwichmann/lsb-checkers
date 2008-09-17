/*
 * Test of X11/Xprotostr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xprotostr.h"



#ifdef TET_TEST
void X11_Xprotostr_h()
{
#else
int X11_Xprotostr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xprotostr.h\n");
#endif

printf("Checking data structures in X11/Xprotostr.h\n");
#if 1
CheckTypeSize(xSegment,0, 1009178, 1, 1.0, NULL, 1009177, NULL)
#endif

#if 1
CheckTypeSize(xPoint,0, 1009180, 1, 1.0, NULL, 1009179, NULL)
#endif

#if 1
CheckTypeSize(xRectangle,0, 1009182, 1, 1.0, NULL, 1009181, NULL)
#endif

#if 1
CheckTypeSize(xArc,0, 1009184, 1, 1.0, NULL, 1009183, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xprotostr.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of X11/Xproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xproto.h"



#ifdef TET_TEST
void X11_Xproto_h()
{
#else
int X11_Xproto_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xproto.h\n");
#endif

printf("Checking data structures in X11/Xproto.h\n");
#if 1
CheckTypeSize(KeyButMask,0, 1008241, 1, 1.0, NULL, 8957, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of X11/extensions/XInput.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/extensions/XInput.h"



#ifdef TET_TEST
void X11_extensions_XInput_h()
{
#else
int X11_extensions_XInput_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/XInput.h\n");
#endif

printf("Checking data structures in X11/extensions/XInput.h\n");
#if 1
CheckTypeSize(XInputClassInfo,0, 1000038, 1, 4.0, NULL, 1000037, NULL)
#endif

#if 1
CheckTypeSize(XDevice,0, 1000046, 1, 4.0, NULL, 1000045, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/XInput.h\n\n",pcnt,cnt);
return cnt;
#endif

}

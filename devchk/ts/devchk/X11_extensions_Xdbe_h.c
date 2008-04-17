/*
 * Test of X11/extensions/Xdbe.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/extensions/Xdbe.h"



#ifdef TET_TEST
void X11_extensions_Xdbe_h()
{
#else
int X11_extensions_Xdbe_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/Xdbe.h\n");
#endif

printf("Checking data structures in X11/extensions/Xdbe.h\n");
#if defined __i386__
CheckTypeSize(XdbeBackBuffer,4, 9394, 2, 1.2, NULL, 8727, NULL)
#else
Msg("Find size of XdbeBackBuffer (9394)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8727,NULL);\n",architecture,9394,0);
#endif

#if defined __i386__
CheckTypeSize(XdbeSwapAction,1, 9395, 2, 1.2, NULL, 3, NULL)
#else
Msg("Find size of XdbeSwapAction (9395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,9395,0);
#endif

#if 1
CheckTypeSize(XdbeSwapInfo,0, 9397, 1, 1.2, NULL, 9396, NULL)
#endif

#if 1
CheckTypeSize(XdbeBackBufferAttributes,0, 9399, 1, 1.2, NULL, 9398, NULL)
#endif

#if 1
CheckTypeSize(XdbeBufferError,0, 9401, 1, 1.2, NULL, 9400, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/Xdbe.h\n\n",pcnt,cnt);
return cnt;
#endif

}

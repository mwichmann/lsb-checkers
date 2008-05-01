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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBackBuffer,4, 9394, 10, 1.2, NULL, 8727, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 11, 1.2, NULL, 8727, NULL)
#elif defined __s390x__
CheckTypeSize(XdbeBackBuffer,8, 9394, 12, 1.2, NULL, 8727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBackBuffer,4, 9394, 6, 1.2, NULL, 8727, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 9, 1.2, NULL, 8727, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBackBuffer,8, 9394, 3, 1.2, NULL, 8727, NULL)
#else
Msg("Find size of XdbeBackBuffer (9394)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,8727,NULL);\n",architecture,9394,0);
#endif

#if defined __i386__
CheckTypeSize(XdbeSwapAction,1, 9395, 2, 1.2, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeSwapAction,1, 9395, 10, 1.2, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeSwapAction,1, 9395, 11, 1.2, NULL, 3, NULL)
#elif defined __s390x__
CheckTypeSize(XdbeSwapAction,1, 9395, 12, 1.2, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeSwapAction,1, 9395, 6, 1.2, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeSwapAction,1, 9395, 9, 1.2, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeSwapAction,1, 9395, 3, 1.2, NULL, 3, NULL)
#else
Msg("Find size of XdbeSwapAction (9395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,3,NULL);\n",architecture,9395,0);
#endif

#if defined __x86_64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 11, 1.2, NULL, 9396, NULL)
#elif defined __s390x__
CheckTypeSize(XdbeSwapInfo,16, 9397, 12, 1.2, NULL, 9396, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 3, 1.2, NULL, 9396, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeSwapInfo,16, 9397, 9, 1.2, NULL, 9396, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeSwapInfo,8, 9397, 10, 1.2, NULL, 9396, NULL)
#elif defined __i386__
CheckTypeSize(XdbeSwapInfo,8, 9397, 2, 1.2, NULL, 9396, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeSwapInfo,8, 9397, 6, 1.2, NULL, 9396, NULL)
#else
Msg("Find size of XdbeSwapInfo (9397)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9396,NULL);\n",architecture,9397,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 10, 1.2, NULL, 9398, NULL)
#elif defined __i386__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 2, 1.2, NULL, 9398, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBackBufferAttributes,4, 9399, 6, 1.2, NULL, 9398, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 11, 1.2, NULL, 9398, NULL)
#elif defined __s390x__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 12, 1.2, NULL, 9398, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 3, 1.2, NULL, 9398, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBackBufferAttributes,8, 9399, 9, 1.2, NULL, 9398, NULL)
#else
Msg("Find size of XdbeBackBufferAttributes (9399)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9398,NULL);\n",architecture,9399,0);
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeBufferError,20, 9401, 10, 1.2, NULL, 9400, NULL)
#elif defined __i386__
CheckTypeSize(XdbeBufferError,20, 9401, 2, 1.2, NULL, 9400, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeBufferError,20, 9401, 6, 1.2, NULL, 9400, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeBufferError,40, 9401, 11, 1.2, NULL, 9400, NULL)
#elif defined __s390x__
CheckTypeSize(XdbeBufferError,40, 9401, 12, 1.2, NULL, 9400, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeBufferError,40, 9401, 3, 1.2, NULL, 9400, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeBufferError,40, 9401, 9, 1.2, NULL, 9400, NULL)
#else
Msg("Find size of XdbeBufferError (9401)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,9400, NULL);\n",architecture,9401,0);
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

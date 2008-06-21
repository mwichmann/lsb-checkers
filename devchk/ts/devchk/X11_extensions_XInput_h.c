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
CheckTypeSize(XInputClassInfo,2, 1000038, 1, 4.0, NULL, 1000037, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XDevice,0, 1000046, 12, 4.0, NULL, 1000045, NULL)
#elif defined __x86_64__
CheckTypeSize(XDevice,24, 1000046, 11, 4.0, NULL, 1000045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XDevice,0, 1000046, 10, 4.0, NULL, 1000045, NULL)
#elif defined __powerpc64__
CheckTypeSize(XDevice,0, 1000046, 9, 4.0, NULL, 1000045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XDevice,0, 1000046, 6, 4.0, NULL, 1000045, NULL)
#elif defined __ia64__
CheckTypeSize(XDevice,0, 1000046, 3, 4.0, NULL, 1000045, NULL)
#elif defined __i386__
CheckTypeSize(XDevice,12, 1000046, 2, 4.0, NULL, 1000045, NULL)
#else
Msg("Find size of XDevice (1000046)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,1000045, NULL);\n",architecture,1000046,0);
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

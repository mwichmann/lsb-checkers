/*
 * Test of X11/VendorP.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/IntrinsicP.h"
#include "X11/ShellP.h"
#include "X11/VendorP.h"



#ifdef TET_TEST
void X11_VendorP_h()
{
#else
int X11_VendorP_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/VendorP.h\n");
#endif

printf("Checking data structures in X11/VendorP.h\n");
#if 1
CheckTypeSize(VendorShellClassPart,0, 1009093, 1, 1.0, NULL, 1009092, NULL)
#endif

#if 1
CheckTypeSize(VendorShellClassRec,0, 1009095, 1, 1.0, NULL, 1009094, NULL)
#endif

#if 1
CheckTypeSize(VendorShellPart,0, 1009097, 1, 1.0, NULL, 1009096, NULL)
#endif

#if 1
CheckTypeSize(VendorShellRec,0, 1009099, 1, 1.0, NULL, 1009098, NULL)
#endif

#if 1
CheckTypeSize(VendorShellWidget,0, 1009100, 1, 1.0, NULL, 1009101, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/VendorP.h\n\n",pcnt,cnt);
return cnt;
#endif

}

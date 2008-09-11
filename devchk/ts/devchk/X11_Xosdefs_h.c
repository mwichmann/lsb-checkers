/*
 * Test of X11/Xosdefs.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xosdefs.h"



#ifdef TET_TEST
void X11_Xosdefs_h()
{
#else
int X11_Xosdefs_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xosdefs.h\n");
#endif

printf("Checking data structures in X11/Xosdefs.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PATH_MAX
	CompareConstant(PATH_MAX,4096,16754,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: PATH_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAXPATHLEN
	CompareConstant(MAXPATHLEN,4096,16755,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: MAXPATHLEN\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xosdefs.h\n\n",pcnt,cnt);
return cnt;
#endif

}

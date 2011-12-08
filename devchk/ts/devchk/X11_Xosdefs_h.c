/*
 * Test of X11/Xosdefs.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in X11/Xosdefs.h\n");
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
Msg("%d tests passed out of %d tests in X11/Xosdefs.h\n\n",pcnt,cnt);
return cnt;
#endif

}

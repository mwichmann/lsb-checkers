/*
 * Test of sys/param.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/param.h"



#ifdef TET_TEST
void sys_param_h()
{
#else
int sys_param_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in sys/param.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef MAXPATHLEN
	CompareConstant(MAXPATHLEN,4096,4399,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: MAXPATHLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NOFILE
	CompareConstant(NOFILE,256,4400,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NOFILE\n");
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
Msg("%d tests passed out of %d tests in sys/param.h\n\n",pcnt,cnt);
return cnt;
#endif

}

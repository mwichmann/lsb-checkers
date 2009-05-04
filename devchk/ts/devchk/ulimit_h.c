/*
 * Test of ulimit.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "ulimit.h"



#ifdef TET_TEST
void ulimit_h()
{
#else
int ulimit_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in ulimit.h\n");
#endif

printf("Checking data structures in ulimit.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef UL_GETFSIZE
	CompareConstant(UL_GETFSIZE,1,1916,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UL_GETFSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UL_SETFSIZE
	CompareConstant(UL_SETFSIZE,2,1917,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: UL_SETFSIZE\n");
cnt++;
#endif

#endif

extern long int ulimit_db(int, ...);
CheckInterfacedef(ulimit,ulimit_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in ulimit.h\n\n",pcnt,cnt);
return cnt;
#endif

}

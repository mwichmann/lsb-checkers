/*
 * Test of nspr4/prtime.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prtime.h"



#ifdef TET_TEST
void nspr4_prtime_h()
{
#else
int nspr4_prtime_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/prtime.h\n");
#endif

printf("Checking data structures in nspr4/prtime.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef prtime_h___
Msg( "Error: Constant not found: prtime_h___\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PRTime,0, 32747, 1, 4.0, NULL, 33308, NULL)
#endif

extern PRTime PR_Now_db(void);
CheckInterfacedef(PR_Now,PR_Now_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prtime.h\n\n",pcnt,cnt);
return cnt;
#endif

}

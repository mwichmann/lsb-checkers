/*
 * Test of nspr4/prinrval.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prinrval.h"



#ifdef TET_TEST
void nspr4_prinrval_h()
{
#else
int nspr4_prinrval_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nspr4/prinrval.h\n");
#endif

printf("Checking data structures in nspr4/prinrval.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef prinrval_h
Msg( "Error: Constant not found: prinrval_h\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(PRIntervalTime,0, 34254, 1, 4.0, NULL, 33493, NULL)
#endif

extern PRIntervalTime PR_SecondsToInterval_db(PRUint32);
CheckInterfacedef(PR_SecondsToInterval,PR_SecondsToInterval_db);
extern PRIntervalTime PR_MillisecondsToInterval_db(PRUint32);
CheckInterfacedef(PR_MillisecondsToInterval,PR_MillisecondsToInterval_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prinrval.h\n\n",pcnt,cnt);
return cnt;
#endif

}

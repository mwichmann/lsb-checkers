/*
 * Test of nspr4/prtime.h
 */
#include "hdrchk.h"
#include <stdio.h>
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
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prtime.h\n");
#endif

printf("Checking data structures in nspr4/prtime.h\n");
#if 1
CheckTypeSize(PRTime,0, 1000853, 1, 4.0, NULL, 1002180, NULL)
#endif

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

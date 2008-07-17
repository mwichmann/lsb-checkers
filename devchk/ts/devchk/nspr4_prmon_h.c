/*
 * Test of nspr4/prmon.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prmon.h"



#ifdef TET_TEST
void nspr4_prmon_h()
{
#else
int nspr4_prmon_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prmon.h\n");
#endif

printf("Checking data structures in nspr4/prmon.h\n");
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prmon.h\n\n",pcnt,cnt);
return cnt;
#endif

}

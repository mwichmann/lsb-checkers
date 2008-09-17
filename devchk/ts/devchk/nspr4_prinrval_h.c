/*
 * Test of nspr4/prinrval.h
 */
#include "hdrchk.h"
#include <stdio.h>
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
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prinrval.h\n");
#endif

printf("Checking data structures in nspr4/prinrval.h\n");
#if 1
CheckTypeSize(PRIntervalTime,0, 1004388, 1, 4.0, NULL, 1002647, NULL)
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

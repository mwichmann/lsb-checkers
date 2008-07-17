/*
 * Test of nss3/seccomon.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/seccomon.h"



#ifdef TET_TEST
void nss3_seccomon_h()
{
#else
int nss3_seccomon_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/seccomon.h\n");
#endif

printf("Checking data structures in nss3/seccomon.h\n");
#if 1
CheckTypeSize(SECItemType,0, 1005794, 1, 4.0, NULL, 1002709, NULL)
#endif

#if 1
CheckTypeSize(SECItem,0, 1005797, 1, 4.0, NULL, 1005802, NULL)
#endif

#if 1
CheckTypeSize(SECStatus,0, 1005840, 1, 4.0, NULL, 1005835, NULL)
#endif

#if 1
CheckTypeSize(SECComparison,0, 1005848, 1, 4.0, NULL, 1005844, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/seccomon.h\n\n",pcnt,cnt);
return cnt;
#endif

}

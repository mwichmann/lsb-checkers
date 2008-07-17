/*
 * Test of nss3/secdert.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/secdert.h"



#ifdef TET_TEST
void nss3_secdert_h()
{
#else
int nss3_secdert_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/secdert.h\n");
#endif

printf("Checking data structures in nss3/secdert.h\n");
#if 1
CheckTypeSize(DERTemplate,0, 1005736, 1, 4.0, NULL, 1005751, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secdert.h\n\n",pcnt,cnt);
return cnt;
#endif

}

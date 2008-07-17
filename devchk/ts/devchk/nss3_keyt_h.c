/*
 * Test of nss3/keyt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/keyt.h"



#ifdef TET_TEST
void nss3_keyt_h()
{
#else
int nss3_keyt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/keyt.h\n");
#endif

printf("Checking data structures in nss3/keyt.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for nss3/keyt.h depends on nss3/keythi.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/keyt.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of nss3/hasht.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#include <nspr4/prtypes.h>
#endif
#include "nss3/hasht.h"



#ifdef TET_TEST
void nss3_hasht_h()
{
#else
int nss3_hasht_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/hasht.h\n");
#endif

printf("Checking data structures in nss3/hasht.h\n");
#if 1
CheckTypeSize(SECHashObject,0, 1005726, 1, 4.0, NULL, 1005783, NULL)
#endif

#if 1
CheckTypeSize(HASHContext,0, 1005727, 1, 4.0, NULL, 1005805, NULL)
#endif

#if 1
CheckTypeSize(HASH_HashType,0, 1005750, 1, 4.0, NULL, 1001229, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/hasht.h\n\n",pcnt,cnt);
return cnt;
#endif

}

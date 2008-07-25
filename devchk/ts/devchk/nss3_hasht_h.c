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
#if _LSB_DEFAULT_ARCH
#ifdef MD2_LENGTH
	CompareConstant(MD2_LENGTH,16,15862,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MD2_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MD5_LENGTH
	CompareConstant(MD5_LENGTH,16,15863,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MD5_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHA1_LENGTH
	CompareConstant(SHA1_LENGTH,20,15864,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SHA1_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHA256_LENGTH
	CompareConstant(SHA256_LENGTH,32,15865,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SHA256_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHA384_LENGTH
	CompareConstant(SHA384_LENGTH,48,15866,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SHA384_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHA512_LENGTH
	CompareConstant(SHA512_LENGTH,64,15867,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SHA512_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HASH_LENGTH_MAX
	CompareConstant(HASH_LENGTH_MAX,SHA512_LENGTH,15868,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: HASH_LENGTH_MAX\n");
cnt++;
#endif

#endif

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

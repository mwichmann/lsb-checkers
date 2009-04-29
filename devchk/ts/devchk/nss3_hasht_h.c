/*
 * Test of nss3/hasht.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if _LSB_DEFAULT_ARCH
#ifndef _HASHT_H_
Msg( "Error: Constant not found: _HASHT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SECHashObject,0, 34843, 1, 4.0, NULL, 34900, NULL)
#endif

#if 1
CheckTypeSize(HASHContext,0, 34844, 1, 4.0, NULL, 34922, NULL)
#endif

#if 1
CheckTypeSize(HASH_HashType,0, 34867, 1, 4.0, NULL, 32893, NULL)
#endif

#if 1
CheckTypeSize(struct SECHashObjectStr,0, 34900, 1, , NULL, 0, NULL)
Msg("Missing member data for SECHashObjectStr on All\n");
CheckOffset(struct SECHashObjectStr,length,0,1,87727)
CheckOffset(struct SECHashObjectStr,create,0,1,87728)
CheckOffset(struct SECHashObjectStr,clone,0,1,87729)
CheckOffset(struct SECHashObjectStr,destroy,0,1,87730)
CheckOffset(struct SECHashObjectStr,begin,0,1,87731)
CheckOffset(struct SECHashObjectStr,update,0,1,87732)
CheckOffset(struct SECHashObjectStr,end,0,1,87733)
CheckOffset(struct SECHashObjectStr,blocklength,0,1,87734)
CheckOffset(struct SECHashObjectStr,type,0,1,87735)
#endif

#if 1
CheckTypeSize(struct HASHContextStr,0, 34922, 1, , NULL, 0, NULL)
Msg("Missing member data for HASHContextStr on All\n");
CheckOffset(struct HASHContextStr,hashobj,0,1,86815)
CheckOffset(struct HASHContextStr,hash_context,0,1,86816)
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

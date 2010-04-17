/*
 * Test of nss3/pkcs7t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "nss3/pkcs7t.h"



#ifdef TET_TEST
void nss3_pkcs7t_h()
{
#else
int nss3_pkcs7t_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/pkcs7t.h\n");
#endif

printf("Checking data structures in nss3/pkcs7t.h\n");
#if _LSB_DEFAULT_ARCH
#ifndef _PKCS7T_H_
Msg( "Error: Constant not found: _PKCS7T_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SEC_PKCS7RecipientInfo,0, 34941, 1, 4.0, NULL, 35017, NULL)
#endif

#if 1
CheckTypeSize(struct SEC_PKCS7RecipientInfoStr,0, 35017, 1, , NULL, 0, NULL)
Msg("Missing member data for SEC_PKCS7RecipientInfoStr on All\n");
CheckOffset(struct SEC_PKCS7RecipientInfoStr,version,0,1,87871)
CheckOffset(struct SEC_PKCS7RecipientInfoStr,issuerAndSN,0,1,87872)
CheckOffset(struct SEC_PKCS7RecipientInfoStr,keyEncAlg,0,1,87873)
CheckOffset(struct SEC_PKCS7RecipientInfoStr,encKey,0,1,87874)
CheckOffset(struct SEC_PKCS7RecipientInfoStr,cert,0,1,87875)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/pkcs7t.h\n\n",pcnt,cnt);
return cnt;
#endif

}

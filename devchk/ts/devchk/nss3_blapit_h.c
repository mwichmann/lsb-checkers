/*
 * Test of nss3/blapit.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/blapit.h"



#ifdef TET_TEST
void nss3_blapit_h()
{
#else
int nss3_blapit_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/blapit.h\n");
#endif

printf("Checking data structures in nss3/blapit.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NSS_RC2
	CompareConstant(NSS_RC2,0,16010,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_RC2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_RC2_CBC
	CompareConstant(NSS_RC2_CBC,1,16011,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_RC2_CBC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_RC5
	CompareConstant(NSS_RC5,0,16012,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_RC5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_RC5_CBC
	CompareConstant(NSS_RC5_CBC,1,16013,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_RC5_CBC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_DES
	CompareConstant(NSS_DES,0,16014,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_DES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_DES_CBC
	CompareConstant(NSS_DES_CBC,1,16015,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_DES_CBC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_DES_EDE3
	CompareConstant(NSS_DES_EDE3,2,16016,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_DES_EDE3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_DES_EDE3_CBC
	CompareConstant(NSS_DES_EDE3_CBC,3,16017,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_DES_EDE3_CBC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DES_KEY_LENGTH
	CompareConstant(DES_KEY_LENGTH,8,16018,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DES_KEY_LENGTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_AES
	CompareConstant(NSS_AES,0,16019,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_AES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_AES_CBC
	CompareConstant(NSS_AES_CBC,1,16020,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_AES_CBC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DSA_SIGNATURE_LEN
	CompareConstant(DSA_SIGNATURE_LEN,40,16021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DSA_SIGNATURE_LEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DSA_SUBPRIME_LEN
	CompareConstant(DSA_SUBPRIME_LEN,20,16022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DSA_SUBPRIME_LEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AES_KEY_WRAP_IV_BYTES
	CompareConstant(AES_KEY_WRAP_IV_BYTES,8,16023,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AES_KEY_WRAP_IV_BYTES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AES_KEY_WRAP_BLOCK_SIZE
	CompareConstant(AES_KEY_WRAP_BLOCK_SIZE,8,16024,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AES_KEY_WRAP_BLOCK_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AES_BLOCK_SIZE
	CompareConstant(AES_BLOCK_SIZE,16,16025,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AES_BLOCK_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NSS_FREEBL_DEFAULT_CHUNKSIZE
	CompareConstant(NSS_FREEBL_DEFAULT_CHUNKSIZE,2048,16026,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NSS_FREEBL_DEFAULT_CHUNKSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RSA_MIN_MODULUS_BITS
	CompareConstant(RSA_MIN_MODULUS_BITS,128,16027,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RSA_MIN_MODULUS_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DH_MIN_P_BITS
	CompareConstant(DH_MIN_P_BITS,128,16028,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DH_MIN_P_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DH_MAX_P_BITS
	CompareConstant(DH_MAX_P_BITS,2236,16029,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DH_MAX_P_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DSA_Q_BITS
	CompareConstant(DSA_Q_BITS,160,16030,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DSA_Q_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DSA_MAX_P_BITS
	CompareConstant(DSA_MAX_P_BITS,1024,16031,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DSA_MAX_P_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DSA_MIN_P_BITS
	CompareConstant(DSA_MIN_P_BITS,512,16032,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: DSA_MIN_P_BITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PQG_PBITS_TO_INDEX(bits) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PQG_INDEX_TO_PBITS(j) */
#endif

#if 1
CheckTypeSize(PQGParams,0, 1005918, 1, 4.0, NULL, 1005915, NULL)
#endif

#if 1
CheckTypeSize(PQGVerify,0, 1005924, 1, 4.0, NULL, 1005921, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/blapit.h\n\n",pcnt,cnt);
return cnt;
#endif

}

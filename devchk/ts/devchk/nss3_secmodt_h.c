/*
 * Test of nss3/secmodt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct nssRWLockStr {};
#include "nss3/secmodt.h"



#ifdef TET_TEST
void nss3_secmodt_h()
{
#else
int nss3_secmodt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/secmodt.h\n");
#endif

printf("Checking data structures in nss3/secmodt.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_END_WAIT
	CompareConstant(SECMOD_END_WAIT,0x01,16114,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_END_WAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_WAIT_SIMULATED_EVENT
	CompareConstant(SECMOD_WAIT_SIMULATED_EVENT,0x02,16115,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_WAIT_SIMULATED_EVENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_WAIT_PKCS11_EVENT
	CompareConstant(SECMOD_WAIT_PKCS11_EVENT,0x04,16116,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_WAIT_PKCS11_EVENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RSA_FLAG
	CompareConstant(SECMOD_RSA_FLAG,0x00000001L,16117,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RSA_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_DSA_FLAG
	CompareConstant(SECMOD_DSA_FLAG,0x00000002L,16118,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_DSA_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RC2_FLAG
	CompareConstant(SECMOD_RC2_FLAG,0x00000004L,16119,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RC2_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RC4_FLAG
	CompareConstant(SECMOD_RC4_FLAG,0x00000008L,16120,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RC4_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_DES_FLAG
	CompareConstant(SECMOD_DES_FLAG,0x00000010L,16121,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_DES_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_DH_FLAG
	CompareConstant(SECMOD_DH_FLAG,0x00000020L,16122,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_DH_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_FORTEZZA_FLAG
	CompareConstant(SECMOD_FORTEZZA_FLAG,0x00000040L,16123,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_FORTEZZA_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RC5_FLAG
	CompareConstant(SECMOD_RC5_FLAG,0x00000080L,16124,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RC5_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_SHA1_FLAG
	CompareConstant(SECMOD_SHA1_FLAG,0x00000100L,16125,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_SHA1_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_MD5_FLAG
	CompareConstant(SECMOD_MD5_FLAG,0x00000200L,16126,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_MD5_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_MD2_FLAG
	CompareConstant(SECMOD_MD2_FLAG,0x00000400L,16127,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_MD2_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_SSL_FLAG
	CompareConstant(SECMOD_SSL_FLAG,0x00000800L,16128,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_SSL_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_TLS_FLAG
	CompareConstant(SECMOD_TLS_FLAG,0x00001000L,16129,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_TLS_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_AES_FLAG
	CompareConstant(SECMOD_AES_FLAG,0x00002000L,16130,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_AES_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_SHA256_FLAG
	CompareConstant(SECMOD_SHA256_FLAG,0x00004000L,16131,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_SHA256_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_SHA512_FLAG
	CompareConstant(SECMOD_SHA512_FLAG,0x00008000L,16132,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_SHA512_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RESERVED_FLAG
	CompareConstant(SECMOD_RESERVED_FLAG,0X08000000L,16133,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RESERVED_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_FRIENDLY_FLAG
	CompareConstant(SECMOD_FRIENDLY_FLAG,0x10000000L,16134,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_FRIENDLY_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_RANDOM_FLAG
	CompareConstant(SECMOD_RANDOM_FLAG,0x80000000L,16135,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_RANDOM_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_OWN_PW_DEFAULTS
	CompareConstant(PK11_OWN_PW_DEFAULTS,0x20000000L,16136,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_OWN_PW_DEFAULTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_DISABLE_FLAG
	CompareConstant(PK11_DISABLE_FLAG,0x40000000L,16137,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_DISABLE_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CKM_FAKE_RANDOM
	CompareConstant(CKM_FAKE_RANDOM,0x80000efeL,16138,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CKM_FAKE_RANDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CKM_INVALID_MECHANISM
	CompareConstant(CKM_INVALID_MECHANISM,0xffffffffL,16139,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CKM_INVALID_MECHANISM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_TOKEN
	CompareConstant(PK11_ATTR_TOKEN,0x00000001L,16140,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_TOKEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_SESSION
	CompareConstant(PK11_ATTR_SESSION,0x00000002L,16141,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_SESSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_PRIVATE
	CompareConstant(PK11_ATTR_PRIVATE,0x00000004L,16142,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_PUBLIC
	CompareConstant(PK11_ATTR_PUBLIC,0x00000008L,16143,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_PUBLIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_MODIFIABLE
	CompareConstant(PK11_ATTR_MODIFIABLE,0x00000010L,16144,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_MODIFIABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_UNMODIFIABLE
	CompareConstant(PK11_ATTR_UNMODIFIABLE,0x00000020L,16145,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_UNMODIFIABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_SENSITIVE
	CompareConstant(PK11_ATTR_SENSITIVE,0x00000040L,16146,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_SENSITIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_INSENSITIVE
	CompareConstant(PK11_ATTR_INSENSITIVE,0x00000080L,16147,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_INSENSITIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_EXTRACTABLE
	CompareConstant(PK11_ATTR_EXTRACTABLE,0x00000100L,16148,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_EXTRACTABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_ATTR_UNEXTRACTABLE
	CompareConstant(PK11_ATTR_UNEXTRACTABLE,0x00000200L,16149,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_ATTR_UNEXTRACTABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_EXTERNAL
	CompareConstant(SECMOD_EXTERNAL,0,16150,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_EXTERNAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_INTERNAL
	CompareConstant(SECMOD_INTERNAL,1,16151,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_INTERNAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_FIPS
	CompareConstant(SECMOD_FIPS,2,16152,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_FIPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_SLOT_FLAGS
	CompareConstant(SECMOD_SLOT_FLAGS,"slotFlags=[RSA,DSA,DH,RC2,RC4,DES,RANDOM,SHA1,MD5,MD2,SSL,TLS,AES,SHA256,SHA512]",16153,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_SLOT_FLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for SECMOD_MAKE_NSS_FLAGS(fips,slot) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_INT_NAME
	CompareConstant(SECMOD_INT_NAME,"NSS Internal PKCS #11 Module",16155,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_INT_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_INT_FLAGS
	CompareConstant(SECMOD_INT_FLAGS,SECMOD_MAKE_NSS_FLAGS("",1),16156,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_INT_FLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_FIPS_NAME
	CompareConstant(SECMOD_FIPS_NAME,"NSS Internal FIPS PKCS #11 Module",16157,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_FIPS_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SECMOD_FIPS_FLAGS
	CompareConstant(SECMOD_FIPS_FLAGS,SECMOD_MAKE_NSS_FLAGS(",fips",3),16158,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SECMOD_FIPS_FLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PK11_PW_RETRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PK11_PW_AUTHENTICATED */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PK11_PW_TRY */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef CRL_IMPORT_DEFAULT_OPTIONS
	CompareConstant(CRL_IMPORT_DEFAULT_OPTIONS,0x00000000,16162,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CRL_IMPORT_DEFAULT_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CRL_IMPORT_BYPASS_CHECKS
	CompareConstant(CRL_IMPORT_BYPASS_CHECKS,0x00000001,16163,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CRL_IMPORT_BYPASS_CHECKS\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SECMODModule,0, 1005743, 1, 4.0, NULL, 1005778, NULL)
#endif

#if 1
CheckTypeSize(SECMODModuleList,0, 1005746, 1, 4.0, NULL, 1005853, NULL)
#endif

#if 1
CheckTypeSize(SECMODListLock,0, 1005747, 1, 4.0, NULL, 1005735, NULL)
#endif

#if 1
CheckTypeSize(SECMODModuleID,0, 1005768, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PK11FreeDataFunc,0, 1005773, 1, 4.0, NULL, 1002477, NULL)
#endif

#if 1
CheckTypeSize(PK11CertListType,0, 1005877, 1, 4.0, NULL, 1004407, NULL)
#endif

#if 1
CheckTypeSize(PK11AttrFlags,0, 1005904, 1, 4.0, NULL, 1002647, NULL)
#endif

#if 1
CheckTypeSize(PK11Origin,0, 1005952, 1, 4.0, NULL, 1002031, NULL)
#endif

#if 1
CheckTypeSize(PK11DisableReasons,0, 1005956, 1, 4.0, NULL, 1001503, NULL)
#endif

#if 1
CheckTypeSize(PK11ObjectType,0, 1005959, 1, 4.0, NULL, 1004665, NULL)
#endif

#if 1
CheckTypeSize(PK11PasswordFunc,0, 1005962, 1, 4.0, NULL, 1002132, NULL)
#endif

#if 1
CheckTypeSize(SECKEYAttribute,0, 1005968, 1, 4.0, NULL, 1005967, NULL)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyInfo,0, 1005971, 1, 4.0, NULL, 1005970, NULL)
#endif

#if 1
CheckTypeSize(SECKEYEncryptedPrivateKeyInfo,0, 1005975, 1, 4.0, NULL, 1005974, NULL)
#endif

#if 1
CheckTypeSize(PK11TokenStatus,0, 1005979, 1, 4.0, NULL, 1001558, NULL)
#endif

#if 1
CheckTypeSize(PK11TokenEvent,0, 1005980, 1, 4.0, NULL, 1000570, NULL)
#endif

#if 1
/* All */
typedef void (*PK11FreeDataFunc_db)(void *);
CheckFunctionTypedef(PK11FreeDataFunc,PK11FreeDataFunc_db);
#endif

#if 1
/* All */
typedef char * (*PK11PasswordFunc_db)(PK11SlotInfo *, PRBool, void *);
CheckFunctionTypedef(PK11PasswordFunc,PK11PasswordFunc_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secmodt.h\n\n",pcnt,cnt);
return cnt;
#endif

}

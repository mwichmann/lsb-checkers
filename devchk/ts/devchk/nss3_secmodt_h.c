/*
 * Test of nss3/secmodt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
#ifdef PK11_PW_RETRY
	CompareStringConstant(PK11_PW_RETRY,"RETRY",16159,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_PW_RETRY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_PW_AUTHENTICATED
	CompareStringConstant(PK11_PW_AUTHENTICATED,"AUTH",16160,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_PW_AUTHENTICATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PK11_PW_TRY
	CompareStringConstant(PK11_PW_TRY,"TRY",16161,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PK11_PW_TRY\n");
cnt++;
#endif

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

#if _LSB_DEFAULT_ARCH
#ifndef _SECMODT_H_
Msg( "Error: Constant not found: _SECMODT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(SECMODModule,0, 34860, 1, 4.0, NULL, 34895, NULL)
#endif

#if 1
CheckTypeSize(SECMODModuleList,0, 34863, 1, 4.0, NULL, 34970, NULL)
#endif

#if 1
CheckTypeSize(SECMODListLock,0, 34864, 1, 4.0, NULL, 34852, NULL)
#endif

#if 1
CheckTypeSize(SECMODModuleID,0, 34885, 1, 4.0, NULL, 9, NULL)
#endif

#if 1
CheckTypeSize(PK11FreeDataFunc,0, 34890, 1, 4.0, NULL, 21532, NULL)
#endif

#if 1
CheckTypeSize(struct SECMODModuleStr,0, 34895, 1, , NULL, 0, NULL)
Msg("Missing member data for SECMODModuleStr on All\n");
CheckOffset(struct SECMODModuleStr,arena,0,1,87819)
CheckOffset(struct SECMODModuleStr,internal,0,1,87820)
CheckOffset(struct SECMODModuleStr,loaded,0,1,87821)
CheckOffset(struct SECMODModuleStr,isFIPS,0,1,87822)
CheckOffset(struct SECMODModuleStr,dllName,0,1,87823)
CheckOffset(struct SECMODModuleStr,commonName,0,1,87824)
CheckOffset(struct SECMODModuleStr,library,0,1,87825)
CheckOffset(struct SECMODModuleStr,functionList,0,1,87826)
CheckOffset(struct SECMODModuleStr,refLock,0,1,87827)
CheckOffset(struct SECMODModuleStr,refCount,0,1,87828)
CheckOffset(struct SECMODModuleStr,slots,0,1,87829)
CheckOffset(struct SECMODModuleStr,slotCount,0,1,87830)
CheckOffset(struct SECMODModuleStr,slotInfo,0,1,87831)
CheckOffset(struct SECMODModuleStr,slotInfoCount,0,1,87832)
CheckOffset(struct SECMODModuleStr,moduleID,0,1,87833)
CheckOffset(struct SECMODModuleStr,isThreadSafe,0,1,87834)
CheckOffset(struct SECMODModuleStr,ssl,0,1,87835)
CheckOffset(struct SECMODModuleStr,libraryParams,0,1,87836)
CheckOffset(struct SECMODModuleStr,moduleDBFunc,0,1,87837)
CheckOffset(struct SECMODModuleStr,parent,0,1,87838)
CheckOffset(struct SECMODModuleStr,isCritical,0,1,87839)
CheckOffset(struct SECMODModuleStr,isModuleDB,0,1,87840)
CheckOffset(struct SECMODModuleStr,moduleDBOnly,0,1,87841)
CheckOffset(struct SECMODModuleStr,trustOrder,0,1,87842)
CheckOffset(struct SECMODModuleStr,cipherOrder,0,1,87843)
CheckOffset(struct SECMODModuleStr,evControlMask,0,1,87844)
CheckOffset(struct SECMODModuleStr,cryptokiVersion,0,1,87845)
#endif

#if 1
CheckTypeSize(struct SECMODModuleListStr,0, 34970, 1, , NULL, 0, NULL)
Msg("Missing member data for SECMODModuleListStr on All\n");
CheckOffset(struct SECMODModuleListStr,next,0,1,87817)
CheckOffset(struct SECMODModuleListStr,module,0,1,87818)
#endif

#if 1
CheckTypeSize(PK11CertListType,0, 34994, 1, 4.0, NULL, 34264, NULL)
#endif

#if 1
CheckTypeSize(PK11AttrFlags,0, 35021, 1, 4.0, NULL, 33493, NULL)
#endif

#if 1
CheckTypeSize(PK11Origin,0, 35069, 1, 4.0, NULL, 33250, NULL)
#endif

#if 1
CheckTypeSize(PK11DisableReasons,0, 35073, 1, 4.0, NULL, 33013, NULL)
#endif

#if 1
CheckTypeSize(PK11ObjectType,0, 35076, 1, 4.0, NULL, 34378, NULL)
#endif

#if 1
CheckTypeSize(PK11PasswordFunc,0, 35079, 1, 4.0, NULL, 33290, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYAttributeStr,0, 35084, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYAttributeStr on All\n");
CheckOffset(struct SECKEYAttributeStr,attrType,0,1,87739)
CheckOffset(struct SECKEYAttributeStr,attrValue,0,1,87740)
#endif

#if 1
CheckTypeSize(SECKEYAttribute,0, 35085, 1, 4.0, NULL, 35084, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYPrivateKeyInfoStr,0, 35087, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYPrivateKeyInfoStr on All\n");
CheckOffset(struct SECKEYPrivateKeyInfoStr,arena,0,1,87784)
CheckOffset(struct SECKEYPrivateKeyInfoStr,version,0,1,87785)
CheckOffset(struct SECKEYPrivateKeyInfoStr,algorithm,0,1,87786)
CheckOffset(struct SECKEYPrivateKeyInfoStr,privateKey,0,1,87787)
CheckOffset(struct SECKEYPrivateKeyInfoStr,attributes,0,1,87788)
#endif

#if 1
CheckTypeSize(SECKEYPrivateKeyInfo,0, 35088, 1, 4.0, NULL, 35087, NULL)
#endif

#if 1
CheckTypeSize(struct SECKEYEncryptedPrivateKeyInfoStr,0, 35091, 1, , NULL, 0, NULL)
Msg("Missing member data for SECKEYEncryptedPrivateKeyInfoStr on All\n");
CheckOffset(struct SECKEYEncryptedPrivateKeyInfoStr,arena,0,1,87761)
CheckOffset(struct SECKEYEncryptedPrivateKeyInfoStr,algorithm,0,1,87762)
CheckOffset(struct SECKEYEncryptedPrivateKeyInfoStr,encryptedData,0,1,87763)
#endif

#if 1
CheckTypeSize(SECKEYEncryptedPrivateKeyInfo,0, 35092, 1, 4.0, NULL, 35091, NULL)
#endif

#if 1
CheckTypeSize(PK11TokenStatus,0, 35096, 1, 4.0, NULL, 33036, NULL)
#endif

#if 1
CheckTypeSize(PK11TokenEvent,0, 35097, 1, 4.0, NULL, 32636, NULL)
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

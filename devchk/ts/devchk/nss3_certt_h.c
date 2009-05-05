/*
 * Test of nss3/certt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/certt.h"



#ifdef TET_TEST
void nss3_certt_h()
{
#else
int nss3_certt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in nss3/certt.h\n");
#endif

printf("Checking data structures in nss3/certt.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for SEC_GET_TRUST_FLAGS(trust,type) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERTIFICATE_VERSION_1
	CompareConstant(SEC_CERTIFICATE_VERSION_1,0,16052,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERTIFICATE_VERSION_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERTIFICATE_VERSION_2
	CompareConstant(SEC_CERTIFICATE_VERSION_2,1,16053,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERTIFICATE_VERSION_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERTIFICATE_VERSION_3
	CompareConstant(SEC_CERTIFICATE_VERSION_3,2,16054,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERTIFICATE_VERSION_3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CRL_VERSION_1
	CompareConstant(SEC_CRL_VERSION_1,0,16055,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CRL_VERSION_1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CRL_VERSION_2
	CompareConstant(SEC_CRL_VERSION_2,1,16056,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CRL_VERSION_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_CLASS_CA
	CompareConstant(SEC_CERT_CLASS_CA,1,16057,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_CLASS_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_CLASS_SERVER
	CompareConstant(SEC_CERT_CLASS_SERVER,2,16058,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_CLASS_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_CLASS_USER
	CompareConstant(SEC_CERT_CLASS_USER,3,16059,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_CLASS_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_CLASS_EMAIL
	CompareConstant(SEC_CERT_CLASS_EMAIL,4,16060,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_CLASS_EMAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERTIFICATE_REQUEST_VERSION
	CompareConstant(SEC_CERTIFICATE_REQUEST_VERSION,0,16061,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERTIFICATE_REQUEST_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for CERT_LIST_HEAD(l) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CERT_LIST_NEXT(n) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CERT_LIST_END(n,l) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CERT_LIST_EMPTY(l) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_SSL_CLIENT
	CompareConstant(NS_CERT_TYPE_SSL_CLIENT,(0x80),16066,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_SSL_CLIENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_SSL_SERVER
	CompareConstant(NS_CERT_TYPE_SSL_SERVER,(0x40),16067,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_SSL_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_EMAIL
	CompareConstant(NS_CERT_TYPE_EMAIL,(0x20),16068,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_EMAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_OBJECT_SIGNING
	CompareConstant(NS_CERT_TYPE_OBJECT_SIGNING,(0x10),16069,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_OBJECT_SIGNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_RESERVED
	CompareConstant(NS_CERT_TYPE_RESERVED,(0x08),16070,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_RESERVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_SSL_CA
	CompareConstant(NS_CERT_TYPE_SSL_CA,(0x04),16071,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_SSL_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_EMAIL_CA
	CompareConstant(NS_CERT_TYPE_EMAIL_CA,(0x02),16072,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_EMAIL_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_OBJECT_SIGNING_CA
	CompareConstant(NS_CERT_TYPE_OBJECT_SIGNING_CA,(0x01),16073,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_OBJECT_SIGNING_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXT_KEY_USAGE_TIME_STAMP
	CompareConstant(EXT_KEY_USAGE_TIME_STAMP,(0x8000),16074,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EXT_KEY_USAGE_TIME_STAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EXT_KEY_USAGE_STATUS_RESPONDER
	CompareConstant(EXT_KEY_USAGE_STATUS_RESPONDER,(0x4000),16075,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: EXT_KEY_USAGE_STATUS_RESPONDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_APP
	CompareConstant(NS_CERT_TYPE_APP, \
	( NS_CERT_TYPE_SSL_CLIENT | NS_CERT_TYPE_SSL_SERVER | \
	NS_CERT_TYPE_EMAIL | NS_CERT_TYPE_OBJECT_SIGNING ),16076,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_APP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NS_CERT_TYPE_CA
	CompareConstant(NS_CERT_TYPE_CA, \
	( NS_CERT_TYPE_SSL_CA | NS_CERT_TYPE_EMAIL_CA | \
	NS_CERT_TYPE_OBJECT_SIGNING_CA | EXT_KEY_USAGE_STATUS_RESPONDER ),16077,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NS_CERT_TYPE_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageSSLClient
	CompareConstant(certificateUsageSSLClient,(0x0001),16078,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageSSLClient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageSSLServer
	CompareConstant(certificateUsageSSLServer,(0x0002),16079,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageSSLServer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageSSLServerWithStepUp
	CompareConstant(certificateUsageSSLServerWithStepUp,(0x0004),16080,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageSSLServerWithStepUp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageSSLCA
	CompareConstant(certificateUsageSSLCA,(0x0008),16081,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageSSLCA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageEmailSigner
	CompareConstant(certificateUsageEmailSigner,(0x0010),16082,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageEmailSigner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageEmailRecipient
	CompareConstant(certificateUsageEmailRecipient,(0x0020),16083,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageEmailRecipient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageObjectSigner
	CompareConstant(certificateUsageObjectSigner,(0x0040),16084,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageObjectSigner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageUserCertImport
	CompareConstant(certificateUsageUserCertImport,(0x0080),16085,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageUserCertImport\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageVerifyCA
	CompareConstant(certificateUsageVerifyCA,(0x0100),16086,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageVerifyCA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageProtectedObjectSigner
	CompareConstant(certificateUsageProtectedObjectSigner,(0x0200),16087,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageProtectedObjectSigner\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageStatusResponder
	CompareConstant(certificateUsageStatusResponder,(0x0400),16088,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageStatusResponder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageAnyCA
	CompareConstant(certificateUsageAnyCA,(0x0800),16089,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageAnyCA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef certificateUsageHighest
	CompareConstant(certificateUsageHighest,certificateUsageAnyCA,16090,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: certificateUsageHighest\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_NICKNAMES_ALL
	CompareConstant(SEC_CERT_NICKNAMES_ALL,1,16091,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_NICKNAMES_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_NICKNAMES_USER
	CompareConstant(SEC_CERT_NICKNAMES_USER,2,16092,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_NICKNAMES_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_NICKNAMES_SERVER
	CompareConstant(SEC_CERT_NICKNAMES_SERVER,3,16093,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_NICKNAMES_SERVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEC_CERT_NICKNAMES_CA
	CompareConstant(SEC_CERT_NICKNAMES_CA,4,16094,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SEC_CERT_NICKNAMES_CA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_DIGITAL_SIGNATURE
	CompareConstant(KU_DIGITAL_SIGNATURE,(0x80),16095,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_DIGITAL_SIGNATURE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_NON_REPUDIATION
	CompareConstant(KU_NON_REPUDIATION,(0x40),16096,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_NON_REPUDIATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_KEY_ENCIPHERMENT
	CompareConstant(KU_KEY_ENCIPHERMENT,(0x20),16097,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_KEY_ENCIPHERMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_DATA_ENCIPHERMENT
	CompareConstant(KU_DATA_ENCIPHERMENT,(0x10),16098,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_DATA_ENCIPHERMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_KEY_AGREEMENT
	CompareConstant(KU_KEY_AGREEMENT,(0x08),16099,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_KEY_AGREEMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_KEY_CERT_SIGN
	CompareConstant(KU_KEY_CERT_SIGN,(0x04),16100,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_KEY_CERT_SIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_CRL_SIGN
	CompareConstant(KU_CRL_SIGN,(0x02),16101,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_CRL_SIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_ALL
	CompareConstant(KU_ALL, \
	(KU_DIGITAL_SIGNATURE | KU_NON_REPUDIATION | KU_KEY_ENCIPHERMENT | \
	KU_DATA_ENCIPHERMENT | KU_KEY_AGREEMENT | KU_KEY_CERT_SIGN | \
	KU_CRL_SIGN),16102,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_ALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_KEY_AGREEMENT_OR_ENCIPHERMENT
	CompareConstant(KU_KEY_AGREEMENT_OR_ENCIPHERMENT,(0x4000),16103,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_KEY_AGREEMENT_OR_ENCIPHERMENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef KU_NS_GOVT_APPROVED
	CompareConstant(KU_NS_GOVT_APPROVED,(0x8000),16104,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: KU_NS_GOVT_APPROVED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CERT_UNLIMITED_PATH_CONSTRAINT
	CompareConstant(CERT_UNLIMITED_PATH_CONSTRAINT,-2,16105,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CERT_UNLIMITED_PATH_CONSTRAINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CERT_MAX_CERT_CHAIN
	CompareConstant(CERT_MAX_CERT_CHAIN,20,16106,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CERT_MAX_CERT_CHAIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_UNUSED
	CompareConstant(RF_UNUSED,(0x80),16107,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_UNUSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_KEY_COMPROMISE
	CompareConstant(RF_KEY_COMPROMISE,(0x40),16108,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_KEY_COMPROMISE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_CA_COMPROMISE
	CompareConstant(RF_CA_COMPROMISE,(0x20),16109,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_CA_COMPROMISE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_AFFILIATION_CHANGED
	CompareConstant(RF_AFFILIATION_CHANGED,(0x10),16110,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_AFFILIATION_CHANGED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_SUPERSEDED
	CompareConstant(RF_SUPERSEDED,(0x08),16111,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_SUPERSEDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_CESSATION_OF_OPERATION
	CompareConstant(RF_CESSATION_OF_OPERATION,(0x04),16112,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_CESSATION_OF_OPERATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RF_CERTIFICATE_HOLD
	CompareConstant(RF_CERTIFICATE_HOLD,(0x02),16113,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RF_CERTIFICATE_HOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef _CERTT_H_
Msg( "Error: Constant not found: _CERTT_H_\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(CERTAVA,0, 34870, 1, 4.0, NULL, 34960, NULL)
#endif

#if 1
CheckTypeSize(CERTAttribute,0, 34875, 1, 4.0, NULL, 35064, NULL)
#endif

#if 1
CheckTypeSize(CERTAuthInfoAccess,0, 34877, 1, 4.0, NULL, 35143, NULL)
#endif

#if 1
CheckTypeSize(CERTAuthKeyID,0, 34879, 1, 4.0, NULL, 35131, NULL)
#endif

#if 1
CheckTypeSize(CERTBasicConstraints,0, 34880, 1, 4.0, NULL, 35118, NULL)
#endif

#if 1
CheckTypeSize(CERTCertExtension,0, 34884, 1, 4.0, NULL, 35019, NULL)
#endif

#if 1
CheckTypeSize(CERTCertList,0, 34889, 1, 4.0, NULL, 35074, NULL)
#endif

#if 1
CheckTypeSize(CERTCertListNode,0, 34891, 1, 4.0, NULL, 35072, NULL)
#endif

#if 1
CheckTypeSize(CERTCertNicknames,0, 34892, 1, 4.0, NULL, 35113, NULL)
#endif

#if 1
CheckTypeSize(CERTCertTrust,0, 34894, 1, 4.0, NULL, 35007, NULL)
#endif

#if 1
CheckTypeSize(CERTSignedData,0, 34896, 1, 4.0, NULL, 35028, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificateList,0, 34898, 1, 4.0, NULL, 35071, NULL)
#endif

#if 1
CheckTypeSize(CERTName,0, 34899, 1, 4.0, NULL, 34972, NULL)
#endif

#if 1
CheckTypeSize(CERTCrl,0, 34901, 1, 4.0, NULL, 35077, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlDistributionPoints,0, 34903, 1, 4.0, NULL, 35136, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlEntry,0, 34904, 1, 4.0, NULL, 35075, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlHeadNode,0, 34905, 1, 4.0, NULL, 35086, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlNode,0, 34909, 1, 4.0, NULL, 35089, NULL)
#endif

#if 1
CheckTypeSize(CERTDistNames,0, 34912, 1, 4.0, NULL, 35093, NULL)
#endif

#if 1
CheckTypeSize(OtherName,0, 34916, 1, 4.0, NULL, 35124, NULL)
#endif

#if 1
CheckTypeSize(CERTGeneralNameList,0, 34917, 1, 4.0, NULL, 35127, NULL)
#endif

#if 1
CheckTypeSize(CERTIssuerAndSN,0, 34921, 1, 4.0, NULL, 35114, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectPublicKeyInfo,0, 34923, 1, 4.0, NULL, 34996, NULL)
#endif

#if 1
CheckTypeSize(CERTGeneralName,0, 34924, 1, 4.0, NULL, 35126, NULL)
#endif

#if 1
CheckTypeSize(CERTNameConstraints,0, 34925, 1, 4.0, NULL, 35129, NULL)
#endif

#if 1
CheckTypeSize(CERTOKDomainName,0, 34926, 1, 4.0, NULL, 35139, NULL)
#endif

#if 1
CheckTypeSize(CERTPrivKeyUsagePeriod,0, 34929, 1, 4.0, NULL, 35130, NULL)
#endif

#if 1
CheckTypeSize(CERTRDN,0, 34932, 1, 4.0, NULL, 34967, NULL)
#endif

#if 1
CheckTypeSize(CERTSignedCrl,0, 34933, 1, 4.0, NULL, 35083, NULL)
#endif

#if 1
CheckTypeSize(CERTValidity,0, 34934, 1, 4.0, NULL, 34981, NULL)
#endif

#if 1
CheckTypeSize(CERTStatusConfig,0, 34936, 1, 4.0, NULL, 35142, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectList,0, 34937, 1, 4.0, NULL, 35026, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectNode,0, 34939, 1, 4.0, NULL, 35022, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificateRequest,0, 34944, 1, 4.0, NULL, 35067, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificate,0, 34946, 1, 4.0, NULL, 34992, NULL)
#endif

#if 1
CheckTypeSize(CERTVerifyLog,0, 34948, 1, 4.0, NULL, 35138, NULL)
#endif

#if 1
CheckTypeSize(CRLDistributionPoint,0, 34953, 1, 4.0, NULL, 35134, NULL)
#endif

#if 1
CheckTypeSize(struct CERTAVAStr,0, 34960, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTAVAStr on All\n");
CheckOffset(struct CERTAVAStr,type,0,1,86370)
CheckOffset(struct CERTAVAStr,value,0,1,86371)
#endif

#if 1
CheckTypeSize(struct CERTRDNStr,0, 34967, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTRDNStr on All\n");
CheckOffset(struct CERTRDNStr,avas,0,1,86563)
#endif

#if 1
CheckTypeSize(struct CERTNameStr,0, 34972, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTNameStr on All\n");
CheckOffset(struct CERTNameStr,arena,0,1,86529)
CheckOffset(struct CERTNameStr,rdns,0,1,86530)
#endif

#if 1
CheckTypeSize(struct CERTValidityStr,0, 34981, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTValidityStr on All\n");
CheckOffset(struct CERTValidityStr,arena,0,1,86605)
CheckOffset(struct CERTValidityStr,notBefore,0,1,86606)
CheckOffset(struct CERTValidityStr,notAfter,0,1,86607)
#endif

#if 1
CheckTypeSize(struct CERTCertificateStr,0, 34992, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertificateStr on All\n");
CheckOffset(struct CERTCertificateStr,arena,0,1,86424)
CheckOffset(struct CERTCertificateStr,subjectName,0,1,86425)
CheckOffset(struct CERTCertificateStr,issuerName,0,1,86426)
CheckOffset(struct CERTCertificateStr,signatureWrap,0,1,86427)
CheckOffset(struct CERTCertificateStr,derCert,0,1,86428)
CheckOffset(struct CERTCertificateStr,derIssuer,0,1,86429)
CheckOffset(struct CERTCertificateStr,derSubject,0,1,86430)
CheckOffset(struct CERTCertificateStr,derPublicKey,0,1,86431)
CheckOffset(struct CERTCertificateStr,certKey,0,1,86432)
CheckOffset(struct CERTCertificateStr,version,0,1,86433)
CheckOffset(struct CERTCertificateStr,serialNumber,0,1,86434)
CheckOffset(struct CERTCertificateStr,signature,0,1,86435)
CheckOffset(struct CERTCertificateStr,issuer,0,1,86436)
CheckOffset(struct CERTCertificateStr,validity,0,1,86437)
CheckOffset(struct CERTCertificateStr,subject,0,1,86438)
CheckOffset(struct CERTCertificateStr,subjectPublicKeyInfo,0,1,86439)
CheckOffset(struct CERTCertificateStr,issuerID,0,1,86440)
CheckOffset(struct CERTCertificateStr,subjectID,0,1,86441)
CheckOffset(struct CERTCertificateStr,extensions,0,1,86442)
CheckOffset(struct CERTCertificateStr,emailAddr,0,1,86443)
CheckOffset(struct CERTCertificateStr,dbhandle,0,1,86444)
CheckOffset(struct CERTCertificateStr,subjectKeyID,0,1,86445)
CheckOffset(struct CERTCertificateStr,keyIDGenerated,0,1,86446)
CheckOffset(struct CERTCertificateStr,keyUsage,0,1,86447)
CheckOffset(struct CERTCertificateStr,rawKeyUsage,0,1,86448)
CheckOffset(struct CERTCertificateStr,keyUsagePresent,0,1,86449)
CheckOffset(struct CERTCertificateStr,nsCertType,0,1,86450)
CheckOffset(struct CERTCertificateStr,keepSession,0,1,86451)
CheckOffset(struct CERTCertificateStr,timeOK,0,1,86452)
CheckOffset(struct CERTCertificateStr,domainOK,0,1,86453)
CheckOffset(struct CERTCertificateStr,isperm,0,1,86454)
CheckOffset(struct CERTCertificateStr,istemp,0,1,86455)
CheckOffset(struct CERTCertificateStr,nickname,0,1,86456)
CheckOffset(struct CERTCertificateStr,dbnickname,0,1,86457)
CheckOffset(struct CERTCertificateStr,nssCertificate,0,1,86458)
CheckOffset(struct CERTCertificateStr,trust,0,1,86459)
CheckOffset(struct CERTCertificateStr,referenceCount,0,1,86460)
CheckOffset(struct CERTCertificateStr,subjectList,0,1,86461)
CheckOffset(struct CERTCertificateStr,authKeyID,0,1,86462)
CheckOffset(struct CERTCertificateStr,isRoot,0,1,86463)
CheckOffset(struct CERTCertificateStr,series,0,1,86465)
CheckOffset(struct CERTCertificateStr,slot,0,1,86466)
CheckOffset(struct CERTCertificateStr,pkcs11ID,0,1,86467)
CheckOffset(struct CERTCertificateStr,ownSlot,0,1,86468)
#endif

#if 1
CheckTypeSize(struct CERTSubjectPublicKeyInfoStr,0, 34996, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTSubjectPublicKeyInfoStr on All\n");
CheckOffset(struct CERTSubjectPublicKeyInfoStr,arena,0,1,86594)
CheckOffset(struct CERTSubjectPublicKeyInfoStr,algorithm,0,1,86595)
CheckOffset(struct CERTSubjectPublicKeyInfoStr,subjectPublicKey,0,1,86596)
#endif

#if 1
CheckTypeSize(struct CERTCertTrustStr,0, 35007, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertTrustStr on All\n");
CheckOffset(struct CERTCertTrustStr,sslFlags,0,1,86413)
CheckOffset(struct CERTCertTrustStr,emailFlags,0,1,86414)
CheckOffset(struct CERTCertTrustStr,objectSigningFlags,0,1,86415)
#endif

#if 1
CheckTypeSize(struct CERTCertExtensionStr,0, 35019, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertExtensionStr on All\n");
CheckOffset(struct CERTCertExtensionStr,id,0,1,86394)
CheckOffset(struct CERTCertExtensionStr,critical,0,1,86395)
CheckOffset(struct CERTCertExtensionStr,value,0,1,86396)
#endif

#if 1
CheckTypeSize(struct CERTSubjectNodeStr,0, 35022, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTSubjectNodeStr on All\n");
CheckOffset(struct CERTSubjectNodeStr,next,0,1,86590)
CheckOffset(struct CERTSubjectNodeStr,prev,0,1,86591)
CheckOffset(struct CERTSubjectNodeStr,certKey,0,1,86592)
CheckOffset(struct CERTSubjectNodeStr,keyID,0,1,86593)
#endif

#if 1
CheckTypeSize(struct CERTSubjectListStr,0, 35026, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTSubjectListStr on All\n");
CheckOffset(struct CERTSubjectListStr,arena,0,1,86584)
CheckOffset(struct CERTSubjectListStr,ncerts,0,1,86585)
CheckOffset(struct CERTSubjectListStr,emailAddr,0,1,86586)
CheckOffset(struct CERTSubjectListStr,head,0,1,86587)
CheckOffset(struct CERTSubjectListStr,tail,0,1,86588)
CheckOffset(struct CERTSubjectListStr,entry,0,1,86589)
#endif

#if 1
CheckTypeSize(struct CERTSignedDataStr,0, 35028, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTSignedDataStr on All\n");
CheckOffset(struct CERTSignedDataStr,data,0,1,86578)
CheckOffset(struct CERTSignedDataStr,signatureAlgorithm,0,1,86579)
CheckOffset(struct CERTSignedDataStr,signature,0,1,86580)
#endif

#if 1
CheckTypeSize(struct CERTAttributeStr,0, 35064, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTAttributeStr on All\n");
CheckOffset(struct CERTAttributeStr,attrType,0,1,86373)
CheckOffset(struct CERTAttributeStr,attrValue,0,1,86374)
#endif

#if 1
CheckTypeSize(struct CERTCertificateRequestStr,0, 35067, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertificateRequestStr on All\n");
CheckOffset(struct CERTCertificateRequestStr,arena,0,1,86419)
CheckOffset(struct CERTCertificateRequestStr,version,0,1,86420)
CheckOffset(struct CERTCertificateRequestStr,subject,0,1,86421)
CheckOffset(struct CERTCertificateRequestStr,subjectPublicKeyInfo,0,1,86422)
CheckOffset(struct CERTCertificateRequestStr,attributes,0,1,86423)
#endif

#if 1
CheckTypeSize(struct CERTCertificateListStr,0, 35071, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertificateListStr on All\n");
CheckOffset(struct CERTCertificateListStr,certs,0,1,86416)
CheckOffset(struct CERTCertificateListStr,len,0,1,86417)
CheckOffset(struct CERTCertificateListStr,arena,0,1,86418)
#endif

#if 1
CheckTypeSize(struct CERTCertListNodeStr,0, 35072, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertListNodeStr on All\n");
CheckOffset(struct CERTCertListNodeStr,links,0,1,86399)
CheckOffset(struct CERTCertListNodeStr,cert,0,1,86400)
CheckOffset(struct CERTCertListNodeStr,appData,0,1,86401)
#endif

#if 1
CheckTypeSize(struct CERTCertListStr,0, 35074, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertListStr on All\n");
CheckOffset(struct CERTCertListStr,list,0,1,86402)
CheckOffset(struct CERTCertListStr,arena,0,1,86403)
#endif

#if 1
CheckTypeSize(struct CERTCrlEntryStr,0, 35075, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCrlEntryStr on All\n");
CheckOffset(struct CERTCrlEntryStr,serialNumber,0,1,86474)
CheckOffset(struct CERTCrlEntryStr,revocationDate,0,1,86475)
CheckOffset(struct CERTCrlEntryStr,extensions,0,1,86476)
#endif

#if 1
CheckTypeSize(struct CERTCrlStr,0, 35077, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCrlStr on All\n");
CheckOffset(struct CERTCrlStr,arena,0,1,86486)
CheckOffset(struct CERTCrlStr,version,0,1,86487)
CheckOffset(struct CERTCrlStr,signatureAlg,0,1,86488)
CheckOffset(struct CERTCrlStr,derName,0,1,86489)
CheckOffset(struct CERTCrlStr,name,0,1,86490)
CheckOffset(struct CERTCrlStr,lastUpdate,0,1,86491)
CheckOffset(struct CERTCrlStr,nextUpdate,0,1,86492)
CheckOffset(struct CERTCrlStr,entries,0,1,86493)
CheckOffset(struct CERTCrlStr,extensions,0,1,86494)
#endif

#if 1
CheckTypeSize(struct CERTSignedCrlStr,0, 35083, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTSignedCrlStr on All\n");
CheckOffset(struct CERTSignedCrlStr,arena,0,1,86564)
CheckOffset(struct CERTSignedCrlStr,crl,0,1,86565)
CheckOffset(struct CERTSignedCrlStr,reserved1,0,1,86566)
CheckOffset(struct CERTSignedCrlStr,reserved2,0,1,86567)
CheckOffset(struct CERTSignedCrlStr,isperm,0,1,86568)
CheckOffset(struct CERTSignedCrlStr,istemp,0,1,86569)
CheckOffset(struct CERTSignedCrlStr,referenceCount,0,1,86570)
CheckOffset(struct CERTSignedCrlStr,dbhandle,0,1,86571)
CheckOffset(struct CERTSignedCrlStr,signatureWrap,0,1,86572)
CheckOffset(struct CERTSignedCrlStr,url,0,1,86573)
CheckOffset(struct CERTSignedCrlStr,derCrl,0,1,86574)
CheckOffset(struct CERTSignedCrlStr,slot,0,1,86575)
CheckOffset(struct CERTSignedCrlStr,pkcs11ID,0,1,86576)
CheckOffset(struct CERTSignedCrlStr,opaque,0,1,86577)
#endif

#if 1
CheckTypeSize(struct CERTCrlHeadNodeStr,0, 35086, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCrlHeadNodeStr on All\n");
CheckOffset(struct CERTCrlHeadNodeStr,arena,0,1,86477)
CheckOffset(struct CERTCrlHeadNodeStr,dbhandle,0,1,86478)
CheckOffset(struct CERTCrlHeadNodeStr,first,0,1,86479)
CheckOffset(struct CERTCrlHeadNodeStr,last,0,1,86480)
#endif

#if 1
CheckTypeSize(struct CERTCrlNodeStr,0, 35089, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCrlNodeStr on All\n");
CheckOffset(struct CERTCrlNodeStr,next,0,1,86483)
CheckOffset(struct CERTCrlNodeStr,type,0,1,86484)
CheckOffset(struct CERTCrlNodeStr,crl,0,1,86485)
#endif

#if 1
CheckTypeSize(struct CERTDistNamesStr,0, 35093, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for CERTDistNamesStr on All\n");
CheckOffset(struct CERTDistNamesStr,arena,0,1,86495)
CheckOffset(struct CERTDistNamesStr,nnames,0,1,86496)
CheckOffset(struct CERTDistNamesStr,names,0,1,86497)
CheckOffset(struct CERTDistNamesStr,head,0,1,86498)
#endif

#if 1
CheckTypeSize(SECCertUsage,0, 35104, 1, 4.0, NULL, 35102, NULL)
#endif

#if 1
CheckTypeSize(SECCertificateUsage,0, 35106, 1, 4.0, NULL, 33308, NULL)
#endif

#if 1
CheckTypeSize(SECCertTimeValidity,0, 35110, 1, 4.0, NULL, 35109, NULL)
#endif

#if 1
CheckTypeSize(CERTCompareValidityStatus,0, 35112, 1, 4.0, NULL, 35111, NULL)
#endif

#if 1
CheckTypeSize(struct CERTCertNicknamesStr,0, 35113, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCertNicknamesStr on All\n");
CheckOffset(struct CERTCertNicknamesStr,arena,0,1,86404)
CheckOffset(struct CERTCertNicknamesStr,head,0,1,86405)
CheckOffset(struct CERTCertNicknamesStr,numnicknames,0,1,86406)
CheckOffset(struct CERTCertNicknamesStr,nicknames,0,1,86407)
CheckOffset(struct CERTCertNicknamesStr,what,0,1,86408)
CheckOffset(struct CERTCertNicknamesStr,totallen,0,1,86409)
#endif

#if 1
CheckTypeSize(struct CERTIssuerAndSNStr,0, 35114, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTIssuerAndSNStr on All\n");
CheckOffset(struct CERTIssuerAndSNStr,derIssuer,0,1,86517)
CheckOffset(struct CERTIssuerAndSNStr,issuer,0,1,86518)
CheckOffset(struct CERTIssuerAndSNStr,serialNumber,0,1,86519)
#endif

#if 1
CheckTypeSize(struct CERTBasicConstraintsStr,0, 35118, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTBasicConstraintsStr on All\n");
CheckOffset(struct CERTBasicConstraintsStr,isCA,0,1,86382)
CheckOffset(struct CERTBasicConstraintsStr,pathLenConstraint,0,1,86383)
#endif

#if 1
CheckTypeSize(CERTGeneralNameType,0, 35123, 1, 4.0, NULL, 35122, NULL)
#endif

#if 1
CheckTypeSize(struct OtherNameStr,0, 35124, 1, , NULL, 0, NULL)
Msg("Missing member data for OtherNameStr on All\n");
CheckOffset(struct OtherNameStr,name,0,1,86989)
CheckOffset(struct OtherNameStr,oid,0,1,86990)
#endif

#if 1
CheckTypeSize(CERTNameConstraint,0, 35125, 1, 4.0, NULL, 35128, NULL)
#endif

#if 1
CheckTypeSize(struct CERTGeneralNameStr,0, 35126, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTGeneralNameStr on All\n");
CheckOffset(struct CERTGeneralNameStr,type,0,1,86504)
CheckOffset(struct CERTGeneralNameStr,name,0,1,86505)
CheckOffset(struct CERTGeneralNameStr,derDirectoryName,0,1,86506)
CheckOffset(struct CERTGeneralNameStr,l,0,1,86507)
#endif

#if 1
CheckTypeSize(struct CERTGeneralNameListStr,0, 35127, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTGeneralNameListStr on All\n");
CheckOffset(struct CERTGeneralNameListStr,arena,0,1,86499)
CheckOffset(struct CERTGeneralNameListStr,name,0,1,86500)
CheckOffset(struct CERTGeneralNameListStr,refCount,0,1,86501)
CheckOffset(struct CERTGeneralNameListStr,len,0,1,86502)
CheckOffset(struct CERTGeneralNameListStr,lock,0,1,86503)
#endif

#if 1
CheckTypeSize(struct CERTNameConstraintStr,0, 35128, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTNameConstraintStr on All\n");
CheckOffset(struct CERTNameConstraintStr,name,0,1,86520)
CheckOffset(struct CERTNameConstraintStr,DERName,0,1,86521)
CheckOffset(struct CERTNameConstraintStr,min,0,1,86522)
CheckOffset(struct CERTNameConstraintStr,max,0,1,86523)
CheckOffset(struct CERTNameConstraintStr,l,0,1,86524)
#endif

#if 1
CheckTypeSize(struct CERTNameConstraintsStr,0, 35129, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTNameConstraintsStr on All\n");
CheckOffset(struct CERTNameConstraintsStr,permited,0,1,86525)
CheckOffset(struct CERTNameConstraintsStr,excluded,0,1,86526)
CheckOffset(struct CERTNameConstraintsStr,DERPermited,0,1,86527)
CheckOffset(struct CERTNameConstraintsStr,DERExcluded,0,1,86528)
#endif

#if 1
CheckTypeSize(struct CERTPrivKeyUsagePeriodStr,0, 35130, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTPrivKeyUsagePeriodStr on All\n");
CheckOffset(struct CERTPrivKeyUsagePeriodStr,notBefore,0,1,86558)
CheckOffset(struct CERTPrivKeyUsagePeriodStr,notAfter,0,1,86559)
CheckOffset(struct CERTPrivKeyUsagePeriodStr,arena,0,1,86560)
#endif

#if 1
CheckTypeSize(struct CERTAuthKeyIDStr,0, 35131, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTAuthKeyIDStr on All\n");
CheckOffset(struct CERTAuthKeyIDStr,keyID,0,1,86378)
CheckOffset(struct CERTAuthKeyIDStr,authCertIssuer,0,1,86379)
CheckOffset(struct CERTAuthKeyIDStr,authCertSerialNumber,0,1,86380)
CheckOffset(struct CERTAuthKeyIDStr,DERAuthCertIssuer,0,1,86381)
#endif

#if 1
CheckTypeSize(DistributionPointTypes,0, 35133, 1, 4.0, NULL, 35132, NULL)
#endif

#if 1
CheckTypeSize(struct CRLDistributionPointStr,0, 35134, 1, , NULL, 0, NULL)
Msg("Missing member data for CRLDistributionPointStr on All\n");
CheckOffset(struct CRLDistributionPointStr,distPointType,0,1,86785)
CheckOffset(struct CRLDistributionPointStr,distPoint,0,1,86786)
CheckOffset(struct CRLDistributionPointStr,reasons,0,1,86787)
CheckOffset(struct CRLDistributionPointStr,crlIssuer,0,1,86788)
CheckOffset(struct CRLDistributionPointStr,derDistPoint,0,1,86789)
CheckOffset(struct CRLDistributionPointStr,derRelativeName,0,1,86790)
CheckOffset(struct CRLDistributionPointStr,derCrlIssuer,0,1,86791)
CheckOffset(struct CRLDistributionPointStr,derFullName,0,1,86792)
CheckOffset(struct CRLDistributionPointStr,bitsmap,0,1,86793)
#endif

#if 1
CheckTypeSize(struct CERTCrlDistributionPointsStr,0, 35136, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTCrlDistributionPointsStr on All\n");
CheckOffset(struct CERTCrlDistributionPointsStr,distPoints,0,1,86473)
#endif

#if 1
CheckTypeSize(struct CERTVerifyLogNodeStr,0, 35137, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for CERTVerifyLogNodeStr on All\n");
CheckOffset(struct CERTVerifyLogNodeStr,cert,0,1,86608)
CheckOffset(struct CERTVerifyLogNodeStr,error,0,1,86609)
CheckOffset(struct CERTVerifyLogNodeStr,depth,0,1,86610)
CheckOffset(struct CERTVerifyLogNodeStr,arg,0,1,86611)
CheckOffset(struct CERTVerifyLogNodeStr,next,0,1,86612)
CheckOffset(struct CERTVerifyLogNodeStr,prev,0,1,86613)
#endif

#if 1
CheckTypeSize(struct CERTVerifyLogStr,0, 35138, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTVerifyLogStr on All\n");
CheckOffset(struct CERTVerifyLogStr,arena,0,1,86614)
CheckOffset(struct CERTVerifyLogStr,count,0,1,86615)
CheckOffset(struct CERTVerifyLogStr,head,0,1,86616)
CheckOffset(struct CERTVerifyLogStr,tail,0,1,86617)
#endif

#if 1
CheckTypeSize(struct CERTOKDomainNameStr,0, 35139, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTOKDomainNameStr on All\n");
CheckOffset(struct CERTOKDomainNameStr,next,0,1,86556)
CheckOffset(struct CERTOKDomainNameStr,name,0,1,86557)
#endif

#if 1
CheckTypeSize(CERTStatusChecker,0, 35140, 1, 4.0, NULL, 33996, NULL)
#endif

#if 1
CheckTypeSize(CERTStatusDestroy,0, 35141, 1, 4.0, NULL, 34592, NULL)
#endif

#if 1
CheckTypeSize(struct CERTStatusConfigStr,0, 35142, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTStatusConfigStr on All\n");
CheckOffset(struct CERTStatusConfigStr,statusChecker,0,1,86581)
CheckOffset(struct CERTStatusConfigStr,statusDestroy,0,1,86582)
CheckOffset(struct CERTStatusConfigStr,statusContext,0,1,86583)
#endif

#if 1
CheckTypeSize(struct CERTAuthInfoAccessStr,0, 35143, 1, , NULL, 0, NULL)
Msg("Missing member data for CERTAuthInfoAccessStr on All\n");
CheckOffset(struct CERTAuthInfoAccessStr,method,0,1,86375)
CheckOffset(struct CERTAuthInfoAccessStr,derLocation,0,1,86376)
CheckOffset(struct CERTAuthInfoAccessStr,location,0,1,86377)
#endif

#if 1
CheckTypeSize(CERTPolicyQualifier,0, 35144, 1, 4.0, NULL, 34609, NULL)
#endif

#if 1
CheckTypeSize(CERTPolicyInfo,0, 35145, 1, 4.0, NULL, 33553, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificatePolicies,0, 35146, 1, 4.0, NULL, 33413, NULL)
#endif

#if 1
CheckTypeSize(CERTNoticeReference,0, 35147, 1, 4.0, NULL, 34779, NULL)
#endif

#if 1
CheckTypeSize(CERTUserNotice,0, 35148, 1, 4.0, NULL, 32593, NULL)
#endif

#if 1
CheckTypeSize(CERTOidSequence,0, 35149, 1, 4.0, NULL, 34080, NULL)
#endif

#if 1
/* All */
typedef SECStatus (*CERTStatusChecker_db)(CERTCertDBHandle *, CERTCertificate *, PRInt64, void *);
CheckFunctionTypedef(CERTStatusChecker,CERTStatusChecker_db);
#endif

#if 1
/* All */
typedef SECStatus (*CERTStatusDestroy_db)(CERTStatusConfig *);
CheckFunctionTypedef(CERTStatusDestroy,CERTStatusDestroy_db);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/certt.h\n\n",pcnt,cnt);
return cnt;
#endif

}

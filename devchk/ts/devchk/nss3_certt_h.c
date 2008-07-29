/*
 * Test of nss3/certt.h
 */
#include "hdrchk.h"
#include <stdio.h>
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
/* No test for NS_CERT_TYPE_APP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for NS_CERT_TYPE_CA */
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
/* No test for certificateUsageHighest */
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
/* No test for KU_ALL */
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

#if 1
CheckTypeSize(CERTAVA,0, 1005753, 1, 4.0, NULL, 1005843, NULL)
#endif

#if 1
CheckTypeSize(CERTAttribute,0, 1005758, 1, 4.0, NULL, 1005947, NULL)
#endif

#if 1
CheckTypeSize(CERTAuthInfoAccess,0, 1005760, 1, 4.0, NULL, 1006026, NULL)
#endif

#if 1
CheckTypeSize(CERTAuthKeyID,0, 1005762, 1, 4.0, NULL, 1006014, NULL)
#endif

#if 1
CheckTypeSize(CERTBasicConstraints,0, 1005763, 1, 4.0, NULL, 1006001, NULL)
#endif

#if 1
CheckTypeSize(CERTCertExtension,0, 1005767, 1, 4.0, NULL, 1005902, NULL)
#endif

#if 1
CheckTypeSize(CERTCertList,0, 1005772, 1, 4.0, NULL, 1005957, NULL)
#endif

#if 1
CheckTypeSize(CERTCertListNode,0, 1005774, 1, 4.0, NULL, 1005955, NULL)
#endif

#if 1
CheckTypeSize(CERTCertNicknames,0, 1005775, 1, 4.0, NULL, 1005996, NULL)
#endif

#if 1
CheckTypeSize(CERTCertTrust,0, 1005777, 1, 4.0, NULL, 1005890, NULL)
#endif

#if 1
CheckTypeSize(CERTSignedData,0, 1005779, 1, 4.0, NULL, 1005911, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificateList,0, 1005781, 1, 4.0, NULL, 1005954, NULL)
#endif

#if 1
CheckTypeSize(CERTName,0, 1005782, 1, 4.0, NULL, 1005855, NULL)
#endif

#if 1
CheckTypeSize(CERTCrl,0, 1005784, 1, 4.0, NULL, 1005960, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlDistributionPoints,0, 1005786, 1, 4.0, NULL, 1006019, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlEntry,0, 1005787, 1, 4.0, NULL, 1005958, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlHeadNode,0, 1005788, 1, 4.0, NULL, 1005969, NULL)
#endif

#if 1
CheckTypeSize(CERTCrlNode,0, 1005792, 1, 4.0, NULL, 1005972, NULL)
#endif

#if 1
CheckTypeSize(CERTDistNames,0, 1005795, 1, 4.0, NULL, 1005976, NULL)
#endif

#if 1
CheckTypeSize(OtherName,0, 1005799, 1, 4.0, NULL, 1006007, NULL)
#endif

#if 1
CheckTypeSize(CERTGeneralNameList,0, 1005800, 1, 4.0, NULL, 1006010, NULL)
#endif

#if 1
CheckTypeSize(CERTIssuerAndSN,0, 1005804, 1, 4.0, NULL, 1005997, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectPublicKeyInfo,0, 1005806, 1, 4.0, NULL, 1005879, NULL)
#endif

#if 1
CheckTypeSize(CERTGeneralName,0, 1005807, 1, 4.0, NULL, 1006009, NULL)
#endif

#if 1
CheckTypeSize(CERTNameConstraints,0, 1005808, 1, 4.0, NULL, 1006012, NULL)
#endif

#if 1
CheckTypeSize(CERTOKDomainName,0, 1005809, 1, 4.0, NULL, 1006022, NULL)
#endif

#if 1
CheckTypeSize(CERTPrivKeyUsagePeriod,0, 1005812, 1, 4.0, NULL, 1006013, NULL)
#endif

#if 1
CheckTypeSize(CERTRDN,0, 1005815, 1, 4.0, NULL, 1005850, NULL)
#endif

#if 1
CheckTypeSize(CERTSignedCrl,0, 1005816, 1, 4.0, NULL, 1005966, NULL)
#endif

#if 1
CheckTypeSize(CERTValidity,0, 1005817, 1, 4.0, NULL, 1005864, NULL)
#endif

#if 1
CheckTypeSize(CERTStatusConfig,0, 1005819, 1, 4.0, NULL, 1006025, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectList,0, 1005820, 1, 4.0, NULL, 1005909, NULL)
#endif

#if 1
CheckTypeSize(CERTSubjectNode,0, 1005822, 1, 4.0, NULL, 1005905, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificateRequest,0, 1005827, 1, 4.0, NULL, 1005950, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificate,0, 1005829, 1, 4.0, NULL, 1005875, NULL)
#endif

#if 1
CheckTypeSize(CERTVerifyLog,0, 1005831, 1, 4.0, NULL, 1006021, NULL)
#endif

#if 1
CheckTypeSize(CRLDistributionPoint,0, 1005836, 1, 4.0, NULL, 1006017, NULL)
#endif

#if 1
CheckTypeSize(struct CERTDistNamesStr,0, 1005976, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for CERTDistNamesStr on All\n");
CheckOffset(struct CERTDistNamesStr,arena,0,1,86495)
CheckOffset(struct CERTDistNamesStr,nnames,0,1,86496)
CheckOffset(struct CERTDistNamesStr,names,0,1,86497)
CheckOffset(struct CERTDistNamesStr,head,0,1,86498)
#endif

#if 1
CheckTypeSize(SECCertUsage,0, 1005987, 1, 4.0, NULL, 1005985, NULL)
#endif

#if 1
CheckTypeSize(SECCertificateUsage,0, 1005989, 1, 4.0, NULL, 1002180, NULL)
#endif

#if 1
CheckTypeSize(SECCertTimeValidity,0, 1005993, 1, 4.0, NULL, 1005992, NULL)
#endif

#if 1
CheckTypeSize(CERTCompareValidityStatus,0, 1005995, 1, 4.0, NULL, 1005994, NULL)
#endif

#if 1
CheckTypeSize(CERTGeneralNameType,0, 1006006, 1, 4.0, NULL, 1006005, NULL)
#endif

#if 1
CheckTypeSize(CERTNameConstraint,0, 1006008, 1, 4.0, NULL, 1006011, NULL)
#endif

#if 1
CheckTypeSize(DistributionPointTypes,0, 1006016, 1, 4.0, NULL, 1006015, NULL)
#endif

#if 1
CheckTypeSize(struct CERTVerifyLogNodeStr,0, 1006020, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for CERTVerifyLogNodeStr on All\n");
CheckOffset(struct CERTVerifyLogNodeStr,cert,0,1,86608)
CheckOffset(struct CERTVerifyLogNodeStr,error,0,1,86609)
CheckOffset(struct CERTVerifyLogNodeStr,depth,0,1,86610)
CheckOffset(struct CERTVerifyLogNodeStr,arg,0,1,86611)
CheckOffset(struct CERTVerifyLogNodeStr,next,0,1,86612)
CheckOffset(struct CERTVerifyLogNodeStr,prev,0,1,86613)
#endif

#if 1
CheckTypeSize(CERTStatusChecker,0, 1006023, 1, 4.0, NULL, 1003811, NULL)
#endif

#if 1
CheckTypeSize(CERTStatusDestroy,0, 1006024, 1, 4.0, NULL, 1005170, NULL)
#endif

#if 1
CheckTypeSize(CERTPolicyQualifier,0, 1006027, 1, 4.0, NULL, 1005202, NULL)
#endif

#if 1
CheckTypeSize(CERTPolicyInfo,0, 1006028, 1, 4.0, NULL, 1002781, NULL)
#endif

#if 1
CheckTypeSize(CERTCertificatePolicies,0, 1006029, 1, 4.0, NULL, 1002458, NULL)
#endif

#if 1
CheckTypeSize(CERTNoticeReference,0, 1006030, 1, 4.0, NULL, 1005571, NULL)
#endif

#if 1
CheckTypeSize(CERTUserNotice,0, 1006031, 1, 4.0, NULL, 1000446, NULL)
#endif

#if 1
CheckTypeSize(CERTOidSequence,0, 1006032, 1, 4.0, NULL, 1004009, NULL)
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

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

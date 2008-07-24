/*
 * Test of nss3/cert.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/cert.h"



#ifdef TET_TEST
void nss3_cert_h()
{
#else
int nss3_cert_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/cert.h\n");
#endif

printf("Checking data structures in nss3/cert.h\n");
extern void CERT_DestroyCertificate_db(CERTCertificate *);
CheckInterfacedef(CERT_DestroyCertificate,CERT_DestroyCertificate_db);
extern CERTCertificate * CERT_DupCertificate_db(CERTCertificate *);
CheckInterfacedef(CERT_DupCertificate,CERT_DupCertificate_db);
extern CERTCertDBHandle * CERT_GetDefaultCertDB_db(void);
CheckInterfacedef(CERT_GetDefaultCertDB,CERT_GetDefaultCertDB_db);
extern SECStatus CERT_VerifyCertName_db(CERTCertificate *, const char *);
CheckInterfacedef(CERT_VerifyCertName,CERT_VerifyCertName_db);
extern SECCertTimeValidity CERT_CheckCertValidTimes_db(CERTCertificate *, PRTime, PRBool);
CheckInterfacedef(CERT_CheckCertValidTimes,CERT_CheckCertValidTimes_db);
extern SECStatus CERT_VerifyCertNow_db(CERTCertDBHandle *, CERTCertificate *, PRBool, SECCertUsage, void *);
CheckInterfacedef(CERT_VerifyCertNow,CERT_VerifyCertNow_db);
extern CERTCertNicknames * CERT_GetCertNicknames_db(CERTCertDBHandle *, int, void *);
CheckInterfacedef(CERT_GetCertNicknames,CERT_GetCertNicknames_db);
extern void CERT_FreeNicknames_db(CERTCertNicknames *);
CheckInterfacedef(CERT_FreeNicknames,CERT_FreeNicknames_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/cert.h\n\n",pcnt,cnt);
return cnt;
#endif

}

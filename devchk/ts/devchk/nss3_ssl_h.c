/*
 * Test of nss3/ssl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/ssl.h"



#ifdef TET_TEST
void nss3_ssl_h()
{
#else
int nss3_ssl_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/ssl.h\n");
#endif

printf("Checking data structures in nss3/ssl.h\n");
#if 1
CheckTypeSize(SSLAuthCertificate,0, 1007904, 1, 4.0, NULL, 1007678, NULL)
#endif

#if 1
CheckTypeSize(SSLGetClientAuthData,0, 1007906, 1, 4.0, NULL, 1007083, NULL)
#endif

#if 1
CheckTypeSize(SSLBadCertHandler,0, 1007911, 1, 4.0, NULL, 1006971, NULL)
#endif

#if 1
CheckTypeSize(SSLHandshakeCallback,0, 1007922, 1, 4.0, NULL, 1006612, NULL)
#endif

extern PRFileDesc * SSL_ImportFD_db(PRFileDesc *, PRFileDesc *);
CheckInterfacedef(SSL_ImportFD,SSL_ImportFD_db);
extern SECStatus SSL_OptionSet_db(PRFileDesc *, PRInt32, PRBool);
CheckInterfacedef(SSL_OptionSet,SSL_OptionSet_db);
extern SECStatus SSL_OptionGet_db(PRFileDesc *, PRInt32, PRBool *);
CheckInterfacedef(SSL_OptionGet,SSL_OptionGet_db);
extern SECStatus SSL_OptionSetDefault_db(PRInt32, PRBool);
CheckInterfacedef(SSL_OptionSetDefault,SSL_OptionSetDefault_db);
extern SECStatus SSL_OptionGetDefault_db(PRInt32, PRBool *);
CheckInterfacedef(SSL_OptionGetDefault,SSL_OptionGetDefault_db);
extern SECStatus SSL_CipherPrefSet_db(PRFileDesc *, PRInt32, PRBool);
CheckInterfacedef(SSL_CipherPrefSet,SSL_CipherPrefSet_db);
extern SECStatus SSL_CipherPrefGet_db(PRFileDesc *, PRInt32, PRBool *);
CheckInterfacedef(SSL_CipherPrefGet,SSL_CipherPrefGet_db);
extern SECStatus SSL_CipherPrefSetDefault_db(PRInt32, PRBool);
CheckInterfacedef(SSL_CipherPrefSetDefault,SSL_CipherPrefSetDefault_db);
extern SECStatus SSL_CipherPrefGetDefault_db(PRInt32, PRBool *);
CheckInterfacedef(SSL_CipherPrefGetDefault,SSL_CipherPrefGetDefault_db);
extern SECStatus SSL_CipherPolicySet_db(PRInt32, PRInt32);
CheckInterfacedef(SSL_CipherPolicySet,SSL_CipherPolicySet_db);
extern SECStatus SSL_CipherPolicyGet_db(PRInt32, PRInt32 *);
CheckInterfacedef(SSL_CipherPolicyGet,SSL_CipherPolicyGet_db);
extern SECStatus SSL_ResetHandshake_db(PRFileDesc *, PRBool);
CheckInterfacedef(SSL_ResetHandshake,SSL_ResetHandshake_db);
extern SECStatus SSL_ForceHandshake_db(PRFileDesc *);
CheckInterfacedef(SSL_ForceHandshake,SSL_ForceHandshake_db);
extern SECStatus SSL_SecurityStatus_db(PRFileDesc *, int *, char * *, int *, int *, char * *, char * *);
CheckInterfacedef(SSL_SecurityStatus,SSL_SecurityStatus_db);
extern CERTCertificate * SSL_PeerCertificate_db(PRFileDesc *);
CheckInterfacedef(SSL_PeerCertificate,SSL_PeerCertificate_db);
extern SECStatus SSL_AuthCertificateHook_db(PRFileDesc *, SSLAuthCertificate, void *);
CheckInterfacedef(SSL_AuthCertificateHook,SSL_AuthCertificateHook_db);
extern SECStatus SSL_AuthCertificate_db(void *, PRFileDesc *, PRBool, PRBool);
CheckInterfacedef(SSL_AuthCertificate,SSL_AuthCertificate_db);
extern SECStatus SSL_GetClientAuthDataHook_db(PRFileDesc *, SSLGetClientAuthData, void *);
CheckInterfacedef(SSL_GetClientAuthDataHook,SSL_GetClientAuthDataHook_db);
extern SECStatus SSL_SetPKCS11PinArg_db(PRFileDesc *, void *);
CheckInterfacedef(SSL_SetPKCS11PinArg,SSL_SetPKCS11PinArg_db);
extern SECStatus SSL_BadCertHook_db(PRFileDesc *, SSLBadCertHandler, void *);
CheckInterfacedef(SSL_BadCertHook,SSL_BadCertHook_db);
extern SECStatus SSL_ConfigSecureServer_db(PRFileDesc *, CERTCertificate *, SECKEYPrivateKey *, SSLKEAType);
CheckInterfacedef(SSL_ConfigSecureServer,SSL_ConfigSecureServer_db);
extern SECStatus SSL_ConfigServerSessionIDCache_db(int, PRUint32, PRUint32, const char *);
CheckInterfacedef(SSL_ConfigServerSessionIDCache,SSL_ConfigServerSessionIDCache_db);
extern SECStatus SSL_ConfigMPServerSIDCache_db(int, PRUint32, PRUint32, const char *);
CheckInterfacedef(SSL_ConfigMPServerSIDCache,SSL_ConfigMPServerSIDCache_db);
extern SECStatus SSL_InheritMPServerSIDCache_db(const char *);
CheckInterfacedef(SSL_InheritMPServerSIDCache,SSL_InheritMPServerSIDCache_db);
extern SECStatus SSL_HandshakeCallback_db(PRFileDesc *, SSLHandshakeCallback, void *);
CheckInterfacedef(SSL_HandshakeCallback,SSL_HandshakeCallback_db);
extern SECStatus SSL_ReHandshake_db(PRFileDesc *, PRBool);
CheckInterfacedef(SSL_ReHandshake,SSL_ReHandshake_db);
extern SECStatus SSL_SetURL_db(PRFileDesc *, const char *);
CheckInterfacedef(SSL_SetURL,SSL_SetURL_db);
extern int SSL_DataPending_db(PRFileDesc *);
CheckInterfacedef(SSL_DataPending,SSL_DataPending_db);
extern SECStatus SSL_InvalidateSession_db(PRFileDesc *);
CheckInterfacedef(SSL_InvalidateSession,SSL_InvalidateSession_db);
extern SECItem * SSL_GetSessionID_db(PRFileDesc *);
CheckInterfacedef(SSL_GetSessionID,SSL_GetSessionID_db);
extern void SSL_ClearSessionCache_db(void);
CheckInterfacedef(SSL_ClearSessionCache,SSL_ClearSessionCache_db);
extern SECStatus SSL_SetSockPeerID_db(PRFileDesc *, char *);
CheckInterfacedef(SSL_SetSockPeerID,SSL_SetSockPeerID_db);
extern void * SSL_RevealPinArg_db(PRFileDesc *);
CheckInterfacedef(SSL_RevealPinArg,SSL_RevealPinArg_db);
extern char * SSL_RevealURL_db(PRFileDesc *);
CheckInterfacedef(SSL_RevealURL,SSL_RevealURL_db);
extern SECStatus NSS_GetClientAuthData_db(void *, PRFileDesc *, struct CERTDistNamesStr *, struct CERTCertificateStr * *, struct SECKEYPrivateKeyStr * *);
CheckInterfacedef(NSS_GetClientAuthData,NSS_GetClientAuthData_db);
extern SECStatus NSS_CmpCertChainWCANames_db(CERTCertificate *, CERTDistNames *);
CheckInterfacedef(NSS_CmpCertChainWCANames,NSS_CmpCertChainWCANames_db);
extern SSLKEAType NSS_FindCertKEAType_db(CERTCertificate *);
CheckInterfacedef(NSS_FindCertKEAType,NSS_FindCertKEAType_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/ssl.h\n\n",pcnt,cnt);
return cnt;
#endif

}

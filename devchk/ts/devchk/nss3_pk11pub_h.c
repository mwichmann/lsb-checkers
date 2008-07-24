/*
 * Test of nss3/pk11pub.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/pk11pub.h"



#ifdef TET_TEST
void nss3_pk11pub_h()
{
#else
int nss3_pk11pub_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/pk11pub.h\n");
#endif

printf("Checking data structures in nss3/pk11pub.h\n");
extern void PK11_SetPasswordFunc_db(PK11PasswordFunc);
CheckInterfacedef(PK11_SetPasswordFunc,PK11_SetPasswordFunc_db);
extern PRBool PK11_IsReadOnly_db(PK11SlotInfo *);
CheckInterfacedef(PK11_IsReadOnly,PK11_IsReadOnly_db);
extern char * PK11_GetTokenName_db(PK11SlotInfo *);
CheckInterfacedef(PK11_GetTokenName,PK11_GetTokenName_db);
extern char * PK11_GetSlotName_db(PK11SlotInfo *);
CheckInterfacedef(PK11_GetSlotName,PK11_GetSlotName_db);
extern PRBool PK11_IsHW_db(PK11SlotInfo *);
CheckInterfacedef(PK11_IsHW,PK11_IsHW_db);
extern PRBool PK11_IsPresent_db(PK11SlotInfo *);
CheckInterfacedef(PK11_IsPresent,PK11_IsPresent_db);
extern SECKEYPrivateKey * PK11_FindKeyByAnyCert_db(CERTCertificate *, void *);
CheckInterfacedef(PK11_FindKeyByAnyCert,PK11_FindKeyByAnyCert_db);
extern CERTCertificate * PK11_FindCertFromNickname_db(const char *, void *);
CheckInterfacedef(PK11_FindCertFromNickname,PK11_FindCertFromNickname_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/pk11pub.h\n\n",pcnt,cnt);
return cnt;
#endif

}

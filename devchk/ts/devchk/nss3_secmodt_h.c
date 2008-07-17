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
CheckTypeSize(PK11MergeLog,0, 1005983, 1, 4.0, NULL, 1005988, NULL)
#endif

#if 1
CheckTypeSize(PK11MergeLogNode,0, 1005984, 1, 4.0, NULL, 1005986, NULL)
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

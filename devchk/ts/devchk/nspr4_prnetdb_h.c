/*
 * Test of nspr4/prnetdb.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prnetdb.h"



#ifdef TET_TEST
void nspr4_prnetdb_h()
{
#else
int nspr4_prnetdb_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prnetdb.h\n");
#endif

printf("Checking data structures in nspr4/prnetdb.h\n");
#if 1
CheckTypeSize(PRHostEnt,0, 1005034, 1, 4.0, NULL, 1006098, NULL)
#endif

extern PRAddrInfo * PR_GetAddrInfoByName_db(const char *, PRUint16, PRIntn);
CheckInterfacedef(PR_GetAddrInfoByName,PR_GetAddrInfoByName_db);
extern void * PR_EnumerateAddrInfo_db(void *, const PRAddrInfo *, PRUint16, PRNetAddr *);
CheckInterfacedef(PR_EnumerateAddrInfo,PR_EnumerateAddrInfo_db);
extern void PR_FreeAddrInfo_db(PRAddrInfo *);
CheckInterfacedef(PR_FreeAddrInfo,PR_FreeAddrInfo_db);
extern PRStatus PR_StringToNetAddr_db(const char *, PRNetAddr *);
CheckInterfacedef(PR_StringToNetAddr,PR_StringToNetAddr_db);
extern PRStatus PR_NetAddrToString_db(const PRNetAddr *, char *, PRUint32);
CheckInterfacedef(PR_NetAddrToString,PR_NetAddrToString_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prnetdb.h\n\n",pcnt,cnt);
return cnt;
#endif

}

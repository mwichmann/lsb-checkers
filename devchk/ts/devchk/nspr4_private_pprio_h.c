/*
 * Test of nspr4/private/pprio.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/private/pprio.h"



#ifdef TET_TEST
void nspr4_private_pprio_h()
{
#else
int nspr4_private_pprio_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/private/pprio.h\n");
#endif

printf("Checking data structures in nspr4/private/pprio.h\n");
#if 1
CheckTypeSize(PROsfd,0, 1009176, 1, 4.0, NULL, 1000298, NULL)
#endif

extern PRFileDesc * PR_ImportTCPSocket_db(PROsfd);
CheckInterfacedef(PR_ImportTCPSocket,PR_ImportTCPSocket_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/private/pprio.h\n\n",pcnt,cnt);
return cnt;
#endif

}

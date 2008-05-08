/*
 * Test of rpc/rpc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/rpc.h"



#ifdef TET_TEST
void rpc_rpc_h()
{
#else
int rpc_rpc_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/rpc.h\n");
#endif

printf("Checking data structures in rpc/rpc.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/types.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on netinet/in.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/xdr.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/clnt.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/rpc_msg.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth_unix.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth_des.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/svc.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/rpc.h\n\n",pcnt,cnt);
return cnt;
#endif

}

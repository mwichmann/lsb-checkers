/*
 * Test of netinet/tcp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "netinet/tcp.h"



#ifdef TET_TEST
void netinet_tcp_h()
{
#else
int netinet_tcp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in netinet/tcp.h\n");
#endif

printf("Checking data structures in netinet/tcp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SOL_TCP
	CompareConstant(SOL_TCP,6,3331,architecture)
#else
Msg( "Error: Constant not found: SOL_TCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_NODELAY
	CompareConstant(TCP_NODELAY,1,4519,architecture)
#else
Msg( "Error: Constant not found: TCP_NODELAY\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/tcp.h\n\n",pcnt,cnt);
return cnt;
#endif

}

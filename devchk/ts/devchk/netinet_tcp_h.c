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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in netinet/tcp.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
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
printf("%d tests in netinet/tcp.h\n",cnt);
return cnt;
#endif

}

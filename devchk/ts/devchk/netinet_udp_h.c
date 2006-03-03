/*
 * Test of netinet/udp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "netinet/udp.h"



#ifdef TET_TEST
void netinet_udp_h()
{
#else
int netinet_udp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in netinet/udp.h\n");
#endif

printf("Checking data structures in netinet/udp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SOL_UDP
	CompareConstant(SOL_UDP,17,3332,architecture)
#else
Msg( "Error: Constant not found: SOL_UDP\n");
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
printf("%d tests passed out of %d tests in netinet/udp.h\n\n",pcnt,cnt);
return cnt;
#endif

}

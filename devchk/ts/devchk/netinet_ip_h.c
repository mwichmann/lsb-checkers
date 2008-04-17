/*
 * Test of netinet/ip.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "netinet/ip.h"



#ifdef TET_TEST
void netinet_ip_h()
{
#else
int netinet_ip_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in netinet/ip.h\n");
#endif

printf("Checking data structures in netinet/ip.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_TOS_MASK
	CompareConstant(IPTOS_TOS_MASK,0x1e,5267,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_TOS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_LOWDELAY
	CompareConstant(IPTOS_LOWDELAY,0x10,5269,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_LOWDELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_THROUGHPUT
	CompareConstant(IPTOS_THROUGHPUT,0x08,5270,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_THROUGHPUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_RELIABILITY
	CompareConstant(IPTOS_RELIABILITY,0x04,5271,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_RELIABILITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_LOWCOST
	CompareConstant(IPTOS_LOWCOST,0x02,5272,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_LOWCOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_MINCOST
	CompareConstant(IPTOS_MINCOST,IPTOS_LOWCOST,5273,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_MINCOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_PREC_MASK
	CompareConstant(IPTOS_PREC_MASK,0xe0,5274,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_PREC_MASK\n");
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
printf("%d tests passed out of %d tests in netinet/ip.h\n\n",pcnt,cnt);
return cnt;
#endif

}

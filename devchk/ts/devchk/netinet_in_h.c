/*
 * Test of netinet/in.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "netinet/in.h"



#ifdef TET_TEST
void netinet_in_h()
{
#else
int netinet_in_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in netinet/in.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IP_TOS
	CompareConstant(IP_TOS,1,4662,architecture)
#else
Msg( "Error: Constant not found: IP_TOS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IP
	CompareConstant(IPPROTO_IP,0,4445,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_IP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_ICMP
	CompareConstant(IPPROTO_ICMP,1,4447,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_ICMP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IGMP
	CompareConstant(IPPROTO_IGMP,2,4448,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_IGMP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_TCP
	CompareConstant(IPPROTO_TCP,6,4450,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_TCP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_UDP
	CompareConstant(IPPROTO_UDP,17,4453,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_UDP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef IPPROTO_RAW
	CompareConstant(IPPROTO_RAW,255,4470,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_RAW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef INADDR_ANY
	CompareConstant(INADDR_ANY,0,4489,architecture)
#else
Msg( "Error: Constant not found: INADDR_ANY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef INADDR_BROADCAST
	CompareConstant(INADDR_BROADCAST,(0xffffffff),4490,architecture)
#else
Msg( "Error: Constant not found: INADDR_BROADCAST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef INADDR_NONE
	CompareConstant(INADDR_NONE,((unsigned long int) 0xffffffff),4491,architecture)
#else
Msg( "Error: Constant not found: INADDR_NONE\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct in_addr,4, 10143, 2)
#elif __ia64__
CheckTypeSize(struct in_addr,4, 10143, 3)
#elif __powerpc__
CheckTypeSize(struct in_addr,4, 10143, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10143,0);
Msg("Find size of in_addr (10143)\n");
#endif

#ifdef __i386__
CheckTypeSize(in_addr_t,4, 10302, 2)
#elif __powerpc__
CheckTypeSize(in_addr_t,4, 10302, 6)
#elif __ia64__
CheckTypeSize(in_addr_t,4, 10302, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10302,0);
Msg("Find size of in_addr_t (10302)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct sockaddr_in,16, 9141, 2)
#elif __ia64__
CheckTypeSize(struct sockaddr_in,16, 9141, 3)
#elif __powerpc__
CheckTypeSize(struct sockaddr_in,16, 9141, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9141,0);
Msg("Find size of sockaddr_in (9141)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in netinet/in.h\n",cnt);
return cnt;
#endif

}

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

#if _LSB_DEFAULT_ARCH
#ifdef SOL_IP
	CompareConstant(SOL_IP,0,3330,architecture)
#else
Msg( "Error: Constant not found: SOL_IP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IP
	CompareConstant(IPPROTO_IP,0,4445,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_IP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_ICMP
	CompareConstant(IPPROTO_ICMP,1,4447,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_ICMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IGMP
	CompareConstant(IPPROTO_IGMP,2,4448,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_IGMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_TCP
	CompareConstant(IPPROTO_TCP,6,4450,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_TCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_UDP
	CompareConstant(IPPROTO_UDP,17,4453,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_UDP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_RAW
	CompareConstant(IPPROTO_RAW,255,4470,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_ANY
	CompareConstant(INADDR_ANY,0,4489,architecture)
#else
Msg( "Error: Constant not found: INADDR_ANY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_BROADCAST
	CompareConstant(INADDR_BROADCAST,(0xffffffff),4490,architecture)
#else
Msg( "Error: Constant not found: INADDR_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_NONE
	CompareConstant(INADDR_NONE,((unsigned long int) 0xffffffff),4491,architecture)
#else
Msg( "Error: Constant not found: INADDR_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_TOS
	CompareConstant(IP_TOS,1,4662,architecture)
#else
Msg( "Error: Constant not found: IP_TOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_IF
	CompareConstant(IP_MULTICAST_IF,32,4681,architecture)
#else
Msg( "Error: Constant not found: IP_MULTICAST_IF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_TTL
	CompareConstant(IP_MULTICAST_TTL,33,4682,architecture)
#else
Msg( "Error: Constant not found: IP_MULTICAST_TTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_LOOP
	CompareConstant(IP_MULTICAST_LOOP,34,4683,architecture)
#else
Msg( "Error: Constant not found: IP_MULTICAST_LOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_ADD_MEMBERSHIP
	CompareConstant(IP_ADD_MEMBERSHIP,35,4684,architecture)
#else
Msg( "Error: Constant not found: IP_ADD_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_DROP_MEMBERSHIP
	CompareConstant(IP_DROP_MEMBERSHIP,36,4685,architecture)
#else
Msg( "Error: Constant not found: IP_DROP_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct in_addr,4, 10143, 1)
CheckMemberSize(struct in_addr,s_addr,4,1,33767)
CheckOffset(struct in_addr,s_addr,0,1,33767)
#endif

#if 1
CheckTypeSize(in_addr_t,4, 10302, 1)
#endif

#if __i386__
CheckTypeSize(struct sockaddr_in,16, 9141, 2)
CheckMemberSize(struct sockaddr_in,sin_port,2,2,33777)
CheckOffset(struct sockaddr_in,sin_port,2,2,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,2,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,2,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,2,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,2,33779)
#elif __ia64__
CheckTypeSize(struct sockaddr_in,16, 9141, 3)
CheckMemberSize(struct sockaddr_in,sin_port,2,3,33777)
CheckOffset(struct sockaddr_in,sin_port,2,3,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,3,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,3,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,3,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,3,33779)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sockaddr_in,16, 9141, 6)
CheckMemberSize(struct sockaddr_in,sin_port,2,6,33777)
CheckOffset(struct sockaddr_in,sin_port,2,6,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,6,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,6,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,6,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,6,33779)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sockaddr_in,16, 9141, 10)
CheckMemberSize(struct sockaddr_in,sin_port,2,10,33777)
CheckOffset(struct sockaddr_in,sin_port,2,10,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,10,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,10,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,10,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,10,33779)
#elif __powerpc64__
CheckTypeSize(struct sockaddr_in,16, 9141, 9)
CheckMemberSize(struct sockaddr_in,sin_port,2,9,33777)
CheckOffset(struct sockaddr_in,sin_port,2,9,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,9,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,9,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,9,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,9,33779)
#elif __s390x__
CheckTypeSize(struct sockaddr_in,16, 9141, 12)
CheckMemberSize(struct sockaddr_in,sin_port,2,12,33777)
CheckOffset(struct sockaddr_in,sin_port,2,12,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,12,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,12,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,12,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,12,33779)
#elif __x86_64__
CheckTypeSize(struct sockaddr_in,16, 9141, 11)
CheckMemberSize(struct sockaddr_in,sin_port,2,11,33777)
CheckOffset(struct sockaddr_in,sin_port,2,11,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,11,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,11,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,11,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,11,33779)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9141,0);
Msg("Find size of sockaddr_in (9141)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct ip_mreq,8, 10146, 6)
CheckMemberSize(struct ip_mreq,imr_interface,4,6,33769)
CheckOffset(struct ip_mreq,imr_interface,4,6,33769)
#elif __i386__
CheckTypeSize(struct ip_mreq,8, 10146, 2)
CheckMemberSize(struct ip_mreq,imr_multiaddr,4,2,33768)
CheckOffset(struct ip_mreq,imr_multiaddr,0,2,33768)
CheckMemberSize(struct ip_mreq,imr_interface,4,2,33769)
CheckOffset(struct ip_mreq,imr_interface,4,2,33769)
#elif __s390__ && !__s390x__
CheckTypeSize(struct ip_mreq,8, 10146, 10)
CheckMemberSize(struct ip_mreq,imr_interface,4,10,33769)
CheckOffset(struct ip_mreq,imr_interface,4,10,33769)
#elif __s390x__
CheckTypeSize(struct ip_mreq,8, 10146, 12)
CheckMemberSize(struct ip_mreq,imr_interface,4,12,33769)
CheckOffset(struct ip_mreq,imr_interface,4,12,33769)
#elif __ia64__
CheckTypeSize(struct ip_mreq,8, 10146, 3)
CheckMemberSize(struct ip_mreq,imr_interface,4,3,33769)
CheckOffset(struct ip_mreq,imr_interface,4,3,33769)
#elif __powerpc64__
CheckTypeSize(struct ip_mreq,0, 10146, 9)
Msg("Missing member data for ip_mreq on PPC64\n");
CheckOffset(struct ip_mreq,imr_multiaddr,0,9,33768)
CheckOffset(struct ip_mreq,imr_interface,0,9,33769)
#elif __x86_64__
CheckTypeSize(struct ip_mreq,8, 10146, 11)
CheckMemberSize(struct ip_mreq,imr_interface,4,11,33769)
CheckOffset(struct ip_mreq,imr_interface,4,11,33769)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10146,0);
Msg("Find size of ip_mreq (10146)\n");
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

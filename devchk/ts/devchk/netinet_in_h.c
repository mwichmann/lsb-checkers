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
#ifdef IPPROTO_IPV6
	CompareConstant(IPPROTO_IPV6,41,4456,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_IPV6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_ICMPV6
	CompareConstant(IPPROTO_ICMPV6,58,4463,architecture)
#else
Msg( "Error: Constant not found: IPPROTO_ICMPV6\n");
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
	CompareConstant(INADDR_NONE,((in_addr_t) 0xffffffff),4491,architecture)
#else
Msg( "Error: Constant not found: INADDR_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6ADDR_ANY_INIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6ADDR_LOOPBACK_INIT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef INET_ADDRSTRLEN
	CompareConstant(INET_ADDRSTRLEN,16,4503,architecture)
#else
Msg( "Error: Constant not found: INET_ADDRSTRLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INET6_ADDRSTRLEN
	CompareConstant(INET6_ADDRSTRLEN,46,4504,architecture)
#else
Msg( "Error: Constant not found: INET6_ADDRSTRLEN\n");
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

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_UNICAST_HOPS
	CompareConstant(IPV6_UNICAST_HOPS,16,4719,architecture)
#else
Msg( "Error: Constant not found: IPV6_UNICAST_HOPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_IF
	CompareConstant(IPV6_MULTICAST_IF,17,4720,architecture)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_IF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_HOPS
	CompareConstant(IPV6_MULTICAST_HOPS,18,4721,architecture)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_HOPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_LOOP
	CompareConstant(IPV6_MULTICAST_LOOP,19,4722,architecture)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_LOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_JOIN_GROUP
	CompareConstant(IPV6_JOIN_GROUP,20,5128,architecture)
#else
Msg( "Error: Constant not found: IPV6_JOIN_GROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_LEAVE_GROUP
	CompareConstant(IPV6_LEAVE_GROUP,21,5129,architecture)
#else
Msg( "Error: Constant not found: IPV6_LEAVE_GROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_V6ONLY
	CompareConstant(IPV6_V6ONLY,26,5130,architecture)
#else
Msg( "Error: Constant not found: IPV6_V6ONLY\n");
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

#if 1
CheckTypeSize(struct in6_addr,16, 6900, 1)
CheckMemberSize(struct in6_addr,in6_u,16,1,33783)
CheckOffset(struct in6_addr,in6_u,0,1,33783)
#endif

#if 1
CheckTypeSize(struct ipv6_mreq,20, 6903, 1)
CheckMemberSize(struct ipv6_mreq,ipv6mr_multiaddr,16,1,33789)
CheckOffset(struct ipv6_mreq,ipv6mr_multiaddr,0,1,33789)
CheckMemberSize(struct ipv6_mreq,ipv6mr_interface,4,1,33790)
CheckOffset(struct ipv6_mreq,ipv6mr_interface,16,1,33790)
#endif

#if 1
CheckTypeSize(struct ip_mreq,8, 10146, 1)
CheckMemberSize(struct ip_mreq,imr_multiaddr,4,1,33768)
CheckOffset(struct ip_mreq,imr_multiaddr,0,1,33768)
CheckMemberSize(struct ip_mreq,imr_interface,4,1,33769)
CheckOffset(struct ip_mreq,imr_interface,4,1,33769)
#endif

#if 1
CheckTypeSize(in_port_t,2, 10888, 1)
#endif

#if 1
CheckTypeSize(struct sockaddr_in,16, 9141, 1)
CheckMemberSize(struct sockaddr_in,sin_family,2,1,33776)
CheckOffset(struct sockaddr_in,sin_family,0,1,33776)
CheckMemberSize(struct sockaddr_in,sin_port,2,1,33777)
CheckOffset(struct sockaddr_in,sin_port,2,1,33777)
CheckMemberSize(struct sockaddr_in,sin_addr,4,1,33778)
CheckOffset(struct sockaddr_in,sin_addr,4,1,33778)
CheckMemberSize(struct sockaddr_in,sin_zero,8,1,33779)
CheckOffset(struct sockaddr_in,sin_zero,8,1,33779)
#endif

#if 1
CheckTypeSize(struct sockaddr_in6,28, 6902, 1)
CheckMemberSize(struct sockaddr_in6,sin6_family,2,1,33784)
CheckOffset(struct sockaddr_in6,sin6_family,0,1,33784)
CheckMemberSize(struct sockaddr_in6,sin6_port,2,1,33785)
CheckOffset(struct sockaddr_in6,sin6_port,2,1,33785)
CheckMemberSize(struct sockaddr_in6,sin6_flowinfo,4,1,33786)
CheckOffset(struct sockaddr_in6,sin6_flowinfo,4,1,33786)
CheckMemberSize(struct sockaddr_in6,sin6_addr,16,1,33787)
CheckOffset(struct sockaddr_in6,sin6_addr,8,1,33787)
CheckMemberSize(struct sockaddr_in6,sin6_scope_id,4,1,33788)
CheckOffset(struct sockaddr_in6,sin6_scope_id,24,1,33788)
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

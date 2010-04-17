/*
 * Test of netinet/in.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#define __in6_u in6_u
#include "netinet/in.h"



#ifdef TET_TEST
void netinet_in_h()
{
#else
int netinet_in_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/in.h\n");
#endif

printf("Checking data structures in netinet/in.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for netinet/in.h depends on arpa/inet.h */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_IP
	CompareConstant(SOL_IP,0,3330,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOL_IP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IP
	CompareConstant(IPPROTO_IP,0,4445,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_IP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_ICMP
	CompareConstant(IPPROTO_ICMP,1,4447,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_ICMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IGMP
	CompareConstant(IPPROTO_IGMP,2,4448,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_IGMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_TCP
	CompareConstant(IPPROTO_TCP,6,4450,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_TCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_UDP
	CompareConstant(IPPROTO_UDP,17,4453,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_UDP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_IPV6
	CompareConstant(IPPROTO_IPV6,41,4456,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_IPV6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_ICMPV6
	CompareConstant(IPPROTO_ICMPV6,58,4463,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_ICMPV6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPPROTO_RAW
	CompareConstant(IPPROTO_RAW,255,4470,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IPPROTO_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN_MULTICAST(a) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_ANY
	CompareConstant(INADDR_ANY,0,4489,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INADDR_ANY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_BROADCAST
	CompareConstant(INADDR_BROADCAST,(0xffffffff),4490,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: INADDR_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_NONE
	CompareConstant(INADDR_NONE,((in_addr_t) 0xffffffff),4491,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: INADDR_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INADDR_LOOPBACK
	CompareConstant(INADDR_LOOPBACK,0x7f000001,4493,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: INADDR_LOOPBACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef s6_addr
	CompareMacro(s6_addr,in6_u.u6_addr8,in6_u.u6_addr8,4498,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: s6_addr\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef s6_addr16
	CompareMacro(s6_addr16,in6_u.u6_addr16,in6_u.u6_addr16,4499,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: s6_addr16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef s6_addr32
	CompareMacro(s6_addr32,in6_u.u6_addr32,in6_u.u6_addr32,4500,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: s6_addr32\n");
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
	CompareConstant(INET_ADDRSTRLEN,16,4503,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: INET_ADDRSTRLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INET6_ADDRSTRLEN
	CompareConstant(INET6_ADDRSTRLEN,46,4504,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: INET6_ADDRSTRLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_UNSPECIFIED(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_LOOPBACK(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MULTICAST(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_LINKLOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_SITELOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_V4MAPPED(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_V4COMPAT(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_ARE_ADDR_EQUAL(a,b) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MC_NODELOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MC_LINKLOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MC_SITELOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MC_ORGLOCAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IN6_IS_ADDR_MC_GLOBAL(a) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_TOS
	CompareConstant(IP_TOS,1,4662,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IP_TOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_TTL
	CompareConstant(IP_TTL,2,4663,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IP_TTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_OPTIONS
	CompareConstant(IP_OPTIONS,4,4665,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IP_OPTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_IF
	CompareConstant(IP_MULTICAST_IF,32,4681,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IP_MULTICAST_IF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_TTL
	CompareConstant(IP_MULTICAST_TTL,33,4682,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IP_MULTICAST_TTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MULTICAST_LOOP
	CompareConstant(IP_MULTICAST_LOOP,34,4683,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IP_MULTICAST_LOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_ADD_MEMBERSHIP
	CompareConstant(IP_ADD_MEMBERSHIP,35,4684,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IP_ADD_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_DROP_MEMBERSHIP
	CompareConstant(IP_DROP_MEMBERSHIP,36,4685,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IP_DROP_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_UNICAST_HOPS
	CompareConstant(IPV6_UNICAST_HOPS,16,4719,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_UNICAST_HOPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_IF
	CompareConstant(IPV6_MULTICAST_IF,17,4720,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_IF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_HOPS
	CompareConstant(IPV6_MULTICAST_HOPS,18,4721,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_HOPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_MULTICAST_LOOP
	CompareConstant(IPV6_MULTICAST_LOOP,19,4722,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_MULTICAST_LOOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_ADD_MEMBERSHIP
	CompareConstant(IPV6_ADD_MEMBERSHIP,IPV6_JOIN_GROUP,4723,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IPV6_ADD_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_DROP_MEMBERSHIP
	CompareConstant(IPV6_DROP_MEMBERSHIP,IPV6_LEAVE_GROUP,4724,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: IPV6_DROP_MEMBERSHIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_JOIN_GROUP
	CompareConstant(IPV6_JOIN_GROUP,20,5128,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_JOIN_GROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_LEAVE_GROUP
	CompareConstant(IPV6_LEAVE_GROUP,21,5129,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_LEAVE_GROUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPV6_V6ONLY
	CompareConstant(IPV6_V6ONLY,26,5130,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: IPV6_V6ONLY\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(struct in_addr,4, 10143, 1, 1.1, NULL, 0, NULL)
CheckMemberSize(struct in_addr,s_addr,4,1,33767)
CheckOffset(struct in_addr,s_addr,0,1,33767)
#endif

#if 1
CheckTypeSize(in_addr_t,4, 10302, 1, 1.3, NULL, 9272, NULL)
#endif

#if 1
CheckTypeSize(struct in6_addr,16, 6900, 1, 2.0, NULL, 0, NULL)
CheckMemberSize(struct in6_addr,in6_u,16,1,33783)
CheckOffset(struct in6_addr,in6_u,0,1,33783)
#endif

#if 1
CheckTypeSize(struct ipv6_mreq,20, 6903, 1, 2.0, NULL, 0, NULL)
CheckMemberSize(struct ipv6_mreq,ipv6mr_multiaddr,16,1,33789)
CheckOffset(struct ipv6_mreq,ipv6mr_multiaddr,0,1,33789)
CheckMemberSize(struct ipv6_mreq,ipv6mr_interface,4,1,33790)
CheckOffset(struct ipv6_mreq,ipv6mr_interface,16,1,33790)
#endif

#if 1
CheckTypeSize(struct ip_mreq,8, 10146, 1, 2.0, NULL, 0, NULL)
CheckMemberSize(struct ip_mreq,imr_multiaddr,4,1,33768)
CheckOffset(struct ip_mreq,imr_multiaddr,0,1,33768)
CheckMemberSize(struct ip_mreq,imr_interface,4,1,33769)
CheckOffset(struct ip_mreq,imr_interface,4,1,33769)
#endif

#if 1
CheckTypeSize(in_port_t,2, 10888, 1, 2.0, NULL, 9271, NULL)
#endif

#if 1
CheckTypeSize(struct sockaddr_in,16, 9141, 1, 1.1, NULL, 0, NULL)
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
CheckTypeSize(struct sockaddr_in6,28, 6902, 1, 2.0, NULL, 0, NULL)
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

extern int bindresvport_db(int, struct sockaddr_in *);
CheckInterfacedef(bindresvport,bindresvport_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/in.h\n\n",pcnt,cnt);
return cnt;
#endif

}

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
/* No test for IP_RF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP_DF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP_MF */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP_OFFMASK */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPVERSION
	CompareConstant(IPVERSION,4,16794,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPVERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MAXPACKET
	CompareConstant(IP_MAXPACKET,65535,16795,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP_MAXPACKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_COPY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_CLASS_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_NUMBER_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_COPIED(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_CLASS(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_NUMBER(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_CONTROL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_RESERVED1 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_DEBMEAS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_MEASUREMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_RESERVED2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_EOL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_END */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_NOP
	CompareConstant(IPOPT_NOP,1,16809,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_NOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_NOOP */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_RR
	CompareConstant(IPOPT_RR,7,16811,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_RR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_TS
	CompareConstant(IPOPT_TS,68,16812,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_TS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_TIMESTAMP */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_SECURITY
	CompareConstant(IPOPT_SECURITY,130,16814,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_SECURITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SEC */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_LSRR
	CompareConstant(IPOPT_LSRR,131,16816,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_LSRR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_SATID
	CompareConstant(IPOPT_SATID,136,16817,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_SATID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SID */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_SSRR
	CompareConstant(IPOPT_SSRR,137,16819,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_SSRR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_RA
	CompareConstant(IPOPT_RA,148,16820,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_RA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_OPTVAL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_OLEN
	CompareConstant(IPOPT_OLEN,1,16822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_OLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_OFFSET
	CompareConstant(IPOPT_OFFSET,2,16823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_OFFSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_MINOFF
	CompareConstant(IPOPT_MINOFF,4,16824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_MINOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAX_IPOPTLEN
	CompareConstant(MAX_IPOPTLEN,40,16825,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MAX_IPOPTLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_TS_TSONLY */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_TS_TSANDADDR
	CompareConstant(IPOPT_TS_TSANDADDR,1,16827,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_TS_TSANDADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPOPT_TS_PRESPEC
	CompareConstant(IPOPT_TS_PRESPEC,3,16828,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPOPT_TS_PRESPEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_UNCLASS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_CONFID */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_EFTO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_MMMM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_RESTR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_SECRET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPOPT_SECUR_TOPSECRET */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef MAXTTL
	CompareConstant(MAXTTL,255,16836,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MAXTTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPDEFTTL
	CompareConstant(IPDEFTTL,64,16837,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPDEFTTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPFRAGTTL
	CompareConstant(IPFRAGTTL,60,16838,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPFRAGTTL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTTLDEC
	CompareConstant(IPTTLDEC,1,16839,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IPTTLDEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP_MSS
	CompareConstant(IP_MSS,576,16840,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP_MSS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPTOS_TOS_MASK
	CompareConstant(IPTOS_TOS_MASK,0x1e,5267,architecture,3.0,NULL)
#else
Msg( "Error: Constant not found: IPTOS_TOS_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IPTOS_TOS(tos) */
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

#if _LSB_DEFAULT_ARCH
/* No test for IPTOS_PREC(tos) */
#endif

#if defined __s390x__
CheckTypeSize(struct timestamp,0, 1009212, 12, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,overflow,4,12,216951)
CheckBitField(struct timestamp,flags,4,12,216944)
#elif defined __x86_64__
CheckTypeSize(struct timestamp,0, 1009212, 11, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,flags,4,11,216943)
CheckBitField(struct timestamp,overflow,4,11,216950)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct timestamp,0, 1009212, 10, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,overflow,4,10,216949)
CheckBitField(struct timestamp,flags,4,10,216942)
#elif defined __powerpc64__
CheckTypeSize(struct timestamp,0, 1009212, 9, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,overflow,4,9,216948)
CheckBitField(struct timestamp,flags,4,9,216941)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct timestamp,0, 1009212, 6, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,overflow,4,6,216947)
CheckBitField(struct timestamp,flags,4,6,216940)
#elif defined __ia64__
CheckTypeSize(struct timestamp,0, 1009212, 3, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,flags,4,3,216939)
CheckBitField(struct timestamp,overflow,4,3,216946)
#elif defined __i386__
CheckTypeSize(struct timestamp,0, 1009212, 2, 4.0, NULL, 0, NULL)
CheckBitField(struct timestamp,flags,4,2,216938)
CheckBitField(struct timestamp,overflow,4,2,216945)
#endif

#if defined __s390x__
CheckTypeSize(struct iphdr,0, 1009213, 12, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,version,4,12,216972)
CheckBitField(struct iphdr,ihl,4,12,216965)
#elif defined __x86_64__
CheckTypeSize(struct iphdr,0, 1009213, 11, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,ihl,4,11,216964)
CheckBitField(struct iphdr,version,4,11,216971)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct iphdr,0, 1009213, 10, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,version,4,10,216970)
CheckBitField(struct iphdr,ihl,4,10,216963)
#elif defined __powerpc64__
CheckTypeSize(struct iphdr,0, 1009213, 9, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,version,4,9,216969)
CheckBitField(struct iphdr,ihl,4,9,216962)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct iphdr,0, 1009213, 6, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,version,4,6,216968)
CheckBitField(struct iphdr,ihl,4,6,216961)
#elif defined __ia64__
CheckTypeSize(struct iphdr,0, 1009213, 3, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,ihl,4,3,216960)
CheckBitField(struct iphdr,version,4,3,216967)
#elif defined __i386__
CheckTypeSize(struct iphdr,0, 1009213, 2, 4.0, NULL, 0, NULL)
CheckBitField(struct iphdr,ihl,4,2,216959)
CheckBitField(struct iphdr,version,4,2,216966)
#endif

#if defined __s390x__
CheckTypeSize(struct ip,0, 1009214, 12, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_v,4,12,217049)
CheckBitField(struct ip,ip_hl,4,12,217042)
#elif defined __x86_64__
CheckTypeSize(struct ip,0, 1009214, 11, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_hl,4,11,217041)
CheckBitField(struct ip,ip_v,4,11,217048)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct ip,0, 1009214, 10, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_v,4,10,217047)
CheckBitField(struct ip,ip_hl,4,10,217040)
#elif defined __powerpc64__
CheckTypeSize(struct ip,0, 1009214, 9, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_v,4,9,217046)
CheckBitField(struct ip,ip_hl,4,9,217039)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct ip,0, 1009214, 6, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_v,4,6,217045)
CheckBitField(struct ip,ip_hl,4,6,217038)
#elif defined __ia64__
CheckTypeSize(struct ip,0, 1009214, 3, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_hl,4,3,217037)
CheckBitField(struct ip,ip_v,4,3,217044)
#elif defined __i386__
CheckTypeSize(struct ip,0, 1009214, 2, 4.0, NULL, 0, NULL)
CheckBitField(struct ip,ip_hl,4,2,217036)
CheckBitField(struct ip,ip_v,4,2,217043)
#endif

#if defined __s390x__
CheckTypeSize(struct ip_timestamp,0, 1009215, 12, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,12,217140)
CheckBitField(struct ip_timestamp,ipt_oflw,4,12,217147)
#elif defined __x86_64__
CheckTypeSize(struct ip_timestamp,0, 1009215, 11, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,11,217139)
CheckBitField(struct ip_timestamp,ipt_oflw,4,11,217146)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct ip_timestamp,0, 1009215, 10, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,10,217138)
CheckBitField(struct ip_timestamp,ipt_oflw,4,10,217145)
#elif defined __powerpc64__
CheckTypeSize(struct ip_timestamp,0, 1009215, 9, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,9,217137)
CheckBitField(struct ip_timestamp,ipt_oflw,4,9,217144)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct ip_timestamp,0, 1009215, 6, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,6,217136)
CheckBitField(struct ip_timestamp,ipt_oflw,4,6,217143)
#elif defined __ia64__
CheckTypeSize(struct ip_timestamp,0, 1009215, 3, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,3,217135)
CheckBitField(struct ip_timestamp,ipt_oflw,4,3,217142)
#elif defined __i386__
CheckTypeSize(struct ip_timestamp,0, 1009215, 2, 4.0, NULL, 0, NULL)
CheckBitField(struct ip_timestamp,ipt_flg,4,2,217134)
CheckBitField(struct ip_timestamp,ipt_oflw,4,2,217141)
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

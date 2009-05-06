/*
 * Test of netinet/ip_icmp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "netinet/ip_icmp.h"



#ifdef TET_TEST
void netinet_ip_icmp_h()
{
#else
int netinet_ip_icmp_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/ip_icmp.h\n");
#endif

printf("Checking data structures in netinet/ip_icmp.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ICMP_ECHOREPLY */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_DEST_UNREACH
	CompareConstant(ICMP_DEST_UNREACH,3,19885,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_DEST_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_SOURCE_QUENCH
	CompareConstant(ICMP_SOURCE_QUENCH,4,19886,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_SOURCE_QUENCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIRECT
	CompareConstant(ICMP_REDIRECT,5,19887,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIRECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_ECHO
	CompareConstant(ICMP_ECHO,8,19888,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_ECHO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TIME_EXCEEDED
	CompareConstant(ICMP_TIME_EXCEEDED,11,19889,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TIME_EXCEEDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PARAMETERPROB
	CompareConstant(ICMP_PARAMETERPROB,12,19890,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PARAMETERPROB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TIMESTAMP
	CompareConstant(ICMP_TIMESTAMP,13,19891,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TIMESTAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TIMESTAMPREPLY
	CompareConstant(ICMP_TIMESTAMPREPLY,14,19892,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TIMESTAMPREPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_INFO_REQUEST
	CompareConstant(ICMP_INFO_REQUEST,15,19893,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_INFO_REQUEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_INFO_REPLY
	CompareConstant(ICMP_INFO_REPLY,16,19894,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_INFO_REPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_ADDRESS
	CompareConstant(ICMP_ADDRESS,17,19895,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_ADDRESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_ADDRESSREPLY
	CompareConstant(ICMP_ADDRESSREPLY,18,19896,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_ADDRESSREPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NR_ICMP_TYPES
	CompareConstant(NR_ICMP_TYPES,18,19897,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NR_ICMP_TYPES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_NET_UNREACH */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_HOST_UNREACH
	CompareConstant(ICMP_HOST_UNREACH,1,19899,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_HOST_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PROT_UNREACH
	CompareConstant(ICMP_PROT_UNREACH,2,19900,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PROT_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PORT_UNREACH
	CompareConstant(ICMP_PORT_UNREACH,3,19901,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PORT_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_FRAG_NEEDED
	CompareConstant(ICMP_FRAG_NEEDED,4,19902,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_FRAG_NEEDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_SR_FAILED
	CompareConstant(ICMP_SR_FAILED,5,19903,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_SR_FAILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_NET_UNKNOWN
	CompareConstant(ICMP_NET_UNKNOWN,6,19904,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_NET_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_HOST_UNKNOWN
	CompareConstant(ICMP_HOST_UNKNOWN,7,19905,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_HOST_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_HOST_ISOLATED
	CompareConstant(ICMP_HOST_ISOLATED,8,19906,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_HOST_ISOLATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_NET_ANO
	CompareConstant(ICMP_NET_ANO,9,19907,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_NET_ANO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_HOST_ANO
	CompareConstant(ICMP_HOST_ANO,10,19908,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_HOST_ANO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_NET_UNR_TOS
	CompareConstant(ICMP_NET_UNR_TOS,11,19909,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_NET_UNR_TOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_HOST_UNR_TOS
	CompareConstant(ICMP_HOST_UNR_TOS,12,19910,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_HOST_UNR_TOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PKT_FILTERED
	CompareConstant(ICMP_PKT_FILTERED,13,19911,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PKT_FILTERED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PREC_VIOLATION
	CompareConstant(ICMP_PREC_VIOLATION,14,19912,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PREC_VIOLATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PREC_CUTOFF
	CompareConstant(ICMP_PREC_CUTOFF,15,19913,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PREC_CUTOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NR_ICMP_UNREACH
	CompareConstant(NR_ICMP_UNREACH,15,19914,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: NR_ICMP_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_REDIR_NET */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIR_HOST
	CompareConstant(ICMP_REDIR_HOST,1,19916,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIR_HOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIR_NETTOS
	CompareConstant(ICMP_REDIR_NETTOS,2,19917,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIR_NETTOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIR_HOSTTOS
	CompareConstant(ICMP_REDIR_HOSTTOS,3,19918,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIR_HOSTTOS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_EXC_TTL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_EXC_FRAGTIME
	CompareConstant(ICMP_EXC_FRAGTIME,1,19920,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_EXC_FRAGTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_pptr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_gwaddr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_id */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_seq */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_void */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_pmvoid */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_nextmtu */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_num_addrs */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_wpa */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_lifetime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_otime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_rtime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_ttime */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_ip */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_radv */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_mask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp_data */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_MINLEN
	CompareConstant(ICMP_MINLEN,8,19938,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_MINLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_TSLEN */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_MASKLEN
	CompareConstant(ICMP_MASKLEN,12,19940,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_MASKLEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_ADVLENMIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_ADVLEN(p) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH
	CompareConstant(ICMP_UNREACH,3,19943,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_SOURCEQUENCH
	CompareConstant(ICMP_SOURCEQUENCH,4,19944,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_SOURCEQUENCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_ROUTERADVERT
	CompareConstant(ICMP_ROUTERADVERT,9,19945,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_ROUTERADVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_ROUTERSOLICIT
	CompareConstant(ICMP_ROUTERSOLICIT,10,19946,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_ROUTERSOLICIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TIMXCEED
	CompareConstant(ICMP_TIMXCEED,11,19947,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TIMXCEED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PARAMPROB
	CompareConstant(ICMP_PARAMPROB,12,19948,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PARAMPROB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TSTAMP
	CompareConstant(ICMP_TSTAMP,13,19949,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TSTAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TSTAMPREPLY
	CompareConstant(ICMP_TSTAMPREPLY,14,19950,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TSTAMPREPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_IREQ
	CompareConstant(ICMP_IREQ,15,19951,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_IREQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_IREQREPLY
	CompareConstant(ICMP_IREQREPLY,16,19952,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_IREQREPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_MASKREQ
	CompareConstant(ICMP_MASKREQ,17,19953,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_MASKREQ\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_MASKREPLY
	CompareConstant(ICMP_MASKREPLY,18,19954,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_MASKREPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_MAXTYPE
	CompareConstant(ICMP_MAXTYPE,18,19955,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_MAXTYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_UNREACH_NET */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_HOST
	CompareConstant(ICMP_UNREACH_HOST,1,19957,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_HOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_PROTOCOL
	CompareConstant(ICMP_UNREACH_PROTOCOL,2,19958,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_PROTOCOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_PORT
	CompareConstant(ICMP_UNREACH_PORT,3,19959,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_PORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_NEEDFRAG
	CompareConstant(ICMP_UNREACH_NEEDFRAG,4,19960,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_NEEDFRAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_SRCFAIL
	CompareConstant(ICMP_UNREACH_SRCFAIL,5,19961,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_SRCFAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_NET_UNKNOWN
	CompareConstant(ICMP_UNREACH_NET_UNKNOWN,6,19962,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_NET_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_HOST_UNKNOWN
	CompareConstant(ICMP_UNREACH_HOST_UNKNOWN,7,19963,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_HOST_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_ISOLATED
	CompareConstant(ICMP_UNREACH_ISOLATED,8,19964,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_ISOLATED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_NET_PROHIB
	CompareConstant(ICMP_UNREACH_NET_PROHIB,9,19965,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_NET_PROHIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_HOST_PROHIB
	CompareConstant(ICMP_UNREACH_HOST_PROHIB,10,19966,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_HOST_PROHIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_TOSNET
	CompareConstant(ICMP_UNREACH_TOSNET,11,19967,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_TOSNET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_TOSHOST
	CompareConstant(ICMP_UNREACH_TOSHOST,12,19968,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_TOSHOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_FILTER_PROHIB
	CompareConstant(ICMP_UNREACH_FILTER_PROHIB,13,19969,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_FILTER_PROHIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_HOST_PRECEDENCE
	CompareConstant(ICMP_UNREACH_HOST_PRECEDENCE,14,19970,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_HOST_PRECEDENCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_UNREACH_PRECEDENCE_CUTOFF
	CompareConstant(ICMP_UNREACH_PRECEDENCE_CUTOFF,15,19971,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_UNREACH_PRECEDENCE_CUTOFF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_REDIRECT_NET */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIRECT_HOST
	CompareConstant(ICMP_REDIRECT_HOST,1,19973,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIRECT_HOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIRECT_TOSNET
	CompareConstant(ICMP_REDIRECT_TOSNET,2,19974,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIRECT_TOSNET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_REDIRECT_TOSHOST
	CompareConstant(ICMP_REDIRECT_TOSHOST,3,19975,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_REDIRECT_TOSHOST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_TIMXCEED_INTRANS */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_TIMXCEED_REASS
	CompareConstant(ICMP_TIMXCEED_REASS,1,19977,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_TIMXCEED_REASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP_PARAMPROB_OPTABSENT
	CompareConstant(ICMP_PARAMPROB_OPTABSENT,1,19978,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP_PARAMPROB_OPTABSENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP_INFOTYPE(type) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for netinet/ip_icmp.h depends on netinet/ip.h */
#endif

#if 1
CheckTypeSize(struct icmphdr,0, 39818, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmphdr on All\n");
CheckOffset(struct icmphdr,type,0,1,219101)
CheckOffset(struct icmphdr,code,0,1,219102)
CheckOffset(struct icmphdr,checksum,0,1,219103)
CheckOffset(struct icmphdr,un,0,1,219104)
#endif

#if 1
CheckTypeSize(struct icmp_ra_addr,0, 39819, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmp_ra_addr on All\n");
CheckOffset(struct icmp_ra_addr,ira_addr,0,1,219105)
CheckOffset(struct icmp_ra_addr,ira_preference,0,1,219106)
#endif

#if 1
CheckTypeSize(struct ih_idseq,0, 39820, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ih_idseq on All\n");
CheckOffset(struct ih_idseq,icd_id,0,1,219107)
CheckOffset(struct ih_idseq,icd_seq,0,1,219108)
#endif

#if 1
CheckTypeSize(struct ih_pmtu,0, 39821, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ih_pmtu on All\n");
CheckOffset(struct ih_pmtu,ipm_void,0,1,219109)
CheckOffset(struct ih_pmtu,ipm_nextmtu,0,1,219110)
#endif

#if 1
CheckTypeSize(struct ih_rtradv,0, 39822, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ih_rtradv on All\n");
CheckOffset(struct ih_rtradv,irt_num_addrs,0,1,219111)
CheckOffset(struct ih_rtradv,irt_wpa,0,1,219112)
CheckOffset(struct ih_rtradv,irt_lifetime,0,1,219113)
#endif

#if 1
CheckTypeSize(struct icmp,0, 39828, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmp on All\n");
CheckOffset(struct icmp,icmp_type,0,1,219129)
CheckOffset(struct icmp,icmp_code,0,1,219130)
CheckOffset(struct icmp,icmp_cksum,0,1,219131)
CheckOffset(struct icmp,icmp_hun,0,1,219132)
CheckOffset(struct icmp,icmp_dun,0,1,219133)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/ip_icmp.h\n\n",pcnt,cnt);
return cnt;
#endif

}

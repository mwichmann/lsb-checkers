/*
 * Test of netinet/icmp6.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "netinet/icmp6.h"



#ifdef TET_TEST
void netinet_icmp6_h()
{
#else
int netinet_icmp6_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/icmp6.h\n");
#endif

printf("Checking data structures in netinet/icmp6.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_FILTER
	CompareConstant(ICMP6_FILTER,1,19757,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_FILTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_FILTER_BLOCK
	CompareConstant(ICMP6_FILTER_BLOCK,1,19758,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_FILTER_BLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_FILTER_PASS
	CompareConstant(ICMP6_FILTER_PASS,2,19759,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_FILTER_PASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_FILTER_BLOCKOTHERS
	CompareConstant(ICMP6_FILTER_BLOCKOTHERS,3,19760,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_FILTER_BLOCKOTHERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_FILTER_PASSONLY
	CompareConstant(ICMP6_FILTER_PASSONLY,4,19761,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_FILTER_PASSONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef icmp6_data32
	CompareMacro(icmp6_data32,icmp6_dataun.icmp6_un_data32,icmp6_dataun.icmp6_un_data32,19762,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: icmp6_data32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef icmp6_data16
	CompareMacro(icmp6_data16,icmp6_dataun.icmp6_un_data16,icmp6_dataun.icmp6_un_data16,19763,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: icmp6_data16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef icmp6_data8
	CompareMacro(icmp6_data8,icmp6_dataun.icmp6_un_data8,icmp6_dataun.icmp6_un_data8,19764,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: icmp6_data8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp6_pptr */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp6_mtu */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp6_id */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp6_seq */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for icmp6_maxdelay */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH
	CompareConstant(ICMP6_DST_UNREACH,1,19770,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_PACKET_TOO_BIG
	CompareConstant(ICMP6_PACKET_TOO_BIG,2,19771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_PACKET_TOO_BIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_TIME_EXCEEDED
	CompareConstant(ICMP6_TIME_EXCEEDED,3,19772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_TIME_EXCEEDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_PARAM_PROB
	CompareConstant(ICMP6_PARAM_PROB,4,19773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_PARAM_PROB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_INFOMSG_MASK
	CompareConstant(ICMP6_INFOMSG_MASK,0x80,19774,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_INFOMSG_MASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_ECHO_REQUEST
	CompareConstant(ICMP6_ECHO_REQUEST,128,19775,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_ECHO_REQUEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_ECHO_REPLY
	CompareConstant(ICMP6_ECHO_REPLY,129,19776,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_ECHO_REPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MLD_LISTENER_QUERY
	CompareConstant(MLD_LISTENER_QUERY,130,19777,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MLD_LISTENER_QUERY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MLD_LISTENER_REPORT
	CompareConstant(MLD_LISTENER_REPORT,131,19778,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MLD_LISTENER_REPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MLD_LISTENER_REDUCTION
	CompareConstant(MLD_LISTENER_REDUCTION,132,19779,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: MLD_LISTENER_REDUCTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH_NOROUTE
	CompareConstant(ICMP6_DST_UNREACH_NOROUTE,0,19780,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH_NOROUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH_ADMIN
	CompareConstant(ICMP6_DST_UNREACH_ADMIN,1,19781,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH_ADMIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH_BEYONDSCOPE
	CompareConstant(ICMP6_DST_UNREACH_BEYONDSCOPE,2,19782,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH_BEYONDSCOPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH_ADDR
	CompareConstant(ICMP6_DST_UNREACH_ADDR,3,19783,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_DST_UNREACH_NOPORT
	CompareConstant(ICMP6_DST_UNREACH_NOPORT,4,19784,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_DST_UNREACH_NOPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_TIME_EXCEED_TRANSIT
	CompareConstant(ICMP6_TIME_EXCEED_TRANSIT,0,19785,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_TIME_EXCEED_TRANSIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_TIME_EXCEED_REASSEMBLY
	CompareConstant(ICMP6_TIME_EXCEED_REASSEMBLY,1,19786,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_TIME_EXCEED_REASSEMBLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_PARAMPROB_HEADER
	CompareConstant(ICMP6_PARAMPROB_HEADER,0,19787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_PARAMPROB_HEADER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_PARAMPROB_NEXTHEADER
	CompareConstant(ICMP6_PARAMPROB_NEXTHEADER,1,19788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_PARAMPROB_NEXTHEADER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_PARAMPROB_OPTION
	CompareConstant(ICMP6_PARAMPROB_OPTION,2,19789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_PARAMPROB_OPTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_WILLPASS(type,filterp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_WILLBLOCK(type,filterp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_SETPASS(type,filterp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_SETBLOCK(type,filterp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_SETPASSALL(filterp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ICMP6_FILTER_SETBLOCKALL(filterp) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_ROUTER_SOLICIT
	CompareConstant(ND_ROUTER_SOLICIT,133,19796,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_ROUTER_SOLICIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_ROUTER_ADVERT
	CompareConstant(ND_ROUTER_ADVERT,134,19797,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_ROUTER_ADVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_NEIGHBOR_SOLICIT
	CompareConstant(ND_NEIGHBOR_SOLICIT,135,19798,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NEIGHBOR_SOLICIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_NEIGHBOR_ADVERT
	CompareConstant(ND_NEIGHBOR_ADVERT,136,19799,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NEIGHBOR_ADVERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_REDIRECT
	CompareConstant(ND_REDIRECT,137,19800,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_REDIRECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rs_type
	CompareMacro(nd_rs_type,nd_rs_hdr.icmp6_type,nd_rs_hdr.icmp6_type,19801,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rs_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rs_code
	CompareMacro(nd_rs_code,nd_rs_hdr.icmp6_code,nd_rs_hdr.icmp6_code,19802,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rs_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rs_cksum
	CompareMacro(nd_rs_cksum,nd_rs_hdr.icmp6_cksum,nd_rs_hdr.icmp6_cksum,19803,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rs_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rs_reserved
	CompareMacro(nd_rs_reserved,nd_rs_hdr.icmp6_data32[0],nd_rs_hdr.icmp6_data32[0],19804,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rs_reserved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_type
	CompareMacro(nd_ra_type,nd_ra_hdr.icmp6_type,nd_ra_hdr.icmp6_type,19805,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_code
	CompareMacro(nd_ra_code,nd_ra_hdr.icmp6_code,nd_ra_hdr.icmp6_code,19806,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_cksum
	CompareMacro(nd_ra_cksum,nd_ra_hdr.icmp6_cksum,nd_ra_hdr.icmp6_cksum,19807,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_curhoplimit
	CompareMacro(nd_ra_curhoplimit,nd_ra_hdr.icmp6_data8[0],nd_ra_hdr.icmp6_data8[0],19808,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_curhoplimit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_flags_reserved
	CompareMacro(nd_ra_flags_reserved,nd_ra_hdr.icmp6_data8[1],nd_ra_hdr.icmp6_data8[1],19809,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_flags_reserved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_RA_FLAG_MANAGED
	CompareConstant(ND_RA_FLAG_MANAGED,0x80,19810,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_RA_FLAG_MANAGED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_RA_FLAG_OTHER
	CompareConstant(ND_RA_FLAG_OTHER,0x40,19811,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_RA_FLAG_OTHER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_RA_FLAG_HOME_AGENT
	CompareConstant(ND_RA_FLAG_HOME_AGENT,0x20,19812,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_RA_FLAG_HOME_AGENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ra_router_lifetime
	CompareMacro(nd_ra_router_lifetime,nd_ra_hdr.icmp6_data16[1],nd_ra_hdr.icmp6_data16[1],19813,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ra_router_lifetime\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ns_type
	CompareMacro(nd_ns_type,nd_ns_hdr.icmp6_type,nd_ns_hdr.icmp6_type,19814,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ns_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ns_code
	CompareMacro(nd_ns_code,nd_ns_hdr.icmp6_code,nd_ns_hdr.icmp6_code,19815,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ns_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ns_cksum
	CompareMacro(nd_ns_cksum,nd_ns_hdr.icmp6_cksum,nd_ns_hdr.icmp6_cksum,19816,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ns_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_ns_reserved
	CompareMacro(nd_ns_reserved,nd_ns_hdr.icmp6_data32[0],nd_ns_hdr.icmp6_data32[0],19817,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_ns_reserved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_na_type
	CompareMacro(nd_na_type,nd_na_hdr.icmp6_type,nd_na_hdr.icmp6_type,19818,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_na_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_na_code
	CompareMacro(nd_na_code,nd_na_hdr.icmp6_code,nd_na_hdr.icmp6_code,19819,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_na_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_na_cksum
	CompareMacro(nd_na_cksum,nd_na_hdr.icmp6_cksum,nd_na_hdr.icmp6_cksum,19820,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_na_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_na_flags_reserved
	CompareMacro(nd_na_flags_reserved,nd_na_hdr.icmp6_data32[0],nd_na_hdr.icmp6_data32[0],19821,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_na_flags_reserved\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x80000000,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x80000000,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x00000080,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x00000080,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x80000000,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x00000080,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ND_NA_FLAG_ROUTER
	CompareConstant(ND_NA_FLAG_ROUTER,0x80000000,19822,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_ROUTER\n");
cnt++;
#endif

#else
Msg( "No definition for ND_NA_FLAG_ROUTER (19822, int) in db for this architecture\n");
#ifdef ND_NA_FLAG_ROUTER
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,19822,%d,'""4.0""',NULL);\n", architecture, ND_NA_FLAG_ROUTER);
#endif
#endif
#if defined __powerpc64__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x40000000,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x40000000,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x00000040,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x00000040,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x40000000,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x00000040,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ND_NA_FLAG_SOLICITED
	CompareConstant(ND_NA_FLAG_SOLICITED,0x40000000,19823,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_SOLICITED\n");
cnt++;
#endif

#else
Msg( "No definition for ND_NA_FLAG_SOLICITED (19823, int) in db for this architecture\n");
#ifdef ND_NA_FLAG_SOLICITED
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,19823,%d,'""4.0""',NULL);\n", architecture, ND_NA_FLAG_SOLICITED);
#endif
#endif
#if defined __powerpc64__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x20000000,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x20000000,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x00000020,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x00000020,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x20000000,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x00000020,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef ND_NA_FLAG_OVERRIDE
	CompareConstant(ND_NA_FLAG_OVERRIDE,0x20000000,19824,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_NA_FLAG_OVERRIDE\n");
cnt++;
#endif

#else
Msg( "No definition for ND_NA_FLAG_OVERRIDE (19824, int) in db for this architecture\n");
#ifdef ND_NA_FLAG_OVERRIDE
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,19824,%d,'""4.0""',NULL);\n", architecture, ND_NA_FLAG_OVERRIDE);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef nd_rd_type
	CompareMacro(nd_rd_type,nd_rd_hdr.icmp6_type,nd_rd_hdr.icmp6_type,19825,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rd_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rd_code
	CompareMacro(nd_rd_code,nd_rd_hdr.icmp6_code,nd_rd_hdr.icmp6_code,19826,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rd_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rd_cksum
	CompareMacro(nd_rd_cksum,nd_rd_hdr.icmp6_cksum,nd_rd_hdr.icmp6_cksum,19827,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rd_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef nd_rd_reserved
	CompareMacro(nd_rd_reserved,nd_rd_hdr.icmp6_data32[0],nd_rd_hdr.icmp6_data32[0],19828,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: nd_rd_reserved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_SOURCE_LINKADDR
	CompareConstant(ND_OPT_SOURCE_LINKADDR,1,19829,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_SOURCE_LINKADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_TARGET_LINKADDR
	CompareConstant(ND_OPT_TARGET_LINKADDR,2,19830,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_TARGET_LINKADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_PREFIX_INFORMATION
	CompareConstant(ND_OPT_PREFIX_INFORMATION,3,19831,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_PREFIX_INFORMATION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_REDIRECTED_HEADER
	CompareConstant(ND_OPT_REDIRECTED_HEADER,4,19832,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_REDIRECTED_HEADER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_MTU
	CompareConstant(ND_OPT_MTU,5,19833,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_MTU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_RTR_ADV_INTERVAL
	CompareConstant(ND_OPT_RTR_ADV_INTERVAL,7,19834,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_RTR_ADV_INTERVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_HOME_AGENT_INFO
	CompareConstant(ND_OPT_HOME_AGENT_INFO,8,19835,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_HOME_AGENT_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_PI_FLAG_ONLINK
	CompareConstant(ND_OPT_PI_FLAG_ONLINK,0x80,19836,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_PI_FLAG_ONLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_PI_FLAG_AUTO
	CompareConstant(ND_OPT_PI_FLAG_AUTO,0x40,19837,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_PI_FLAG_AUTO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ND_OPT_PI_FLAG_RADDR
	CompareConstant(ND_OPT_PI_FLAG_RADDR,0x20,19838,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ND_OPT_PI_FLAG_RADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef mld_type
	CompareMacro(mld_type,mld_icmp6_hdr.icmp6_type,mld_icmp6_hdr.icmp6_type,19839,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: mld_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef mld_code
	CompareMacro(mld_code,mld_icmp6_hdr.icmp6_code,mld_icmp6_hdr.icmp6_code,19840,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: mld_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef mld_cksum
	CompareMacro(mld_cksum,mld_icmp6_hdr.icmp6_cksum,mld_icmp6_hdr.icmp6_cksum,19841,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: mld_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef mld_maxdelay
	CompareMacro(mld_maxdelay,mld_icmp6_hdr.icmp6_data16[0],mld_icmp6_hdr.icmp6_data16[0],19842,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: mld_maxdelay\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef mld_reserved
	CompareMacro(mld_reserved,mld_icmp6_hdr.icmp6_data16[1],mld_icmp6_hdr.icmp6_data16[1],19843,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: mld_reserved\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_ROUTER_RENUMBERING
	CompareConstant(ICMP6_ROUTER_RENUMBERING,138,19844,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_ROUTER_RENUMBERING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef rr_type
	CompareMacro(rr_type,rr_hdr.icmp6_type,rr_hdr.icmp6_type,19845,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: rr_type\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef rr_code
	CompareMacro(rr_code,rr_hdr.icmp6_code,rr_hdr.icmp6_code,19846,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: rr_code\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef rr_cksum
	CompareMacro(rr_cksum,rr_hdr.icmp6_cksum,rr_hdr.icmp6_cksum,19847,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: rr_cksum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef rr_seqnum
	CompareMacro(rr_seqnum,rr_hdr.icmp6_data32[0],rr_hdr.icmp6_data32[0],19848,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: rr_seqnum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_FLAGS_TEST
	CompareConstant(ICMP6_RR_FLAGS_TEST,0x80,19849,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_FLAGS_TEST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_FLAGS_REQRESULT
	CompareConstant(ICMP6_RR_FLAGS_REQRESULT,0x40,19850,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_FLAGS_REQRESULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_FLAGS_FORCEAPPLY
	CompareConstant(ICMP6_RR_FLAGS_FORCEAPPLY,0x20,19851,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_FLAGS_FORCEAPPLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_FLAGS_SPECSITE
	CompareConstant(ICMP6_RR_FLAGS_SPECSITE,0x10,19852,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_FLAGS_SPECSITE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_FLAGS_PREVDONE
	CompareConstant(ICMP6_RR_FLAGS_PREVDONE,0x08,19853,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_FLAGS_PREVDONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RPM_PCO_ADD
	CompareConstant(RPM_PCO_ADD,1,19854,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RPM_PCO_ADD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RPM_PCO_CHANGE
	CompareConstant(RPM_PCO_CHANGE,2,19855,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RPM_PCO_CHANGE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RPM_PCO_SETGLOBAL
	CompareConstant(RPM_PCO_SETGLOBAL,3,19856,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: RPM_PCO_SETGLOBAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_PCOUSE_RAFLAGS_ONLINK
	CompareConstant(ICMP6_RR_PCOUSE_RAFLAGS_ONLINK,0x20,19857,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_PCOUSE_RAFLAGS_ONLINK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICMP6_RR_PCOUSE_RAFLAGS_AUTO
	CompareConstant(ICMP6_RR_PCOUSE_RAFLAGS_AUTO,0x10,19858,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ICMP6_RR_PCOUSE_RAFLAGS_AUTO\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __ia64__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __i386__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __s390x__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __x86_64__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#elif defined __s390__ && !defined __s390x__
/* No test for ICMP6_RR_RESULT_FLAGS_OOB */
#else
Msg( "No definition for ICMP6_RR_RESULT_FLAGS_OOB (19859, ) in db for this architecture\n");
#ifdef ICMP6_RR_RESULT_FLAGS_OOB
#endif
#endif
#if defined __powerpc64__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __ia64__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __i386__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __s390x__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __x86_64__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#elif defined __s390__ && !defined __s390x__
/* No test for ICMP6_RR_RESULT_FLAGS_FORBIDDEN */
#else
Msg( "No definition for ICMP6_RR_RESULT_FLAGS_FORBIDDEN (19860, ) in db for this architecture\n");
#ifdef ICMP6_RR_RESULT_FLAGS_FORBIDDEN
#endif
#endif
#if 1
CheckTypeSize(struct icmp6_filter,0, 39791, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmp6_filter on All\n");
CheckOffset(struct icmp6_filter,icmp6_filt,0,1,219016)
#endif

#if 1
CheckTypeSize(struct icmp6_hdr,0, 39794, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmp6_hdr on All\n");
CheckOffset(struct icmp6_hdr,icmp6_type,0,1,219020)
CheckOffset(struct icmp6_hdr,icmp6_code,0,1,219021)
CheckOffset(struct icmp6_hdr,icmp6_cksum,0,1,219022)
CheckOffset(struct icmp6_hdr,icmp6_dataun,0,1,219023)
#endif

#if 1
CheckTypeSize(struct nd_router_solicit,0, 39795, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_router_solicit on All\n");
CheckOffset(struct nd_router_solicit,nd_rs_hdr,0,1,219024)
#endif

#if 1
CheckTypeSize(struct nd_router_advert,0, 39796, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_router_advert on All\n");
CheckOffset(struct nd_router_advert,nd_ra_hdr,0,1,219025)
CheckOffset(struct nd_router_advert,nd_ra_reachable,0,1,219026)
CheckOffset(struct nd_router_advert,nd_ra_retransmit,0,1,219027)
#endif

#if 1
CheckTypeSize(struct nd_neighbor_solicit,0, 39797, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_neighbor_solicit on All\n");
CheckOffset(struct nd_neighbor_solicit,nd_ns_hdr,0,1,219028)
CheckOffset(struct nd_neighbor_solicit,nd_ns_target,0,1,219029)
#endif

#if 1
CheckTypeSize(struct nd_neighbor_advert,0, 39798, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_neighbor_advert on All\n");
CheckOffset(struct nd_neighbor_advert,nd_na_hdr,0,1,219030)
CheckOffset(struct nd_neighbor_advert,nd_na_target,0,1,219031)
#endif

#if 1
CheckTypeSize(struct nd_redirect,0, 39799, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_redirect on All\n");
CheckOffset(struct nd_redirect,nd_rd_hdr,0,1,219032)
CheckOffset(struct nd_redirect,nd_rd_target,0,1,219033)
CheckOffset(struct nd_redirect,nd_rd_dst,0,1,219034)
#endif

#if 1
CheckTypeSize(struct nd_opt_hdr,0, 39800, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_hdr on All\n");
CheckOffset(struct nd_opt_hdr,nd_opt_type,0,1,219035)
CheckOffset(struct nd_opt_hdr,nd_opt_len,0,1,219036)
#endif

#if 1
CheckTypeSize(struct nd_opt_prefix_info,0, 39801, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_prefix_info on All\n");
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_type,0,1,219037)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_len,0,1,219038)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_prefix_len,0,1,219039)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_flags_reserved,0,1,219040)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_valid_time,0,1,219041)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_preferred_time,0,1,219042)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_reserved2,0,1,219043)
CheckOffset(struct nd_opt_prefix_info,nd_opt_pi_prefix,0,1,219044)
#endif

#if 1
CheckTypeSize(struct nd_opt_rd_hdr,0, 39802, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_rd_hdr on All\n");
CheckOffset(struct nd_opt_rd_hdr,nd_opt_rh_type,0,1,219045)
CheckOffset(struct nd_opt_rd_hdr,nd_opt_rh_len,0,1,219046)
CheckOffset(struct nd_opt_rd_hdr,nd_opt_rh_reserved1,0,1,219047)
CheckOffset(struct nd_opt_rd_hdr,nd_opt_rh_reserved2,0,1,219048)
#endif

#if 1
CheckTypeSize(struct nd_opt_mtu,0, 39803, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_mtu on All\n");
CheckOffset(struct nd_opt_mtu,nd_opt_mtu_type,0,1,219049)
CheckOffset(struct nd_opt_mtu,nd_opt_mtu_len,0,1,219050)
CheckOffset(struct nd_opt_mtu,nd_opt_mtu_reserved,0,1,219051)
CheckOffset(struct nd_opt_mtu,nd_opt_mtu_mtu,0,1,219052)
#endif

#if 1
CheckTypeSize(struct mld_hdr,0, 39804, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for mld_hdr on All\n");
CheckOffset(struct mld_hdr,mld_icmp6_hdr,0,1,219053)
CheckOffset(struct mld_hdr,mld_addr,0,1,219054)
#endif

#if 1
CheckTypeSize(struct icmp6_router_renum,0, 39805, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for icmp6_router_renum on All\n");
CheckOffset(struct icmp6_router_renum,rr_hdr,0,1,219055)
CheckOffset(struct icmp6_router_renum,rr_segnum,0,1,219056)
CheckOffset(struct icmp6_router_renum,rr_flags,0,1,219057)
CheckOffset(struct icmp6_router_renum,rr_maxdelay,0,1,219058)
CheckOffset(struct icmp6_router_renum,rr_reserved,0,1,219059)
#endif

#if 1
CheckTypeSize(struct rr_pco_match,0, 39806, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for rr_pco_match on All\n");
CheckOffset(struct rr_pco_match,rpm_code,0,1,219060)
CheckOffset(struct rr_pco_match,rpm_len,0,1,219061)
CheckOffset(struct rr_pco_match,rpm_ordinal,0,1,219062)
CheckOffset(struct rr_pco_match,rpm_matchlen,0,1,219063)
CheckOffset(struct rr_pco_match,rpm_minlen,0,1,219064)
CheckOffset(struct rr_pco_match,rpm_maxlen,0,1,219065)
CheckOffset(struct rr_pco_match,rpm_reserved,0,1,219066)
CheckOffset(struct rr_pco_match,rpm_prefix,0,1,219067)
#endif

#if 1
CheckTypeSize(struct rr_pco_use,0, 39807, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for rr_pco_use on All\n");
CheckOffset(struct rr_pco_use,rpu_uselen,0,1,219068)
CheckOffset(struct rr_pco_use,rpu_keeplen,0,1,219069)
CheckOffset(struct rr_pco_use,rpu_ramask,0,1,219070)
CheckOffset(struct rr_pco_use,rpu_raflags,0,1,219071)
CheckOffset(struct rr_pco_use,rpu_vltime,0,1,219072)
CheckOffset(struct rr_pco_use,rpu_pltime,0,1,219073)
CheckOffset(struct rr_pco_use,rpu_flags,0,1,219074)
CheckOffset(struct rr_pco_use,rpu_prefix,0,1,219075)
#endif

#if 1
CheckTypeSize(struct rr_result,0, 39808, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for rr_result on All\n");
CheckOffset(struct rr_result,rrr_flags,0,1,219076)
CheckOffset(struct rr_result,rrr_ordinal,0,1,219077)
CheckOffset(struct rr_result,rrr_matchedlen,0,1,219078)
CheckOffset(struct rr_result,rrr_ifid,0,1,219079)
CheckOffset(struct rr_result,rrr_prefix,0,1,219080)
#endif

#if 1
CheckTypeSize(struct nd_opt_adv_interval,0, 39809, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_adv_interval on All\n");
CheckOffset(struct nd_opt_adv_interval,nd_opt_adv_interval_type,0,1,219081)
CheckOffset(struct nd_opt_adv_interval,nd_opt_adv_interval_len,0,1,219082)
CheckOffset(struct nd_opt_adv_interval,nd_opt_adv_interval_reserved,0,1,219083)
CheckOffset(struct nd_opt_adv_interval,nd_opt_adv_interval_ival,0,1,219084)
#endif

#if 1
CheckTypeSize(struct nd_opt_home_agent_info,0, 39810, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for nd_opt_home_agent_info on All\n");
CheckOffset(struct nd_opt_home_agent_info,nd_opt_home_agent_info_type,0,1,219085)
CheckOffset(struct nd_opt_home_agent_info,nd_opt_home_agent_info_len,0,1,219086)
CheckOffset(struct nd_opt_home_agent_info,nd_opt_home_agent_info_reserved,0,1,219087)
CheckOffset(struct nd_opt_home_agent_info,nd_opt_home_agent_info_preference,0,1,219088)
CheckOffset(struct nd_opt_home_agent_info,nd_opt_home_agent_info_lifetime,0,1,219089)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/icmp6.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of netinet/ip6.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "netinet/ip6.h"



#ifdef TET_TEST
void netinet_ip6_h()
{
#else
int netinet_ip6_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in netinet/ip6.h\n");
#endif

printf("Checking data structures in netinet/ip6.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ip6_vfc
	CompareMacro(ip6_vfc,ip6_ctlun.ip6_un2_vfc,ip6_ctlun.ip6_un2_vfc,16765,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_vfc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ip6_flow
	CompareMacro(ip6_flow,ip6_ctlun.ip6_un1.ip6_un1_flow,ip6_ctlun.ip6_un1.ip6_un1_flow,16766,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_flow\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ip6_plen
	CompareMacro(ip6_plen,ip6_ctlun.ip6_un1.ip6_un1_plen,ip6_ctlun.ip6_un1.ip6_un1_plen,16767,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_plen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ip6_nxt
	CompareMacro(ip6_nxt,ip6_ctlun.ip6_un1.ip6_un1_nxt,ip6_ctlun.ip6_un1.ip6_un1_nxt,16768,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_nxt\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ip6_hlim
	CompareMacro(ip6_hlim,ip6_ctlun.ip6_un1.ip6_un1_hlim,ip6_ctlun.ip6_un1.ip6_un1_hlim,16769,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_hlim\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ip6_hops
	CompareMacro(ip6_hops,ip6_ctlun.ip6_un1.ip6_un1_hlim,ip6_ctlun.ip6_un1.ip6_un1_hlim,16770,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: ip6_hops\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xfff8,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xfff8,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xf8ff,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xf8ff,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xfff8,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xf8ff,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6F_OFF_MASK
	CompareConstant(IP6F_OFF_MASK,0xfff8,16771,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_OFF_MASK\n");
cnt++;
#endif

#else
Msg( "No definition for IP6F_OFF_MASK (16771, int) in db for this architecture\n");
#ifdef IP6F_OFF_MASK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16771,%d,'""4.0""',NULL);\n", architecture, IP6F_OFF_MASK);
#endif
#endif
#if defined __powerpc64__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0006,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0006,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0600,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0600,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0006,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0600,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6F_RESERVED_MASK
	CompareConstant(IP6F_RESERVED_MASK,0x0006,16772,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_RESERVED_MASK\n");
cnt++;
#endif

#else
Msg( "No definition for IP6F_RESERVED_MASK (16772, int) in db for this architecture\n");
#ifdef IP6F_RESERVED_MASK
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16772,%d,'""4.0""',NULL);\n", architecture, IP6F_RESERVED_MASK);
#endif
#endif
#if defined __powerpc64__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0001,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0001,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0100,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0100,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0001,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0100,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6F_MORE_FRAG
	CompareConstant(IP6F_MORE_FRAG,0x0001,16773,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6F_MORE_FRAG\n");
cnt++;
#endif

#else
Msg( "No definition for IP6F_MORE_FRAG (16773, int) in db for this architecture\n");
#ifdef IP6F_MORE_FRAG
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16773,%d,'""4.0""',NULL);\n", architecture, IP6F_MORE_FRAG);
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE(o) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TYPE_SKIP
	CompareConstant(IP6OPT_TYPE_SKIP,0x00,16775,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TYPE_SKIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TYPE_DISCARD
	CompareConstant(IP6OPT_TYPE_DISCARD,0x40,16776,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TYPE_DISCARD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TYPE_FORCEICMP
	CompareConstant(IP6OPT_TYPE_FORCEICMP,0x80,16777,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TYPE_FORCEICMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TYPE_ICMP
	CompareConstant(IP6OPT_TYPE_ICMP,0xc0,16778,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TYPE_ICMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TYPE_MUTABLE
	CompareConstant(IP6OPT_TYPE_MUTABLE,0x20,16779,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TYPE_MUTABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_PAD1
	CompareConstant(IP6OPT_PAD1,0,16780,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_PAD1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_PADN
	CompareConstant(IP6OPT_PADN,1,16781,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_PADN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_JUMBO
	CompareConstant(IP6OPT_JUMBO,0xc2,16782,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_JUMBO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_NSAP_ADDR
	CompareConstant(IP6OPT_NSAP_ADDR,0xc3,16783,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_NSAP_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_TUNNEL_LIMIT
	CompareConstant(IP6OPT_TUNNEL_LIMIT,0x04,16784,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_TUNNEL_LIMIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_ROUTER_ALERT
	CompareConstant(IP6OPT_ROUTER_ALERT,0x05,16785,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_ROUTER_ALERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IP6OPT_JUMBO_LEN
	CompareConstant(IP6OPT_JUMBO_LEN,6,16786,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6OPT_JUMBO_LEN\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6_ALERT_MLD
	CompareConstant(IP6_ALERT_MLD,0x0000,16787,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_MLD\n");
cnt++;
#endif

#else
Msg( "No definition for IP6_ALERT_MLD (16787, int) in db for this architecture\n");
#ifdef IP6_ALERT_MLD
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16787,%d,'""4.0""',NULL);\n", architecture, IP6_ALERT_MLD);
#endif
#endif
#if defined __powerpc64__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0001,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0001,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0100,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0100,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0001,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0100,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6_ALERT_RSVP
	CompareConstant(IP6_ALERT_RSVP,0x0001,16788,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_RSVP\n");
cnt++;
#endif

#else
Msg( "No definition for IP6_ALERT_RSVP (16788, int) in db for this architecture\n");
#ifdef IP6_ALERT_RSVP
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16788,%d,'""4.0""',NULL);\n", architecture, IP6_ALERT_RSVP);
#endif
#endif
#if defined __powerpc64__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0002,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0002,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0200,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __i386__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0200,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0002,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0200,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef IP6_ALERT_AN
	CompareConstant(IP6_ALERT_AN,0x0002,16789,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: IP6_ALERT_AN\n");
cnt++;
#endif

#else
Msg( "No definition for IP6_ALERT_AN (16789, int) in db for this architecture\n");
#ifdef IP6_ALERT_AN
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,16789,%d,'""4.0""',NULL);\n", architecture, IP6_ALERT_AN);
#endif
#endif
#if 1
CheckTypeSize(struct ip6_hdrctl,0, 37083, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hdrctl on All\n");
CheckOffset(struct ip6_hdrctl,ip6_un1_flow,0,1,217155)
CheckOffset(struct ip6_hdrctl,ip6_un1_plen,0,1,217156)
CheckOffset(struct ip6_hdrctl,ip6_un1_nxt,0,1,217157)
CheckOffset(struct ip6_hdrctl,ip6_un1_hlim,0,1,217158)
#endif

#if 1
CheckTypeSize(struct ip6_hdr,0, 37084, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hdr on All\n");
CheckOffset(struct ip6_hdr,ip6_src,0,1,217163)
CheckOffset(struct ip6_hdr,ip6_dst,0,1,217164)
#endif

#if 1
CheckTypeSize(struct ip6_ext,0, 37085, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_ext on All\n");
CheckOffset(struct ip6_ext,ip6e_nxt,0,1,217165)
CheckOffset(struct ip6_ext,ip6e_len,0,1,217166)
#endif

#if 1
CheckTypeSize(struct ip6_hbh,0, 37086, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hbh on All\n");
CheckOffset(struct ip6_hbh,ip6h_nxt,0,1,217167)
CheckOffset(struct ip6_hbh,ip6h_len,0,1,217168)
#endif

#if 1
CheckTypeSize(struct ip6_dest,0, 37087, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_dest on All\n");
CheckOffset(struct ip6_dest,ip6d_nxt,0,1,217169)
CheckOffset(struct ip6_dest,ip6d_len,0,1,217170)
#endif

#if 1
CheckTypeSize(struct ip6_rthdr,0, 37088, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_rthdr on All\n");
CheckOffset(struct ip6_rthdr,ip6r_nxt,0,1,217171)
CheckOffset(struct ip6_rthdr,ip6r_len,0,1,217172)
CheckOffset(struct ip6_rthdr,ip6r_type,0,1,217173)
CheckOffset(struct ip6_rthdr,ip6r_segleft,0,1,217174)
#endif

#if 1
CheckTypeSize(struct ip6_frag,0, 37092, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_frag on All\n");
CheckOffset(struct ip6_frag,ip6f_nxt,0,1,217182)
CheckOffset(struct ip6_frag,ip6f_reserved,0,1,217183)
CheckOffset(struct ip6_frag,ip6f_offlg,0,1,217184)
CheckOffset(struct ip6_frag,ip6f_ident,0,1,217185)
#endif

#if 1
CheckTypeSize(struct ip6_opt,0, 37093, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt on All\n");
CheckOffset(struct ip6_opt,ip6o_type,0,1,217186)
CheckOffset(struct ip6_opt,ip6o_len,0,1,217187)
#endif

#if 1
CheckTypeSize(struct ip6_opt_jumbo,0, 37095, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_jumbo on All\n");
CheckOffset(struct ip6_opt_jumbo,ip6oj_type,0,1,217188)
CheckOffset(struct ip6_opt_jumbo,ip6oj_len,0,1,217189)
CheckOffset(struct ip6_opt_jumbo,ip6oj_jumbo_len,0,1,217190)
#endif

#if 1
CheckTypeSize(struct ip6_opt_nsap,0, 37096, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_nsap on All\n");
CheckOffset(struct ip6_opt_nsap,ip6on_type,0,1,217191)
CheckOffset(struct ip6_opt_nsap,ip6on_len,0,1,217192)
CheckOffset(struct ip6_opt_nsap,ip6on_src_nsap_len,0,1,217193)
CheckOffset(struct ip6_opt_nsap,ip6on_dst_nsap_len,0,1,217194)
#endif

#if 1
CheckTypeSize(struct ip6_opt_tunnel,0, 37097, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_tunnel on All\n");
CheckOffset(struct ip6_opt_tunnel,ip6ot_type,0,1,217195)
CheckOffset(struct ip6_opt_tunnel,ip6ot_len,0,1,217196)
CheckOffset(struct ip6_opt_tunnel,ip6ot_encap_limit,0,1,217197)
#endif

#if 1
CheckTypeSize(struct ip6_opt_router,0, 37099, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_router on All\n");
CheckOffset(struct ip6_opt_router,ip6or_type,0,1,217198)
CheckOffset(struct ip6_opt_router,ip6or_len,0,1,217199)
CheckOffset(struct ip6_opt_router,ip6or_value,0,1,217200)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/ip6.h\n\n",pcnt,cnt);
return cnt;
#endif

}

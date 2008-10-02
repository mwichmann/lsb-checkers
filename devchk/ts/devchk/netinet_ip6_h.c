/*
 * Test of netinet/ip6.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in netinet/ip6.h\n");
#endif

printf("Checking data structures in netinet/ip6.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ip6_vfc */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ip6_flow */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ip6_plen */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ip6_nxt */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ip6_hlim */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ip6_hops */
#endif

#if defined __powerpc64__
/* No test for IP6F_OFF_MASK */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6F_OFF_MASK */
#elif defined __ia64__
/* No test for IP6F_OFF_MASK */
#elif defined __i386__
/* No test for IP6F_OFF_MASK */
#elif defined __s390x__
/* No test for IP6F_OFF_MASK */
#elif defined __x86_64__
/* No test for IP6F_OFF_MASK */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6F_OFF_MASK */
#else
Msg( "No definition for IP6F_OFF_MASK (16771, Unknown) in db\n");
#ifdef IP6F_OFF_MASK
#endif
#endif
#if defined __powerpc64__
/* No test for IP6F_RESERVED_MASK */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6F_RESERVED_MASK */
#elif defined __ia64__
/* No test for IP6F_RESERVED_MASK */
#elif defined __i386__
/* No test for IP6F_RESERVED_MASK */
#elif defined __s390x__
/* No test for IP6F_RESERVED_MASK */
#elif defined __x86_64__
/* No test for IP6F_RESERVED_MASK */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6F_RESERVED_MASK */
#else
Msg( "No definition for IP6F_RESERVED_MASK (16772, Unknown) in db\n");
#ifdef IP6F_RESERVED_MASK
#endif
#endif
#if defined __powerpc64__
/* No test for IP6F_MORE_FRAG */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6F_MORE_FRAG */
#elif defined __ia64__
/* No test for IP6F_MORE_FRAG */
#elif defined __i386__
/* No test for IP6F_MORE_FRAG */
#elif defined __s390x__
/* No test for IP6F_MORE_FRAG */
#elif defined __x86_64__
/* No test for IP6F_MORE_FRAG */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6F_MORE_FRAG */
#else
Msg( "No definition for IP6F_MORE_FRAG (16773, Unknown) in db\n");
#ifdef IP6F_MORE_FRAG
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE(o) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE_SKIP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE_DISCARD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE_FORCEICMP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE_ICMP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TYPE_MUTABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_PAD1 */
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
/* No test for IP6OPT_JUMBO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_NSAP_ADDR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_TUNNEL_LIMIT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IP6OPT_ROUTER_ALERT */
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
/* No test for IP6_ALERT_MLD */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6_ALERT_MLD */
#elif defined __ia64__
/* No test for IP6_ALERT_MLD */
#elif defined __i386__
/* No test for IP6_ALERT_MLD */
#elif defined __s390x__
/* No test for IP6_ALERT_MLD */
#elif defined __x86_64__
/* No test for IP6_ALERT_MLD */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6_ALERT_MLD */
#else
Msg( "No definition for IP6_ALERT_MLD (16787, Unknown) in db\n");
#ifdef IP6_ALERT_MLD
#endif
#endif
#if defined __powerpc64__
/* No test for IP6_ALERT_RSVP */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6_ALERT_RSVP */
#elif defined __ia64__
/* No test for IP6_ALERT_RSVP */
#elif defined __i386__
/* No test for IP6_ALERT_RSVP */
#elif defined __s390x__
/* No test for IP6_ALERT_RSVP */
#elif defined __x86_64__
/* No test for IP6_ALERT_RSVP */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6_ALERT_RSVP */
#else
Msg( "No definition for IP6_ALERT_RSVP (16788, Unknown) in db\n");
#ifdef IP6_ALERT_RSVP
#endif
#endif
#if defined __powerpc64__
/* No test for IP6_ALERT_AN */
#elif defined __powerpc__ && !defined __powerpc64__
/* No test for IP6_ALERT_AN */
#elif defined __ia64__
/* No test for IP6_ALERT_AN */
#elif defined __i386__
/* No test for IP6_ALERT_AN */
#elif defined __s390x__
/* No test for IP6_ALERT_AN */
#elif defined __x86_64__
/* No test for IP6_ALERT_AN */
#elif defined __s390__ && !defined __s390x__
/* No test for IP6_ALERT_AN */
#else
Msg( "No definition for IP6_ALERT_AN (16789, Unknown) in db\n");
#ifdef IP6_ALERT_AN
#endif
#endif
#if 1
CheckTypeSize(struct ip6_hdrctl,0, 1009193, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hdrctl on All\n");
CheckOffset(struct ip6_hdrctl,ip6_un1_flow,0,1,217155)
CheckOffset(struct ip6_hdrctl,ip6_un1_plen,0,1,217156)
CheckOffset(struct ip6_hdrctl,ip6_un1_nxt,0,1,217157)
CheckOffset(struct ip6_hdrctl,ip6_un1_hlim,0,1,217158)
#endif

#if 1
CheckTypeSize(struct ip6_hdr,0, 1009195, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hdr on All\n");
CheckOffset(struct ip6_hdr,ip6_src,0,1,217163)
CheckOffset(struct ip6_hdr,ip6_dst,0,1,217164)
#endif

#if 1
CheckTypeSize(struct ip6_ext,0, 1009196, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_ext on All\n");
CheckOffset(struct ip6_ext,ip6e_nxt,0,1,217165)
CheckOffset(struct ip6_ext,ip6e_len,0,1,217166)
#endif

#if 1
CheckTypeSize(struct ip6_hbh,0, 1009197, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_hbh on All\n");
CheckOffset(struct ip6_hbh,ip6h_nxt,0,1,217167)
CheckOffset(struct ip6_hbh,ip6h_len,0,1,217168)
#endif

#if 1
CheckTypeSize(struct ip6_dest,0, 1009198, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_dest on All\n");
CheckOffset(struct ip6_dest,ip6d_nxt,0,1,217169)
CheckOffset(struct ip6_dest,ip6d_len,0,1,217170)
#endif

#if 1
CheckTypeSize(struct ip6_rthdr,0, 1009199, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_rthdr on All\n");
CheckOffset(struct ip6_rthdr,ip6r_nxt,0,1,217171)
CheckOffset(struct ip6_rthdr,ip6r_len,0,1,217172)
CheckOffset(struct ip6_rthdr,ip6r_type,0,1,217173)
CheckOffset(struct ip6_rthdr,ip6r_segleft,0,1,217174)
#endif

#if 1
CheckTypeSize(struct ip6_frag,0, 1009203, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_frag on All\n");
CheckOffset(struct ip6_frag,ip6f_nxt,0,1,217182)
CheckOffset(struct ip6_frag,ip6f_reserved,0,1,217183)
CheckOffset(struct ip6_frag,ip6f_offlg,0,1,217184)
CheckOffset(struct ip6_frag,ip6f_ident,0,1,217185)
#endif

#if 1
CheckTypeSize(struct ip6_opt,0, 1009204, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt on All\n");
CheckOffset(struct ip6_opt,ip6o_type,0,1,217186)
CheckOffset(struct ip6_opt,ip6o_len,0,1,217187)
#endif

#if 1
CheckTypeSize(struct ip6_opt_jumbo,0, 1009206, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_jumbo on All\n");
CheckOffset(struct ip6_opt_jumbo,ip6oj_type,0,1,217188)
CheckOffset(struct ip6_opt_jumbo,ip6oj_len,0,1,217189)
CheckOffset(struct ip6_opt_jumbo,ip6oj_jumbo_len,0,1,217190)
#endif

#if 1
CheckTypeSize(struct ip6_opt_nsap,0, 1009207, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_nsap on All\n");
CheckOffset(struct ip6_opt_nsap,ip6on_type,0,1,217191)
CheckOffset(struct ip6_opt_nsap,ip6on_len,0,1,217192)
CheckOffset(struct ip6_opt_nsap,ip6on_src_nsap_len,0,1,217193)
CheckOffset(struct ip6_opt_nsap,ip6on_dst_nsap_len,0,1,217194)
#endif

#if 1
CheckTypeSize(struct ip6_opt_tunnel,0, 1009208, 1, 4.0, NULL, 0, NULL)
Msg("Missing member data for ip6_opt_tunnel on All\n");
CheckOffset(struct ip6_opt_tunnel,ip6ot_type,0,1,217195)
CheckOffset(struct ip6_opt_tunnel,ip6ot_len,0,1,217196)
CheckOffset(struct ip6_opt_tunnel,ip6ot_encap_limit,0,1,217197)
#endif

#if 1
CheckTypeSize(struct ip6_opt_router,0, 1009210, 1, 4.0, NULL, 0, NULL)
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

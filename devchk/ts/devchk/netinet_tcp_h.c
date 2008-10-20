/*
 * Test of netinet/tcp.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "netinet/tcp.h"



#ifdef TET_TEST
void netinet_tcp_h()
{
#else
int netinet_tcp_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in netinet/tcp.h\n");
#endif

printf("Checking data structures in netinet/tcp.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef TCP_CONGESTION
	CompareConstant(TCP_CONGESTION,13,16762,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_CONGESTION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_TCP
	CompareConstant(SOL_TCP,6,3331,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SOL_TCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_NODELAY
	CompareConstant(TCP_NODELAY,1,4519,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_NODELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_MAXSEG
	CompareConstant(TCP_MAXSEG,2,4520,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_MAXSEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_CORK
	CompareConstant(TCP_CORK,3,4521,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_CORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_KEEPIDLE
	CompareConstant(TCP_KEEPIDLE,4,4522,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_KEEPIDLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_KEEPINTVL
	CompareConstant(TCP_KEEPINTVL,5,4523,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_KEEPINTVL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_KEEPCNT
	CompareConstant(TCP_KEEPCNT,6,4524,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_KEEPCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_SYNCNT
	CompareConstant(TCP_SYNCNT,7,4525,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_SYNCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_LINGER2
	CompareConstant(TCP_LINGER2,8,4526,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_LINGER2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_DEFER_ACCEPT
	CompareConstant(TCP_DEFER_ACCEPT,9,4527,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_DEFER_ACCEPT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_WINDOW_CLAMP
	CompareConstant(TCP_WINDOW_CLAMP,10,4528,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_WINDOW_CLAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_INFO
	CompareConstant(TCP_INFO,11,4529,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_QUICKACK
	CompareConstant(TCP_QUICKACK,12,4530,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_QUICKACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_EOL
	CompareConstant(TCPOPT_EOL,0,4531,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_EOL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_NOP
	CompareConstant(TCPOPT_NOP,1,4532,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_NOP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_MAXSEG
	CompareConstant(TCPOPT_MAXSEG,2,4533,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_MAXSEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOLEN_MAXSEG
	CompareConstant(TCPOLEN_MAXSEG,4,4534,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOLEN_MAXSEG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_WINDOW
	CompareConstant(TCPOPT_WINDOW,3,4535,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_WINDOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOLEN_WINDOW
	CompareConstant(TCPOLEN_WINDOW,3,4536,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOLEN_WINDOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_SACK_PERMITTED
	CompareConstant(TCPOPT_SACK_PERMITTED,4,4537,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_SACK_PERMITTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOLEN_SACK_PERMITTED
	CompareConstant(TCPOLEN_SACK_PERMITTED,2,4538,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOLEN_SACK_PERMITTED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_SACK
	CompareConstant(TCPOPT_SACK,5,4539,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_SACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_TIMESTAMP
	CompareConstant(TCPOPT_TIMESTAMP,8,4540,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_TIMESTAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOLEN_TIMESTAMP
	CompareConstant(TCPOLEN_TIMESTAMP,10,4541,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOLEN_TIMESTAMP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOLEN_TSTAMP_APPA
	CompareConstant(TCPOLEN_TSTAMP_APPA,(TCPOLEN_TIMESTAMP+2),4542,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOLEN_TSTAMP_APPA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPOPT_TSTAMP_HDR
	CompareConstant(TCPOPT_TSTAMP_HDR,(TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP),4543,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPOPT_TSTAMP_HDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_MSS
	CompareConstant(TCP_MSS,512,4544,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_MSS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_MAXWIN
	CompareConstant(TCP_MAXWIN,65535,4545,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_MAXWIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCP_MAX_WINSHIFT
	CompareConstant(TCP_MAX_WINSHIFT,14,4546,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCP_MAX_WINSHIFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPI_OPT_TIMESTAMPS
	CompareConstant(TCPI_OPT_TIMESTAMPS,1,4547,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPI_OPT_TIMESTAMPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPI_OPT_SACK
	CompareConstant(TCPI_OPT_SACK,2,4548,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPI_OPT_SACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPI_OPT_WSCALE
	CompareConstant(TCPI_OPT_WSCALE,4,4549,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPI_OPT_WSCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TCPI_OPT_ECN
	CompareConstant(TCPI_OPT_ECN,8,4550,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: TCPI_OPT_ECN\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct tcphdr,0, 10156, 12, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,doff,4,12,217292)
CheckBitField(struct tcphdr,res1,4,12,217291)
CheckBitField(struct tcphdr,res2,2,12,217211)
CheckBitField(struct tcphdr,urg,1,12,217298)
CheckBitField(struct tcphdr,ack,1,12,217297)
CheckBitField(struct tcphdr,psh,1,12,217296)
CheckBitField(struct tcphdr,rst,1,12,217295)
CheckBitField(struct tcphdr,syn,1,12,217294)
CheckBitField(struct tcphdr,fin,1,12,217293)
#elif defined __x86_64__
CheckTypeSize(struct tcphdr,0, 10156, 11, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,res1,4,11,217276)
CheckBitField(struct tcphdr,doff,4,11,217277)
CheckBitField(struct tcphdr,fin,1,11,217278)
CheckBitField(struct tcphdr,syn,1,11,217279)
CheckBitField(struct tcphdr,rst,1,11,217280)
CheckBitField(struct tcphdr,psh,1,11,217281)
CheckBitField(struct tcphdr,ack,1,11,217282)
CheckBitField(struct tcphdr,urg,1,11,217283)
CheckBitField(struct tcphdr,res2,2,11,217210)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct tcphdr,0, 10156, 10, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,doff,4,10,217262)
CheckBitField(struct tcphdr,res1,4,10,217261)
CheckBitField(struct tcphdr,res2,2,10,217209)
CheckBitField(struct tcphdr,urg,1,10,217268)
CheckBitField(struct tcphdr,ack,1,10,217267)
CheckBitField(struct tcphdr,psh,1,10,217266)
CheckBitField(struct tcphdr,rst,1,10,217265)
CheckBitField(struct tcphdr,syn,1,10,217264)
CheckBitField(struct tcphdr,fin,1,10,217263)
#elif defined __powerpc64__
CheckTypeSize(struct tcphdr,0, 10156, 9, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,doff,4,9,217247)
CheckBitField(struct tcphdr,res1,4,9,217246)
CheckBitField(struct tcphdr,res2,2,9,217208)
CheckBitField(struct tcphdr,urg,1,9,217253)
CheckBitField(struct tcphdr,ack,1,9,217252)
CheckBitField(struct tcphdr,psh,1,9,217251)
CheckBitField(struct tcphdr,rst,1,9,217250)
CheckBitField(struct tcphdr,syn,1,9,217249)
CheckBitField(struct tcphdr,fin,1,9,217248)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct tcphdr,0, 10156, 6, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,doff,4,6,217232)
CheckBitField(struct tcphdr,res1,4,6,217231)
CheckBitField(struct tcphdr,res2,2,6,217207)
CheckBitField(struct tcphdr,urg,1,6,217238)
CheckBitField(struct tcphdr,ack,1,6,217237)
CheckBitField(struct tcphdr,psh,1,6,217236)
CheckBitField(struct tcphdr,rst,1,6,217235)
CheckBitField(struct tcphdr,syn,1,6,217234)
CheckBitField(struct tcphdr,fin,1,6,217233)
#elif defined __ia64__
CheckTypeSize(struct tcphdr,0, 10156, 3, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,res1,4,3,217216)
CheckBitField(struct tcphdr,doff,4,3,217217)
CheckBitField(struct tcphdr,fin,1,3,217218)
CheckBitField(struct tcphdr,syn,1,3,217219)
CheckBitField(struct tcphdr,rst,1,3,217220)
CheckBitField(struct tcphdr,psh,1,3,217221)
CheckBitField(struct tcphdr,ack,1,3,217222)
CheckBitField(struct tcphdr,urg,1,3,217223)
CheckBitField(struct tcphdr,res2,2,3,217206)
#elif defined __i386__
CheckTypeSize(struct tcphdr,0, 10156, 2, 4.0, NULL, 0, NULL)
CheckBitField(struct tcphdr,res1,4,2,33825)
CheckBitField(struct tcphdr,doff,4,2,33826)
CheckBitField(struct tcphdr,fin,1,2,33827)
CheckBitField(struct tcphdr,syn,1,2,33828)
CheckBitField(struct tcphdr,rst,1,2,33829)
CheckBitField(struct tcphdr,psh,1,2,33830)
CheckBitField(struct tcphdr,ack,1,2,33831)
CheckBitField(struct tcphdr,urg,1,2,33832)
CheckBitField(struct tcphdr,res2,2,2,217205)
#endif

#if 1
CheckEnum("TCP_CA_Open",TCP_CA_Open,0,33873)
CheckEnum("TCP_CA_Disorder",TCP_CA_Disorder,(0) + 1,33874)
CheckEnum("TCP_CA_CWR",TCP_CA_CWR,((0) + 1) + 1,33875)
CheckEnum("TCP_CA_Recovery",TCP_CA_Recovery,(((0) + 1) + 1) + 1,33876)
CheckEnum("TCP_CA_Loss",TCP_CA_Loss,((((0) + 1) + 1) + 1) + 1,33877)
#endif

#if 1
CheckTypeSize(struct tcp_info,0, 10162, 1, 4.0, NULL, 0, NULL)
CheckBitField(struct tcp_info,tcpi_snd_wscale,4,1,33884)
CheckBitField(struct tcp_info,tcpi_rcv_wscale,4,1,33885)
#endif

#if 1
CheckEnum("TCP_ESTABLISHED",TCP_ESTABLISHED,0,216908)
CheckEnum("TCP_SYN_SENT",TCP_SYN_SENT,(0) + 1,216909)
CheckEnum("TCP_SYN_RECV",TCP_SYN_RECV,((0) + 1) + 1,216910)
CheckEnum("TCP_FIN_WAIT1",TCP_FIN_WAIT1,(((0) + 1) + 1) + 1,216911)
CheckEnum("TCP_FIN_WAIT2",TCP_FIN_WAIT2,((((0) + 1) + 1) + 1) + 1,216912)
CheckEnum("TCP_TIME_WAIT",TCP_TIME_WAIT,(((((0) + 1) + 1) + 1) + 1) + 1,216913)
CheckEnum("TCP_CLOSE",TCP_CLOSE,((((((0) + 1) + 1) + 1) + 1) + 1) + 1,216914)
CheckEnum("TCP_CLOSE_WAIT",TCP_CLOSE_WAIT,(((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1,216915)
CheckEnum("TCP_LAST_ACK",TCP_LAST_ACK,((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,216916)
CheckEnum("TCP_LISTEN",TCP_LISTEN,(((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,216917)
CheckEnum("TCP_CLOSING",TCP_CLOSING,((((((((((0) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1) + 1,216918)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in netinet/tcp.h\n\n",pcnt,cnt);
return cnt;
#endif

}

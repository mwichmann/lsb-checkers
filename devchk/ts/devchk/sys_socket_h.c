/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/socket.h"



#ifdef TET_TEST
void sys_socket_h()
{
#else
int sys_socket_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/socket.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PF_UNSPEC
	CompareConstant(PF_UNSPEC,AF_UNSPEC,3283,architecture)
#else
Msg( "Error: Constant not found: PF_UNSPEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PF_UNIX
	CompareConstant(PF_UNIX,AF_UNIX,3284,architecture)
#else
Msg( "Error: Constant not found: PF_UNIX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PF_LOCAL
	CompareConstant(PF_LOCAL,AF_LOCAL,3285,architecture)
#else
Msg( "Error: Constant not found: PF_LOCAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PF_INET
	CompareConstant(PF_INET,AF_INET,3286,architecture)
#else
Msg( "Error: Constant not found: PF_INET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PF_INET6
	CompareConstant(PF_INET6,AF_INET6,3294,architecture)
#else
Msg( "Error: Constant not found: PF_INET6\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SIOCGIFCONF
	CompareConstant(SIOCGIFCONF,0x8912,3382,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFCONF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SIOCGIFFLAGS
	CompareConstant(SIOCGIFFLAGS,0x8913,3383,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SIOCGIFADDR
	CompareConstant(SIOCGIFADDR,0x8915,3385,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFADDR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SIOCGIFNETMASK
	CompareConstant(SIOCGIFNETMASK,0x891b,3391,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFNETMASK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOL_SOCKET
	CompareConstant(SOL_SOCKET,1,3213,architecture)
#else
Msg( "Error: Constant not found: SOL_SOCKET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_DEBUG
	CompareConstant(SO_DEBUG,1,3214,architecture)
#else
Msg( "Error: Constant not found: SO_DEBUG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_REUSEADDR
	CompareConstant(SO_REUSEADDR,2,3215,architecture)
#else
Msg( "Error: Constant not found: SO_REUSEADDR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_TYPE
	CompareConstant(SO_TYPE,3,3216,architecture)
#else
Msg( "Error: Constant not found: SO_TYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_ERROR
	CompareConstant(SO_ERROR,4,3217,architecture)
#else
Msg( "Error: Constant not found: SO_ERROR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_DONTROUTE
	CompareConstant(SO_DONTROUTE,5,3218,architecture)
#else
Msg( "Error: Constant not found: SO_DONTROUTE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_BROADCAST
	CompareConstant(SO_BROADCAST,6,3219,architecture)
#else
Msg( "Error: Constant not found: SO_BROADCAST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_SNDBUF
	CompareConstant(SO_SNDBUF,7,3220,architecture)
#else
Msg( "Error: Constant not found: SO_SNDBUF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_RCVBUF
	CompareConstant(SO_RCVBUF,8,3221,architecture)
#else
Msg( "Error: Constant not found: SO_RCVBUF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_KEEPALIVE
	CompareConstant(SO_KEEPALIVE,9,3222,architecture)
#else
Msg( "Error: Constant not found: SO_KEEPALIVE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_OOBINLINE
	CompareConstant(SO_OOBINLINE,10,3223,architecture)
#else
Msg( "Error: Constant not found: SO_OOBINLINE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_NO_CHECK
	CompareConstant(SO_NO_CHECK,11,3224,architecture)
#else
Msg( "Error: Constant not found: SO_NO_CHECK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_PRIORITY
	CompareConstant(SO_PRIORITY,12,3225,architecture)
#else
Msg( "Error: Constant not found: SO_PRIORITY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SO_LINGER
	CompareConstant(SO_LINGER,13,3226,architecture)
#else
Msg( "Error: Constant not found: SO_LINGER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_OOB
	CompareConstant(MSG_OOB,1,3312,architecture)
#else
Msg( "Error: Constant not found: MSG_OOB\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_PEEK
	CompareConstant(MSG_PEEK,2,3313,architecture)
#else
Msg( "Error: Constant not found: MSG_PEEK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_DONTROUTE
	CompareConstant(MSG_DONTROUTE,4,3314,architecture)
#else
Msg( "Error: Constant not found: MSG_DONTROUTE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_CTRUNC
	CompareConstant(MSG_CTRUNC,8,3316,architecture)
#else
Msg( "Error: Constant not found: MSG_CTRUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_STREAM
	CompareConstant(SOCK_STREAM,1,3244,architecture)
#else
Msg( "Error: Constant not found: SOCK_STREAM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_DGRAM
	CompareConstant(SOCK_DGRAM,2,3245,architecture)
#else
Msg( "Error: Constant not found: SOCK_DGRAM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_TRUNC
	CompareConstant(MSG_TRUNC,0x20,3318,architecture)
#else
Msg( "Error: Constant not found: MSG_TRUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_RAW
	CompareConstant(SOCK_RAW,3,3246,architecture)
#else
Msg( "Error: Constant not found: SOCK_RAW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_RDM
	CompareConstant(SOCK_RDM,4,3247,architecture)
#else
Msg( "Error: Constant not found: SOCK_RDM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_SEQPACKET
	CompareConstant(SOCK_SEQPACKET,5,3248,architecture)
#else
Msg( "Error: Constant not found: SOCK_SEQPACKET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOCK_PACKET
	CompareConstant(SOCK_PACKET,10,3249,architecture)
#else
Msg( "Error: Constant not found: SOCK_PACKET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_EOR
	CompareConstant(MSG_EOR,0x80,3320,architecture)
#else
Msg( "Error: Constant not found: MSG_EOR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MSG_WAITALL
	CompareConstant(MSG_WAITALL,0x100,3321,architecture)
#else
Msg( "Error: Constant not found: MSG_WAITALL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_UNSPEC
	CompareConstant(AF_UNSPEC,0,3255,architecture)
#else
Msg( "Error: Constant not found: AF_UNSPEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_UNIX
	CompareConstant(AF_UNIX,1,3256,architecture)
#else
Msg( "Error: Constant not found: AF_UNIX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_LOCAL
	CompareConstant(AF_LOCAL,1,3257,architecture)
#else
Msg( "Error: Constant not found: AF_LOCAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_INET
	CompareConstant(AF_INET,2,3258,architecture)
#else
Msg( "Error: Constant not found: AF_INET\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_AX25
	CompareConstant(AF_AX25,3,3259,architecture)
#else
Msg( "Error: Constant not found: AF_AX25\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOL_IP
	CompareConstant(SOL_IP,0,3330,architecture)
#else
Msg( "Error: Constant not found: SOL_IP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOL_TCP
	CompareConstant(SOL_TCP,6,3331,architecture)
#else
Msg( "Error: Constant not found: SOL_TCP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOL_UDP
	CompareConstant(SOL_UDP,17,3332,architecture)
#else
Msg( "Error: Constant not found: SOL_UDP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_IPX
	CompareConstant(AF_IPX,4,3260,architecture)
#else
Msg( "Error: Constant not found: AF_IPX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_APPLETALK
	CompareConstant(AF_APPLETALK,5,3261,architecture)
#else
Msg( "Error: Constant not found: AF_APPLETALK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SOL_RAW
	CompareConstant(SOL_RAW,255,3335,architecture)
#else
Msg( "Error: Constant not found: SOL_RAW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_NETROM
	CompareConstant(AF_NETROM,6,3262,architecture)
#else
Msg( "Error: Constant not found: AF_NETROM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_BRIDGE
	CompareConstant(AF_BRIDGE,7,3263,architecture)
#else
Msg( "Error: Constant not found: AF_BRIDGE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_ATMPVC
	CompareConstant(AF_ATMPVC,8,3264,architecture)
#else
Msg( "Error: Constant not found: AF_ATMPVC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_X25
	CompareConstant(AF_X25,9,3265,architecture)
#else
Msg( "Error: Constant not found: AF_X25\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AF_INET6
	CompareConstant(AF_INET6,10,3266,architecture)
#else
Msg( "Error: Constant not found: AF_INET6\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SHUT_RD
	CompareConstant(SHUT_RD,0,2466,architecture)
#else
Msg( "Error: Constant not found: SHUT_RD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SHUT_WR
	CompareConstant(SHUT_WR,1,2467,architecture)
#else
Msg( "Error: Constant not found: SHUT_WR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SHUT_RDWR
	CompareConstant(SHUT_RDWR,2,2468,architecture)
#else
Msg( "Error: Constant not found: SHUT_RDWR\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct linger,8, 6907, 2)
#elif __ia64__
CheckTypeSize(struct linger,8, 6907, 3)
#elif __powerpc__
CheckTypeSize(struct linger,8, 6907, 6)
#elif __s390__
CheckTypeSize(struct linger,8, 6907, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6907,0);
Msg("Find size of linger (6907)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct cmsghdr,12, 6909, 2)
#elif __ia64__
CheckTypeSize(struct cmsghdr,16, 6909, 3)
#elif __powerpc__
CheckTypeSize(struct cmsghdr,12, 6909, 6)
#elif __s390__
CheckTypeSize(struct cmsghdr,12, 6909, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6909,0);
Msg("Find size of cmsghdr (6909)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct iovec,8, 9022, 2)
#elif __ia64__
CheckTypeSize(struct iovec,16, 9022, 3)
#elif __powerpc__
CheckTypeSize(struct iovec,8, 9022, 6)
#elif __s390__
CheckTypeSize(struct iovec,8, 9022, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9022,0);
Msg("Find size of iovec (9022)\n");
#endif

#ifdef __i386__
CheckTypeSize(sa_family_t,2, 6905, 2)
#elif __ia64__
CheckTypeSize(sa_family_t,2, 6905, 3)
#elif __powerpc__
CheckTypeSize(sa_family_t,2, 6905, 6)
#elif __s390__
CheckTypeSize(sa_family_t,2, 6905, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6905,0);
Msg("Find size of sa_family_t (6905)\n");
#endif

#ifdef __i386__
CheckTypeSize(socklen_t,4, 9155, 2)
#elif __ia64__
CheckTypeSize(socklen_t,4, 9155, 3)
#elif __powerpc__
CheckTypeSize(socklen_t,4, 9155, 6)
#elif __s390__
CheckTypeSize(socklen_t,4, 9155, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9155,0);
Msg("Find size of socklen_t (9155)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct sockaddr,16, 6906, 2)
#elif __ia64__
CheckTypeSize(struct sockaddr,16, 6906, 3)
#elif __powerpc__
CheckTypeSize(struct sockaddr,16, 6906, 6)
#elif __s390__
CheckTypeSize(struct sockaddr,16, 6906, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6906,0);
Msg("Find size of sockaddr (6906)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct msghdr,28, 6908, 2)
#elif __ia64__
CheckTypeSize(struct msghdr,56, 6908, 3)
#elif __powerpc__
CheckTypeSize(struct msghdr,28, 6908, 6)
#elif __s390__
CheckTypeSize(struct msghdr,28, 6908, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6908,0);
Msg("Find size of msghdr (6908)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
#endif

}

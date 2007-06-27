/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <sys/ioctl.h>
#include <netdb.h>
#include "sys/socket.h"



#ifdef TET_TEST
void sys_socket_h()
{
#else
int sys_socket_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/socket.h\n");
#endif

printf("Checking data structures in sys/socket.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SHUT_RD
	CompareConstant(SHUT_RD,0,2466,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SHUT_RD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHUT_WR
	CompareConstant(SHUT_WR,1,2467,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SHUT_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHUT_RDWR
	CompareConstant(SHUT_RDWR,2,2468,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SHUT_RDWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_SOCKET
	CompareConstant(SOL_SOCKET,1,3213,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOL_SOCKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_DEBUG
	CompareConstant(SO_DEBUG,1,3214,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_REUSEADDR
	CompareConstant(SO_REUSEADDR,2,3215,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_REUSEADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_TYPE
	CompareConstant(SO_TYPE,3,3216,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_ERROR
	CompareConstant(SO_ERROR,4,3217,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_DONTROUTE
	CompareConstant(SO_DONTROUTE,5,3218,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_DONTROUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_BROADCAST
	CompareConstant(SO_BROADCAST,6,3219,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_SNDBUF
	CompareConstant(SO_SNDBUF,7,3220,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDBUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_RCVBUF
	CompareConstant(SO_RCVBUF,8,3221,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVBUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_KEEPALIVE
	CompareConstant(SO_KEEPALIVE,9,3222,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_KEEPALIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_OOBINLINE
	CompareConstant(SO_OOBINLINE,10,3223,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_OOBINLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_NO_CHECK
	CompareConstant(SO_NO_CHECK,11,3224,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_NO_CHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_PRIORITY
	CompareConstant(SO_PRIORITY,12,3225,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_PRIORITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_LINGER
	CompareConstant(SO_LINGER,13,3226,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SO_LINGER\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,16,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,16,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#else
Msg( "No definition for SO_RCVLOWAT (3230, int) in db\n");
#ifdef SO_RCVLOWAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3230,%d,'""2.1""',NULL);\n", architecture, SO_RCVLOWAT);
#endif
#endif
#if defined __powerpc64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,17,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,17,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#else
Msg( "No definition for SO_SNDLOWAT (3231, int) in db\n");
#ifdef SO_SNDLOWAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3231,%d,'""2.1""',NULL);\n", architecture, SO_SNDLOWAT);
#endif
#endif
#if defined __powerpc64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,18,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,18,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#else
Msg( "No definition for SO_RCVTIMEO (3232, int) in db\n");
#ifdef SO_RCVTIMEO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3232,%d,'""2.1""',NULL);\n", architecture, SO_RCVTIMEO);
#endif
#endif
#if defined __powerpc64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,19,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,19,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __i386__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#else
Msg( "No definition for SO_SNDTIMEO (3233, int) in db\n");
#ifdef SO_SNDTIMEO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3233,%d,'""2.1""',NULL);\n", architecture, SO_SNDTIMEO);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SO_ACCEPTCONN
	CompareConstant(SO_ACCEPTCONN,30,3243,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SO_ACCEPTCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_STREAM
	CompareConstant(SOCK_STREAM,1,3244,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_STREAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_DGRAM
	CompareConstant(SOCK_DGRAM,2,3245,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_DGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_RAW
	CompareConstant(SOCK_RAW,3,3246,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_RDM
	CompareConstant(SOCK_RDM,4,3247,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_RDM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_SEQPACKET
	CompareConstant(SOCK_SEQPACKET,5,3248,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_SEQPACKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_PACKET
	CompareConstant(SOCK_PACKET,10,3249,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOCK_PACKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCM_RIGHTS
	CompareConstant(SCM_RIGHTS,0x01,3252,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SCM_RIGHTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_UNSPEC
	CompareConstant(AF_UNSPEC,0,3255,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: AF_UNSPEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_UNIX
	CompareConstant(AF_UNIX,1,3256,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: AF_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_INET
	CompareConstant(AF_INET,2,3258,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: AF_INET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_INET6
	CompareConstant(AF_INET6,10,3266,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: AF_INET6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_UNSPEC
	CompareConstant(PF_UNSPEC,AF_UNSPEC,3283,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PF_UNSPEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_UNIX
	CompareConstant(PF_UNIX,AF_UNIX,3284,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PF_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_INET
	CompareConstant(PF_INET,AF_INET,3286,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PF_INET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_INET6
	CompareConstant(PF_INET6,AF_INET6,3294,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PF_INET6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOMAXCONN
	CompareConstant(SOMAXCONN,128,3311,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: SOMAXCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_OOB
	CompareConstant(MSG_OOB,1,3312,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_OOB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_PEEK
	CompareConstant(MSG_PEEK,2,3313,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_PEEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_DONTROUTE
	CompareConstant(MSG_DONTROUTE,4,3314,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_DONTROUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_CTRUNC
	CompareConstant(MSG_CTRUNC,8,3316,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_CTRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_TRUNC
	CompareConstant(MSG_TRUNC,0x20,3318,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_EOR
	CompareConstant(MSG_EOR,0x80,3320,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_EOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_WAITALL
	CompareConstant(MSG_WAITALL,0x100,3321,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: MSG_WAITALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_RAW
	CompareConstant(SOL_RAW,255,3335,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: SOL_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_ALIGN(len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_NXTHDR(mhdr,cmsg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_DATA(cmsg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_SPACE(len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_LEN(len) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CMSG_FIRSTHDR(msg) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFNAME
	CompareConstant(SIOCGIFNAME,0x8910,3380,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFNAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFCONF
	CompareConstant(SIOCGIFCONF,0x8912,3382,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFCONF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFFLAGS
	CompareConstant(SIOCGIFFLAGS,0x8913,3383,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFADDR
	CompareConstant(SIOCGIFADDR,0x8915,3385,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFDSTADDR
	CompareConstant(SIOCGIFDSTADDR,0x8917,3387,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFDSTADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFBRDADDR
	CompareConstant(SIOCGIFBRDADDR,0x8919,3389,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFBRDADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFNETMASK
	CompareConstant(SIOCGIFNETMASK,0x891b,3391,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFNETMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFMTU
	CompareConstant(SIOCGIFMTU,0x8921,3397,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFMTU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFHWADDR
	CompareConstant(SIOCGIFHWADDR,0x8927,3403,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: SIOCGIFHWADDR\n");
cnt++;
#endif

#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6907,0);
Msg("Find size of linger (6907)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6909,0);
Msg("Find size of cmsghdr (6909)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9022,0);
Msg("Find size of iovec (9022)\n");
#endif

#if defined __i386__
CheckTypeSize(sa_family_t,2, 6905, 2, 1.2, NULL, 5, NULL)
#elif defined __ia64__
CheckTypeSize(sa_family_t,2, 6905, 3, 1.3, NULL, 5, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(sa_family_t,2, 6905, 6, 1.2, NULL, 5, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(sa_family_t,2, 6905, 10, 1.3, NULL, 5, NULL)
#elif defined __powerpc64__
CheckTypeSize(sa_family_t,2, 6905, 9, 2.0, NULL, 5, NULL)
#elif defined __s390x__
CheckTypeSize(sa_family_t,2, 6905, 12, 1.3, NULL, 5, NULL)
#elif defined __x86_64__
CheckTypeSize(sa_family_t,2, 6905, 11, 2.0, NULL, 5, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,5,NULL);\n",architecture,6905,0);
Msg("Find size of sa_family_t (6905)\n");
#endif

#if defined __i386__
CheckTypeSize(socklen_t,4, 9155, 2, 1.2, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(socklen_t,4, 9155, 3, 1.3, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(socklen_t,4, 9155, 6, 1.2, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(socklen_t,4, 9155, 10, 1.3, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(socklen_t,4, 9155, 9, 2.0, NULL, 7, NULL)
#elif defined __s390x__
CheckTypeSize(socklen_t,4, 9155, 12, 1.3, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(socklen_t,4, 9155, 11, 2.0, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7,NULL);\n",architecture,9155,0);
Msg("Find size of socklen_t (9155)\n");
#endif

#if defined __i386__
CheckTypeSize(__ss_aligntype,4, 11004, 2, 2.0, NULL, 9272, NULL)
#elif defined __ia64__
CheckTypeSize(__ss_aligntype,8, 11004, 3, 2.0, NULL, 10176, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__ss_aligntype,4, 11004, 6, 2.0, NULL, 9272, NULL)
#elif defined __powerpc64__
CheckTypeSize(__ss_aligntype,8, 11004, 9, 2.0, NULL, 10176, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__ss_aligntype,4, 11004, 10, 2.0, NULL, 9272, NULL)
#elif defined __s390x__
CheckTypeSize(__ss_aligntype,8, 11004, 12, 2.0, NULL, 10176, NULL)
#elif defined __x86_64__
CheckTypeSize(__ss_aligntype,8, 11004, 11, 2.0, NULL, 10176, NULL)
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,6906,0);
Msg("Find size of sockaddr (6906)\n");
#endif

#if defined __i386__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __ia64__
#elif defined __powerpc64__
#elif defined __x86_64__
#elif defined __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9345,0);
Msg("Find size of sockaddr_storage (9345)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,6908,0);
Msg("Find size of msghdr (6908)\n");
#endif

extern int bind_db(int, const struct sockaddr *, socklen_t);
CheckInterfacedef(bind,bind_db);
extern int getnameinfo_db(const struct sockaddr *, socklen_t, char *, socklen_t, char *, socklen_t, unsigned int);
CheckInterfacedef(getnameinfo,getnameinfo_db);
extern int getsockname_db(int, struct sockaddr *, socklen_t *);
CheckInterfacedef(getsockname,getsockname_db);
extern int listen_db(int, int);
CheckInterfacedef(listen,listen_db);
extern int setsockopt_db(int, int, int, const void *, socklen_t);
CheckInterfacedef(setsockopt,setsockopt_db);
extern int accept_db(int, struct sockaddr *, socklen_t *);
CheckInterfacedef(accept,accept_db);
extern int connect_db(int, const struct sockaddr *, socklen_t);
CheckInterfacedef(connect,connect_db);
extern ssize_t recv_db(int, void *, size_t, int);
CheckInterfacedef(recv,recv_db);
extern ssize_t recvfrom_db(int, void *, size_t, int, struct sockaddr *, socklen_t *);
CheckInterfacedef(recvfrom,recvfrom_db);
extern ssize_t recvmsg_db(int, struct msghdr *, int);
CheckInterfacedef(recvmsg,recvmsg_db);
extern ssize_t send_db(int, const void *, size_t, int);
CheckInterfacedef(send,send_db);
extern ssize_t sendmsg_db(int, const struct msghdr *, int);
CheckInterfacedef(sendmsg,sendmsg_db);
extern ssize_t sendto_db(int, const void *, size_t, int, const struct sockaddr *, socklen_t);
CheckInterfacedef(sendto,sendto_db);
extern int getpeername_db(int, struct sockaddr *, socklen_t *);
CheckInterfacedef(getpeername,getpeername_db);
extern int getsockopt_db(int, int, int, void *, socklen_t *);
CheckInterfacedef(getsockopt,getsockopt_db);
extern int shutdown_db(int, int);
CheckInterfacedef(shutdown,shutdown_db);
extern int socket_db(int, int, int);
CheckInterfacedef(socket,socket_db);
extern int socketpair_db(int, int, int, int[2]);
CheckInterfacedef(socketpair,socketpair_db);
extern int sockatmark_db(int);
CheckInterfacedef(sockatmark,sockatmark_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/socket.h\n\n",pcnt,cnt);
return cnt;
#endif

}

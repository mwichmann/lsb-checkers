/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <sys/ioctl.h>
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

#if _LSB_DEFAULT_ARCH
#ifdef SHUT_RD
	CompareConstant(SHUT_RD,0,2466,architecture)
#else
Msg( "Error: Constant not found: SHUT_RD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHUT_WR
	CompareConstant(SHUT_WR,1,2467,architecture)
#else
Msg( "Error: Constant not found: SHUT_WR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHUT_RDWR
	CompareConstant(SHUT_RDWR,2,2468,architecture)
#else
Msg( "Error: Constant not found: SHUT_RDWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_SOCKET
	CompareConstant(SOL_SOCKET,1,3213,architecture)
#else
Msg( "Error: Constant not found: SOL_SOCKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_DEBUG
	CompareConstant(SO_DEBUG,1,3214,architecture)
#else
Msg( "Error: Constant not found: SO_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_REUSEADDR
	CompareConstant(SO_REUSEADDR,2,3215,architecture)
#else
Msg( "Error: Constant not found: SO_REUSEADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_TYPE
	CompareConstant(SO_TYPE,3,3216,architecture)
#else
Msg( "Error: Constant not found: SO_TYPE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_ERROR
	CompareConstant(SO_ERROR,4,3217,architecture)
#else
Msg( "Error: Constant not found: SO_ERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_DONTROUTE
	CompareConstant(SO_DONTROUTE,5,3218,architecture)
#else
Msg( "Error: Constant not found: SO_DONTROUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_BROADCAST
	CompareConstant(SO_BROADCAST,6,3219,architecture)
#else
Msg( "Error: Constant not found: SO_BROADCAST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_SNDBUF
	CompareConstant(SO_SNDBUF,7,3220,architecture)
#else
Msg( "Error: Constant not found: SO_SNDBUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_RCVBUF
	CompareConstant(SO_RCVBUF,8,3221,architecture)
#else
Msg( "Error: Constant not found: SO_RCVBUF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_KEEPALIVE
	CompareConstant(SO_KEEPALIVE,9,3222,architecture)
#else
Msg( "Error: Constant not found: SO_KEEPALIVE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_OOBINLINE
	CompareConstant(SO_OOBINLINE,10,3223,architecture)
#else
Msg( "Error: Constant not found: SO_OOBINLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_NO_CHECK
	CompareConstant(SO_NO_CHECK,11,3224,architecture)
#else
Msg( "Error: Constant not found: SO_NO_CHECK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_PRIORITY
	CompareConstant(SO_PRIORITY,12,3225,architecture)
#else
Msg( "Error: Constant not found: SO_PRIORITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SO_LINGER
	CompareConstant(SO_LINGER,13,3226,architecture)
#else
Msg( "Error: Constant not found: SO_LINGER\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,16,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,16,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __ia64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __i386__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __s390x__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SO_RCVLOWAT
	CompareConstant(SO_RCVLOWAT,18,3230,architecture)
#else
Msg( "Error: Constant not found: SO_RCVLOWAT\n");
cnt++;
#endif

#else
Msg( "No definition for SO_RCVLOWAT (3230, int) in db\n");
#ifdef SO_RCVLOWAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3230,%d);\n", architecture, SO_RCVLOWAT);
#endif
#endif
#if __powerpc64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,17,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,17,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __ia64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __i386__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __s390x__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SO_SNDLOWAT
	CompareConstant(SO_SNDLOWAT,19,3231,architecture)
#else
Msg( "Error: Constant not found: SO_SNDLOWAT\n");
cnt++;
#endif

#else
Msg( "No definition for SO_SNDLOWAT (3231, int) in db\n");
#ifdef SO_SNDLOWAT
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3231,%d);\n", architecture, SO_SNDLOWAT);
#endif
#endif
#if __powerpc64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,18,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,18,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __ia64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __i386__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __s390x__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SO_RCVTIMEO
	CompareConstant(SO_RCVTIMEO,20,3232,architecture)
#else
Msg( "Error: Constant not found: SO_RCVTIMEO\n");
cnt++;
#endif

#else
Msg( "No definition for SO_RCVTIMEO (3232, int) in db\n");
#ifdef SO_RCVTIMEO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3232,%d);\n", architecture, SO_RCVTIMEO);
#endif
#endif
#if __powerpc64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,19,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,19,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __ia64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __i386__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __s390x__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SO_SNDTIMEO
	CompareConstant(SO_SNDTIMEO,21,3233,architecture)
#else
Msg( "Error: Constant not found: SO_SNDTIMEO\n");
cnt++;
#endif

#else
Msg( "No definition for SO_SNDTIMEO (3233, int) in db\n");
#ifdef SO_SNDTIMEO
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,3233,%d);\n", architecture, SO_SNDTIMEO);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SO_ACCEPTCONN
	CompareConstant(SO_ACCEPTCONN,30,3243,architecture)
#else
Msg( "Error: Constant not found: SO_ACCEPTCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_STREAM
	CompareConstant(SOCK_STREAM,1,3244,architecture)
#else
Msg( "Error: Constant not found: SOCK_STREAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_DGRAM
	CompareConstant(SOCK_DGRAM,2,3245,architecture)
#else
Msg( "Error: Constant not found: SOCK_DGRAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_RAW
	CompareConstant(SOCK_RAW,3,3246,architecture)
#else
Msg( "Error: Constant not found: SOCK_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_RDM
	CompareConstant(SOCK_RDM,4,3247,architecture)
#else
Msg( "Error: Constant not found: SOCK_RDM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_SEQPACKET
	CompareConstant(SOCK_SEQPACKET,5,3248,architecture)
#else
Msg( "Error: Constant not found: SOCK_SEQPACKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOCK_PACKET
	CompareConstant(SOCK_PACKET,10,3249,architecture)
#else
Msg( "Error: Constant not found: SOCK_PACKET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCM_RIGHTS
	CompareConstant(SCM_RIGHTS,0x01,3252,architecture)
#else
Msg( "Error: Constant not found: SCM_RIGHTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_UNSPEC
	CompareConstant(AF_UNSPEC,0,3255,architecture)
#else
Msg( "Error: Constant not found: AF_UNSPEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_UNIX
	CompareConstant(AF_UNIX,1,3256,architecture)
#else
Msg( "Error: Constant not found: AF_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_INET
	CompareConstant(AF_INET,2,3258,architecture)
#else
Msg( "Error: Constant not found: AF_INET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AF_INET6
	CompareConstant(AF_INET6,10,3266,architecture)
#else
Msg( "Error: Constant not found: AF_INET6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_UNSPEC
	CompareConstant(PF_UNSPEC,AF_UNSPEC,3283,architecture)
#else
Msg( "Error: Constant not found: PF_UNSPEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_UNIX
	CompareConstant(PF_UNIX,AF_UNIX,3284,architecture)
#else
Msg( "Error: Constant not found: PF_UNIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_INET
	CompareConstant(PF_INET,AF_INET,3286,architecture)
#else
Msg( "Error: Constant not found: PF_INET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PF_INET6
	CompareConstant(PF_INET6,AF_INET6,3294,architecture)
#else
Msg( "Error: Constant not found: PF_INET6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOMAXCONN
	CompareConstant(SOMAXCONN,128,3311,architecture)
#else
Msg( "Error: Constant not found: SOMAXCONN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_OOB
	CompareConstant(MSG_OOB,1,3312,architecture)
#else
Msg( "Error: Constant not found: MSG_OOB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_PEEK
	CompareConstant(MSG_PEEK,2,3313,architecture)
#else
Msg( "Error: Constant not found: MSG_PEEK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_DONTROUTE
	CompareConstant(MSG_DONTROUTE,4,3314,architecture)
#else
Msg( "Error: Constant not found: MSG_DONTROUTE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_CTRUNC
	CompareConstant(MSG_CTRUNC,8,3316,architecture)
#else
Msg( "Error: Constant not found: MSG_CTRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_TRUNC
	CompareConstant(MSG_TRUNC,0x20,3318,architecture)
#else
Msg( "Error: Constant not found: MSG_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_EOR
	CompareConstant(MSG_EOR,0x80,3320,architecture)
#else
Msg( "Error: Constant not found: MSG_EOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef MSG_WAITALL
	CompareConstant(MSG_WAITALL,0x100,3321,architecture)
#else
Msg( "Error: Constant not found: MSG_WAITALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SOL_RAW
	CompareConstant(SOL_RAW,255,3335,architecture)
#else
Msg( "Error: Constant not found: SOL_RAW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFFLAGS
	CompareConstant(SIOCGIFFLAGS,0x8913,3383,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFFLAGS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFADDR
	CompareConstant(SIOCGIFADDR,0x8915,3385,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SIOCGIFNETMASK
	CompareConstant(SIOCGIFNETMASK,0x891b,3391,architecture)
#else
Msg( "Error: Constant not found: SIOCGIFNETMASK\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct linger,8, 6907, 2)
CheckMemberSize(struct linger,l_linger,4,2,33675)
CheckOffset(struct linger,l_linger,4,2,33675)
#elif __ia64__
CheckTypeSize(struct linger,8, 6907, 3)
CheckMemberSize(struct linger,l_linger,4,3,33675)
CheckOffset(struct linger,l_linger,4,3,33675)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct linger,8, 6907, 6)
CheckMemberSize(struct linger,l_linger,4,6,33675)
CheckOffset(struct linger,l_linger,4,6,33675)
#elif __s390__ && !__s390x__
CheckTypeSize(struct linger,8, 6907, 10)
CheckMemberSize(struct linger,l_linger,4,10,33675)
CheckOffset(struct linger,l_linger,4,10,33675)
#elif __powerpc64__
CheckTypeSize(struct linger,8, 6907, 9)
CheckMemberSize(struct linger,l_linger,4,9,33675)
CheckOffset(struct linger,l_linger,4,9,33675)
#elif __s390x__
CheckTypeSize(struct linger,8, 6907, 12)
CheckMemberSize(struct linger,l_linger,4,12,33675)
CheckOffset(struct linger,l_linger,4,12,33675)
#elif __x86_64__
CheckTypeSize(struct linger,8, 6907, 11)
CheckMemberSize(struct linger,l_linger,4,11,33675)
CheckOffset(struct linger,l_linger,4,11,33675)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6907,0);
Msg("Find size of linger (6907)\n");
#endif

#if __i386__
CheckTypeSize(struct cmsghdr,12, 6909, 2)
CheckMemberSize(struct cmsghdr,cmsg_level,4,2,33686)
CheckOffset(struct cmsghdr,cmsg_level,4,2,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,2,33687)
CheckOffset(struct cmsghdr,cmsg_type,8,2,33687)
#elif __ia64__
CheckTypeSize(struct cmsghdr,16, 6909, 3)
CheckMemberSize(struct cmsghdr,cmsg_level,4,3,33686)
CheckOffset(struct cmsghdr,cmsg_level,8,3,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,3,33687)
CheckOffset(struct cmsghdr,cmsg_type,12,3,33687)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct cmsghdr,12, 6909, 6)
CheckMemberSize(struct cmsghdr,cmsg_level,4,6,33686)
CheckOffset(struct cmsghdr,cmsg_level,4,6,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,6,33687)
CheckOffset(struct cmsghdr,cmsg_type,8,6,33687)
#elif __s390__ && !__s390x__
CheckTypeSize(struct cmsghdr,12, 6909, 10)
CheckMemberSize(struct cmsghdr,cmsg_level,4,10,33686)
CheckOffset(struct cmsghdr,cmsg_level,4,10,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,10,33687)
CheckOffset(struct cmsghdr,cmsg_type,8,10,33687)
#elif __powerpc64__
CheckTypeSize(struct cmsghdr,16, 6909, 9)
CheckMemberSize(struct cmsghdr,cmsg_level,4,9,33686)
CheckOffset(struct cmsghdr,cmsg_level,8,9,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,9,33687)
CheckOffset(struct cmsghdr,cmsg_type,12,9,33687)
#elif __s390x__
CheckTypeSize(struct cmsghdr,16, 6909, 12)
CheckMemberSize(struct cmsghdr,cmsg_level,4,12,33686)
CheckOffset(struct cmsghdr,cmsg_level,8,12,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,12,33687)
CheckOffset(struct cmsghdr,cmsg_type,12,12,33687)
#elif __x86_64__
CheckTypeSize(struct cmsghdr,16, 6909, 11)
CheckMemberSize(struct cmsghdr,cmsg_level,4,11,33686)
CheckOffset(struct cmsghdr,cmsg_level,8,11,33686)
CheckMemberSize(struct cmsghdr,cmsg_type,4,11,33687)
CheckOffset(struct cmsghdr,cmsg_type,12,11,33687)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6909,0);
Msg("Find size of cmsghdr (6909)\n");
#endif

#if __i386__
CheckTypeSize(struct iovec,8, 9022, 2)
CheckMemberSize(struct iovec,iov_len,4,2,33677)
CheckOffset(struct iovec,iov_len,4,2,33677)
#elif __ia64__
CheckTypeSize(struct iovec,16, 9022, 3)
CheckMemberSize(struct iovec,iov_len,8,3,33677)
CheckOffset(struct iovec,iov_len,8,3,33677)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct iovec,8, 9022, 6)
CheckMemberSize(struct iovec,iov_len,4,6,33677)
CheckOffset(struct iovec,iov_len,4,6,33677)
#elif __s390__ && !__s390x__
CheckTypeSize(struct iovec,8, 9022, 10)
CheckMemberSize(struct iovec,iov_len,4,10,33677)
CheckOffset(struct iovec,iov_len,4,10,33677)
#elif __powerpc64__
CheckTypeSize(struct iovec,16, 9022, 9)
CheckMemberSize(struct iovec,iov_len,8,9,33677)
CheckOffset(struct iovec,iov_len,8,9,33677)
#elif __s390x__
CheckTypeSize(struct iovec,16, 9022, 12)
CheckMemberSize(struct iovec,iov_len,8,12,33677)
CheckOffset(struct iovec,iov_len,8,12,33677)
#elif __x86_64__
CheckTypeSize(struct iovec,16, 9022, 11)
CheckMemberSize(struct iovec,iov_len,8,11,33677)
CheckOffset(struct iovec,iov_len,8,11,33677)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9022,0);
Msg("Find size of iovec (9022)\n");
#endif

#if __i386__
CheckTypeSize(sa_family_t,2, 6905, 2)
#elif __ia64__
CheckTypeSize(sa_family_t,2, 6905, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sa_family_t,2, 6905, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(sa_family_t,2, 6905, 10)
#elif __powerpc64__
CheckTypeSize(sa_family_t,2, 6905, 9)
#elif __s390x__
CheckTypeSize(sa_family_t,2, 6905, 12)
#elif __x86_64__
CheckTypeSize(sa_family_t,2, 6905, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6905,0);
Msg("Find size of sa_family_t (6905)\n");
#endif

#if __i386__
CheckTypeSize(socklen_t,4, 9155, 2)
#elif __ia64__
CheckTypeSize(socklen_t,4, 9155, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(socklen_t,4, 9155, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(socklen_t,4, 9155, 10)
#elif __powerpc64__
CheckTypeSize(socklen_t,4, 9155, 9)
#elif __s390x__
CheckTypeSize(socklen_t,4, 9155, 12)
#elif __x86_64__
CheckTypeSize(socklen_t,4, 9155, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9155,0);
Msg("Find size of socklen_t (9155)\n");
#endif

#if __i386__
CheckTypeSize(__ss_aligntype,4, 11004, 2)
#endif

#if __ia64__
CheckTypeSize(__ss_aligntype,8, 11005, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(__ss_aligntype,4, 11006, 6)
#endif

#if __powerpc64__
CheckTypeSize(__ss_aligntype,8, 11008, 9)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(__ss_aligntype,4, 11009, 10)
#endif

#if __s390x__
CheckTypeSize(__ss_aligntype,8, 11010, 12)
#endif

#if __x86_64__
CheckTypeSize(__ss_aligntype,8, 11011, 11)
#endif

#if __i386__
CheckTypeSize(struct sockaddr,16, 6906, 2)
CheckMemberSize(struct sockaddr,sa_data,14,2,33673)
CheckOffset(struct sockaddr,sa_data,2,2,33673)
#elif __ia64__
CheckTypeSize(struct sockaddr,16, 6906, 3)
CheckMemberSize(struct sockaddr,sa_data,14,3,33673)
CheckOffset(struct sockaddr,sa_data,2,3,33673)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sockaddr,16, 6906, 6)
CheckMemberSize(struct sockaddr,sa_data,14,6,33673)
CheckOffset(struct sockaddr,sa_data,2,6,33673)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sockaddr,16, 6906, 10)
CheckMemberSize(struct sockaddr,sa_data,14,10,33673)
CheckOffset(struct sockaddr,sa_data,2,10,33673)
#elif __powerpc64__
CheckTypeSize(struct sockaddr,16, 6906, 9)
CheckMemberSize(struct sockaddr,sa_data,14,9,33673)
CheckOffset(struct sockaddr,sa_data,2,9,33673)
#elif __s390x__
CheckTypeSize(struct sockaddr,16, 6906, 12)
CheckMemberSize(struct sockaddr,sa_data,14,12,33673)
CheckOffset(struct sockaddr,sa_data,2,12,33673)
#elif __x86_64__
CheckTypeSize(struct sockaddr,16, 6906, 11)
CheckMemberSize(struct sockaddr,sa_data,14,11,33673)
CheckOffset(struct sockaddr,sa_data,2,11,33673)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6906,0);
Msg("Find size of sockaddr (6906)\n");
#endif

#if __i386__
CheckTypeSize(struct sockaddr_storage,128, 9345, 2)
CheckMemberSize(struct sockaddr_storage,ss_family,2,2,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,2,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,4,2,33692)
CheckOffset(struct sockaddr_storage,__ss_align,4,2,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,120,2,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,8,2,33693)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sockaddr_storage,128, 9345, 6)
CheckMemberSize(struct sockaddr_storage,ss_family,2,6,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,6,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,4,6,33692)
CheckOffset(struct sockaddr_storage,__ss_align,4,6,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,120,6,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,8,6,33693)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sockaddr_storage,128, 9345, 10)
CheckMemberSize(struct sockaddr_storage,ss_family,2,10,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,10,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,4,10,33692)
CheckOffset(struct sockaddr_storage,__ss_align,4,10,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,120,10,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,8,10,33693)
#elif __ia64__
CheckTypeSize(struct sockaddr_storage,128, 9345, 3)
CheckMemberSize(struct sockaddr_storage,ss_family,2,3,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,3,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,8,3,33692)
CheckOffset(struct sockaddr_storage,__ss_align,8,3,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,112,3,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,16,3,33693)
#elif __powerpc64__
CheckTypeSize(struct sockaddr_storage,128, 9345, 9)
CheckMemberSize(struct sockaddr_storage,ss_family,2,9,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,9,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,8,9,33692)
CheckOffset(struct sockaddr_storage,__ss_align,8,9,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,112,9,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,16,9,33693)
#elif __x86_64__
CheckTypeSize(struct sockaddr_storage,128, 9345, 11)
CheckMemberSize(struct sockaddr_storage,ss_family,2,11,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,11,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,8,11,33692)
CheckOffset(struct sockaddr_storage,__ss_align,8,11,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,112,11,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,16,11,33693)
#elif __s390x__
CheckTypeSize(struct sockaddr_storage,128, 9345, 12)
CheckMemberSize(struct sockaddr_storage,ss_family,2,12,33691)
CheckOffset(struct sockaddr_storage,ss_family,0,12,33691)
CheckMemberSize(struct sockaddr_storage,__ss_align,8,12,33692)
CheckOffset(struct sockaddr_storage,__ss_align,8,12,33692)
CheckMemberSize(struct sockaddr_storage,__ss_padding,112,12,33693)
CheckOffset(struct sockaddr_storage,__ss_padding,16,12,33693)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9345,0);
Msg("Find size of sockaddr_storage (9345)\n");
#endif

#if __i386__
CheckTypeSize(struct msghdr,28, 6908, 2)
CheckMemberSize(struct msghdr,msg_namelen,4,2,33679)
CheckOffset(struct msghdr,msg_namelen,4,2,33679)
CheckMemberSize(struct msghdr,msg_iov,4,2,33680)
CheckOffset(struct msghdr,msg_iov,8,2,33680)
CheckMemberSize(struct msghdr,msg_iovlen,4,2,33681)
CheckOffset(struct msghdr,msg_iovlen,12,2,33681)
CheckMemberSize(struct msghdr,msg_control,4,2,33682)
CheckOffset(struct msghdr,msg_control,16,2,33682)
CheckMemberSize(struct msghdr,msg_controllen,4,2,33683)
CheckOffset(struct msghdr,msg_controllen,20,2,33683)
CheckMemberSize(struct msghdr,msg_flags,4,2,33684)
CheckOffset(struct msghdr,msg_flags,24,2,33684)
#elif __ia64__
CheckTypeSize(struct msghdr,56, 6908, 3)
CheckMemberSize(struct msghdr,msg_namelen,4,3,33679)
CheckOffset(struct msghdr,msg_namelen,8,3,33679)
CheckMemberSize(struct msghdr,msg_iov,8,3,33680)
CheckOffset(struct msghdr,msg_iov,16,3,33680)
CheckMemberSize(struct msghdr,msg_iovlen,8,3,33681)
CheckOffset(struct msghdr,msg_iovlen,24,3,33681)
CheckMemberSize(struct msghdr,msg_control,8,3,33682)
CheckOffset(struct msghdr,msg_control,32,3,33682)
CheckMemberSize(struct msghdr,msg_controllen,8,3,33683)
CheckOffset(struct msghdr,msg_controllen,40,3,33683)
CheckMemberSize(struct msghdr,msg_flags,4,3,33684)
CheckOffset(struct msghdr,msg_flags,48,3,33684)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct msghdr,28, 6908, 6)
CheckMemberSize(struct msghdr,msg_namelen,4,6,33679)
CheckOffset(struct msghdr,msg_namelen,4,6,33679)
CheckMemberSize(struct msghdr,msg_iov,4,6,33680)
CheckOffset(struct msghdr,msg_iov,8,6,33680)
CheckMemberSize(struct msghdr,msg_iovlen,4,6,33681)
CheckOffset(struct msghdr,msg_iovlen,12,6,33681)
CheckMemberSize(struct msghdr,msg_control,4,6,33682)
CheckOffset(struct msghdr,msg_control,16,6,33682)
CheckMemberSize(struct msghdr,msg_controllen,4,6,33683)
CheckOffset(struct msghdr,msg_controllen,20,6,33683)
CheckMemberSize(struct msghdr,msg_flags,4,6,33684)
CheckOffset(struct msghdr,msg_flags,24,6,33684)
#elif __s390__ && !__s390x__
CheckTypeSize(struct msghdr,28, 6908, 10)
CheckMemberSize(struct msghdr,msg_namelen,4,10,33679)
CheckOffset(struct msghdr,msg_namelen,4,10,33679)
CheckMemberSize(struct msghdr,msg_iov,4,10,33680)
CheckOffset(struct msghdr,msg_iov,8,10,33680)
CheckMemberSize(struct msghdr,msg_iovlen,4,10,33681)
CheckOffset(struct msghdr,msg_iovlen,12,10,33681)
CheckMemberSize(struct msghdr,msg_control,4,10,33682)
CheckOffset(struct msghdr,msg_control,16,10,33682)
CheckMemberSize(struct msghdr,msg_controllen,4,10,33683)
CheckOffset(struct msghdr,msg_controllen,20,10,33683)
CheckMemberSize(struct msghdr,msg_flags,4,10,33684)
CheckOffset(struct msghdr,msg_flags,24,10,33684)
#elif __powerpc64__
CheckTypeSize(struct msghdr,56, 6908, 9)
CheckMemberSize(struct msghdr,msg_namelen,4,9,33679)
CheckOffset(struct msghdr,msg_namelen,8,9,33679)
CheckMemberSize(struct msghdr,msg_iov,8,9,33680)
CheckOffset(struct msghdr,msg_iov,16,9,33680)
CheckMemberSize(struct msghdr,msg_iovlen,8,9,33681)
CheckOffset(struct msghdr,msg_iovlen,24,9,33681)
CheckMemberSize(struct msghdr,msg_control,8,9,33682)
CheckOffset(struct msghdr,msg_control,32,9,33682)
CheckMemberSize(struct msghdr,msg_controllen,8,9,33683)
CheckOffset(struct msghdr,msg_controllen,40,9,33683)
CheckMemberSize(struct msghdr,msg_flags,4,9,33684)
CheckOffset(struct msghdr,msg_flags,48,9,33684)
#elif __s390x__
CheckTypeSize(struct msghdr,56, 6908, 12)
CheckMemberSize(struct msghdr,msg_namelen,4,12,33679)
CheckOffset(struct msghdr,msg_namelen,8,12,33679)
CheckMemberSize(struct msghdr,msg_iov,8,12,33680)
CheckOffset(struct msghdr,msg_iov,16,12,33680)
CheckMemberSize(struct msghdr,msg_iovlen,8,12,33681)
CheckOffset(struct msghdr,msg_iovlen,24,12,33681)
CheckMemberSize(struct msghdr,msg_control,8,12,33682)
CheckOffset(struct msghdr,msg_control,32,12,33682)
CheckMemberSize(struct msghdr,msg_controllen,8,12,33683)
CheckOffset(struct msghdr,msg_controllen,40,12,33683)
CheckMemberSize(struct msghdr,msg_flags,4,12,33684)
CheckOffset(struct msghdr,msg_flags,48,12,33684)
#elif __x86_64__
CheckTypeSize(struct msghdr,56, 6908, 11)
CheckMemberSize(struct msghdr,msg_namelen,4,11,33679)
CheckOffset(struct msghdr,msg_namelen,8,11,33679)
CheckMemberSize(struct msghdr,msg_iov,8,11,33680)
CheckOffset(struct msghdr,msg_iov,16,11,33680)
CheckMemberSize(struct msghdr,msg_iovlen,8,11,33681)
CheckOffset(struct msghdr,msg_iovlen,24,11,33681)
CheckMemberSize(struct msghdr,msg_control,8,11,33682)
CheckOffset(struct msghdr,msg_control,32,11,33682)
CheckMemberSize(struct msghdr,msg_controllen,8,11,33683)
CheckOffset(struct msghdr,msg_controllen,40,11,33683)
CheckMemberSize(struct msghdr,msg_flags,4,11,33684)
CheckOffset(struct msghdr,msg_flags,48,11,33684)
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

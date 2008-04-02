/*
 * Test of sys/poll.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/poll.h"



#ifdef TET_TEST
void sys_poll_h()
{
#else
int sys_poll_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/poll.h\n");
#endif

printf("Checking data structures in sys/poll.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef POLLRDNORM
	CompareConstant(POLLRDNORM,0x0040,12064,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POLLRDNORM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLRDBAND
	CompareConstant(POLLRDBAND,0x0080,12065,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POLLRDBAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLWRNORM
	CompareConstant(POLLWRNORM,0x0100,12066,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POLLWRNORM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLWRBAND
	CompareConstant(POLLWRBAND,0x0200,12067,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POLLWRBAND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLIN
	CompareConstant(POLLIN,0x0001,4948,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLPRI
	CompareConstant(POLLPRI,0x0002,4949,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLPRI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLOUT
	CompareConstant(POLLOUT,0x0004,4950,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLERR
	CompareConstant(POLLERR,0x0008,4951,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLHUP
	CompareConstant(POLLHUP,0x0010,4952,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLHUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLNVAL
	CompareConstant(POLLNVAL,0x0020,4953,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: POLLNVAL\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(struct pollfd,8, 9913, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,2,34413)
CheckOffset(struct pollfd,events,4,2,34413)
CheckMemberSize(struct pollfd,revents,2,2,34414)
CheckOffset(struct pollfd,revents,6,2,34414)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct pollfd,8, 9913, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,6,34413)
CheckOffset(struct pollfd,events,4,6,34413)
CheckMemberSize(struct pollfd,revents,2,6,34414)
CheckOffset(struct pollfd,revents,6,6,34414)
#elif defined __ia64__
CheckTypeSize(struct pollfd,8, 9913, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,3,34413)
CheckOffset(struct pollfd,events,4,3,34413)
CheckMemberSize(struct pollfd,revents,2,3,34414)
CheckOffset(struct pollfd,revents,6,3,34414)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct pollfd,8, 9913, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,10,34413)
CheckOffset(struct pollfd,events,4,10,34413)
CheckMemberSize(struct pollfd,revents,2,10,34414)
CheckOffset(struct pollfd,revents,6,10,34414)
#elif defined __powerpc64__
CheckTypeSize(struct pollfd,8, 9913, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,9,34413)
CheckOffset(struct pollfd,events,4,9,34413)
CheckMemberSize(struct pollfd,revents,2,9,34414)
CheckOffset(struct pollfd,revents,6,9,34414)
#elif defined __s390x__
CheckTypeSize(struct pollfd,8, 9913, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,12,34413)
CheckOffset(struct pollfd,events,4,12,34413)
CheckMemberSize(struct pollfd,revents,2,12,34414)
CheckOffset(struct pollfd,revents,6,12,34414)
#elif defined __x86_64__
CheckTypeSize(struct pollfd,8, 9913, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct pollfd,events,2,11,34413)
CheckOffset(struct pollfd,events,4,11,34413)
CheckMemberSize(struct pollfd,revents,2,11,34414)
CheckOffset(struct pollfd,revents,6,11,34414)
#else
Msg("Find size of pollfd (9913)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9913,0);
#endif

#if defined __i386__
CheckTypeSize(nfds_t,4, 10978, 2, 2.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(nfds_t,8, 10978, 3, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(nfds_t,8, 10978, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(nfds_t,4, 10978, 6, 2.0, NULL, 9, NULL)
#elif defined __s390x__
CheckTypeSize(nfds_t,8, 10978, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(nfds_t,8, 10978, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(nfds_t,4, 10978, 10, 2.0, NULL, 9, NULL)
#else
Msg("Find size of nfds_t (10978)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9, NULL);\n",architecture,10978,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/poll.h\n\n",pcnt,cnt);
return cnt;
#endif

}

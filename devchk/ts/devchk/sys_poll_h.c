/*
 * Test of sys/poll.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/poll.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLIN
	CompareConstant(POLLIN,0x0001,4948,architecture)
#else
Msg( "Error: Constant not found: POLLIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLPRI
	CompareConstant(POLLPRI,0x0002,4949,architecture)
#else
Msg( "Error: Constant not found: POLLPRI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLOUT
	CompareConstant(POLLOUT,0x0004,4950,architecture)
#else
Msg( "Error: Constant not found: POLLOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLERR
	CompareConstant(POLLERR,0x0008,4951,architecture)
#else
Msg( "Error: Constant not found: POLLERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLHUP
	CompareConstant(POLLHUP,0x0010,4952,architecture)
#else
Msg( "Error: Constant not found: POLLHUP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POLLNVAL
	CompareConstant(POLLNVAL,0x0020,4953,architecture)
#else
Msg( "Error: Constant not found: POLLNVAL\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct pollfd,8, 9913, 2)
CheckMemberSize(struct pollfd,events,2,2,34413)
CheckOffset(struct pollfd,events,4,2,34413)
CheckMemberSize(struct pollfd,revents,2,2,34414)
CheckOffset(struct pollfd,revents,6,2,34414)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct pollfd,8, 9913, 6)
CheckMemberSize(struct pollfd,events,2,6,34413)
CheckOffset(struct pollfd,events,4,6,34413)
CheckMemberSize(struct pollfd,revents,2,6,34414)
CheckOffset(struct pollfd,revents,6,6,34414)
#elif __ia64__
CheckTypeSize(struct pollfd,8, 9913, 3)
CheckMemberSize(struct pollfd,events,2,3,34413)
CheckOffset(struct pollfd,events,4,3,34413)
CheckMemberSize(struct pollfd,revents,2,3,34414)
CheckOffset(struct pollfd,revents,6,3,34414)
#elif __s390__
CheckTypeSize(struct pollfd,8, 9913, 10)
CheckMemberSize(struct pollfd,events,0,10,34413)
CheckOffset(struct pollfd,events,4,10,34413)
CheckMemberSize(struct pollfd,revents,0,10,34414)
CheckOffset(struct pollfd,revents,6,10,34414)
#elif __powerpc64__
CheckTypeSize(struct pollfd,8, 9913, 9)
CheckMemberSize(struct pollfd,events,2,9,34413)
CheckOffset(struct pollfd,events,4,9,34413)
CheckMemberSize(struct pollfd,revents,2,9,34414)
CheckOffset(struct pollfd,revents,6,9,34414)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9913,0);
Msg("Find size of pollfd (9913)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/poll.h\n",cnt);
return cnt;
#endif

}

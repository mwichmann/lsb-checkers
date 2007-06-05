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
#elif __powerpc__ && !__powerpc64__
#elif __ia64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9913,0);
Msg("Find size of pollfd (9913)\n");
#endif

#if __i386__
CheckTypeSize(nfds_t,4, 10978, 2)
#elif __ia64__
CheckTypeSize(nfds_t,8, 10978, 3)
#elif __powerpc64__
CheckTypeSize(nfds_t,8, 10978, 9)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(nfds_t,4, 10978, 6)
#elif __s390x__
CheckTypeSize(nfds_t,8, 10978, 12)
#elif __x86_64__
CheckTypeSize(nfds_t,8, 10978, 11)
#elif __s390__ && !__s390x__
CheckTypeSize(nfds_t,4, 10978, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10978,0);
Msg("Find size of nfds_t (10978)\n");
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

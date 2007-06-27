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
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __ia64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9913,0);
Msg("Find size of pollfd (9913)\n");
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9, NULL);\n",architecture,10978,0);
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

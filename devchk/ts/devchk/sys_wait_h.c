/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <signal.h>
#include "sys/wait.h"



#ifdef TET_TEST
void sys_wait_h()
{
#else
int sys_wait_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/wait.h\n");
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WEXITSTATUS(status) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WTERMSIG(status) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WSTOPSIG(status) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WIFEXITED(status) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WIFSIGNALED(status) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for WIFSTOPPED(status) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef WCOREFLAG
	CompareConstant(WCOREFLAG,0x80,1739,architecture)
#else
Msg( "Error: Constant not found: WCOREFLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for WCOREDUMP(status) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef WNOHANG
	CompareConstant(WNOHANG,0x00000001,3490,architecture)
#else
Msg( "Error: Constant not found: WNOHANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WUNTRACED
	CompareConstant(WUNTRACED,0x00000002,3491,architecture)
#else
Msg( "Error: Constant not found: WUNTRACED\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(idtype_t,4, 9185, 2)
#elif __ia64__
CheckTypeSize(idtype_t,4, 9185, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(idtype_t,4, 9185, 6)
#elif __s390__
CheckTypeSize(idtype_t,4, 9185, 10)
#elif __powerpc64__
CheckTypeSize(idtype_t,4, 9185, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9185,0);
Msg("Find size of idtype_t (9185)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
#endif

}

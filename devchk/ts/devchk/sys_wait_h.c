/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/wait.h\n");
#endif

printf("Checking data structures in sys/wait.h\n");
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
	CompareConstant(WCOREFLAG,0x80,1739,architecture,1.1,NULL)
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
	CompareConstant(WNOHANG,0x00000001,3490,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WNOHANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WUNTRACED
	CompareConstant(WUNTRACED,0x00000002,3491,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: WUNTRACED\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(idtype_t,4, 9185, 12, 1.3, NULL, 9184, NULL)
#elif defined __x86_64__
CheckTypeSize(idtype_t,4, 9185, 11, 2.0, NULL, 9184, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(idtype_t,4, 9185, 10, 1.3, NULL, 9184, NULL)
#elif defined __powerpc64__
CheckTypeSize(idtype_t,4, 9185, 9, 2.0, NULL, 9184, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(idtype_t,4, 9185, 6, 1.2, NULL, 9184, NULL)
#elif defined __ia64__
CheckTypeSize(idtype_t,4, 9185, 3, 1.3, NULL, 9184, NULL)
#elif defined __i386__
CheckTypeSize(idtype_t,4, 9185, 2, 1.0, NULL, 9184, NULL)
#else
Msg("Find size of idtype_t (9185)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.0""',NULL,9184, NULL);\n",architecture,9185,0);
#endif

extern int waitid_db(idtype_t, id_t, siginfo_t *, int);
CheckInterfacedef(waitid,waitid_db);
extern pid_t wait_db(int *);
CheckInterfacedef(wait,wait_db);
extern pid_t waitpid_db(pid_t, int *, int);
CheckInterfacedef(waitpid,waitpid_db);
extern pid_t wait4_db(pid_t, int *, int, struct rusage *);
CheckInterfacedef(wait4,wait4_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/wait.h\n\n",pcnt,cnt);
return cnt;
#endif

}

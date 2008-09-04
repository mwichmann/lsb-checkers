/*
 * Test of nspr4/prthread.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prthread.h"



#ifdef TET_TEST
void nspr4_prthread_h()
{
#else
int nspr4_prthread_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prthread.h\n");
#endif

printf("Checking data structures in nspr4/prthread.h\n");
extern PRThread * PR_GetCurrentThread_db(void);
CheckInterfacedef(PR_GetCurrentThread,PR_GetCurrentThread_db);
extern PRStatus PR_Interrupt_db(PRThread *);
CheckInterfacedef(PR_Interrupt,PR_Interrupt_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prthread.h\n\n",pcnt,cnt);
return cnt;
#endif

}

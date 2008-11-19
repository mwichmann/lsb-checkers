/*
 * Test of nspr4/prinit.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prinit.h"



#ifdef TET_TEST
void nspr4_prinit_h()
{
#else
int nspr4_prinit_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prinit.h\n");
#endif

printf("Checking data structures in nspr4/prinit.h\n");
extern PRStatus PR_Cleanup_db(void);
CheckInterfacedef(PR_Cleanup,PR_Cleanup_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prinit.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of nspr4/prerror.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nspr4/prerror.h"



#ifdef TET_TEST
void nspr4_prerror_h()
{
#else
int nspr4_prerror_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nspr4/prerror.h\n");
#endif

printf("Checking data structures in nspr4/prerror.h\n");
#if 1
CheckTypeSize(PRErrorCode,0, 1005381, 1, 4.0, NULL, 1000298, NULL)
#endif

extern PRErrorCode PR_GetError_db(void);
CheckInterfacedef(PR_GetError,PR_GetError_db);
extern void PR_SetError_db(PRErrorCode, PRInt32);
CheckInterfacedef(PR_SetError,PR_SetError_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nspr4/prerror.h\n\n",pcnt,cnt);
return cnt;
#endif

}

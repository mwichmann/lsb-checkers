/*
 * Test of sys/select.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/select.h"



#ifdef TET_TEST
void sys_select_h()
{
#else
int sys_select_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/select.h\n");
#endif

printf("Checking data structures in sys/select.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NFDBITS
	CompareConstant(NFDBITS,(8 * sizeof (long)),4417,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NFDBITS\n");
cnt++;
#endif

#endif

extern int pselect_db(int, fd_set *, fd_set *, fd_set *, const struct timespec *, const sigset_t *);
CheckInterfacedef(pselect,pselect_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/select.h\n\n",pcnt,cnt);
return cnt;
#endif

}

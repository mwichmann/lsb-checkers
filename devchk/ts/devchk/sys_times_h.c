/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/times.h"



#ifdef TET_TEST
void sys_times_h()
{
#else
int sys_times_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/times.h\n");
#endif

printf("Checking data structures in sys/times.h\n");
#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6990,0);
Msg("Find size of tms (6990)\n");
#endif

extern clock_t times_db(struct tms *);
CheckInterfacedef(times,times_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/times.h\n\n",pcnt,cnt);
return cnt;
#endif

}

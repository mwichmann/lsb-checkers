/*
 * Test of semaphore.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "semaphore.h"



#ifdef TET_TEST
void semaphore_h()
{
#else
int semaphore_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in semaphore.h\n");
#endif

#ifdef SEM_FAILED
	CompareConstant(SEM_FAILED,((sem_t*)0))
#else
Msg( "Error: Constant not found: SEM_FAILED\n");
cnt++;
#endif

#ifdef SEM_VALUE_MAX
	CompareConstant(SEM_VALUE_MAX,((int)((~0u)>>1)))
#else
Msg( "Error: Constant not found: SEM_VALUE_MAX\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(sem_t,16, 6960, 2)
#elif __ia64__
CheckTypeSize(sem_t,32, 6960, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6960,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in semaphore.h\n",cnt);
return cnt;
#endif

}

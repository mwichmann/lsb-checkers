/*
 * Test of semaphore.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
#ifdef SEM_FAILED
	CompareConstant(SEM_FAILED,((sem_t*)0),1624,architecture)
#else
Msg( "Error: Constant not found: SEM_FAILED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SEM_VALUE_MAX
	CompareConstant(SEM_VALUE_MAX,((int)((~0u)>>1)),1625,architecture)
#else
Msg( "Error: Constant not found: SEM_VALUE_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(sem_t,16, 6960, 2)
#elif __ia64__
CheckTypeSize(sem_t,32, 6960, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(sem_t,16, 6960, 6)
#elif __s390__
CheckTypeSize(sem_t,16, 6960, 10)
#elif __powerpc64__
CheckTypeSize(sem_t,32, 6960, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6960,0);
Msg("Find size of sem_t (6960)\n");
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

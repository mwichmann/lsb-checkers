/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "time.h"



#ifdef TET_TEST
void time_h()
{
#else
int time_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in time.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLOCKS_PER_SEC
	CompareConstant(CLOCKS_PER_SEC,1000000l,2473,architecture)
#else
Msg( "Error: Constant not found: CLOCKS_PER_SEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLOCK_REALTIME
	CompareConstant(CLOCK_REALTIME,0,2475,architecture)
#else
Msg( "Error: Constant not found: CLOCK_REALTIME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1,2478,architecture)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct tm,44, 7019, 2)
#elif __ia64__
CheckTypeSize(struct tm,56, 7019, 3)
#elif __powerpc__
CheckTypeSize(struct tm,44, 7019, 6)
#elif __s390__
CheckTypeSize(struct tm,0, 7019, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7019,0);
Msg("Find size of tm (7019)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct itimerspec,16, 10101, 2)
#elif __ia64__
CheckTypeSize(struct itimerspec,32, 10101, 3)
#elif __powerpc__
CheckTypeSize(struct itimerspec,16, 10101, 6)
#elif __s390__
CheckTypeSize(struct itimerspec,0, 10101, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10101,0);
Msg("Find size of itimerspec (10101)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in time.h\n",cnt);
return cnt;
#endif

}

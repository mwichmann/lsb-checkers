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
#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1,2478,architecture)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
#endif

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

#ifdef __i386__
CheckTypeSize(struct tm,44, 7019, 2)
CheckOffset(struct tm,tm_min,4,2,33513)
CheckOffset(struct tm,tm_hour,8,2,33514)
CheckOffset(struct tm,tm_mday,12,2,33515)
CheckOffset(struct tm,tm_mon,16,2,33516)
CheckOffset(struct tm,tm_year,20,2,33517)
CheckOffset(struct tm,tm_wday,24,2,33518)
CheckOffset(struct tm,tm_yday,28,2,33519)
CheckOffset(struct tm,tm_isdst,32,2,33520)
CheckOffset(struct tm,tm_gmtoff,36,2,33521)
CheckOffset(struct tm,tm_zone,40,2,33522)
#elif __ia64__
CheckTypeSize(struct tm,56, 7019, 3)
CheckOffset(struct tm,tm_min,4,3,33513)
CheckOffset(struct tm,tm_hour,8,3,33514)
CheckOffset(struct tm,tm_mday,12,3,33515)
CheckOffset(struct tm,tm_mon,16,3,33516)
CheckOffset(struct tm,tm_year,20,3,33517)
CheckOffset(struct tm,tm_wday,24,3,33518)
CheckOffset(struct tm,tm_yday,28,3,33519)
CheckOffset(struct tm,tm_isdst,32,3,33520)
CheckOffset(struct tm,tm_gmtoff,40,3,33521)
CheckOffset(struct tm,tm_zone,48,3,33522)
#elif __powerpc__
CheckTypeSize(struct tm,44, 7019, 6)
Msg("Missing member data for tm on PPC32\n");
CheckOffset(struct tm,tm_sec,0,6,33512)
CheckOffset(struct tm,tm_min,0,6,33513)
CheckOffset(struct tm,tm_hour,0,6,33514)
CheckOffset(struct tm,tm_mday,0,6,33515)
CheckOffset(struct tm,tm_mon,0,6,33516)
CheckOffset(struct tm,tm_year,0,6,33517)
CheckOffset(struct tm,tm_wday,0,6,33518)
CheckOffset(struct tm,tm_yday,0,6,33519)
CheckOffset(struct tm,tm_isdst,0,6,33520)
CheckOffset(struct tm,tm_gmtoff,0,6,33521)
CheckOffset(struct tm,tm_zone,0,6,33522)
#elif __s390__
CheckTypeSize(struct tm,44, 7019, 10)
Msg("Missing member data for tm on S390\n");
CheckOffset(struct tm,tm_sec,0,10,33512)
CheckOffset(struct tm,tm_min,0,10,33513)
CheckOffset(struct tm,tm_hour,0,10,33514)
CheckOffset(struct tm,tm_mday,0,10,33515)
CheckOffset(struct tm,tm_mon,0,10,33516)
CheckOffset(struct tm,tm_year,0,10,33517)
CheckOffset(struct tm,tm_wday,0,10,33518)
CheckOffset(struct tm,tm_yday,0,10,33519)
CheckOffset(struct tm,tm_isdst,0,10,33520)
CheckOffset(struct tm,tm_gmtoff,0,10,33521)
CheckOffset(struct tm,tm_zone,0,10,33522)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7019,0);
Msg("Find size of tm (7019)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct itimerspec,16, 10101, 2)
CheckOffset(struct itimerspec,it_value,8,2,33509)
#elif __ia64__
CheckTypeSize(struct itimerspec,32, 10101, 3)
CheckOffset(struct itimerspec,it_value,16,3,33509)
#elif __powerpc__
CheckTypeSize(struct itimerspec,16, 10101, 6)
Msg("Missing member data for itimerspec on PPC32\n");
CheckOffset(struct itimerspec,it_interval,0,6,33508)
CheckOffset(struct itimerspec,it_value,0,6,33509)
#elif __s390__
CheckTypeSize(struct itimerspec,16, 10101, 10)
Msg("Missing member data for itimerspec on S390\n");
CheckOffset(struct itimerspec,it_interval,0,10,33508)
CheckOffset(struct itimerspec,it_value,0,10,33509)
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

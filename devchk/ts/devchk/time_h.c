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

#if _LSB_DEFAULT_ARCH
#ifdef CLOCKS_PER_SEC
	CompareConstant(CLOCKS_PER_SEC,1000000l,2473,architecture)
#else
Msg( "Error: Constant not found: CLOCKS_PER_SEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLK_TCK
	CompareConstant(CLK_TCK,((clock_t)__sysconf(2)),2474,architecture)
#else
Msg( "Error: Constant not found: CLK_TCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_REALTIME
	CompareConstant(CLOCK_REALTIME,0,2475,architecture)
#else
Msg( "Error: Constant not found: CLOCK_REALTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1,2478,architecture)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct tm,44, 7019, 2)
CheckMemberSize(struct tm,tm_min,4,2,33513)
CheckOffset(struct tm,tm_min,4,2,33513)
CheckMemberSize(struct tm,tm_hour,4,2,33514)
CheckOffset(struct tm,tm_hour,8,2,33514)
CheckMemberSize(struct tm,tm_mday,4,2,33515)
CheckOffset(struct tm,tm_mday,12,2,33515)
CheckMemberSize(struct tm,tm_mon,4,2,33516)
CheckOffset(struct tm,tm_mon,16,2,33516)
CheckMemberSize(struct tm,tm_year,4,2,33517)
CheckOffset(struct tm,tm_year,20,2,33517)
CheckMemberSize(struct tm,tm_wday,4,2,33518)
CheckOffset(struct tm,tm_wday,24,2,33518)
CheckMemberSize(struct tm,tm_yday,4,2,33519)
CheckOffset(struct tm,tm_yday,28,2,33519)
CheckMemberSize(struct tm,tm_isdst,4,2,33520)
CheckOffset(struct tm,tm_isdst,32,2,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,2,33521)
CheckOffset(struct tm,tm_gmtoff,36,2,33521)
CheckMemberSize(struct tm,tm_zone,4,2,33522)
CheckOffset(struct tm,tm_zone,40,2,33522)
#elif __ia64__
CheckTypeSize(struct tm,56, 7019, 3)
CheckMemberSize(struct tm,tm_min,4,3,33513)
CheckOffset(struct tm,tm_min,4,3,33513)
CheckMemberSize(struct tm,tm_hour,4,3,33514)
CheckOffset(struct tm,tm_hour,8,3,33514)
CheckMemberSize(struct tm,tm_mday,4,3,33515)
CheckOffset(struct tm,tm_mday,12,3,33515)
CheckMemberSize(struct tm,tm_mon,4,3,33516)
CheckOffset(struct tm,tm_mon,16,3,33516)
CheckMemberSize(struct tm,tm_year,4,3,33517)
CheckOffset(struct tm,tm_year,20,3,33517)
CheckMemberSize(struct tm,tm_wday,4,3,33518)
CheckOffset(struct tm,tm_wday,24,3,33518)
CheckMemberSize(struct tm,tm_yday,4,3,33519)
CheckOffset(struct tm,tm_yday,28,3,33519)
CheckMemberSize(struct tm,tm_isdst,4,3,33520)
CheckOffset(struct tm,tm_isdst,32,3,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,3,33521)
CheckOffset(struct tm,tm_gmtoff,40,3,33521)
CheckMemberSize(struct tm,tm_zone,8,3,33522)
CheckOffset(struct tm,tm_zone,48,3,33522)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct tm,44, 7019, 6)
CheckMemberSize(struct tm,tm_min,4,6,33513)
CheckOffset(struct tm,tm_min,4,6,33513)
CheckMemberSize(struct tm,tm_hour,4,6,33514)
CheckOffset(struct tm,tm_hour,8,6,33514)
CheckMemberSize(struct tm,tm_mday,4,6,33515)
CheckOffset(struct tm,tm_mday,12,6,33515)
CheckMemberSize(struct tm,tm_mon,4,6,33516)
CheckOffset(struct tm,tm_mon,16,6,33516)
CheckMemberSize(struct tm,tm_year,4,6,33517)
CheckOffset(struct tm,tm_year,20,6,33517)
CheckMemberSize(struct tm,tm_wday,4,6,33518)
CheckOffset(struct tm,tm_wday,24,6,33518)
CheckMemberSize(struct tm,tm_yday,4,6,33519)
CheckOffset(struct tm,tm_yday,28,6,33519)
CheckMemberSize(struct tm,tm_isdst,4,6,33520)
CheckOffset(struct tm,tm_isdst,32,6,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,6,33521)
CheckOffset(struct tm,tm_gmtoff,36,6,33521)
CheckMemberSize(struct tm,tm_zone,4,6,33522)
CheckOffset(struct tm,tm_zone,40,6,33522)
#elif __s390__ && !__s390x__
CheckTypeSize(struct tm,44, 7019, 10)
CheckMemberSize(struct tm,tm_min,4,10,33513)
CheckOffset(struct tm,tm_min,4,10,33513)
CheckMemberSize(struct tm,tm_hour,4,10,33514)
CheckOffset(struct tm,tm_hour,8,10,33514)
CheckMemberSize(struct tm,tm_mday,4,10,33515)
CheckOffset(struct tm,tm_mday,12,10,33515)
CheckMemberSize(struct tm,tm_mon,4,10,33516)
CheckOffset(struct tm,tm_mon,16,10,33516)
CheckMemberSize(struct tm,tm_year,4,10,33517)
CheckOffset(struct tm,tm_year,20,10,33517)
CheckMemberSize(struct tm,tm_wday,4,10,33518)
CheckOffset(struct tm,tm_wday,24,10,33518)
CheckMemberSize(struct tm,tm_yday,4,10,33519)
CheckOffset(struct tm,tm_yday,28,10,33519)
CheckMemberSize(struct tm,tm_isdst,4,10,33520)
CheckOffset(struct tm,tm_isdst,32,10,33520)
CheckMemberSize(struct tm,tm_gmtoff,4,10,33521)
CheckOffset(struct tm,tm_gmtoff,36,10,33521)
CheckMemberSize(struct tm,tm_zone,4,10,33522)
CheckOffset(struct tm,tm_zone,40,10,33522)
#elif __powerpc64__
CheckTypeSize(struct tm,56, 7019, 9)
CheckMemberSize(struct tm,tm_min,4,9,33513)
CheckOffset(struct tm,tm_min,4,9,33513)
CheckMemberSize(struct tm,tm_hour,4,9,33514)
CheckOffset(struct tm,tm_hour,8,9,33514)
CheckMemberSize(struct tm,tm_mday,4,9,33515)
CheckOffset(struct tm,tm_mday,12,9,33515)
CheckMemberSize(struct tm,tm_mon,4,9,33516)
CheckOffset(struct tm,tm_mon,16,9,33516)
CheckMemberSize(struct tm,tm_year,4,9,33517)
CheckOffset(struct tm,tm_year,20,9,33517)
CheckMemberSize(struct tm,tm_wday,4,9,33518)
CheckOffset(struct tm,tm_wday,24,9,33518)
CheckMemberSize(struct tm,tm_yday,4,9,33519)
CheckOffset(struct tm,tm_yday,28,9,33519)
CheckMemberSize(struct tm,tm_isdst,4,9,33520)
CheckOffset(struct tm,tm_isdst,32,9,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,9,33521)
CheckOffset(struct tm,tm_gmtoff,40,9,33521)
CheckMemberSize(struct tm,tm_zone,8,9,33522)
CheckOffset(struct tm,tm_zone,48,9,33522)
#elif __s390x__
CheckTypeSize(struct tm,56, 7019, 12)
CheckMemberSize(struct tm,tm_min,4,12,33513)
CheckOffset(struct tm,tm_min,4,12,33513)
CheckMemberSize(struct tm,tm_hour,4,12,33514)
CheckOffset(struct tm,tm_hour,8,12,33514)
CheckMemberSize(struct tm,tm_mday,4,12,33515)
CheckOffset(struct tm,tm_mday,12,12,33515)
CheckMemberSize(struct tm,tm_mon,4,12,33516)
CheckOffset(struct tm,tm_mon,16,12,33516)
CheckMemberSize(struct tm,tm_year,4,12,33517)
CheckOffset(struct tm,tm_year,20,12,33517)
CheckMemberSize(struct tm,tm_wday,4,12,33518)
CheckOffset(struct tm,tm_wday,24,12,33518)
CheckMemberSize(struct tm,tm_yday,4,12,33519)
CheckOffset(struct tm,tm_yday,28,12,33519)
CheckMemberSize(struct tm,tm_isdst,4,12,33520)
CheckOffset(struct tm,tm_isdst,32,12,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,12,33521)
CheckOffset(struct tm,tm_gmtoff,40,12,33521)
CheckMemberSize(struct tm,tm_zone,8,12,33522)
CheckOffset(struct tm,tm_zone,48,12,33522)
#elif __x86_64__
CheckTypeSize(struct tm,56, 7019, 11)
CheckMemberSize(struct tm,tm_min,4,11,33513)
CheckOffset(struct tm,tm_min,4,11,33513)
CheckMemberSize(struct tm,tm_hour,4,11,33514)
CheckOffset(struct tm,tm_hour,8,11,33514)
CheckMemberSize(struct tm,tm_mday,4,11,33515)
CheckOffset(struct tm,tm_mday,12,11,33515)
CheckMemberSize(struct tm,tm_mon,4,11,33516)
CheckOffset(struct tm,tm_mon,16,11,33516)
CheckMemberSize(struct tm,tm_year,4,11,33517)
CheckOffset(struct tm,tm_year,20,11,33517)
CheckMemberSize(struct tm,tm_wday,4,11,33518)
CheckOffset(struct tm,tm_wday,24,11,33518)
CheckMemberSize(struct tm,tm_yday,4,11,33519)
CheckOffset(struct tm,tm_yday,28,11,33519)
CheckMemberSize(struct tm,tm_isdst,4,11,33520)
CheckOffset(struct tm,tm_isdst,32,11,33520)
CheckMemberSize(struct tm,tm_gmtoff,8,11,33521)
CheckOffset(struct tm,tm_gmtoff,40,11,33521)
CheckMemberSize(struct tm,tm_zone,8,11,33522)
CheckOffset(struct tm,tm_zone,48,11,33522)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7019,0);
Msg("Find size of tm (7019)\n");
#endif

#if __i386__
CheckTypeSize(struct itimerspec,16, 10101, 2)
CheckMemberSize(struct itimerspec,it_value,8,2,33509)
CheckOffset(struct itimerspec,it_value,8,2,33509)
#elif __ia64__
CheckTypeSize(struct itimerspec,32, 10101, 3)
CheckMemberSize(struct itimerspec,it_value,16,3,33509)
CheckOffset(struct itimerspec,it_value,16,3,33509)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct itimerspec,16, 10101, 6)
CheckMemberSize(struct itimerspec,it_value,8,6,33509)
CheckOffset(struct itimerspec,it_value,8,6,33509)
#elif __s390__ && !__s390x__
CheckTypeSize(struct itimerspec,16, 10101, 10)
CheckMemberSize(struct itimerspec,it_value,8,10,33509)
CheckOffset(struct itimerspec,it_value,8,10,33509)
#elif __powerpc64__
CheckTypeSize(struct itimerspec,32, 10101, 9)
CheckMemberSize(struct itimerspec,it_value,16,9,33509)
CheckOffset(struct itimerspec,it_value,16,9,33509)
#elif __s390x__
CheckTypeSize(struct itimerspec,32, 10101, 12)
CheckMemberSize(struct itimerspec,it_value,16,12,33509)
CheckOffset(struct itimerspec,it_value,16,12,33509)
#elif __x86_64__
CheckTypeSize(struct itimerspec,32, 10101, 11)
CheckMemberSize(struct itimerspec,it_value,16,11,33509)
CheckOffset(struct itimerspec,it_value,16,11,33509)
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

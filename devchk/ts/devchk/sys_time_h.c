/*
 * Test of sys/time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/time.h"



#ifdef TET_TEST
void sys_time_h()
{
#else
int sys_time_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/time.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ITIMER_VIRTUAL
	CompareConstant(ITIMER_VIRTUAL,1,3586,architecture)
#else
Msg( "Error: Constant not found: ITIMER_VIRTUAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ITIMER_REAL
	CompareConstant(ITIMER_REAL,0,3585,architecture)
#else
Msg( "Error: Constant not found: ITIMER_REAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef ITIMER_PROF
	CompareConstant(ITIMER_PROF,2,3587,architecture)
#else
Msg( "Error: Constant not found: ITIMER_PROF\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct timezone,8, 9855, 2)
CheckOffset(struct timezone,tz_dsttime,4,2,33507)
#elif __ia64__
CheckTypeSize(struct timezone,8, 9855, 3)
Msg("Missing member data for timezone on IA64\n");
CheckOffset(struct timezone,tz_minuteswest,0,3,33506)
CheckOffset(struct timezone,tz_dsttime,0,3,33507)
#elif __powerpc__
CheckTypeSize(struct timezone,8, 9855, 6)
Msg("Missing member data for timezone on PPC32\n");
CheckOffset(struct timezone,tz_minuteswest,0,6,33506)
CheckOffset(struct timezone,tz_dsttime,0,6,33507)
#elif __s390__
CheckTypeSize(struct timezone,8, 9855, 10)
Msg("Missing member data for timezone on S390\n");
CheckOffset(struct timezone,tz_minuteswest,0,10,33506)
CheckOffset(struct timezone,tz_dsttime,0,10,33507)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9855,0);
Msg("Find size of timezone (9855)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct itimerval,16, 9861, 2)
CheckOffset(struct itimerval,it_value,8,2,33511)
#elif __ia64__
CheckTypeSize(struct itimerval,32, 9861, 3)
Msg("Missing member data for itimerval on IA64\n");
CheckOffset(struct itimerval,it_interval,0,3,33510)
CheckOffset(struct itimerval,it_value,0,3,33511)
#elif __powerpc__
CheckTypeSize(struct itimerval,16, 9861, 6)
Msg("Missing member data for itimerval on PPC32\n");
CheckOffset(struct itimerval,it_interval,0,6,33510)
CheckOffset(struct itimerval,it_value,0,6,33511)
#elif __s390__
CheckTypeSize(struct itimerval,16, 9861, 10)
Msg("Missing member data for itimerval on S390\n");
CheckOffset(struct itimerval,it_interval,0,10,33510)
CheckOffset(struct itimerval,it_value,0,10,33511)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9861,0);
Msg("Find size of itimerval (9861)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct timespec,8, 7018, 2)
CheckOffset(struct timespec,tv_nsec,4,2,33503)
#elif __ia64__
CheckTypeSize(struct timespec,16, 7018, 3)
Msg("Missing member data for timespec on IA64\n");
CheckOffset(struct timespec,tv_sec,0,3,33502)
CheckOffset(struct timespec,tv_nsec,0,3,33503)
#elif __powerpc__
CheckTypeSize(struct timespec,8, 7018, 6)
Msg("Missing member data for timespec on PPC32\n");
CheckOffset(struct timespec,tv_sec,0,6,33502)
CheckOffset(struct timespec,tv_nsec,0,6,33503)
#elif __s390__
CheckTypeSize(struct timespec,8, 7018, 10)
Msg("Missing member data for timespec on S390\n");
CheckOffset(struct timespec,tv_sec,0,10,33502)
CheckOffset(struct timespec,tv_nsec,0,10,33503)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7018,0);
Msg("Find size of timespec (7018)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct timeval,8, 9858, 2)
CheckOffset(struct timeval,tv_usec,4,2,33505)
#elif __ia64__
CheckTypeSize(struct timeval,16, 9858, 3)
Msg("Missing member data for timeval on IA64\n");
CheckOffset(struct timeval,tv_sec,0,3,33504)
CheckOffset(struct timeval,tv_usec,0,3,33505)
#elif __powerpc__
CheckTypeSize(struct timeval,8, 9858, 6)
Msg("Missing member data for timeval on PPC32\n");
CheckOffset(struct timeval,tv_sec,0,6,33504)
CheckOffset(struct timeval,tv_usec,0,6,33505)
#elif __s390__
CheckTypeSize(struct timeval,8, 9858, 10)
Msg("Missing member data for timeval on S390\n");
CheckOffset(struct timeval,tv_sec,0,10,33504)
CheckOffset(struct timeval,tv_usec,0,10,33505)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9858,0);
Msg("Find size of timeval (9858)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/time.h\n",cnt);
return cnt;
#endif

}

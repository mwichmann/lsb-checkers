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

#if _LSB_DEFAULT_ARCH
#ifdef ITIMER_REAL
	CompareConstant(ITIMER_REAL,0,3585,architecture)
#else
Msg( "Error: Constant not found: ITIMER_REAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ITIMER_VIRTUAL
	CompareConstant(ITIMER_VIRTUAL,1,3586,architecture)
#else
Msg( "Error: Constant not found: ITIMER_VIRTUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ITIMER_PROF
	CompareConstant(ITIMER_PROF,2,3587,architecture)
#else
Msg( "Error: Constant not found: ITIMER_PROF\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct timezone,8, 9855, 2)
CheckMemberSize(struct timezone,tz_dsttime,4,2,33507)
CheckOffset(struct timezone,tz_dsttime,4,2,33507)
#elif __ia64__
CheckTypeSize(struct timezone,8, 9855, 3)
CheckMemberSize(struct timezone,tz_dsttime,4,3,33507)
CheckOffset(struct timezone,tz_dsttime,4,3,33507)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timezone,8, 9855, 6)
CheckMemberSize(struct timezone,tz_dsttime,4,6,33507)
CheckOffset(struct timezone,tz_dsttime,4,6,33507)
#elif __s390__ && !__s390x__
CheckTypeSize(struct timezone,8, 9855, 10)
CheckMemberSize(struct timezone,tz_dsttime,4,10,33507)
CheckOffset(struct timezone,tz_dsttime,4,10,33507)
#elif __powerpc64__
CheckTypeSize(struct timezone,8, 9855, 9)
CheckMemberSize(struct timezone,tz_dsttime,4,9,33507)
CheckOffset(struct timezone,tz_dsttime,4,9,33507)
#elif __s390x__
CheckTypeSize(struct timezone,8, 9855, 12)
CheckMemberSize(struct timezone,tz_dsttime,4,12,33507)
CheckOffset(struct timezone,tz_dsttime,4,12,33507)
#elif __x86_64__
CheckTypeSize(struct timezone,8, 9855, 11)
CheckMemberSize(struct timezone,tz_dsttime,4,11,33507)
CheckOffset(struct timezone,tz_dsttime,4,11,33507)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9855,0);
Msg("Find size of timezone (9855)\n");
#endif

#if __i386__
CheckTypeSize(struct itimerval,16, 9861, 2)
CheckMemberSize(struct itimerval,it_value,8,2,33511)
CheckOffset(struct itimerval,it_value,8,2,33511)
#elif __ia64__
CheckTypeSize(struct itimerval,32, 9861, 3)
CheckMemberSize(struct itimerval,it_value,16,3,33511)
CheckOffset(struct itimerval,it_value,16,3,33511)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct itimerval,16, 9861, 6)
CheckMemberSize(struct itimerval,it_value,8,6,33511)
CheckOffset(struct itimerval,it_value,8,6,33511)
#elif __s390__ && !__s390x__
CheckTypeSize(struct itimerval,16, 9861, 10)
CheckMemberSize(struct itimerval,it_value,8,10,33511)
CheckOffset(struct itimerval,it_value,8,10,33511)
#elif __powerpc64__
CheckTypeSize(struct itimerval,32, 9861, 9)
CheckMemberSize(struct itimerval,it_value,16,9,33511)
CheckOffset(struct itimerval,it_value,16,9,33511)
#elif __s390x__
CheckTypeSize(struct itimerval,32, 9861, 12)
CheckMemberSize(struct itimerval,it_value,16,12,33511)
CheckOffset(struct itimerval,it_value,16,12,33511)
#elif __x86_64__
CheckTypeSize(struct itimerval,32, 9861, 11)
CheckMemberSize(struct itimerval,it_value,16,11,33511)
CheckOffset(struct itimerval,it_value,16,11,33511)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9861,0);
Msg("Find size of itimerval (9861)\n");
#endif

#if 1
CheckTypeSize(time32_t,4, 10932, 1)
#endif

#if __i386__
CheckTypeSize(struct timespec,8, 7018, 2)
CheckMemberSize(struct timespec,tv_nsec,4,2,33503)
CheckOffset(struct timespec,tv_nsec,4,2,33503)
#elif __ia64__
CheckTypeSize(struct timespec,16, 7018, 3)
CheckMemberSize(struct timespec,tv_nsec,8,3,33503)
CheckOffset(struct timespec,tv_nsec,8,3,33503)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timespec,8, 7018, 6)
CheckMemberSize(struct timespec,tv_nsec,4,6,33503)
CheckOffset(struct timespec,tv_nsec,4,6,33503)
#elif __s390__ && !__s390x__
CheckTypeSize(struct timespec,8, 7018, 10)
CheckMemberSize(struct timespec,tv_nsec,4,10,33503)
CheckOffset(struct timespec,tv_nsec,4,10,33503)
#elif __powerpc64__
CheckTypeSize(struct timespec,16, 7018, 9)
CheckMemberSize(struct timespec,tv_nsec,8,9,33503)
CheckOffset(struct timespec,tv_nsec,8,9,33503)
#elif __s390x__
CheckTypeSize(struct timespec,16, 7018, 12)
CheckMemberSize(struct timespec,tv_nsec,8,12,33503)
CheckOffset(struct timespec,tv_nsec,8,12,33503)
#elif __x86_64__
CheckTypeSize(struct timespec,16, 7018, 11)
CheckMemberSize(struct timespec,tv_nsec,8,11,33503)
CheckOffset(struct timespec,tv_nsec,8,11,33503)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7018,0);
Msg("Find size of timespec (7018)\n");
#endif

#if __i386__
CheckTypeSize(struct timeval,8, 9858, 2)
CheckMemberSize(struct timeval,tv_usec,4,2,33505)
CheckOffset(struct timeval,tv_usec,4,2,33505)
#elif __ia64__
CheckTypeSize(struct timeval,16, 9858, 3)
CheckMemberSize(struct timeval,tv_usec,8,3,33505)
CheckOffset(struct timeval,tv_usec,8,3,33505)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timeval,8, 9858, 6)
CheckMemberSize(struct timeval,tv_usec,4,6,33505)
CheckOffset(struct timeval,tv_usec,4,6,33505)
#elif __s390__ && !__s390x__
CheckTypeSize(struct timeval,8, 9858, 10)
CheckMemberSize(struct timeval,tv_usec,4,10,33505)
CheckOffset(struct timeval,tv_usec,4,10,33505)
#elif __powerpc64__
CheckTypeSize(struct timeval,16, 9858, 9)
CheckMemberSize(struct timeval,tv_usec,8,9,33505)
CheckOffset(struct timeval,tv_usec,8,9,33505)
#elif __s390x__
CheckTypeSize(struct timeval,16, 9858, 12)
CheckMemberSize(struct timeval,tv_usec,8,12,33505)
CheckOffset(struct timeval,tv_usec,8,12,33505)
#elif __x86_64__
CheckTypeSize(struct timeval,16, 9858, 11)
CheckMemberSize(struct timeval,tv_usec,8,11,33505)
CheckOffset(struct timeval,tv_usec,8,11,33505)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9858,0);
Msg("Find size of timeval (9858)\n");
#endif

#if 1
CheckTypeSize(struct timeval32,8, 10934, 1)
CheckMemberSize(struct timeval32,tv_sec,4,1,40671)
CheckOffset(struct timeval32,tv_sec,0,1,40671)
CheckMemberSize(struct timeval32,tv_usec,4,1,40672)
CheckOffset(struct timeval32,tv_usec,4,1,40672)
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

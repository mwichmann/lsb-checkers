/*
 * Test of sys/time.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/time.h\n");
#endif

printf("Checking data structures in sys/time.h\n");
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
CheckTypeSize(struct timezone,8, 9855, 2);
CheckMemberSize(struct timezone,tz_dsttime,4,2,33507);
CheckOffset(struct timezone,tz_dsttime,4,2,33507);
#elif __ia64__
CheckTypeSize(struct timezone,8, 9855, 3);
CheckMemberSize(struct timezone,tz_dsttime,4,3,33507);
CheckOffset(struct timezone,tz_dsttime,4,3,33507);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timezone,8, 9855, 6);
CheckMemberSize(struct timezone,tz_dsttime,4,6,33507);
CheckOffset(struct timezone,tz_dsttime,4,6,33507);
#elif __s390__ && !__s390x__
CheckTypeSize(struct timezone,8, 9855, 10);
CheckMemberSize(struct timezone,tz_dsttime,4,10,33507);
CheckOffset(struct timezone,tz_dsttime,4,10,33507);
#elif __powerpc64__
CheckTypeSize(struct timezone,8, 9855, 9);
CheckMemberSize(struct timezone,tz_dsttime,4,9,33507);
CheckOffset(struct timezone,tz_dsttime,4,9,33507);
#elif __s390x__
CheckTypeSize(struct timezone,8, 9855, 12);
CheckMemberSize(struct timezone,tz_dsttime,4,12,33507);
CheckOffset(struct timezone,tz_dsttime,4,12,33507);
#elif __x86_64__
CheckTypeSize(struct timezone,8, 9855, 11);
CheckMemberSize(struct timezone,tz_dsttime,4,11,33507);
CheckOffset(struct timezone,tz_dsttime,4,11,33507);
#elif 1
CheckTypeSize(struct timezone,0, 9855, 1);
Msg("Missing member data for timezone on All\n");
CheckOffset(struct timezone,tz_minuteswest,0,1,33506);
CheckOffset(struct timezone,tz_dsttime,0,1,33507);
#endif

#if __i386__
CheckTypeSize(struct itimerval,16, 9861, 2);
CheckMemberSize(struct itimerval,it_value,8,2,33511);
CheckOffset(struct itimerval,it_value,8,2,33511);
#elif __ia64__
CheckTypeSize(struct itimerval,32, 9861, 3);
CheckMemberSize(struct itimerval,it_value,16,3,33511);
CheckOffset(struct itimerval,it_value,16,3,33511);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct itimerval,16, 9861, 6);
CheckMemberSize(struct itimerval,it_value,8,6,33511);
CheckOffset(struct itimerval,it_value,8,6,33511);
#elif __s390__ && !__s390x__
CheckTypeSize(struct itimerval,16, 9861, 10);
CheckMemberSize(struct itimerval,it_value,8,10,33511);
CheckOffset(struct itimerval,it_value,8,10,33511);
#elif __powerpc64__
CheckTypeSize(struct itimerval,32, 9861, 9);
CheckMemberSize(struct itimerval,it_value,16,9,33511);
CheckOffset(struct itimerval,it_value,16,9,33511);
#elif __s390x__
CheckTypeSize(struct itimerval,32, 9861, 12);
CheckMemberSize(struct itimerval,it_value,16,12,33511);
CheckOffset(struct itimerval,it_value,16,12,33511);
#elif __x86_64__
CheckTypeSize(struct itimerval,32, 9861, 11);
CheckMemberSize(struct itimerval,it_value,16,11,33511);
CheckOffset(struct itimerval,it_value,16,11,33511);
#elif 1
CheckTypeSize(struct itimerval,0, 9861, 1);
Msg("Missing member data for itimerval on All\n");
CheckOffset(struct itimerval,it_interval,0,1,33510);
CheckOffset(struct itimerval,it_value,0,1,33511);
#endif

#if __x86_64__
#endif

#if 1
CheckTypeSize(__itimer_which_t,4, 9862, 1);
#endif

#if __i386__
CheckTypeSize(struct timespec,8, 7018, 2);
CheckMemberSize(struct timespec,tv_nsec,4,2,33503);
CheckOffset(struct timespec,tv_nsec,4,2,33503);
#elif __ia64__
CheckTypeSize(struct timespec,16, 7018, 3);
CheckMemberSize(struct timespec,tv_nsec,8,3,33503);
CheckOffset(struct timespec,tv_nsec,8,3,33503);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timespec,8, 7018, 6);
CheckMemberSize(struct timespec,tv_nsec,4,6,33503);
CheckOffset(struct timespec,tv_nsec,4,6,33503);
#elif __s390__ && !__s390x__
CheckTypeSize(struct timespec,8, 7018, 10);
CheckMemberSize(struct timespec,tv_nsec,4,10,33503);
CheckOffset(struct timespec,tv_nsec,4,10,33503);
#elif __powerpc64__
CheckTypeSize(struct timespec,16, 7018, 9);
CheckMemberSize(struct timespec,tv_nsec,8,9,33503);
CheckOffset(struct timespec,tv_nsec,8,9,33503);
#elif __s390x__
CheckTypeSize(struct timespec,16, 7018, 12);
CheckMemberSize(struct timespec,tv_nsec,8,12,33503);
CheckOffset(struct timespec,tv_nsec,8,12,33503);
#elif __x86_64__
CheckTypeSize(struct timespec,16, 7018, 11);
CheckMemberSize(struct timespec,tv_nsec,8,11,33503);
CheckOffset(struct timespec,tv_nsec,8,11,33503);
#elif 1
CheckTypeSize(struct timespec,0, 7018, 1);
Msg("Missing member data for timespec on All\n");
CheckOffset(struct timespec,tv_sec,0,1,33502);
CheckOffset(struct timespec,tv_nsec,0,1,33503);
#endif

#if __i386__
CheckTypeSize(struct timeval,8, 9858, 2);
CheckMemberSize(struct timeval,tv_usec,4,2,33505);
CheckOffset(struct timeval,tv_usec,4,2,33505);
#elif __ia64__
CheckTypeSize(struct timeval,16, 9858, 3);
CheckMemberSize(struct timeval,tv_usec,8,3,33505);
CheckOffset(struct timeval,tv_usec,8,3,33505);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timeval,8, 9858, 6);
CheckMemberSize(struct timeval,tv_usec,4,6,33505);
CheckOffset(struct timeval,tv_usec,4,6,33505);
#elif __s390__ && !__s390x__
CheckTypeSize(struct timeval,8, 9858, 10);
CheckMemberSize(struct timeval,tv_usec,4,10,33505);
CheckOffset(struct timeval,tv_usec,4,10,33505);
#elif __powerpc64__
CheckTypeSize(struct timeval,16, 9858, 9);
CheckMemberSize(struct timeval,tv_usec,8,9,33505);
CheckOffset(struct timeval,tv_usec,8,9,33505);
#elif __s390x__
CheckTypeSize(struct timeval,16, 9858, 12);
CheckMemberSize(struct timeval,tv_usec,8,12,33505);
CheckOffset(struct timeval,tv_usec,8,12,33505);
#elif __x86_64__
CheckTypeSize(struct timeval,16, 9858, 11);
CheckMemberSize(struct timeval,tv_usec,8,11,33505);
CheckOffset(struct timeval,tv_usec,8,11,33505);
#elif 1
CheckTypeSize(struct timeval,0, 9858, 1);
Msg("Missing member data for timeval on All\n");
CheckOffset(struct timeval,tv_sec,0,1,33504);
CheckOffset(struct timeval,tv_usec,0,1,33505);
#endif

#if __ia64__
#endif

#if __powerpc64__
#endif

extern int getitimer_db(__itimer_which_t, struct itimerval *);
CheckInterfacedef(getitimer,getitimer_db);
extern int setitimer_db(__itimer_which_t, const struct itimerval *, struct itimerval *);
CheckInterfacedef(setitimer,setitimer_db);
extern int adjtime_db(const struct timeval *, struct timeval *);
CheckInterfacedef(adjtime,adjtime_db);
extern int gettimeofday_db(struct timeval *, struct timezone *);
CheckInterfacedef(gettimeofday,gettimeofday_db);
extern int utimes_db(const char *, const struct timeval *);
CheckInterfacedef(utimes,utimes_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/time.h\n\n",pcnt,cnt);
return cnt;
#endif

}

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
	CompareConstant(ITIMER_REAL,0,3585,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ITIMER_REAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ITIMER_VIRTUAL
	CompareConstant(ITIMER_VIRTUAL,1,3586,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ITIMER_VIRTUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ITIMER_PROF
	CompareConstant(ITIMER_PROF,2,3587,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: ITIMER_PROF\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(struct timezone,8, 9855, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,2,33507)
CheckOffset(struct timezone,tz_dsttime,4,2,33507)
#elif defined __ia64__
CheckTypeSize(struct timezone,8, 9855, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,3,33507)
CheckOffset(struct timezone,tz_dsttime,4,3,33507)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct timezone,8, 9855, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,6,33507)
CheckOffset(struct timezone,tz_dsttime,4,6,33507)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct timezone,8, 9855, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,10,33507)
CheckOffset(struct timezone,tz_dsttime,4,10,33507)
#elif defined __powerpc64__
CheckTypeSize(struct timezone,8, 9855, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,9,33507)
CheckOffset(struct timezone,tz_dsttime,4,9,33507)
#elif defined __s390x__
CheckTypeSize(struct timezone,8, 9855, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,12,33507)
CheckOffset(struct timezone,tz_dsttime,4,12,33507)
#elif defined __x86_64__
CheckTypeSize(struct timezone,8, 9855, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timezone,tz_dsttime,4,11,33507)
CheckOffset(struct timezone,tz_dsttime,4,11,33507)
#else
Msg("Find size of timezone (9855)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9855,0);
#endif

#if defined __i386__
CheckTypeSize(struct itimerval,16, 9861, 2, 1.1, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,8,2,33511)
CheckOffset(struct itimerval,it_value,8,2,33511)
#elif defined __ia64__
CheckTypeSize(struct itimerval,32, 9861, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,16,3,33511)
CheckOffset(struct itimerval,it_value,16,3,33511)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct itimerval,16, 9861, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,8,6,33511)
CheckOffset(struct itimerval,it_value,8,6,33511)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct itimerval,16, 9861, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,8,10,33511)
CheckOffset(struct itimerval,it_value,8,10,33511)
#elif defined __powerpc64__
CheckTypeSize(struct itimerval,32, 9861, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,16,9,33511)
CheckOffset(struct itimerval,it_value,16,9,33511)
#elif defined __s390x__
CheckTypeSize(struct itimerval,32, 9861, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,16,12,33511)
CheckOffset(struct itimerval,it_value,16,12,33511)
#elif defined __x86_64__
CheckTypeSize(struct itimerval,32, 9861, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct itimerval,it_value,16,11,33511)
CheckOffset(struct itimerval,it_value,16,11,33511)
#else
Msg("Find size of itimerval (9861)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9861,0);
#endif

#if 1
CheckTypeSize(__itimer_which_t,4, 9862, 1, 2.0, NULL, 6, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct timespec,8, 7018, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,4,2,33503)
CheckOffset(struct timespec,tv_nsec,4,2,33503)
#elif defined __ia64__
CheckTypeSize(struct timespec,16, 7018, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,8,3,33503)
CheckOffset(struct timespec,tv_nsec,8,3,33503)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct timespec,8, 7018, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,4,6,33503)
CheckOffset(struct timespec,tv_nsec,4,6,33503)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct timespec,8, 7018, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,4,10,33503)
CheckOffset(struct timespec,tv_nsec,4,10,33503)
#elif defined __powerpc64__
CheckTypeSize(struct timespec,16, 7018, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,8,9,33503)
CheckOffset(struct timespec,tv_nsec,8,9,33503)
#elif defined __s390x__
CheckTypeSize(struct timespec,16, 7018, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,8,12,33503)
CheckOffset(struct timespec,tv_nsec,8,12,33503)
#elif defined __x86_64__
CheckTypeSize(struct timespec,16, 7018, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timespec,tv_nsec,8,11,33503)
CheckOffset(struct timespec,tv_nsec,8,11,33503)
#else
Msg("Find size of timespec (7018)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,7018,0);
#endif

#if defined __i386__
CheckTypeSize(struct timeval,8, 9858, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,4,2,33505)
CheckOffset(struct timeval,tv_usec,4,2,33505)
#elif defined __ia64__
CheckTypeSize(struct timeval,16, 9858, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,8,3,33505)
CheckOffset(struct timeval,tv_usec,8,3,33505)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct timeval,8, 9858, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,4,6,33505)
CheckOffset(struct timeval,tv_usec,4,6,33505)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct timeval,8, 9858, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,4,10,33505)
CheckOffset(struct timeval,tv_usec,4,10,33505)
#elif defined __powerpc64__
CheckTypeSize(struct timeval,16, 9858, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,8,9,33505)
CheckOffset(struct timeval,tv_usec,8,9,33505)
#elif defined __s390x__
CheckTypeSize(struct timeval,16, 9858, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,8,12,33505)
CheckOffset(struct timeval,tv_usec,8,12,33505)
#elif defined __x86_64__
CheckTypeSize(struct timeval,16, 9858, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timeval,tv_usec,8,11,33505)
CheckOffset(struct timeval,tv_usec,8,11,33505)
#else
Msg("Find size of timeval (9858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9858,0);
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

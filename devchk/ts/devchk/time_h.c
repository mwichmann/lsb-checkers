/*
 * Test of time.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in time.h\n");
#endif

printf("Checking data structures in time.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef CLOCKS_PER_SEC
	CompareConstant(CLOCKS_PER_SEC,1000000l,2473,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CLOCKS_PER_SEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLK_TCK
	CompareConstant(CLK_TCK,((clock_t)__sysconf(2)),2474,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: CLK_TCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLOCK_REALTIME
	CompareConstant(CLOCK_REALTIME,0,2475,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: CLOCK_REALTIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1,2478,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
#endif

#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,7019,0);
Msg("Find size of tm (7019)\n");
#endif

#if defined __i386__
#elif defined __ia64__
#elif defined __powerpc__ && !defined __powerpc64__
#elif defined __s390__ && !defined __s390x__
#elif defined __powerpc64__
#elif defined __s390x__
#elif defined __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,10101,0);
Msg("Find size of itimerspec (10101)\n");
#endif

extern char * asctime_db(const struct tm *);
CheckInterfacedef(asctime,asctime_db);
extern clock_t clock_db(void);
CheckInterfacedef(clock,clock_db);
extern char * ctime_db(const time_t *);
CheckInterfacedef(ctime,ctime_db);
extern char * ctime_r_db(const time_t *, char *);
CheckInterfacedef(ctime_r,ctime_r_db);
extern double difftime_db(time_t, time_t);
CheckInterfacedef(difftime,difftime_db);
extern struct tm * getdate_db(const char *);
CheckInterfacedef(getdate,getdate_db);
extern struct tm * gmtime_db(const time_t *);
CheckInterfacedef(gmtime,gmtime_db);
extern struct tm * localtime_db(const time_t *);
CheckInterfacedef(localtime,localtime_db);
extern time_t mktime_db(struct tm *);
CheckInterfacedef(mktime,mktime_db);
extern int stime_db(const time_t *);
CheckInterfacedef(stime,stime_db);
extern size_t strftime_db(char *, size_t, const char *, const struct tm *);
CheckInterfacedef(strftime,strftime_db);
extern char * strptime_db(const char *, const char *, struct tm *);
CheckInterfacedef(strptime,strptime_db);
extern time_t time_db(time_t *);
CheckInterfacedef(time,time_db);
extern int nanosleep_db(const struct timespec *, struct timespec *);
CheckInterfacedef(nanosleep,nanosleep_db);
extern void tzset_db(void);
CheckInterfacedef(tzset,tzset_db);
extern char * asctime_r_db(const struct tm *, char *);
CheckInterfacedef(asctime_r,asctime_r_db);
extern struct tm * gmtime_r_db(const time_t *, struct tm *);
CheckInterfacedef(gmtime_r,gmtime_r_db);
extern struct tm * localtime_r_db(const time_t *, struct tm *);
CheckInterfacedef(localtime_r,localtime_r_db);
extern int clock_getcpuclockid_db(pid_t, clockid_t *);
CheckInterfacedef(clock_getcpuclockid,clock_getcpuclockid_db);
extern int clock_getres_db(clockid_t, struct timespec *);
CheckInterfacedef(clock_getres,clock_getres_db);
extern int clock_gettime_db(clockid_t, struct timespec *);
CheckInterfacedef(clock_gettime,clock_gettime_db);
extern int clock_nanosleep_db(clockid_t, int, const struct timespec *, struct timespec *);
CheckInterfacedef(clock_nanosleep,clock_nanosleep_db);
extern int clock_settime_db(clockid_t, const struct timespec *);
CheckInterfacedef(clock_settime,clock_settime_db);
extern int timer_create_db(clockid_t, struct sigevent *, timer_t *);
CheckInterfacedef(timer_create,timer_create_db);
extern int timer_delete_db(timer_t);
CheckInterfacedef(timer_delete,timer_delete_db);
extern int timer_getoverrun_db(timer_t);
CheckInterfacedef(timer_getoverrun,timer_getoverrun_db);
extern int timer_gettime_db(timer_t, struct itimerspec *);
CheckInterfacedef(timer_gettime,timer_gettime_db);
extern int timer_settime_db(timer_t, int, const struct itimerspec *, struct itimerspec *);
CheckInterfacedef(timer_settime,timer_settime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in time.h\n\n",pcnt,cnt);
return cnt;
#endif

}

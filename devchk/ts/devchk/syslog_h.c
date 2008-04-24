/*
 * Test of syslog.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <stdarg.h>
#include "syslog.h"



#ifdef TET_TEST
void syslog_h()
{
#else
int syslog_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in syslog.h\n");
#endif

printf("Checking data structures in syslog.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef LOG_EMERG
	CompareConstant(LOG_EMERG,0,4901,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_EMERG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_ALERT
	CompareConstant(LOG_ALERT,1,4902,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_ALERT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_CRIT
	CompareConstant(LOG_CRIT,2,4903,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_CRIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_ERR
	CompareConstant(LOG_ERR,3,4904,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_ERR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_WARNING
	CompareConstant(LOG_WARNING,4,4905,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_WARNING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_NOTICE
	CompareConstant(LOG_NOTICE,5,4906,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_NOTICE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_INFO
	CompareConstant(LOG_INFO,6,4907,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_INFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_DEBUG
	CompareConstant(LOG_DEBUG,7,4908,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_DEBUG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_KERN
	CompareConstant(LOG_KERN,(0<<3),4909,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_KERN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_USER
	CompareConstant(LOG_USER,(1<<3),4910,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_MAIL
	CompareConstant(LOG_MAIL,(2<<3),4911,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_MAIL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_DAEMON
	CompareConstant(LOG_DAEMON,(3<<3),4912,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_DAEMON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_AUTH
	CompareConstant(LOG_AUTH,(4<<3),4913,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_AUTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_SYSLOG
	CompareConstant(LOG_SYSLOG,(5<<3),4914,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_SYSLOG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LPR
	CompareConstant(LOG_LPR,(6<<3),4915,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LPR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_NEWS
	CompareConstant(LOG_NEWS,(7<<3),4916,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_NEWS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_UUCP
	CompareConstant(LOG_UUCP,(8<<3),4917,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_UUCP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_CRON
	CompareConstant(LOG_CRON,(9<<3),4918,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_CRON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_AUTHPRIV
	CompareConstant(LOG_AUTHPRIV,(10<<3),4919,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_AUTHPRIV\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_FTP
	CompareConstant(LOG_FTP,(11<<3),4920,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_FTP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOG_MASK(pri) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOG_UPTO(pri) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_PID
	CompareConstant(LOG_PID,0x01,4923,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_PID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_CONS
	CompareConstant(LOG_CONS,0x02,4924,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_CONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_ODELAY
	CompareConstant(LOG_ODELAY,0x04,4925,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_ODELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_NDELAY
	CompareConstant(LOG_NDELAY,0x08,4926,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_NDELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_NOWAIT
	CompareConstant(LOG_NOWAIT,0x10,4927,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_NOWAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_PERROR
	CompareConstant(LOG_PERROR,0x20,4928,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_PERROR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL0
	CompareConstant(LOG_LOCAL0,(16<<3),4936,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL1
	CompareConstant(LOG_LOCAL1,(17<<3),4937,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL2
	CompareConstant(LOG_LOCAL2,(18<<3),4938,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL3
	CompareConstant(LOG_LOCAL3,(19<<3),4939,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL3\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL4
	CompareConstant(LOG_LOCAL4,(20<<3),4940,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL5
	CompareConstant(LOG_LOCAL5,(21<<3),4941,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL5\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL6
	CompareConstant(LOG_LOCAL6,(22<<3),4942,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_LOCAL7
	CompareConstant(LOG_LOCAL7,(23<<3),4943,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: LOG_LOCAL7\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_PRIMASK
	CompareConstant(LOG_PRIMASK,0x07,5118,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LOG_PRIMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOG_PRI(p) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOG_MAKEPRI(fac, pri) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOG_FACMASK
	CompareConstant(LOG_FACMASK,0x03f8,5121,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: LOG_FACMASK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for LOG_FAC(p) */
#endif

extern void closelog_db(void);
CheckInterfacedef(closelog,closelog_db);
extern void openlog_db(const char *, int, int);
CheckInterfacedef(openlog,openlog_db);
extern int setlogmask_db(int);
CheckInterfacedef(setlogmask,setlogmask_db);
extern void syslog_db(int, const char *, ...);
CheckInterfacedef(syslog,syslog_db);
extern void vsyslog_db(int, const char *, va_list);
CheckInterfacedef(vsyslog,vsyslog_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in syslog.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of syslog.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "syslog.h"



#ifdef TET_TEST
void syslog_h()
{
#else
int syslog_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in syslog.h\n");
#endif

#ifdef LOG_EMERG
	CompareConstant(LOG_EMERG,0)
#else
Msg( "Error: Constant not found: LOG_EMERG\n");
cnt++;
#endif

#ifdef LOG_ALERT
	CompareConstant(LOG_ALERT,1)
#else
Msg( "Error: Constant not found: LOG_ALERT\n");
cnt++;
#endif

#ifdef LOG_CRIT
	CompareConstant(LOG_CRIT,2)
#else
Msg( "Error: Constant not found: LOG_CRIT\n");
cnt++;
#endif

#ifdef LOG_ERR
	CompareConstant(LOG_ERR,3)
#else
Msg( "Error: Constant not found: LOG_ERR\n");
cnt++;
#endif

#ifdef LOG_WARNING
	CompareConstant(LOG_WARNING,4)
#else
Msg( "Error: Constant not found: LOG_WARNING\n");
cnt++;
#endif

#ifdef LOG_NOTICE
	CompareConstant(LOG_NOTICE,5)
#else
Msg( "Error: Constant not found: LOG_NOTICE\n");
cnt++;
#endif

#ifdef LOG_INFO
	CompareConstant(LOG_INFO,6)
#else
Msg( "Error: Constant not found: LOG_INFO\n");
cnt++;
#endif

#ifdef LOG_DEBUG
	CompareConstant(LOG_DEBUG,7)
#else
Msg( "Error: Constant not found: LOG_DEBUG\n");
cnt++;
#endif

#ifdef LOG_KERN
	CompareConstant(LOG_KERN,(0<<3))
#else
Msg( "Error: Constant not found: LOG_KERN\n");
cnt++;
#endif

#ifdef LOG_USER
	CompareConstant(LOG_USER,(1<<3))
#else
Msg( "Error: Constant not found: LOG_USER\n");
cnt++;
#endif

#ifdef LOG_MAIL
	CompareConstant(LOG_MAIL,(2<<3))
#else
Msg( "Error: Constant not found: LOG_MAIL\n");
cnt++;
#endif

#ifdef LOG_DAEMON
	CompareConstant(LOG_DAEMON,(3<<3))
#else
Msg( "Error: Constant not found: LOG_DAEMON\n");
cnt++;
#endif

#ifdef LOG_AUTH
	CompareConstant(LOG_AUTH,(4<<3))
#else
Msg( "Error: Constant not found: LOG_AUTH\n");
cnt++;
#endif

#ifdef LOG_SYSLOG
	CompareConstant(LOG_SYSLOG,(5<<3))
#else
Msg( "Error: Constant not found: LOG_SYSLOG\n");
cnt++;
#endif

#ifdef LOG_LPR
	CompareConstant(LOG_LPR,(6<<3))
#else
Msg( "Error: Constant not found: LOG_LPR\n");
cnt++;
#endif

#ifdef LOG_NEWS
	CompareConstant(LOG_NEWS,(7<<3))
#else
Msg( "Error: Constant not found: LOG_NEWS\n");
cnt++;
#endif

#ifdef LOG_UUCP
	CompareConstant(LOG_UUCP,(8<<3))
#else
Msg( "Error: Constant not found: LOG_UUCP\n");
cnt++;
#endif

#ifdef LOG_CRON
	CompareConstant(LOG_CRON,(9<<3))
#else
Msg( "Error: Constant not found: LOG_CRON\n");
cnt++;
#endif

#ifdef LOG_AUTHPRIV
	CompareConstant(LOG_AUTHPRIV,(10<<3))
#else
Msg( "Error: Constant not found: LOG_AUTHPRIV\n");
cnt++;
#endif

#ifdef LOG_FTP
	CompareConstant(LOG_FTP,(11<<3))
#else
Msg( "Error: Constant not found: LOG_FTP\n");
cnt++;
#endif

#ifdef LOG_LOCAL0
	CompareConstant(LOG_LOCAL0,(16<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL0\n");
cnt++;
#endif

#ifdef LOG_LOCAL1
	CompareConstant(LOG_LOCAL1,(17<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL1\n");
cnt++;
#endif

#ifdef LOG_LOCAL2
	CompareConstant(LOG_LOCAL2,(18<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL2\n");
cnt++;
#endif

#ifdef LOG_LOCAL3
	CompareConstant(LOG_LOCAL3,(19<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL3\n");
cnt++;
#endif

#ifdef LOG_LOCAL4
	CompareConstant(LOG_LOCAL4,(20<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL4\n");
cnt++;
#endif

#ifdef LOG_LOCAL5
	CompareConstant(LOG_LOCAL5,(21<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL5\n");
cnt++;
#endif

#ifdef LOG_LOCAL6
	CompareConstant(LOG_LOCAL6,(22<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL6\n");
cnt++;
#endif

#ifdef LOG_LOCAL7
	CompareConstant(LOG_LOCAL7,(23<<3))
#else
Msg( "Error: Constant not found: LOG_LOCAL7\n");
cnt++;
#endif

/* No test for LOG_MASK(pri) */
/* No test for LOG_UPTO(pri) */
#ifdef LOG_PID
	CompareConstant(LOG_PID,0x01)
#else
Msg( "Error: Constant not found: LOG_PID\n");
cnt++;
#endif

#ifdef LOG_CONS
	CompareConstant(LOG_CONS,0x02)
#else
Msg( "Error: Constant not found: LOG_CONS\n");
cnt++;
#endif

#ifdef LOG_ODELAY
	CompareConstant(LOG_ODELAY,0x04)
#else
Msg( "Error: Constant not found: LOG_ODELAY\n");
cnt++;
#endif

#ifdef LOG_NDELAY
	CompareConstant(LOG_NDELAY,0x08)
#else
Msg( "Error: Constant not found: LOG_NDELAY\n");
cnt++;
#endif

#ifdef LOG_NOWAIT
	CompareConstant(LOG_NOWAIT,0x10)
#else
Msg( "Error: Constant not found: LOG_NOWAIT\n");
cnt++;
#endif

#ifdef LOG_PERROR
	CompareConstant(LOG_PERROR,0x20)
#else
Msg( "Error: Constant not found: LOG_PERROR\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in syslog.h\n",cnt);
return cnt;
#endif

}

/*
 * Test of utmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "utmp.h"



#ifdef TET_TEST
void utmp_h()
{
#else
int utmp_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in utmp.h\n");
#endif

#ifdef UT_LINESIZE
	CompareConstant(UT_LINESIZE,32)
#else
Msg( "Error: Constant not found: UT_LINESIZE\n");
cnt++;
#endif

#ifdef UT_NAMESIZE
	CompareConstant(UT_NAMESIZE,32)
#else
Msg( "Error: Constant not found: UT_NAMESIZE\n");
cnt++;
#endif

#ifdef UT_HOSTSIZE
	CompareConstant(UT_HOSTSIZE,256)
#else
Msg( "Error: Constant not found: UT_HOSTSIZE\n");
cnt++;
#endif

#ifdef EMPTY
	CompareConstant(EMPTY,0)
#else
Msg( "Error: Constant not found: EMPTY\n");
cnt++;
#endif

#ifdef RUN_LVL
	CompareConstant(RUN_LVL,1)
#else
Msg( "Error: Constant not found: RUN_LVL\n");
cnt++;
#endif

#ifdef BOOT_TIME
	CompareConstant(BOOT_TIME,2)
#else
Msg( "Error: Constant not found: BOOT_TIME\n");
cnt++;
#endif

#ifdef NEW_TIME
	CompareConstant(NEW_TIME,3)
#else
Msg( "Error: Constant not found: NEW_TIME\n");
cnt++;
#endif

#ifdef OLD_TIME
	CompareConstant(OLD_TIME,4)
#else
Msg( "Error: Constant not found: OLD_TIME\n");
cnt++;
#endif

#ifdef INIT_PROCESS
	CompareConstant(INIT_PROCESS,5)
#else
Msg( "Error: Constant not found: INIT_PROCESS\n");
cnt++;
#endif

#ifdef LOGIN_PROCESS
	CompareConstant(LOGIN_PROCESS,6)
#else
Msg( "Error: Constant not found: LOGIN_PROCESS\n");
cnt++;
#endif

#ifdef USER_PROCESS
	CompareConstant(USER_PROCESS,7)
#else
Msg( "Error: Constant not found: USER_PROCESS\n");
cnt++;
#endif

#ifdef DEAD_PROCESS
	CompareConstant(DEAD_PROCESS,8)
#else
Msg( "Error: Constant not found: DEAD_PROCESS\n");
cnt++;
#endif

#ifdef ACCOUNTING
	CompareConstant(ACCOUNTING,9)
#else
Msg( "Error: Constant not found: ACCOUNTING\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct exit_status,4, 10282, 2)
CheckOffset(struct exit_status,e_termination,0,2,34453)
CheckOffset(struct exit_status,e_exit,2,2,34454)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10282,0);
#endif

#ifdef __i386__
CheckTypeSize(struct lastlog,292, 10285, 2)
CheckOffset(struct lastlog,ll_time,0,2,34460)
CheckOffset(struct lastlog,ll_line,4,2,34461)
CheckOffset(struct lastlog,ll_host,36,2,34462)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10285,0);
#endif

#ifdef __i386__
CheckTypeSize(struct utmp,384, 10281, 2)
CheckOffset(struct utmp,ut_type,0,2,34447)
CheckOffset(struct utmp,ut_pid,4,2,34448)
CheckOffset(struct utmp,ut_line,8,2,34449)
CheckOffset(struct utmp,ut_id,40,2,34450)
CheckOffset(struct utmp,ut_user,44,2,34451)
CheckOffset(struct utmp,ut_host,76,2,34452)
CheckOffset(struct utmp,ut_exit,332,2,34455)
CheckOffset(struct utmp,ut_session,336,2,34456)
CheckOffset(struct utmp,ut_tv,340,2,34457)
CheckOffset(struct utmp,ut_addr_v6,348,2,34458)
CheckOffset(struct utmp,__unused,364,2,34459)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10281,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in utmp.h\n",cnt);
return cnt;
#endif

}

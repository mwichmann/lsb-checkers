/*
 * Test of utmp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
#ifdef UT_LINESIZE
	CompareConstant(UT_LINESIZE,32,4960,architecture)
#else
Msg( "Error: Constant not found: UT_LINESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UT_NAMESIZE
	CompareConstant(UT_NAMESIZE,32,4961,architecture)
#else
Msg( "Error: Constant not found: UT_NAMESIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UT_HOSTSIZE
	CompareConstant(UT_HOSTSIZE,256,4962,architecture)
#else
Msg( "Error: Constant not found: UT_HOSTSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef EMPTY
	CompareConstant(EMPTY,0,4963,architecture)
#else
Msg( "Error: Constant not found: EMPTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RUN_LVL
	CompareConstant(RUN_LVL,1,4964,architecture)
#else
Msg( "Error: Constant not found: RUN_LVL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BOOT_TIME
	CompareConstant(BOOT_TIME,2,4965,architecture)
#else
Msg( "Error: Constant not found: BOOT_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NEW_TIME
	CompareConstant(NEW_TIME,3,4966,architecture)
#else
Msg( "Error: Constant not found: NEW_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef OLD_TIME
	CompareConstant(OLD_TIME,4,4967,architecture)
#else
Msg( "Error: Constant not found: OLD_TIME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef INIT_PROCESS
	CompareConstant(INIT_PROCESS,5,4968,architecture)
#else
Msg( "Error: Constant not found: INIT_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef LOGIN_PROCESS
	CompareConstant(LOGIN_PROCESS,6,4969,architecture)
#else
Msg( "Error: Constant not found: LOGIN_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USER_PROCESS
	CompareConstant(USER_PROCESS,7,4970,architecture)
#else
Msg( "Error: Constant not found: USER_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DEAD_PROCESS
	CompareConstant(DEAD_PROCESS,8,4971,architecture)
#else
Msg( "Error: Constant not found: DEAD_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ACCOUNTING
	CompareConstant(ACCOUNTING,9,4972,architecture)
#else
Msg( "Error: Constant not found: ACCOUNTING\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct exit_status,4, 10282, 2)
CheckOffset(struct exit_status,e_termination,0,2,34453)
CheckOffset(struct exit_status,e_exit,2,2,34454)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct exit_status,4, 10282, 6)
CheckOffset(struct exit_status,e_exit,2,6,34454)
#elif __ia64__
CheckTypeSize(struct exit_status,4, 10282, 3)
CheckOffset(struct exit_status,e_exit,2,3,34454)
#elif __s390__
CheckTypeSize(struct exit_status,4, 10282, 10)
CheckOffset(struct exit_status,e_exit,2,10,34454)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10282,0);
Msg("Find size of exit_status (10282)\n");
#endif

#if __i386__
CheckTypeSize(struct lastlog,292, 10285, 2)
CheckOffset(struct lastlog,ll_time,0,2,34460)
CheckOffset(struct lastlog,ll_line,4,2,34461)
CheckOffset(struct lastlog,ll_host,36,2,34462)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct lastlog,292, 10285, 6)
CheckOffset(struct lastlog,ll_line,4,6,34461)
CheckOffset(struct lastlog,ll_host,36,6,34462)
#elif __ia64__
CheckTypeSize(struct lastlog,296, 10285, 3)
CheckOffset(struct lastlog,ll_line,8,3,34461)
CheckOffset(struct lastlog,ll_host,40,3,34462)
#elif __s390__
CheckTypeSize(struct lastlog,292, 10285, 10)
CheckOffset(struct lastlog,ll_line,4,10,34461)
CheckOffset(struct lastlog,ll_host,36,10,34462)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10285,0);
Msg("Find size of lastlog (10285)\n");
#endif

#if __i386__
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utmp,384, 10281, 6)
CheckOffset(struct utmp,ut_pid,4,6,34448)
CheckOffset(struct utmp,ut_line,8,6,34449)
CheckOffset(struct utmp,ut_id,40,6,34450)
CheckOffset(struct utmp,ut_user,44,6,34451)
CheckOffset(struct utmp,ut_host,76,6,34452)
CheckOffset(struct utmp,ut_exit,332,6,34455)
CheckOffset(struct utmp,ut_session,336,6,34456)
CheckOffset(struct utmp,ut_tv,340,6,34457)
CheckOffset(struct utmp,ut_addr_v6,348,6,34458)
CheckOffset(struct utmp,__unused,364,6,34459)
#elif __ia64__
CheckTypeSize(struct utmp,400, 10281, 3)
CheckOffset(struct utmp,ut_pid,4,3,34448)
CheckOffset(struct utmp,ut_line,8,3,34449)
CheckOffset(struct utmp,ut_id,40,3,34450)
CheckOffset(struct utmp,ut_user,44,3,34451)
CheckOffset(struct utmp,ut_host,76,3,34452)
CheckOffset(struct utmp,ut_exit,332,3,34455)
CheckOffset(struct utmp,ut_session,336,3,34456)
CheckOffset(struct utmp,ut_tv,344,3,34457)
CheckOffset(struct utmp,ut_addr_v6,360,3,34458)
CheckOffset(struct utmp,__unused,376,3,34459)
#elif __s390__
CheckTypeSize(struct utmp,384, 10281, 10)
CheckOffset(struct utmp,ut_pid,4,10,34448)
CheckOffset(struct utmp,ut_line,8,10,34449)
CheckOffset(struct utmp,ut_id,40,10,34450)
CheckOffset(struct utmp,ut_user,44,10,34451)
CheckOffset(struct utmp,ut_host,76,10,34452)
CheckOffset(struct utmp,ut_exit,332,10,34455)
CheckOffset(struct utmp,ut_session,336,10,34456)
CheckOffset(struct utmp,ut_tv,340,10,34457)
CheckOffset(struct utmp,ut_addr_v6,348,10,34458)
CheckOffset(struct utmp,__unused,364,10,34459)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10281,0);
Msg("Find size of utmp (10281)\n");
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

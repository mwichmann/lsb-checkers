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
CheckMemberSize(struct exit_status,e_termination,2,2,34453)
CheckOffset(struct exit_status,e_termination,0,2,34453)
CheckMemberSize(struct exit_status,e_exit,2,2,34454)
CheckOffset(struct exit_status,e_exit,2,2,34454)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct exit_status,4, 10282, 6)
CheckMemberSize(struct exit_status,e_exit,2,6,34454)
CheckOffset(struct exit_status,e_exit,2,6,34454)
#elif __ia64__
CheckTypeSize(struct exit_status,4, 10282, 3)
CheckMemberSize(struct exit_status,e_exit,2,3,34454)
CheckOffset(struct exit_status,e_exit,2,3,34454)
#elif __s390__ && !__s390x__
CheckTypeSize(struct exit_status,4, 10282, 10)
CheckMemberSize(struct exit_status,e_exit,2,10,34454)
CheckOffset(struct exit_status,e_exit,2,10,34454)
#elif __powerpc64__
CheckTypeSize(struct exit_status,4, 10282, 9)
CheckMemberSize(struct exit_status,e_exit,2,9,34454)
CheckOffset(struct exit_status,e_exit,2,9,34454)
#elif __s390x__
CheckTypeSize(struct exit_status,4, 10282, 12)
CheckMemberSize(struct exit_status,e_exit,2,12,34454)
CheckOffset(struct exit_status,e_exit,2,12,34454)
#elif __x86_64__
CheckTypeSize(struct exit_status,4, 10282, 11)
CheckMemberSize(struct exit_status,e_exit,2,11,34454)
CheckOffset(struct exit_status,e_exit,2,11,34454)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10282,0);
Msg("Find size of exit_status (10282)\n");
#endif

#if __i386__
CheckTypeSize(struct lastlog,292, 10285, 2)
CheckMemberSize(struct lastlog,ll_time,4,2,34460)
CheckOffset(struct lastlog,ll_time,0,2,34460)
CheckMemberSize(struct lastlog,ll_line,32,2,34461)
CheckOffset(struct lastlog,ll_line,4,2,34461)
CheckMemberSize(struct lastlog,ll_host,256,2,34462)
CheckOffset(struct lastlog,ll_host,36,2,34462)
#endif

#if __ia64__
CheckTypeSize(struct lastlog,296, 10950, 3)
CheckMemberSize(struct lastlog,ll_time,4,3,40749)
CheckOffset(struct lastlog,ll_time,0,3,40749)
CheckMemberSize(struct lastlog,ll_line,32,3,40755)
CheckOffset(struct lastlog,ll_line,8,3,40755)
CheckMemberSize(struct lastlog,ll_host,256,3,40761)
CheckOffset(struct lastlog,ll_host,40,3,40761)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct lastlog,292, 10951, 6)
CheckMemberSize(struct lastlog,ll_time,4,6,40750)
CheckOffset(struct lastlog,ll_time,0,6,40750)
CheckMemberSize(struct lastlog,ll_line,32,6,40756)
CheckOffset(struct lastlog,ll_line,4,6,40756)
CheckMemberSize(struct lastlog,ll_host,256,6,40762)
CheckOffset(struct lastlog,ll_host,36,6,40762)
#endif

#if __powerpc64__
CheckTypeSize(struct lastlog,292, 10952, 9)
CheckMemberSize(struct lastlog,ll_time,4,9,40751)
CheckOffset(struct lastlog,ll_time,0,9,40751)
CheckMemberSize(struct lastlog,ll_line,32,9,40757)
CheckOffset(struct lastlog,ll_line,4,9,40757)
CheckMemberSize(struct lastlog,ll_host,256,9,40763)
CheckOffset(struct lastlog,ll_host,36,9,40763)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct lastlog,292, 10953, 10)
CheckMemberSize(struct lastlog,ll_time,4,10,40752)
CheckOffset(struct lastlog,ll_time,0,10,40752)
CheckMemberSize(struct lastlog,ll_line,32,10,40758)
CheckOffset(struct lastlog,ll_line,4,10,40758)
CheckMemberSize(struct lastlog,ll_host,256,10,40764)
CheckOffset(struct lastlog,ll_host,36,10,40764)
#endif

#if __x86_64__
CheckTypeSize(struct lastlog,292, 10954, 11)
CheckMemberSize(struct lastlog,ll_time,4,11,40753)
CheckOffset(struct lastlog,ll_time,0,11,40753)
CheckMemberSize(struct lastlog,ll_line,32,11,40759)
CheckOffset(struct lastlog,ll_line,4,11,40759)
CheckMemberSize(struct lastlog,ll_host,256,11,40765)
CheckOffset(struct lastlog,ll_host,36,11,40765)
#endif

#if __s390x__
CheckTypeSize(struct lastlog,296, 10955, 12)
CheckMemberSize(struct lastlog,ll_time,4,12,40754)
CheckOffset(struct lastlog,ll_time,0,12,40754)
CheckMemberSize(struct lastlog,ll_line,32,12,40760)
CheckOffset(struct lastlog,ll_line,8,12,40760)
CheckMemberSize(struct lastlog,ll_host,256,12,40766)
CheckOffset(struct lastlog,ll_host,40,12,40766)
#endif

#if __i386__
CheckTypeSize(struct utmp,384, 10281, 2)
CheckMemberSize(struct utmp,ut_type,2,2,34447)
CheckOffset(struct utmp,ut_type,0,2,34447)
CheckMemberSize(struct utmp,ut_pid,4,2,34448)
CheckOffset(struct utmp,ut_pid,4,2,34448)
CheckMemberSize(struct utmp,ut_line,32,2,34449)
CheckOffset(struct utmp,ut_line,8,2,34449)
CheckMemberSize(struct utmp,ut_id,4,2,34450)
CheckOffset(struct utmp,ut_id,40,2,34450)
CheckMemberSize(struct utmp,ut_user,32,2,34451)
CheckOffset(struct utmp,ut_user,44,2,34451)
CheckMemberSize(struct utmp,ut_host,256,2,34452)
CheckOffset(struct utmp,ut_host,76,2,34452)
CheckMemberSize(struct utmp,ut_exit,4,2,34455)
CheckOffset(struct utmp,ut_exit,332,2,34455)
CheckMemberSize(struct utmp,ut_session,4,2,34456)
CheckOffset(struct utmp,ut_session,336,2,34456)
CheckMemberSize(struct utmp,ut_tv,8,2,34457)
CheckOffset(struct utmp,ut_tv,340,2,34457)
CheckMemberSize(struct utmp,ut_addr_v6,16,2,34458)
CheckOffset(struct utmp,ut_addr_v6,348,2,34458)
CheckMemberSize(struct utmp,__unused,20,2,34459)
CheckOffset(struct utmp,__unused,364,2,34459)
#endif

#if __ia64__
CheckTypeSize(struct utmp,400, 10935, 3)
CheckMemberSize(struct utmp,ut_type,2,3,40728)
CheckOffset(struct utmp,ut_type,0,3,40728)
CheckMemberSize(struct utmp,ut_pid,4,3,40729)
CheckOffset(struct utmp,ut_pid,4,3,40729)
CheckMemberSize(struct utmp,ut_line,32,3,40730)
CheckOffset(struct utmp,ut_line,8,3,40730)
CheckMemberSize(struct utmp,ut_id,4,3,40731)
CheckOffset(struct utmp,ut_id,40,3,40731)
CheckMemberSize(struct utmp,ut_user,32,3,40732)
CheckOffset(struct utmp,ut_user,44,3,40732)
CheckMemberSize(struct utmp,ut_host,256,3,40733)
CheckOffset(struct utmp,ut_host,76,3,40733)
CheckMemberSize(struct utmp,ut_exit,4,3,40734)
CheckOffset(struct utmp,ut_exit,332,3,40734)
CheckMemberSize(struct utmp,ut_session,8,3,40735)
CheckOffset(struct utmp,ut_session,336,3,40735)
CheckMemberSize(struct utmp,ut_tv,16,3,40736)
CheckOffset(struct utmp,ut_tv,344,3,40736)
CheckMemberSize(struct utmp,ut_addr_v6,16,3,40737)
CheckOffset(struct utmp,ut_addr_v6,360,3,40737)
CheckMemberSize(struct utmp,__unused,20,3,40738)
CheckOffset(struct utmp,__unused,376,3,40738)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct utmp,384, 10936, 6)
CheckMemberSize(struct utmp,ut_type,2,6,40717)
CheckOffset(struct utmp,ut_type,0,6,40717)
CheckMemberSize(struct utmp,ut_pid,4,6,40718)
CheckOffset(struct utmp,ut_pid,4,6,40718)
CheckMemberSize(struct utmp,ut_line,32,6,40719)
CheckOffset(struct utmp,ut_line,8,6,40719)
CheckMemberSize(struct utmp,ut_id,4,6,40720)
CheckOffset(struct utmp,ut_id,40,6,40720)
CheckMemberSize(struct utmp,ut_user,32,6,40721)
CheckOffset(struct utmp,ut_user,44,6,40721)
CheckMemberSize(struct utmp,ut_host,256,6,40722)
CheckOffset(struct utmp,ut_host,76,6,40722)
CheckMemberSize(struct utmp,ut_exit,4,6,40723)
CheckOffset(struct utmp,ut_exit,332,6,40723)
CheckMemberSize(struct utmp,ut_session,4,6,40724)
CheckOffset(struct utmp,ut_session,336,6,40724)
CheckMemberSize(struct utmp,ut_tv,8,6,40725)
CheckOffset(struct utmp,ut_tv,340,6,40725)
CheckMemberSize(struct utmp,ut_addr_v6,16,6,40726)
CheckOffset(struct utmp,ut_addr_v6,348,6,40726)
CheckMemberSize(struct utmp,__unused,20,6,40727)
CheckOffset(struct utmp,__unused,364,6,40727)
#endif

#if __powerpc64__
CheckTypeSize(struct utmp,384, 10937, 9)
CheckMemberSize(struct utmp,ut_type,2,9,40706)
CheckOffset(struct utmp,ut_type,0,9,40706)
CheckMemberSize(struct utmp,ut_pid,4,9,40707)
CheckOffset(struct utmp,ut_pid,4,9,40707)
CheckMemberSize(struct utmp,ut_line,32,9,40708)
CheckOffset(struct utmp,ut_line,8,9,40708)
CheckMemberSize(struct utmp,ut_id,4,9,40709)
CheckOffset(struct utmp,ut_id,40,9,40709)
CheckMemberSize(struct utmp,ut_user,32,9,40710)
CheckOffset(struct utmp,ut_user,44,9,40710)
CheckMemberSize(struct utmp,ut_host,256,9,40711)
CheckOffset(struct utmp,ut_host,76,9,40711)
CheckMemberSize(struct utmp,ut_exit,4,9,40712)
CheckOffset(struct utmp,ut_exit,332,9,40712)
CheckMemberSize(struct utmp,ut_session,4,9,40713)
CheckOffset(struct utmp,ut_session,336,9,40713)
CheckMemberSize(struct utmp,ut_tv,8,9,40714)
CheckOffset(struct utmp,ut_tv,340,9,40714)
CheckMemberSize(struct utmp,ut_addr_v6,16,9,40715)
CheckOffset(struct utmp,ut_addr_v6,348,9,40715)
CheckMemberSize(struct utmp,__unused,20,9,40716)
CheckOffset(struct utmp,__unused,364,9,40716)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct utmp,384, 10938, 10)
CheckMemberSize(struct utmp,ut_type,2,10,40695)
CheckOffset(struct utmp,ut_type,0,10,40695)
CheckMemberSize(struct utmp,ut_pid,4,10,40696)
CheckOffset(struct utmp,ut_pid,4,10,40696)
CheckMemberSize(struct utmp,ut_line,32,10,40697)
CheckOffset(struct utmp,ut_line,8,10,40697)
CheckMemberSize(struct utmp,ut_id,4,10,40698)
CheckOffset(struct utmp,ut_id,40,10,40698)
CheckMemberSize(struct utmp,ut_user,32,10,40699)
CheckOffset(struct utmp,ut_user,44,10,40699)
CheckMemberSize(struct utmp,ut_host,256,10,40700)
CheckOffset(struct utmp,ut_host,76,10,40700)
CheckMemberSize(struct utmp,ut_exit,4,10,40701)
CheckOffset(struct utmp,ut_exit,332,10,40701)
CheckMemberSize(struct utmp,ut_session,4,10,40702)
CheckOffset(struct utmp,ut_session,336,10,40702)
CheckMemberSize(struct utmp,ut_tv,8,10,40703)
CheckOffset(struct utmp,ut_tv,340,10,40703)
CheckMemberSize(struct utmp,ut_addr_v6,16,10,40704)
CheckOffset(struct utmp,ut_addr_v6,348,10,40704)
CheckMemberSize(struct utmp,__unused,20,10,40705)
CheckOffset(struct utmp,__unused,364,10,40705)
#endif

#if __x86_64__
CheckTypeSize(struct utmp,384, 10939, 11)
CheckMemberSize(struct utmp,ut_type,2,11,40684)
CheckOffset(struct utmp,ut_type,0,11,40684)
CheckMemberSize(struct utmp,ut_pid,4,11,40685)
CheckOffset(struct utmp,ut_pid,4,11,40685)
CheckMemberSize(struct utmp,ut_line,32,11,40686)
CheckOffset(struct utmp,ut_line,8,11,40686)
CheckMemberSize(struct utmp,ut_id,4,11,40687)
CheckOffset(struct utmp,ut_id,40,11,40687)
CheckMemberSize(struct utmp,ut_user,32,11,40688)
CheckOffset(struct utmp,ut_user,44,11,40688)
CheckMemberSize(struct utmp,ut_host,256,11,40689)
CheckOffset(struct utmp,ut_host,76,11,40689)
CheckMemberSize(struct utmp,ut_exit,4,11,40690)
CheckOffset(struct utmp,ut_exit,332,11,40690)
CheckMemberSize(struct utmp,ut_session,4,11,40691)
CheckOffset(struct utmp,ut_session,336,11,40691)
CheckMemberSize(struct utmp,ut_tv,8,11,40692)
CheckOffset(struct utmp,ut_tv,340,11,40692)
CheckMemberSize(struct utmp,ut_addr_v6,16,11,40693)
CheckOffset(struct utmp,ut_addr_v6,348,11,40693)
CheckMemberSize(struct utmp,__unused,20,11,40694)
CheckOffset(struct utmp,__unused,364,11,40694)
#endif

#if __s390x__
CheckTypeSize(struct utmp,400, 10940, 12)
CheckMemberSize(struct utmp,ut_type,2,12,40673)
CheckOffset(struct utmp,ut_type,0,12,40673)
CheckMemberSize(struct utmp,ut_pid,4,12,40674)
CheckOffset(struct utmp,ut_pid,4,12,40674)
CheckMemberSize(struct utmp,ut_line,32,12,40675)
CheckOffset(struct utmp,ut_line,8,12,40675)
CheckMemberSize(struct utmp,ut_id,4,12,40676)
CheckOffset(struct utmp,ut_id,40,12,40676)
CheckMemberSize(struct utmp,ut_user,32,12,40677)
CheckOffset(struct utmp,ut_user,44,12,40677)
CheckMemberSize(struct utmp,ut_host,256,12,40678)
CheckOffset(struct utmp,ut_host,76,12,40678)
CheckMemberSize(struct utmp,ut_exit,4,12,40679)
CheckOffset(struct utmp,ut_exit,332,12,40679)
CheckMemberSize(struct utmp,ut_session,8,12,40680)
CheckOffset(struct utmp,ut_session,336,12,40680)
CheckMemberSize(struct utmp,ut_tv,16,12,40681)
CheckOffset(struct utmp,ut_tv,344,12,40681)
CheckMemberSize(struct utmp,ut_addr_v6,16,12,40682)
CheckOffset(struct utmp,ut_addr_v6,360,12,40682)
CheckMemberSize(struct utmp,__unused,20,12,40683)
CheckOffset(struct utmp,__unused,376,12,40683)
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

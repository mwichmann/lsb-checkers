/*
 * Test of utmpx.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <utmp.h>
#include "utmpx.h"



#ifdef TET_TEST
void utmpx_h()
{
#else
int utmpx_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in utmpx.h\n");
#endif

printf("Checking data structures in utmpx.h\n");
#if __i386__
CheckTypeSize(struct utmpx *,4, 10558, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utmpx *,4, 10558, 6)
#elif __s390x__
CheckTypeSize(struct utmpx *,8, 10558, 12)
#elif __s390__ && !__s390x__
CheckTypeSize(struct utmpx *,4, 10558, 10)
#elif __x86_64__
CheckTypeSize(struct utmpx *,8, 10558, 11)
#elif __powerpc64__
CheckTypeSize(struct utmpx *,8, 10558, 9)
#elif __ia64__
CheckTypeSize(struct utmpx *,0, 10558, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10558,0);
Msg("Find size of utmpx * (10558)\n");
#endif

#if 1
#endif

#if 1
#endif

#if 1
#endif

#if __i386__
CheckTypeSize(struct utmpx,384, 10555, 2)
CheckMemberSize(struct utmpx,ut_type,2,2,40286)
CheckOffset(struct utmpx,ut_type,0,2,40286)
CheckMemberSize(struct utmpx,ut_pid,4,2,40287)
CheckOffset(struct utmpx,ut_pid,4,2,40287)
CheckMemberSize(struct utmpx,ut_line,32,2,40288)
CheckOffset(struct utmpx,ut_line,8,2,40288)
CheckMemberSize(struct utmpx,ut_id,4,2,40289)
CheckOffset(struct utmpx,ut_id,40,2,40289)
CheckMemberSize(struct utmpx,ut_user,32,2,40290)
CheckOffset(struct utmpx,ut_user,44,2,40290)
CheckMemberSize(struct utmpx,ut_host,256,2,40291)
CheckOffset(struct utmpx,ut_host,76,2,40291)
CheckMemberSize(struct utmpx,ut_exit,4,2,40292)
CheckOffset(struct utmpx,ut_exit,332,2,40292)
CheckMemberSize(struct utmpx,ut_session,4,2,40293)
CheckOffset(struct utmpx,ut_session,336,2,40293)
CheckMemberSize(struct utmpx,ut_tv,8,2,40294)
CheckOffset(struct utmpx,ut_tv,340,2,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,2,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,2,40295)
CheckMemberSize(struct utmpx,__unused,20,2,40296)
CheckOffset(struct utmpx,__unused,364,2,40296)
#endif

#if __ia64__
CheckTypeSize(struct utmpx,400, 10956, 3)
CheckMemberSize(struct utmpx,ut_type,2,3,40767)
CheckOffset(struct utmpx,ut_type,0,3,40767)
CheckMemberSize(struct utmpx,ut_pid,4,3,40768)
CheckOffset(struct utmpx,ut_pid,4,3,40768)
CheckMemberSize(struct utmpx,ut_line,32,3,40769)
CheckOffset(struct utmpx,ut_line,8,3,40769)
CheckMemberSize(struct utmpx,ut_id,4,3,40770)
CheckOffset(struct utmpx,ut_id,40,3,40770)
CheckMemberSize(struct utmpx,ut_user,32,3,40771)
CheckOffset(struct utmpx,ut_user,44,3,40771)
CheckMemberSize(struct utmpx,ut_host,256,3,40772)
CheckOffset(struct utmpx,ut_host,76,3,40772)
CheckMemberSize(struct utmpx,ut_exit,4,3,40773)
CheckOffset(struct utmpx,ut_exit,332,3,40773)
CheckMemberSize(struct utmpx,ut_session,8,3,40774)
CheckOffset(struct utmpx,ut_session,336,3,40774)
CheckMemberSize(struct utmpx,ut_tv,16,3,40775)
CheckOffset(struct utmpx,ut_tv,344,3,40775)
CheckMemberSize(struct utmpx,ut_addr_v6,16,3,40776)
CheckOffset(struct utmpx,ut_addr_v6,360,3,40776)
CheckMemberSize(struct utmpx,__unused,20,3,40777)
CheckOffset(struct utmpx,__unused,376,3,40777)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct utmpx,384, 10957, 6)
CheckMemberSize(struct utmpx,ut_type,2,6,40778)
CheckOffset(struct utmpx,ut_type,0,6,40778)
CheckMemberSize(struct utmpx,ut_pid,4,6,40779)
CheckOffset(struct utmpx,ut_pid,4,6,40779)
CheckMemberSize(struct utmpx,ut_line,32,6,40780)
CheckOffset(struct utmpx,ut_line,8,6,40780)
CheckMemberSize(struct utmpx,ut_id,4,6,40781)
CheckOffset(struct utmpx,ut_id,40,6,40781)
CheckMemberSize(struct utmpx,ut_user,32,6,40782)
CheckOffset(struct utmpx,ut_user,44,6,40782)
CheckMemberSize(struct utmpx,ut_host,256,6,40783)
CheckOffset(struct utmpx,ut_host,76,6,40783)
CheckMemberSize(struct utmpx,ut_exit,4,6,40784)
CheckOffset(struct utmpx,ut_exit,332,6,40784)
CheckMemberSize(struct utmpx,ut_session,4,6,40785)
CheckOffset(struct utmpx,ut_session,336,6,40785)
CheckMemberSize(struct utmpx,ut_tv,8,6,40786)
CheckOffset(struct utmpx,ut_tv,340,6,40786)
CheckMemberSize(struct utmpx,ut_addr_v6,16,6,40787)
CheckOffset(struct utmpx,ut_addr_v6,348,6,40787)
CheckMemberSize(struct utmpx,__unused,20,6,40788)
CheckOffset(struct utmpx,__unused,364,6,40788)
#endif

#if __powerpc64__
CheckTypeSize(struct utmpx,384, 10958, 9)
CheckMemberSize(struct utmpx,ut_type,2,9,40789)
CheckOffset(struct utmpx,ut_type,0,9,40789)
CheckMemberSize(struct utmpx,ut_pid,4,9,40790)
CheckOffset(struct utmpx,ut_pid,4,9,40790)
CheckMemberSize(struct utmpx,ut_line,32,9,40791)
CheckOffset(struct utmpx,ut_line,8,9,40791)
CheckMemberSize(struct utmpx,ut_id,4,9,40792)
CheckOffset(struct utmpx,ut_id,40,9,40792)
CheckMemberSize(struct utmpx,ut_user,32,9,40793)
CheckOffset(struct utmpx,ut_user,44,9,40793)
CheckMemberSize(struct utmpx,ut_host,256,9,40794)
CheckOffset(struct utmpx,ut_host,76,9,40794)
CheckMemberSize(struct utmpx,ut_exit,4,9,40795)
CheckOffset(struct utmpx,ut_exit,332,9,40795)
CheckMemberSize(struct utmpx,ut_session,4,9,40796)
CheckOffset(struct utmpx,ut_session,336,9,40796)
CheckMemberSize(struct utmpx,ut_tv,8,9,40797)
CheckOffset(struct utmpx,ut_tv,340,9,40797)
CheckMemberSize(struct utmpx,ut_addr_v6,16,9,40798)
CheckOffset(struct utmpx,ut_addr_v6,348,9,40798)
CheckMemberSize(struct utmpx,__unused,20,9,40799)
CheckOffset(struct utmpx,__unused,364,9,40799)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct utmpx,384, 10959, 10)
CheckMemberSize(struct utmpx,ut_type,2,10,40800)
CheckOffset(struct utmpx,ut_type,0,10,40800)
CheckMemberSize(struct utmpx,ut_pid,4,10,40801)
CheckOffset(struct utmpx,ut_pid,4,10,40801)
CheckMemberSize(struct utmpx,ut_line,32,10,40802)
CheckOffset(struct utmpx,ut_line,8,10,40802)
CheckMemberSize(struct utmpx,ut_id,4,10,40803)
CheckOffset(struct utmpx,ut_id,40,10,40803)
CheckMemberSize(struct utmpx,ut_user,32,10,40804)
CheckOffset(struct utmpx,ut_user,44,10,40804)
CheckMemberSize(struct utmpx,ut_host,256,10,40805)
CheckOffset(struct utmpx,ut_host,76,10,40805)
CheckMemberSize(struct utmpx,ut_exit,4,10,40806)
CheckOffset(struct utmpx,ut_exit,332,10,40806)
CheckMemberSize(struct utmpx,ut_session,4,10,40807)
CheckOffset(struct utmpx,ut_session,336,10,40807)
CheckMemberSize(struct utmpx,ut_tv,8,10,40808)
CheckOffset(struct utmpx,ut_tv,340,10,40808)
CheckMemberSize(struct utmpx,ut_addr_v6,16,10,40809)
CheckOffset(struct utmpx,ut_addr_v6,348,10,40809)
CheckMemberSize(struct utmpx,__unused,20,10,40810)
CheckOffset(struct utmpx,__unused,364,10,40810)
#endif

#if __x86_64__
CheckTypeSize(struct utmpx,384, 10960, 11)
CheckMemberSize(struct utmpx,ut_type,2,11,40811)
CheckOffset(struct utmpx,ut_type,0,11,40811)
CheckMemberSize(struct utmpx,ut_pid,4,11,40812)
CheckOffset(struct utmpx,ut_pid,4,11,40812)
CheckMemberSize(struct utmpx,ut_line,32,11,40813)
CheckOffset(struct utmpx,ut_line,8,11,40813)
CheckMemberSize(struct utmpx,ut_id,4,11,40814)
CheckOffset(struct utmpx,ut_id,40,11,40814)
CheckMemberSize(struct utmpx,ut_user,32,11,40815)
CheckOffset(struct utmpx,ut_user,44,11,40815)
CheckMemberSize(struct utmpx,ut_host,256,11,40816)
CheckOffset(struct utmpx,ut_host,76,11,40816)
CheckMemberSize(struct utmpx,ut_exit,4,11,40817)
CheckOffset(struct utmpx,ut_exit,332,11,40817)
CheckMemberSize(struct utmpx,ut_session,4,11,40818)
CheckOffset(struct utmpx,ut_session,336,11,40818)
CheckMemberSize(struct utmpx,ut_tv,8,11,40819)
CheckOffset(struct utmpx,ut_tv,340,11,40819)
CheckMemberSize(struct utmpx,ut_addr_v6,16,11,40820)
CheckOffset(struct utmpx,ut_addr_v6,348,11,40820)
CheckMemberSize(struct utmpx,__unused,20,11,40821)
CheckOffset(struct utmpx,__unused,364,11,40821)
#endif

#if __s390x__
CheckTypeSize(struct utmpx,400, 10961, 12)
CheckMemberSize(struct utmpx,ut_type,2,12,40822)
CheckOffset(struct utmpx,ut_type,0,12,40822)
CheckMemberSize(struct utmpx,ut_pid,4,12,40823)
CheckOffset(struct utmpx,ut_pid,4,12,40823)
CheckMemberSize(struct utmpx,ut_line,32,12,40824)
CheckOffset(struct utmpx,ut_line,8,12,40824)
CheckMemberSize(struct utmpx,ut_id,4,12,40825)
CheckOffset(struct utmpx,ut_id,40,12,40825)
CheckMemberSize(struct utmpx,ut_user,32,12,40826)
CheckOffset(struct utmpx,ut_user,44,12,40826)
CheckMemberSize(struct utmpx,ut_host,256,12,40827)
CheckOffset(struct utmpx,ut_host,76,12,40827)
CheckMemberSize(struct utmpx,ut_exit,4,12,40828)
CheckOffset(struct utmpx,ut_exit,332,12,40828)
CheckMemberSize(struct utmpx,ut_session,8,12,40829)
CheckOffset(struct utmpx,ut_session,336,12,40829)
CheckMemberSize(struct utmpx,ut_tv,16,12,40830)
CheckOffset(struct utmpx,ut_tv,344,12,40830)
CheckMemberSize(struct utmpx,ut_addr_v6,16,12,40831)
CheckOffset(struct utmpx,ut_addr_v6,360,12,40831)
CheckMemberSize(struct utmpx,__unused,20,12,40832)
CheckOffset(struct utmpx,__unused,376,12,40832)
#endif

extern void endutxent_db(void);
CheckInterfacedef(endutxent,endutxent_db);
extern struct utmpx * getutxent_db(void);
CheckInterfacedef(getutxent,getutxent_db);
extern struct utmpx * getutxid_db(const struct utmpx *);
CheckInterfacedef(getutxid,getutxid_db);
extern struct utmpx * getutxline_db(const struct utmpx *);
CheckInterfacedef(getutxline,getutxline_db);
extern struct utmpx * pututxline_db(const struct utmpx *);
CheckInterfacedef(pututxline,pututxline_db);
extern void setutxent_db(void);
CheckInterfacedef(setutxent,setutxent_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utmpx.h\n\n",pcnt,cnt);
return cnt;
#endif

}

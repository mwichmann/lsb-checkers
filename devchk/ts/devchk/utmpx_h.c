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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in utmpx.h\n");
#endif

#if __i386__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __s390__ && !__s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10558,0);
Msg("Find size of utmpx * (10558)\n");
#endif

#if 1
CheckTypeSize(char[UT_LINESIZE],32, 10559, 1)
#endif

#if 1
CheckTypeSize(char[UT_NAMESIZE],32, 10560, 1)
#endif

#if 1
CheckTypeSize(char[UT_HOSTSIZE],256, 10561, 1)
#endif

#if __i386__
CheckTypeSize(struct utmpx,384, 10555, 2)
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utmpx,384, 10555, 6)
CheckMemberSize(struct utmpx,ut_pid,4,6,40287)
CheckOffset(struct utmpx,ut_pid,4,6,40287)
CheckMemberSize(struct utmpx,ut_line,32,6,40288)
CheckOffset(struct utmpx,ut_line,8,6,40288)
CheckMemberSize(struct utmpx,ut_id,4,6,40289)
CheckOffset(struct utmpx,ut_id,40,6,40289)
CheckMemberSize(struct utmpx,ut_user,32,6,40290)
CheckOffset(struct utmpx,ut_user,44,6,40290)
CheckMemberSize(struct utmpx,ut_host,256,6,40291)
CheckOffset(struct utmpx,ut_host,76,6,40291)
CheckMemberSize(struct utmpx,ut_exit,4,6,40292)
CheckOffset(struct utmpx,ut_exit,332,6,40292)
CheckMemberSize(struct utmpx,ut_session,4,6,40293)
CheckOffset(struct utmpx,ut_session,336,6,40293)
CheckMemberSize(struct utmpx,ut_tv,8,6,40294)
CheckOffset(struct utmpx,ut_tv,340,6,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,6,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,6,40295)
CheckMemberSize(struct utmpx,__unused,20,6,40296)
CheckOffset(struct utmpx,__unused,364,6,40296)
#elif __s390x__
CheckTypeSize(struct utmpx,384, 10555, 12)
CheckMemberSize(struct utmpx,ut_pid,4,12,40287)
CheckOffset(struct utmpx,ut_pid,4,12,40287)
CheckMemberSize(struct utmpx,ut_line,32,12,40288)
CheckOffset(struct utmpx,ut_line,8,12,40288)
CheckMemberSize(struct utmpx,ut_id,4,12,40289)
CheckOffset(struct utmpx,ut_id,40,12,40289)
CheckMemberSize(struct utmpx,ut_user,32,12,40290)
CheckOffset(struct utmpx,ut_user,44,12,40290)
CheckMemberSize(struct utmpx,ut_host,256,12,40291)
CheckOffset(struct utmpx,ut_host,76,12,40291)
CheckMemberSize(struct utmpx,ut_exit,4,12,40292)
CheckOffset(struct utmpx,ut_exit,332,12,40292)
CheckMemberSize(struct utmpx,ut_session,4,12,40293)
CheckOffset(struct utmpx,ut_session,336,12,40293)
CheckMemberSize(struct utmpx,ut_tv,8,12,40294)
CheckOffset(struct utmpx,ut_tv,340,12,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,12,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,12,40295)
CheckMemberSize(struct utmpx,__unused,20,12,40296)
CheckOffset(struct utmpx,__unused,364,12,40296)
#elif __s390__ && !__s390x__
CheckTypeSize(struct utmpx,384, 10555, 10)
CheckMemberSize(struct utmpx,ut_pid,4,10,40287)
CheckOffset(struct utmpx,ut_pid,4,10,40287)
CheckMemberSize(struct utmpx,ut_line,32,10,40288)
CheckOffset(struct utmpx,ut_line,8,10,40288)
CheckMemberSize(struct utmpx,ut_id,4,10,40289)
CheckOffset(struct utmpx,ut_id,40,10,40289)
CheckMemberSize(struct utmpx,ut_user,32,10,40290)
CheckOffset(struct utmpx,ut_user,44,10,40290)
CheckMemberSize(struct utmpx,ut_host,256,10,40291)
CheckOffset(struct utmpx,ut_host,76,10,40291)
CheckMemberSize(struct utmpx,ut_exit,4,10,40292)
CheckOffset(struct utmpx,ut_exit,332,10,40292)
CheckMemberSize(struct utmpx,ut_session,4,10,40293)
CheckOffset(struct utmpx,ut_session,336,10,40293)
CheckMemberSize(struct utmpx,ut_tv,8,10,40294)
CheckOffset(struct utmpx,ut_tv,340,10,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,10,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,10,40295)
CheckMemberSize(struct utmpx,__unused,20,10,40296)
CheckOffset(struct utmpx,__unused,364,10,40296)
#elif __x86_64__
CheckTypeSize(struct utmpx,384, 10555, 11)
CheckMemberSize(struct utmpx,ut_pid,4,11,40287)
CheckOffset(struct utmpx,ut_pid,4,11,40287)
CheckMemberSize(struct utmpx,ut_line,32,11,40288)
CheckOffset(struct utmpx,ut_line,8,11,40288)
CheckMemberSize(struct utmpx,ut_id,4,11,40289)
CheckOffset(struct utmpx,ut_id,40,11,40289)
CheckMemberSize(struct utmpx,ut_user,32,11,40290)
CheckOffset(struct utmpx,ut_user,44,11,40290)
CheckMemberSize(struct utmpx,ut_host,256,11,40291)
CheckOffset(struct utmpx,ut_host,76,11,40291)
CheckMemberSize(struct utmpx,ut_exit,4,11,40292)
CheckOffset(struct utmpx,ut_exit,332,11,40292)
CheckMemberSize(struct utmpx,ut_session,4,11,40293)
CheckOffset(struct utmpx,ut_session,336,11,40293)
CheckMemberSize(struct utmpx,ut_tv,8,11,40294)
CheckOffset(struct utmpx,ut_tv,340,11,40294)
CheckMemberSize(struct utmpx,ut_addr_v6,16,11,40295)
CheckOffset(struct utmpx,ut_addr_v6,348,11,40295)
CheckMemberSize(struct utmpx,__unused,20,11,40296)
CheckOffset(struct utmpx,__unused,364,11,40296)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10555,0);
Msg("Find size of utmpx (10555)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in utmpx.h\n",cnt);
return cnt;
#endif

}

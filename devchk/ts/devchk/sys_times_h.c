/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/times.h"



#ifdef TET_TEST
void sys_times_h()
{
#else
int sys_times_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/times.h\n");
#endif

#if __i386__
CheckTypeSize(struct tms,16, 6990, 2)
CheckMemberSize(struct tms,tms_stime,4,2,30169)
CheckOffset(struct tms,tms_stime,4,2,30169)
CheckMemberSize(struct tms,tms_cutime,4,2,30170)
CheckOffset(struct tms,tms_cutime,8,2,30170)
CheckMemberSize(struct tms,tms_cstime,4,2,30171)
CheckOffset(struct tms,tms_cstime,12,2,30171)
#elif __ia64__
CheckTypeSize(struct tms,32, 6990, 3)
CheckMemberSize(struct tms,tms_stime,8,3,30169)
CheckOffset(struct tms,tms_stime,8,3,30169)
CheckMemberSize(struct tms,tms_cutime,8,3,30170)
CheckOffset(struct tms,tms_cutime,16,3,30170)
CheckMemberSize(struct tms,tms_cstime,8,3,30171)
CheckOffset(struct tms,tms_cstime,24,3,30171)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct tms,16, 6990, 6)
CheckMemberSize(struct tms,tms_stime,4,6,30169)
CheckOffset(struct tms,tms_stime,4,6,30169)
CheckMemberSize(struct tms,tms_cutime,4,6,30170)
CheckOffset(struct tms,tms_cutime,8,6,30170)
CheckMemberSize(struct tms,tms_cstime,4,6,30171)
CheckOffset(struct tms,tms_cstime,12,6,30171)
#elif __s390__ && !__s390x__
CheckTypeSize(struct tms,16, 6990, 10)
CheckMemberSize(struct tms,tms_stime,0,10,30169)
CheckOffset(struct tms,tms_stime,4,10,30169)
CheckMemberSize(struct tms,tms_cutime,0,10,30170)
CheckOffset(struct tms,tms_cutime,8,10,30170)
CheckMemberSize(struct tms,tms_cstime,0,10,30171)
CheckOffset(struct tms,tms_cstime,12,10,30171)
#elif __powerpc64__
CheckTypeSize(struct tms,32, 6990, 9)
CheckMemberSize(struct tms,tms_stime,8,9,30169)
CheckOffset(struct tms,tms_stime,8,9,30169)
CheckMemberSize(struct tms,tms_cutime,8,9,30170)
CheckOffset(struct tms,tms_cutime,16,9,30170)
CheckMemberSize(struct tms,tms_cstime,8,9,30171)
CheckOffset(struct tms,tms_cstime,24,9,30171)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6990,0);
Msg("Find size of tms (6990)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/times.h\n",cnt);
return cnt;
#endif

}

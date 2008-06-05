/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "sys/times.h"



#ifdef TET_TEST
void sys_times_h()
{
#else
int sys_times_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/times.h\n");
#endif

printf("Checking data structures in sys/times.h\n");
#if defined __s390x__
CheckTypeSize(struct tms,32, 6990, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,8,12,30169)
CheckOffset(struct tms,tms_stime,8,12,30169)
CheckMemberSize(struct tms,tms_cutime,8,12,30170)
CheckOffset(struct tms,tms_cutime,16,12,30170)
CheckMemberSize(struct tms,tms_cstime,8,12,30171)
CheckOffset(struct tms,tms_cstime,24,12,30171)
#elif defined __x86_64__
CheckTypeSize(struct tms,32, 6990, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,8,11,30169)
CheckOffset(struct tms,tms_stime,8,11,30169)
CheckMemberSize(struct tms,tms_cutime,8,11,30170)
CheckOffset(struct tms,tms_cutime,16,11,30170)
CheckMemberSize(struct tms,tms_cstime,8,11,30171)
CheckOffset(struct tms,tms_cstime,24,11,30171)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct tms,16, 6990, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,4,10,30169)
CheckOffset(struct tms,tms_stime,4,10,30169)
CheckMemberSize(struct tms,tms_cutime,4,10,30170)
CheckOffset(struct tms,tms_cutime,8,10,30170)
CheckMemberSize(struct tms,tms_cstime,4,10,30171)
CheckOffset(struct tms,tms_cstime,12,10,30171)
#elif defined __powerpc64__
CheckTypeSize(struct tms,32, 6990, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,8,9,30169)
CheckOffset(struct tms,tms_stime,8,9,30169)
CheckMemberSize(struct tms,tms_cutime,8,9,30170)
CheckOffset(struct tms,tms_cutime,16,9,30170)
CheckMemberSize(struct tms,tms_cstime,8,9,30171)
CheckOffset(struct tms,tms_cstime,24,9,30171)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct tms,16, 6990, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,4,6,30169)
CheckOffset(struct tms,tms_stime,4,6,30169)
CheckMemberSize(struct tms,tms_cutime,4,6,30170)
CheckOffset(struct tms,tms_cutime,8,6,30170)
CheckMemberSize(struct tms,tms_cstime,4,6,30171)
CheckOffset(struct tms,tms_cstime,12,6,30171)
#elif defined __ia64__
CheckTypeSize(struct tms,32, 6990, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,8,3,30169)
CheckOffset(struct tms,tms_stime,8,3,30169)
CheckMemberSize(struct tms,tms_cutime,8,3,30170)
CheckOffset(struct tms,tms_cutime,16,3,30170)
CheckMemberSize(struct tms,tms_cstime,8,3,30171)
CheckOffset(struct tms,tms_cstime,24,3,30171)
#elif defined __i386__
CheckTypeSize(struct tms,16, 6990, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct tms,tms_stime,4,2,30169)
CheckOffset(struct tms,tms_stime,4,2,30169)
CheckMemberSize(struct tms,tms_cutime,4,2,30170)
CheckOffset(struct tms,tms_cutime,8,2,30170)
CheckMemberSize(struct tms,tms_cstime,4,2,30171)
CheckOffset(struct tms,tms_cstime,12,2,30171)
#else
Msg("Find size of tms (6990)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,6990,0);
#endif

extern clock_t times_db(struct tms *);
CheckInterfacedef(times,times_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/times.h\n\n",pcnt,cnt);
return cnt;
#endif

}

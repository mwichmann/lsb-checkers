/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/times.h\n");
#endif

printf("Checking data structures in sys/times.h\n");
#if __i386__
CheckTypeSize(struct tms,16, 6990, 2);
CheckMemberSize(struct tms,tms_stime,4,2,30169);
CheckOffset(struct tms,tms_stime,4,2,30169);
CheckMemberSize(struct tms,tms_cutime,4,2,30170);
CheckOffset(struct tms,tms_cutime,8,2,30170);
CheckMemberSize(struct tms,tms_cstime,4,2,30171);
CheckOffset(struct tms,tms_cstime,12,2,30171);
#elif __ia64__
CheckTypeSize(struct tms,32, 6990, 3);
CheckMemberSize(struct tms,tms_stime,8,3,30169);
CheckOffset(struct tms,tms_stime,8,3,30169);
CheckMemberSize(struct tms,tms_cutime,8,3,30170);
CheckOffset(struct tms,tms_cutime,16,3,30170);
CheckMemberSize(struct tms,tms_cstime,8,3,30171);
CheckOffset(struct tms,tms_cstime,24,3,30171);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct tms,16, 6990, 6);
CheckMemberSize(struct tms,tms_stime,4,6,30169);
CheckOffset(struct tms,tms_stime,4,6,30169);
CheckMemberSize(struct tms,tms_cutime,4,6,30170);
CheckOffset(struct tms,tms_cutime,8,6,30170);
CheckMemberSize(struct tms,tms_cstime,4,6,30171);
CheckOffset(struct tms,tms_cstime,12,6,30171);
#elif __s390__ && !__s390x__
CheckTypeSize(struct tms,16, 6990, 10);
CheckMemberSize(struct tms,tms_stime,4,10,30169);
CheckOffset(struct tms,tms_stime,4,10,30169);
CheckMemberSize(struct tms,tms_cutime,4,10,30170);
CheckOffset(struct tms,tms_cutime,8,10,30170);
CheckMemberSize(struct tms,tms_cstime,4,10,30171);
CheckOffset(struct tms,tms_cstime,12,10,30171);
#elif __powerpc64__
CheckTypeSize(struct tms,32, 6990, 9);
CheckMemberSize(struct tms,tms_stime,8,9,30169);
CheckOffset(struct tms,tms_stime,8,9,30169);
CheckMemberSize(struct tms,tms_cutime,8,9,30170);
CheckOffset(struct tms,tms_cutime,16,9,30170);
CheckMemberSize(struct tms,tms_cstime,8,9,30171);
CheckOffset(struct tms,tms_cstime,24,9,30171);
#elif __s390x__
CheckTypeSize(struct tms,32, 6990, 12);
CheckMemberSize(struct tms,tms_stime,8,12,30169);
CheckOffset(struct tms,tms_stime,8,12,30169);
CheckMemberSize(struct tms,tms_cutime,8,12,30170);
CheckOffset(struct tms,tms_cutime,16,12,30170);
CheckMemberSize(struct tms,tms_cstime,8,12,30171);
CheckOffset(struct tms,tms_cstime,24,12,30171);
#elif __x86_64__
CheckTypeSize(struct tms,32, 6990, 11);
CheckMemberSize(struct tms,tms_stime,8,11,30169);
CheckOffset(struct tms,tms_stime,8,11,30169);
CheckMemberSize(struct tms,tms_cutime,8,11,30170);
CheckOffset(struct tms,tms_cutime,16,11,30170);
CheckMemberSize(struct tms,tms_cstime,8,11,30171);
CheckOffset(struct tms,tms_cstime,24,11,30171);
#elif 1
CheckTypeSize(struct tms,0, 6990, 1);
Msg("Missing member data for tms on All\n");
CheckOffset(struct tms,tms_utime,0,1,30168);
CheckOffset(struct tms,tms_stime,0,1,30169);
CheckOffset(struct tms,tms_cutime,0,1,30170);
CheckOffset(struct tms,tms_cstime,0,1,30171);
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

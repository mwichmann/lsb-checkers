/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/timeb.h"



#ifdef TET_TEST
void sys_timeb_h()
{
#else
int sys_timeb_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/timeb.h\n");
#endif

printf("Checking data structures in sys/timeb.h\n");
#if __i386__
CheckTypeSize(struct timeb,12, 10216, 2)
CheckMemberSize(struct timeb,millitm,2,2,34299)
CheckOffset(struct timeb,millitm,4,2,34299)
CheckMemberSize(struct timeb,timezone,2,2,34300)
CheckOffset(struct timeb,timezone,6,2,34300)
CheckMemberSize(struct timeb,dstflag,2,2,34301)
CheckOffset(struct timeb,dstflag,8,2,34301)
#elif __ia64__
CheckTypeSize(struct timeb,16, 10216, 3)
CheckMemberSize(struct timeb,millitm,2,3,34299)
CheckOffset(struct timeb,millitm,8,3,34299)
CheckMemberSize(struct timeb,timezone,2,3,34300)
CheckOffset(struct timeb,timezone,10,3,34300)
CheckMemberSize(struct timeb,dstflag,2,3,34301)
CheckOffset(struct timeb,dstflag,12,3,34301)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct timeb,12, 10216, 6)
CheckMemberSize(struct timeb,millitm,2,6,34299)
CheckOffset(struct timeb,millitm,4,6,34299)
CheckMemberSize(struct timeb,timezone,2,6,34300)
CheckOffset(struct timeb,timezone,6,6,34300)
CheckMemberSize(struct timeb,dstflag,2,6,34301)
CheckOffset(struct timeb,dstflag,8,6,34301)
#elif __s390__ && !__s390x__
CheckTypeSize(struct timeb,12, 10216, 10)
CheckMemberSize(struct timeb,millitm,2,10,34299)
CheckOffset(struct timeb,millitm,4,10,34299)
CheckMemberSize(struct timeb,timezone,2,10,34300)
CheckOffset(struct timeb,timezone,6,10,34300)
CheckMemberSize(struct timeb,dstflag,2,10,34301)
CheckOffset(struct timeb,dstflag,8,10,34301)
#elif __powerpc64__
CheckTypeSize(struct timeb,16, 10216, 9)
CheckMemberSize(struct timeb,millitm,2,9,34299)
CheckOffset(struct timeb,millitm,8,9,34299)
CheckMemberSize(struct timeb,timezone,2,9,34300)
CheckOffset(struct timeb,timezone,10,9,34300)
CheckMemberSize(struct timeb,dstflag,2,9,34301)
CheckOffset(struct timeb,dstflag,12,9,34301)
#elif __s390x__
CheckTypeSize(struct timeb,16, 10216, 12)
CheckMemberSize(struct timeb,millitm,2,12,34299)
CheckOffset(struct timeb,millitm,8,12,34299)
CheckMemberSize(struct timeb,timezone,2,12,34300)
CheckOffset(struct timeb,timezone,10,12,34300)
CheckMemberSize(struct timeb,dstflag,2,12,34301)
CheckOffset(struct timeb,dstflag,12,12,34301)
#elif __x86_64__
CheckTypeSize(struct timeb,16, 10216, 11)
CheckMemberSize(struct timeb,millitm,2,11,34299)
CheckOffset(struct timeb,millitm,8,11,34299)
CheckMemberSize(struct timeb,timezone,2,11,34300)
CheckOffset(struct timeb,timezone,10,11,34300)
CheckMemberSize(struct timeb,dstflag,2,11,34301)
CheckOffset(struct timeb,dstflag,12,11,34301)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10216,0);
Msg("Find size of timeb (10216)\n");
#endif

extern int ftime_db(struct timeb *);
CheckInterfacedef(ftime,ftime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/timeb.h\n\n",pcnt,cnt);
return cnt;
#endif

}

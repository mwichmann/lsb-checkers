/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/timeb.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct timeb,12, 10216, 2)
CheckOffset(struct timeb,millitm,4,2,34299)
CheckOffset(struct timeb,timezone,6,2,34300)
CheckOffset(struct timeb,dstflag,8,2,34301)
#elif __ia64__
CheckTypeSize(struct timeb,16, 10216, 3)
CheckOffset(struct timeb,millitm,8,3,34299)
CheckOffset(struct timeb,timezone,10,3,34300)
CheckOffset(struct timeb,dstflag,12,3,34301)
#elif __powerpc__
CheckTypeSize(struct timeb,12, 10216, 6)
Msg("Missing member data for timeb on PPC32\n");
CheckOffset(struct timeb,time,0,6,34298)
CheckOffset(struct timeb,millitm,0,6,34299)
CheckOffset(struct timeb,timezone,0,6,34300)
CheckOffset(struct timeb,dstflag,0,6,34301)
#elif __s390__
CheckTypeSize(struct timeb,12, 10216, 10)
CheckOffset(struct timeb,millitm,4,10,34299)
CheckOffset(struct timeb,timezone,6,10,34300)
CheckOffset(struct timeb,dstflag,8,10,34301)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10216,0);
Msg("Find size of timeb (10216)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/timeb.h\n",cnt);
return cnt;
#endif

}

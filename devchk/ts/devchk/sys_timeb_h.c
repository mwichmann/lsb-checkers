/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in sys/timeb.h\n");
#endif

printf("Checking data structures in sys/timeb.h\n");
#if defined __s390x__
CheckTypeSize(struct timeb,16, 10216, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,12,34299)
CheckOffset(struct timeb,millitm,8,12,34299)
CheckMemberSize(struct timeb,timezone,2,12,34300)
CheckOffset(struct timeb,timezone,10,12,34300)
CheckMemberSize(struct timeb,dstflag,2,12,34301)
CheckOffset(struct timeb,dstflag,12,12,34301)
#elif defined __x86_64__
CheckTypeSize(struct timeb,16, 10216, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,11,34299)
CheckOffset(struct timeb,millitm,8,11,34299)
CheckMemberSize(struct timeb,timezone,2,11,34300)
CheckOffset(struct timeb,timezone,10,11,34300)
CheckMemberSize(struct timeb,dstflag,2,11,34301)
CheckOffset(struct timeb,dstflag,12,11,34301)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct timeb,12, 10216, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,10,34299)
CheckOffset(struct timeb,millitm,4,10,34299)
CheckMemberSize(struct timeb,timezone,2,10,34300)
CheckOffset(struct timeb,timezone,6,10,34300)
CheckMemberSize(struct timeb,dstflag,2,10,34301)
CheckOffset(struct timeb,dstflag,8,10,34301)
#elif defined __powerpc64__
CheckTypeSize(struct timeb,16, 10216, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,9,34299)
CheckOffset(struct timeb,millitm,8,9,34299)
CheckMemberSize(struct timeb,timezone,2,9,34300)
CheckOffset(struct timeb,timezone,10,9,34300)
CheckMemberSize(struct timeb,dstflag,2,9,34301)
CheckOffset(struct timeb,dstflag,12,9,34301)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct timeb,12, 10216, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,6,34299)
CheckOffset(struct timeb,millitm,4,6,34299)
CheckMemberSize(struct timeb,timezone,2,6,34300)
CheckOffset(struct timeb,timezone,6,6,34300)
CheckMemberSize(struct timeb,dstflag,2,6,34301)
CheckOffset(struct timeb,dstflag,8,6,34301)
#elif defined __ia64__
CheckTypeSize(struct timeb,16, 10216, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,3,34299)
CheckOffset(struct timeb,millitm,8,3,34299)
CheckMemberSize(struct timeb,timezone,2,3,34300)
CheckOffset(struct timeb,timezone,10,3,34300)
CheckMemberSize(struct timeb,dstflag,2,3,34301)
CheckOffset(struct timeb,dstflag,12,3,34301)
#elif defined __i386__
CheckTypeSize(struct timeb,12, 10216, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct timeb,millitm,2,2,34299)
CheckOffset(struct timeb,millitm,4,2,34299)
CheckMemberSize(struct timeb,timezone,2,2,34300)
CheckOffset(struct timeb,timezone,6,2,34300)
CheckMemberSize(struct timeb,dstflag,2,2,34301)
CheckOffset(struct timeb,dstflag,8,2,34301)
#else
Msg("Find size of timeb (10216)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,10216,0);
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

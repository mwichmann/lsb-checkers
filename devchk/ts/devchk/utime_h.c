/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "utime.h"



#ifdef TET_TEST
void utime_h()
{
#else
int utime_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in utime.h\n");
#endif

printf("Checking data structures in utime.h\n");
#if __i386__
CheckTypeSize(struct utimbuf,8, 7023, 2);
CheckMemberSize(struct utimbuf,actime,4,2,30205);
CheckOffset(struct utimbuf,actime,0,2,30205);
CheckMemberSize(struct utimbuf,modtime,4,2,30206);
CheckOffset(struct utimbuf,modtime,4,2,30206);
#elif __ia64__
CheckTypeSize(struct utimbuf,16, 7023, 3);
CheckMemberSize(struct utimbuf,modtime,8,3,30206);
CheckOffset(struct utimbuf,modtime,8,3,30206);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utimbuf,8, 7023, 6);
CheckMemberSize(struct utimbuf,modtime,4,6,30206);
CheckOffset(struct utimbuf,modtime,4,6,30206);
#elif __s390__ && !__s390x__
CheckTypeSize(struct utimbuf,8, 7023, 10);
CheckMemberSize(struct utimbuf,modtime,4,10,30206);
CheckOffset(struct utimbuf,modtime,4,10,30206);
#elif __powerpc64__
CheckTypeSize(struct utimbuf,16, 7023, 9);
CheckMemberSize(struct utimbuf,modtime,8,9,30206);
CheckOffset(struct utimbuf,modtime,8,9,30206);
#elif __s390x__
CheckTypeSize(struct utimbuf,16, 7023, 12);
CheckMemberSize(struct utimbuf,modtime,8,12,30206);
CheckOffset(struct utimbuf,modtime,8,12,30206);
#elif __x86_64__
CheckTypeSize(struct utimbuf,16, 7023, 11);
CheckMemberSize(struct utimbuf,modtime,8,11,30206);
CheckOffset(struct utimbuf,modtime,8,11,30206);
#elif 1
CheckTypeSize(struct utimbuf,0, 7023, 1);
Msg("Missing member data for utimbuf on All\n");
CheckOffset(struct utimbuf,actime,0,1,30205);
CheckOffset(struct utimbuf,modtime,0,1,30206);
#endif

extern int utime_db(const char *, const struct utimbuf *);
CheckInterfacedef(utime,utime_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in utime.h\n\n",pcnt,cnt);
return cnt;
#endif

}

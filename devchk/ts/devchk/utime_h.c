/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in utime.h\n");
#endif

#if __i386__
CheckTypeSize(struct utimbuf,8, 7023, 2)
CheckOffset(struct utimbuf,actime,0,2,30205)
CheckOffset(struct utimbuf,modtime,4,2,30206)
#elif __ia64__
CheckTypeSize(struct utimbuf,16, 7023, 3)
CheckOffset(struct utimbuf,modtime,8,3,30206)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct utimbuf,8, 7023, 6)
Msg("Missing member data for utimbuf on PPC32\n");
CheckOffset(struct utimbuf,actime,0,6,30205)
CheckOffset(struct utimbuf,modtime,0,6,30206)
#elif __s390__
CheckTypeSize(struct utimbuf,8, 7023, 10)
CheckOffset(struct utimbuf,modtime,4,10,30206)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7023,0);
Msg("Find size of utimbuf (7023)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in utime.h\n",cnt);
return cnt;
#endif

}

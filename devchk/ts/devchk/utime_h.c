/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(struct utimbuf,8, 7023, 2)
CheckOffset(struct utimbuf,actime,0,2,30205)
CheckOffset(struct utimbuf,modtime,4,2,30206)
#elif __ia64__
CheckTypeSize(struct utimbuf,16, 7023, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7023,0);
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

/*
 * Test of iconv.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "iconv.h"



#ifdef TET_TEST
void iconv_h()
{
#else
int iconv_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in iconv.h\n");
#endif

#ifdef __i386__
CheckTypeSize(iconv_t,4, 6895, 2)
#elif __ia64__
CheckTypeSize(iconv_t,8, 6895, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6895,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in iconv.h\n",cnt);
return cnt;
#endif

}

/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "unistd.h"



#ifdef TET_TEST
void unistd_h()
{
#else
int unistd_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in unistd.h\n");
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4)
#elif __ia64__
CheckTypeSize(ssize_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in unistd.h\n",cnt);
return cnt;
#endif

}

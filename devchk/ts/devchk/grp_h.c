/*
 * Test of grp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "grp.h"



#ifdef TET_TEST
void grp_h()
{
#else
int grp_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in grp.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct group,16, 6894, 2)
#elif __ia64__
CheckTypeSize(struct group,32, 6894, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6894,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in grp.h\n",cnt);
return cnt;
#endif

}

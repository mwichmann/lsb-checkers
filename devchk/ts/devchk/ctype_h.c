/*
 * Test of ctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ctype.h"



#ifdef TET_TEST
void ctype_h()
{
#else
int ctype_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in ctype.h\n");
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8976,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in ctype.h\n",cnt);
return cnt;
#endif

}

/*
 * Test of wordexp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "wordexp.h"



#ifdef TET_TEST
void wordexp_h()
{
#else
int wordexp_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in wordexp.h\n");
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9200,0);
#endif

#ifdef __i386__
CheckTypeSize(wordexp_t,12, 7029, 2)
#elif __ia64__
CheckTypeSize(wordexp_t,24, 7029, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7029,0);
#endif

#ifdef __i386__
#elif __ia64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9201,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in wordexp.h\n",cnt);
return cnt;
#endif

}

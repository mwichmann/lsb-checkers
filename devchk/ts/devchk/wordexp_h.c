/*
 * Test of wordexp.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9200,0);
Msg("Find size of anon-wordexp.h-7 (9200)\n");
#endif

#if __i386__
CheckTypeSize(wordexp_t,12, 7029, 2)
#elif __ia64__
CheckTypeSize(wordexp_t,24, 7029, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wordexp_t,12, 7029, 6)
#elif __s390__
CheckTypeSize(wordexp_t,12, 7029, 10)
#elif __powerpc64__
CheckTypeSize(wordexp_t,0, 7029, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7029,0);
Msg("Find size of wordexp_t (7029)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9201,0);
Msg("Find size of anon-wordexp.h-45 (9201)\n");
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

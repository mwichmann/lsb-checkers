/*
 * Test of search.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <stdlib.h>
#include "search.h"



#ifdef TET_TEST
void search_h()
{
#else
int search_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in search.h\n");
#endif

#if __i386__
CheckTypeSize(ENTRY,8, 6953, 2)
#elif __ia64__
CheckTypeSize(ENTRY,16, 6953, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ENTRY,8, 6953, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ENTRY,8, 6953, 10)
#elif __powerpc64__
CheckTypeSize(ENTRY,16, 6953, 9)
#elif __s390x__
CheckTypeSize(ENTRY,16, 6953, 12)
#elif __x86_64__
CheckTypeSize(ENTRY,16, 6953, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6953,0);
Msg("Find size of ENTRY (6953)\n");
#endif

#if __i386__
CheckTypeSize(ACTION,4, 9081, 2)
#elif __ia64__
CheckTypeSize(ACTION,4, 9081, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ACTION,4, 9081, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ACTION,4, 9081, 10)
#elif __powerpc64__
CheckTypeSize(ACTION,4, 9081, 9)
#elif __s390x__
CheckTypeSize(ACTION,4, 9081, 12)
#elif __x86_64__
CheckTypeSize(ACTION,4, 9081, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9081,0);
Msg("Find size of ACTION (9081)\n");
#endif

#if __i386__
CheckTypeSize(VISIT,4, 9085, 2)
#elif __ia64__
CheckTypeSize(VISIT,4, 9085, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(VISIT,4, 9085, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(VISIT,4, 9085, 10)
#elif __powerpc64__
CheckTypeSize(VISIT,4, 9085, 9)
#elif __s390x__
CheckTypeSize(VISIT,4, 9085, 12)
#elif __x86_64__
CheckTypeSize(VISIT,4, 9085, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9085,0);
Msg("Find size of VISIT (9085)\n");
#endif

#if __i386__
CheckTypeSize(__action_fn_t,4, 6956, 2)
#elif __ia64__
CheckTypeSize(__action_fn_t,8, 6956, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__action_fn_t,4, 6956, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__action_fn_t,4, 6956, 10)
#elif __powerpc64__
CheckTypeSize(__action_fn_t,8, 6956, 9)
#elif __s390x__
CheckTypeSize(__action_fn_t,8, 6956, 12)
#elif __x86_64__
CheckTypeSize(__action_fn_t,8, 6956, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6956,0);
Msg("Find size of __action_fn_t (6956)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in search.h\n",cnt);
return cnt;
#endif

}

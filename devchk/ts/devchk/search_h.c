/*
 * Test of search.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(ENTRY,8, 6953, 2)
#elif __ia64__
CheckTypeSize(ENTRY,16, 6953, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6953,0);
#endif

#ifdef __i386__
CheckTypeSize(__action_fn_t,4, 6956, 2)
#elif __ia64__
CheckTypeSize(__action_fn_t,8, 6956, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6956,0);
#endif

#ifdef __i386__
CheckTypeSize(ACTION,4, 9081, 2)
#elif __ia64__
CheckTypeSize(ACTION,4, 9081, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9081,0);
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

/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include "wctype.h"



#ifdef TET_TEST
void wctype_h()
{
#else
int wctype_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in wctype.h\n");
#endif

#ifdef __i386__
CheckTypeSize(wctype_t,4, 7024, 2)
#elif __ia64__
CheckTypeSize(wctype_t,8, 7024, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7024,0);
#endif

#ifdef __i386__
CheckTypeSize(wint_t,4, 8980, 2)
#elif __ia64__
CheckTypeSize(wint_t,4, 8980, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8980,0);
#endif

#ifdef __i386__
CheckTypeSize(wctrans_t,4, 9199, 2)
#elif __ia64__
CheckTypeSize(wctrans_t,8, 9199, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9199,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in wctype.h\n",cnt);
return cnt;
#endif

}

/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "nl_types.h"



#ifdef TET_TEST
void nl_types_h()
{
#else
int nl_types_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in nl_types.h\n");
#endif

#ifdef __i386__
CheckTypeSize(nl_catd,4, 6923, 2)
#elif __ia64__
CheckTypeSize(nl_catd,8, 6923, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6923,0);
#endif

#ifdef __i386__
CheckTypeSize(nl_item,4, 6924, 2)
#elif __ia64__
CheckTypeSize(nl_item,4, 6924, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6924,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in nl_types.h\n",cnt);
return cnt;
#endif

}

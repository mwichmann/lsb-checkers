/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <wchar.h>
#include "stdlib.h"



#ifdef TET_TEST
void stdlib_h()
{
#else
int stdlib_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stdlib.h\n");
#endif

#ifdef MB_CUR_MAX
	CompareConstant(MB_CUR_MAX,(__ctype_get_mb_cur_max()))
#else
Msg( "Error: Constant not found: MB_CUR_MAX\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(__compar_fn_t,4, 9231, 2)
#elif __ia64__
CheckTypeSize(__compar_fn_t,0, 9231, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9231,0);
#endif

#ifdef __i386__
CheckTypeSize(div_t,8, 6973, 2)
#elif __ia64__
CheckTypeSize(div_t,8, 6973, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6973,0);
#endif

#ifdef __i386__
CheckTypeSize(ldiv_t,8, 6975, 2)
#elif __ia64__
CheckTypeSize(ldiv_t,16, 6975, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6975,0);
#endif

#ifdef __i386__
CheckTypeSize(lldiv_t,16, 6897, 2)
#elif __ia64__
CheckTypeSize(lldiv_t,16, 6897, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6897,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stdlib.h\n",cnt);
return cnt;
#endif

}

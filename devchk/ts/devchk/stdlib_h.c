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

#ifdef RAND_MAX
	CompareConstant(RAND_MAX,2147483647)
#else
Msg( "Error: Constant not found: RAND_MAX\n");
cnt++;
#endif

#ifdef EXIT_FAILURE
	CompareConstant(EXIT_FAILURE,1)
#else
Msg( "Error: Constant not found: EXIT_FAILURE\n");
cnt++;
#endif

#ifdef EXIT_SUCCESS
	CompareConstant(EXIT_SUCCESS,0)
#else
Msg( "Error: Constant not found: EXIT_SUCCESS\n");
cnt++;
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
CheckTypeSize(__compar_fn_t,8, 9231, 3)
#elif __powerpc__
CheckTypeSize(__compar_fn_t,4, 9231, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9231,0);
#endif

#ifdef __i386__
CheckTypeSize(div_t,8, 6973, 2)
#elif __ia64__
CheckTypeSize(div_t,8, 6973, 3)
#elif __powerpc__
CheckTypeSize(div_t,8, 6973, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6973,0);
#endif

#ifdef __i386__
CheckTypeSize(ldiv_t,8, 6975, 2)
#elif __ia64__
CheckTypeSize(ldiv_t,16, 6975, 3)
#elif __powerpc__
CheckTypeSize(ldiv_t,8, 6975, 6)
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

/*
 * Test of stdlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
#ifdef EXIT_FAILURE
	CompareConstant(EXIT_FAILURE,1,1648,architecture)
#else
Msg( "Error: Constant not found: EXIT_FAILURE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef MB_CUR_MAX
	CompareConstant(MB_CUR_MAX,(__ctype_get_mb_cur_max()),1650,architecture)
#else
Msg( "Error: Constant not found: MB_CUR_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EXIT_SUCCESS
	CompareConstant(EXIT_SUCCESS,0,1649,architecture)
#else
Msg( "Error: Constant not found: EXIT_SUCCESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RAND_MAX
	CompareConstant(RAND_MAX,2147483647,1647,architecture)
#else
Msg( "Error: Constant not found: RAND_MAX\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(__compar_fn_t,4, 9231, 2)
#elif __ia64__
CheckTypeSize(__compar_fn_t,8, 9231, 3)
#elif __powerpc__
CheckTypeSize(__compar_fn_t,4, 9231, 6)
#elif __s390__
CheckTypeSize(__compar_fn_t,4, 9231, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9231,0);
Msg("Find size of __compar_fn_t (9231)\n");
#endif

#ifdef __i386__
CheckTypeSize(div_t,8, 6973, 2)
#elif __ia64__
CheckTypeSize(div_t,8, 6973, 3)
#elif __powerpc__
CheckTypeSize(div_t,8, 6973, 6)
#elif __s390__
CheckTypeSize(div_t,8, 6973, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6973,0);
Msg("Find size of div_t (6973)\n");
#endif

#ifdef __i386__
CheckTypeSize(ldiv_t,8, 6975, 2)
#elif __ia64__
CheckTypeSize(ldiv_t,16, 6975, 3)
#elif __powerpc__
CheckTypeSize(ldiv_t,8, 6975, 6)
#elif __s390__
CheckTypeSize(ldiv_t,8, 6975, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6975,0);
Msg("Find size of ldiv_t (6975)\n");
#endif

#ifdef __i386__
CheckTypeSize(lldiv_t,16, 6897, 2)
#elif __ia64__
CheckTypeSize(lldiv_t,16, 6897, 3)
#elif __powerpc__
CheckTypeSize(lldiv_t,16, 6897, 6)
#elif __s390__
CheckTypeSize(lldiv_t,16, 6897, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6897,0);
Msg("Find size of lldiv_t (6897)\n");
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

/*
 * Test of stddef.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "stddef.h"



#ifdef TET_TEST
void stddef_h()
{
#else
int stddef_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stddef.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NULL
	CompareConstant(NULL,((void*)0),906,architecture)
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for offsetof(TYPE,MEMBER) */
#endif

#ifdef __i386__
CheckTypeSize(wchar_t,4, 8848, 2)
#elif __ia64__
CheckTypeSize(wchar_t,4, 8848, 3)
#elif __powerpc__
CheckTypeSize(wchar_t,4, 8848, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8848,0);
Msg("Find size of size_t (8848)\n");
#endif

#ifdef __i386__
CheckTypeSize(size_t,4, 8969, 2)
#elif __ia64__
CheckTypeSize(size_t,8, 8969, 3)
#elif __powerpc__
CheckTypeSize(size_t,4, 8969, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
Msg("Find size of ptrdiff_t (8969)\n");
#endif

#ifdef __i386__
CheckTypeSize(ptrdiff_t,4, 9027, 2)
#elif __ia64__
CheckTypeSize(ptrdiff_t,8, 9027, 3)
#elif __powerpc__
CheckTypeSize(ptrdiff_t,4, 9027, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9027,0);
Msg("Find size of ptrdiff_t (9027)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stddef.h\n",cnt);
return cnt;
#endif

}

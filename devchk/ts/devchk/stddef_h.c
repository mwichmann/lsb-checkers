/*
 * Test of stddef.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef NULL
	CompareConstant(NULL,((void*)0))
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

/* No test for offsetof(TYPE,MEMBER) */
#ifdef __i386__
CheckTypeSize(wchar_t,4, 8848, 2)
#elif __ia64__
CheckTypeSize(wchar_t,4, 8848, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8848,0);
#endif

#ifdef __i386__
CheckTypeSize(size_t,4, 8969, 2)
#elif __ia64__
CheckTypeSize(size_t,8, 8969, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
#endif

#ifdef __i386__
CheckTypeSize(wint_t,4, 8980, 2)
#elif __ia64__
CheckTypeSize(wint_t,4, 8980, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8980,0);
#endif

#ifdef __i386__
CheckTypeSize(ptrdiff_t,4, 9027, 2)
#elif __ia64__
CheckTypeSize(ptrdiff_t,0, 9027, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9027,0);
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

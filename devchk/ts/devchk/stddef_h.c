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

#if _LSB_DEFAULT_ARCH
#ifdef NULL
	CompareConstant(NULL,(0),906,architecture)
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for offsetof(TYPE,MEMBER) */
#endif

#if __i386__
CheckTypeSize(wchar_t,4, 8848, 2)
#elif __ia64__
CheckTypeSize(wchar_t,4, 8848, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wchar_t,4, 8848, 6)
#elif __s390__
CheckTypeSize(wchar_t,4, 8848, 10)
#elif __powerpc64__
CheckTypeSize(wchar_t,4, 8848, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8848,0);
Msg("Find size of wchar_t (8848)\n");
#endif

#if __no_sym__
CheckTypeSize(size_t,, 8969, )
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
Msg("Find size of size_t (8969)\n");
#endif

#if __i386__
CheckTypeSize(ptrdiff_t,4, 9027, 2)
#elif __ia64__
CheckTypeSize(ptrdiff_t,8, 9027, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ptrdiff_t,4, 9027, 6)
#elif __s390__
CheckTypeSize(ptrdiff_t,4, 9027, 10)
#elif __powerpc64__
CheckTypeSize(ptrdiff_t,8, 9027, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9027,0);
Msg("Find size of ptrdiff_t (9027)\n");
#endif

#if __i386__
CheckTypeSize(size_t,4, 10450, 2)
#endif

#if __ia64__
CheckTypeSize(size_t,8, 10451, 3)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(size_t,4, 10452, 6)
#endif

#if __powerpc64__
CheckTypeSize(size_t,8, 10453, 9)
#endif

#if __s390__
CheckTypeSize(size_t,4, 10454, 10)
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

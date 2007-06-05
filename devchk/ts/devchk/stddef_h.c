/*
 * Test of stddef.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in stddef.h\n");
#endif

printf("Checking data structures in stddef.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NULL
	CompareConstant(NULL,(0L),906,architecture)
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
#elif __s390__ && !__s390x__
CheckTypeSize(wchar_t,4, 8848, 10)
#elif __powerpc64__
CheckTypeSize(wchar_t,4, 8848, 9)
#elif __s390x__
CheckTypeSize(wchar_t,4, 8848, 12)
#elif __x86_64__
CheckTypeSize(wchar_t,4, 8848, 11)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(size_t,4, 8969, 6)
#elif __ia64__
CheckTypeSize(size_t,8, 8969, 3)
#elif __powerpc64__
CheckTypeSize(size_t,8, 8969, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(size_t,4, 8969, 10)
#elif __i386__
CheckTypeSize(size_t,4, 8969, 2)
#elif __s390x__
CheckTypeSize(size_t,8, 8969, 12)
#elif __x86_64__
CheckTypeSize(size_t,8, 8969, 11)
#endif

#if __i386__
CheckTypeSize(ptrdiff_t,4, 9027, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ptrdiff_t,4, 9027, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(ptrdiff_t,4, 9027, 10)
#elif __powerpc64__
CheckTypeSize(ptrdiff_t,8, 9027, 9)
#elif __x86_64__
CheckTypeSize(ptrdiff_t,8, 9027, 11)
#elif __s390x__
CheckTypeSize(ptrdiff_t,8, 9027, 12)
#elif __ia64__
CheckTypeSize(ptrdiff_t,0, 9027, 3)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in stddef.h\n\n",pcnt,cnt);
return cnt;
#endif

}

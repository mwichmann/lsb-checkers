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
CheckTypeSize(wchar_t,4, 8848, 2);
#elif __ia64__
CheckTypeSize(wchar_t,4, 8848, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wchar_t,4, 8848, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(wchar_t,4, 8848, 10);
#elif __powerpc64__
CheckTypeSize(wchar_t,4, 8848, 9);
#elif __s390x__
CheckTypeSize(wchar_t,4, 8848, 12);
#elif __x86_64__
CheckTypeSize(wchar_t,4, 8848, 11);
#elif 1
CheckTypeSize(wchar_t,0, 8848, 1);
#endif

#if __no_sym__
CheckTypeSize(size_t,0, 8969, );
#endif

#if __ia64__
CheckTypeSize(ptrdiff_t,0, 9027, 3);
#endif

#if __i386__
CheckTypeSize(size_t,4, 10450, 2);
#endif

#if __ia64__
CheckTypeSize(size_t,8, 10451, 3);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(size_t,4, 10452, 6);
#endif

#if __powerpc64__
CheckTypeSize(size_t,8, 10453, 9);
#endif

#if __s390__ && !__s390x__
CheckTypeSize(size_t,4, 10454, 10);
#endif

#if __i386__
CheckTypeSize(ptrdiff_t,4, 10473, 2);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(ptrdiff_t,4, 10474, 6);
#endif

#if __s390__ && !__s390x__
CheckTypeSize(ptrdiff_t,4, 10475, 10);
#endif

#if __powerpc64__
CheckTypeSize(ptrdiff_t,8, 10476, 9);
#endif

#if __s390x__
CheckTypeSize(size_t,8, 10554, 12);
#endif

#if __x86_64__
CheckTypeSize(ptrdiff_t,8, 10783, 11);
#endif

#if __x86_64__
CheckTypeSize(size_t,8, 10784, 11);
#endif

#if __s390x__
CheckTypeSize(ptrdiff_t,8, 10865, 12);
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

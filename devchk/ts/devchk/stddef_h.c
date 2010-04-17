/*
 * Test of stddef.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in stddef.h\n");
#endif

printf("Checking data structures in stddef.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NULL
	CompareConstant(NULL,(0L),906,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for offsetof(TYPE,MEMBER) */
#endif

#if defined __s390x__
CheckTypeSize(wchar_t,4, 8848, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(wchar_t,4, 8848, 11, 2.0, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(wchar_t,4, 8848, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(wchar_t,4, 8848, 9, 2.0, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(wchar_t,4, 8848, 6, 1.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(wchar_t,4, 8848, 3, 1.3, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(wchar_t,4, 8848, 2, 1.2, NULL, 8, NULL)
#endif

#if defined __s390x__
CheckTypeSize(size_t,8, 8969, 12, 2.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(size_t,8, 8969, 11, 2.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(size_t,4, 8969, 10, 2.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(size_t,8, 8969, 9, 2.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(size_t,4, 8969, 6, 2.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(size_t,8, 8969, 3, 2.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(size_t,4, 8969, 2, 2.0, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(ptrdiff_t,8, 9027, 12, 2.0, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(ptrdiff_t,8, 9027, 11, 2.0, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(ptrdiff_t,4, 9027, 10, 2.0, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(ptrdiff_t,8, 9027, 9, 2.0, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(ptrdiff_t,4, 9027, 6, 2.0, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(ptrdiff_t,8, 9027, 3, 2.0, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(ptrdiff_t,4, 9027, 2, 2.0, NULL, 6, NULL)
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

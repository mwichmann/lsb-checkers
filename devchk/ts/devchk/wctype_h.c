/*
 * Test of wctype.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include "wctype.h"



#ifdef TET_TEST
void wctype_h()
{
#else
int wctype_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in wctype.h\n");
#endif

#if __i386__
CheckTypeSize(wctype_t,4, 7024, 2)
#elif __ia64__
CheckTypeSize(wctype_t,8, 7024, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wctype_t,4, 7024, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(wctype_t,4, 7024, 10)
#elif __powerpc64__
CheckTypeSize(wctype_t,8, 7024, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7024,0);
Msg("Find size of wctype_t (7024)\n");
#endif

#if __i386__
CheckTypeSize(wint_t,4, 8980, 2)
#elif __ia64__
CheckTypeSize(wint_t,4, 8980, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wint_t,4, 8980, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(wint_t,4, 8980, 10)
#elif __powerpc64__
CheckTypeSize(wint_t,4, 8980, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8980,0);
Msg("Find size of wint_t (8980)\n");
#endif

#if __i386__
CheckTypeSize(wctrans_t,4, 9199, 2)
#elif __ia64__
CheckTypeSize(wctrans_t,8, 9199, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(wctrans_t,4, 9199, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(wctrans_t,4, 9199, 10)
#elif __powerpc64__
CheckTypeSize(wctrans_t,8, 9199, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9199,0);
Msg("Find size of wctrans_t (9199)\n");
#endif

#if __powerpc64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9234,0);
Msg("Find size of anon-__mbstate_t (9234)\n");
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(__mbstate_t,8, 10488, 6)
#elif __i386__
CheckTypeSize(__mbstate_t,8, 10488, 2)
#elif __ia64__
CheckTypeSize(__mbstate_t,8, 10488, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10488,0);
Msg("Find size of __mbstate_t (10488)\n");
#endif

#if __i386__
CheckTypeSize(mbstate_t,8, 9235, 2)
#elif __ia64__
CheckTypeSize(mbstate_t,8, 9235, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(mbstate_t,8, 9235, 10)
#elif __powerpc64__
CheckTypeSize(mbstate_t,8, 9235, 9)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9235,0);
Msg("Find size of mbstate_t (9235)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in wctype.h\n",cnt);
return cnt;
#endif

}

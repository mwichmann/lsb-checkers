/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "nl_types.h"



#ifdef TET_TEST
void nl_types_h()
{
#else
int nl_types_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in nl_types.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef NL_SETD
	CompareConstant(NL_SETD,1,1531,architecture)
#else
Msg( "Error: Constant not found: NL_SETD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NL_CAT_LOCALE
	CompareConstant(NL_CAT_LOCALE,1,1532,architecture)
#else
Msg( "Error: Constant not found: NL_CAT_LOCALE\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(nl_catd,4, 6923, 2)
#elif __ia64__
CheckTypeSize(nl_catd,8, 6923, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(nl_catd,4, 6923, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(nl_catd,4, 6923, 10)
#elif __powerpc64__
CheckTypeSize(nl_catd,8, 6923, 9)
#elif __s390x__
CheckTypeSize(nl_catd,8, 6923, 12)
#elif __x86_64__
CheckTypeSize(nl_catd,8, 6923, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6923,0);
Msg("Find size of nl_catd (6923)\n");
#endif

#if __i386__
CheckTypeSize(nl_item,4, 6924, 2)
#elif __ia64__
CheckTypeSize(nl_item,4, 6924, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(nl_item,4, 6924, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(nl_item,4, 6924, 10)
#elif __powerpc64__
CheckTypeSize(nl_item,4, 6924, 9)
#elif __s390x__
CheckTypeSize(nl_item,4, 6924, 12)
#elif __x86_64__
CheckTypeSize(nl_item,4, 6924, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6924,0);
Msg("Find size of nl_item (6924)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in nl_types.h\n",cnt);
return cnt;
#endif

}

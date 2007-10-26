/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nl_types.h\n");
#endif

printf("Checking data structures in nl_types.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NL_SETD
	CompareConstant(NL_SETD,1,1531,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NL_SETD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NL_CAT_LOCALE
	CompareConstant(NL_CAT_LOCALE,1,1532,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NL_CAT_LOCALE\n");
cnt++;
#endif

#endif

#if defined __i386__
CheckTypeSize(nl_catd,4, 6923, 2, 1.0, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(nl_catd,8, 6923, 3, 1.3, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(nl_catd,4, 6923, 6, 1.2, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(nl_catd,4, 6923, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(nl_catd,8, 6923, 9, 2.0, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(nl_catd,8, 6923, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(nl_catd,8, 6923, 11, 2.0, NULL, 40, NULL)
#else
Msg("Find size of nl_catd (6923)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,40,NULL);\n",architecture,6923,0);
#endif

#if defined __i386__
CheckTypeSize(nl_item,4, 6924, 2, 1.0, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(nl_item,4, 6924, 3, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(nl_item,4, 6924, 6, 1.2, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(nl_item,4, 6924, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(nl_item,4, 6924, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(nl_item,4, 6924, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(nl_item,4, 6924, 11, 2.0, NULL, 6, NULL)
#else
Msg("Find size of nl_item (6924)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6, NULL);\n",architecture,6924,0);
#endif

extern int catclose_db(nl_catd);
CheckInterfacedef(catclose,catclose_db);
extern char * catgets_db(nl_catd, int, int, const char *);
CheckInterfacedef(catgets,catgets_db);
extern nl_catd catopen_db(const char *, int);
CheckInterfacedef(catopen,catopen_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nl_types.h\n\n",pcnt,cnt);
return cnt;
#endif

}

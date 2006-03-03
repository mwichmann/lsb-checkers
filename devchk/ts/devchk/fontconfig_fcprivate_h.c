/*
 * Test of fontconfig/fcprivate.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "fontconfig/fcprivate.h"



#ifdef TET_TEST
void fontconfig_fcprivate_h()
{
#else
int fontconfig_fcprivate_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in fontconfig/fcprivate.h\n");
#endif

printf("Checking data structures in fontconfig/fcprivate.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FcPatternVapBuild(result,orig,va) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FcObjectSetVapBuild(__ret__,__first__,__va__) */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in fontconfig/fcprivate.h\n\n",pcnt,cnt);
return cnt;
#endif

}

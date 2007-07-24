/*
 * Test of freetype/fttypes.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/fttypes.h"



#ifdef TET_TEST
void freetype_fttypes_h()
{
#else
int freetype_fttypes_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/fttypes.h\n");
#endif

printf("Checking data structures in freetype/fttypes.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_BOOL(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_BASE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ERROR_MODULE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IS_EMPTY(list) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_MAKE_TAG(_x1,_x2,_x3,_x4) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/fttypes.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/fttypes.h\n\n",pcnt,cnt);
return cnt;
#endif

}

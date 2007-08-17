/*
 * Test of freetype/tttables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/tttables.h"



#ifdef TET_TEST
void freetype_tttables_h()
{
#else
int freetype_tttables_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/tttables.h\n");
#endif

printf("Checking data structures in freetype/tttables.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/tttables.h */
#endif

#if 1
CheckTypeSize(FT_CharMap,0, 16891, 1, 3.2, NULL, 16890, NULL)
#endif

#if 1
CheckTypeSize(FT_Sfnt_Tag,0, 16925, 1, 3.2, NULL, 16924, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/tttables.h\n\n",pcnt,cnt);
return cnt;
#endif

}

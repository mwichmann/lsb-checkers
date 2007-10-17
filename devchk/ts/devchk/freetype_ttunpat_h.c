/*
 * Test of freetype/ttunpat.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ttunpat.h"



#ifdef TET_TEST
void freetype_ttunpat_h()
{
#else
int freetype_ttunpat_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ttunpat.h\n");
#endif

printf("Checking data structures in freetype/ttunpat.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_PARAM_TAG_UNPATENTED_HINTING */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ttunpat.h\n\n",pcnt,cnt);
return cnt;
#endif

}

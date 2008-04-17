/*
 * Test of freetype/ftincrem.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftincrem.h"



#ifdef TET_TEST
void freetype_ftincrem_h()
{
#else
int freetype_ftincrem_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftincrem.h\n");
#endif

printf("Checking data structures in freetype/ftincrem.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_PARAM_TAG_INCREMENTAL */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftincrem.h\n\n",pcnt,cnt);
return cnt;
#endif

}

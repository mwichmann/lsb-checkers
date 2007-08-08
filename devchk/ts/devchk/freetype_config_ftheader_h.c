/*
 * Test of freetype/config/ftheader.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/config/ftheader.h"



#ifdef TET_TEST
void freetype_config_ftheader_h()
{
#else
int freetype_config_ftheader_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/config/ftheader.h\n");
#endif

printf("Checking data structures in freetype/config/ftheader.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_BEGIN_HEADER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_END_HEADER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_CHARMAP_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_IMAGE_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CACHE_SMALL_BITMAPS_H */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/config/ftheader.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/config/ftheader.h\n\n",pcnt,cnt);
return cnt;
#endif

}

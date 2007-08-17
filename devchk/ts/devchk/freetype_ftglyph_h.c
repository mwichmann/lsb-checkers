/*
 * Test of freetype/ftglyph.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftglyph.h"



#ifdef TET_TEST
void freetype_ftglyph_h()
{
#else
int freetype_ftglyph_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftglyph.h\n");
#endif

printf("Checking data structures in freetype/ftglyph.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_bbox_gridfit */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_bbox_pixels */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_bbox_subpixels */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_bbox_truncate */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_bbox_unscaled */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftglyph.h */
#endif

#if 1
CheckTypeSize(FT_Matrix,0, 16791, 1, 3.2, NULL, 16790, NULL)
#endif

#if 1
CheckTypeSize(FT_BBox,0, 16809, 1, 3.2, NULL, 16808, NULL)
#endif

#if 1
CheckTypeSize(FT_Render_Mode,0, 16900, 1, 3.2, NULL, 16899, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftglyph.h\n\n",pcnt,cnt);
return cnt;
#endif

}

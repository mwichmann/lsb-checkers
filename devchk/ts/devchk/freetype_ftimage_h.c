/*
 * Test of freetype/ftimage.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftimage.h"



#ifdef TET_TEST
void freetype_ftimage_h()
{
#else
int freetype_ftimage_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftimage.h\n");
#endif

printf("Checking data structures in freetype/ftimage.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_CURVE_TAG_CONIC
	CompareConstant(FT_CURVE_TAG_CONIC,0,10463,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_CURVE_TAG_CONIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_CURVE_TAG_CUBIC
	CompareConstant(FT_CURVE_TAG_CUBIC,2,10464,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_CURVE_TAG_CUBIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_CURVE_TAG_ON
	CompareConstant(FT_CURVE_TAG_ON,1,10465,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_CURVE_TAG_ON\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_CURVE_TAG_TOUCH_X
	CompareConstant(FT_CURVE_TAG_TOUCH_X,8,10466,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_CURVE_TAG_TOUCH_X\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_CURVE_TAG_TOUCH_Y
	CompareConstant(FT_CURVE_TAG_TOUCH_Y,16,10467,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_CURVE_TAG_TOUCH_Y\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_EVEN_ODD_FILL
	CompareConstant(FT_OUTLINE_EVEN_ODD_FILL,0x2,10468,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_EVEN_ODD_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_HIGH_PRECISION
	CompareConstant(FT_OUTLINE_HIGH_PRECISION,0x100,10469,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_HIGH_PRECISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_IGNORE_DROPOUTS
	CompareConstant(FT_OUTLINE_IGNORE_DROPOUTS,0x8,10470,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_IGNORE_DROPOUTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_NONE
	CompareConstant(FT_OUTLINE_NONE,0x0,10471,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_OWNER
	CompareConstant(FT_OUTLINE_OWNER,0x1,10472,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_OWNER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_REVERSE_FILL
	CompareConstant(FT_OUTLINE_REVERSE_FILL,0x4,10473,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_REVERSE_FILL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OUTLINE_SINGLE_PASS
	CompareConstant(FT_OUTLINE_SINGLE_PASS,0x200,10474,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OUTLINE_SINGLE_PASS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_RASTER_FLAG_AA
	CompareConstant(FT_RASTER_FLAG_AA,0x1,10475,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_RASTER_FLAG_AA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_RASTER_FLAG_CLIP
	CompareConstant(FT_RASTER_FLAG_CLIP,0x4,10476,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_RASTER_FLAG_CLIP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_RASTER_FLAG_DEFAULT
	CompareConstant(FT_RASTER_FLAG_DEFAULT,0x0,10477,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_RASTER_FLAG_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_RASTER_FLAG_DIRECT
	CompareConstant(FT_RASTER_FLAG_DIRECT,0x2,10478,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_RASTER_FLAG_DIRECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Curve_Tag_Conic */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Curve_Tag_Cubic */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CURVE_TAG(flag) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Curve_Tag_On */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_CURVE_TAG_TOUCH_BOTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Curve_Tag_Touch_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Curve_Tag_Touch_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_format_bitmap */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_format_composite */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_format_none */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_format_outline */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_glyph_format_plotter */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IMAGE_TAG(value,_x1,_x2,_x3,_x4) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_ConicTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_CubicTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_even_odd_fill */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_high_precision */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_ignore_dropouts */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_LineTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_MoveTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_none */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_owner */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_reverse_fill */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_outline_single_pass */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_pixel_mode_grays */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_pixel_mode_mono */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_pixel_mode_none */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_pixel_mode_pal2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_pixel_mode_pal4 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Done_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_raster_flag_aa */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_raster_flag_clip */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_raster_flag_default */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_raster_flag_direct */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_New_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Render_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Reset_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Set_Mode_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Span_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftimage.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftimage.h\n\n",pcnt,cnt);
return cnt;
#endif

}

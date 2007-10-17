/*
 * Test of freetype/ftimage.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

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
/* No test for FT_IMAGE_TAG(value,_x1,_x2,_x3,_x4) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_ConicTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_CubicTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_LineTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Outline_MoveTo_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Raster_Done_Func */
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

#if defined __i386__
CheckTypeSize(struct FT_Bitmap_,24, 12593, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on IA32\n");
CheckOffset(struct FT_Bitmap_,rows,0,2,64008)
CheckOffset(struct FT_Bitmap_,width,0,2,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,2,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,2,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,2,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,2,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,2,64014)
CheckOffset(struct FT_Bitmap_,palette,0,2,64015)
#elif defined __ia64__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on IA64\n");
CheckOffset(struct FT_Bitmap_,rows,0,3,64008)
CheckOffset(struct FT_Bitmap_,width,0,3,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,3,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,3,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,3,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,3,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,3,64014)
CheckOffset(struct FT_Bitmap_,palette,0,3,64015)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on PPC32\n");
CheckOffset(struct FT_Bitmap_,rows,0,6,64008)
CheckOffset(struct FT_Bitmap_,width,0,6,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,6,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,6,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,6,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,6,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,6,64014)
CheckOffset(struct FT_Bitmap_,palette,0,6,64015)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on PPC64\n");
CheckOffset(struct FT_Bitmap_,rows,0,9,64008)
CheckOffset(struct FT_Bitmap_,width,0,9,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,9,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,9,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,9,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,9,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,9,64014)
CheckOffset(struct FT_Bitmap_,palette,0,9,64015)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on S390\n");
CheckOffset(struct FT_Bitmap_,rows,0,10,64008)
CheckOffset(struct FT_Bitmap_,width,0,10,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,10,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,10,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,10,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,10,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,10,64014)
CheckOffset(struct FT_Bitmap_,palette,0,10,64015)
#elif defined __x86_64__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 11, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on x86-64\n");
CheckOffset(struct FT_Bitmap_,rows,0,11,64008)
CheckOffset(struct FT_Bitmap_,width,0,11,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,11,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,11,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,11,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,11,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,11,64014)
CheckOffset(struct FT_Bitmap_,palette,0,11,64015)
#elif defined __s390x__
CheckTypeSize(struct FT_Bitmap_,0, 12593, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_ on S390X\n");
CheckOffset(struct FT_Bitmap_,rows,0,12,64008)
CheckOffset(struct FT_Bitmap_,width,0,12,64009)
CheckOffset(struct FT_Bitmap_,pitch,0,12,64010)
CheckOffset(struct FT_Bitmap_,buffer,0,12,64011)
CheckOffset(struct FT_Bitmap_,num_grays,0,12,64012)
CheckOffset(struct FT_Bitmap_,pixel_mode,0,12,64013)
CheckOffset(struct FT_Bitmap_,palette_mode,0,12,64014)
CheckOffset(struct FT_Bitmap_,palette,0,12,64015)
#endif

#if defined __i386__
CheckTypeSize(FT_Bitmap,0, 12594, 2, 3.2, NULL, 12593, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12593,NULL);\n",architecture,12594,0);
Msg("Find size of FT_Bitmap (12594)\n");
#endif

#if 1
CheckTypeSize(struct FT_Vector_,8, 16741, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Vector_ on All\n");
CheckOffset(struct FT_Vector_,x,0,1,53960)
CheckOffset(struct FT_Vector_,y,0,1,53961)
#endif

#if 1
CheckTypeSize(FT_Pos,0, 16742, 1, 3.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(FT_Vector,0, 16743, 1, 3.2, NULL, 16741, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline,0, 16745, 1, 3.2, NULL, 16740, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_Format,0, 16780, 1, 3.2, NULL, 16779, NULL)
#endif

#if 1
CheckTypeSize(struct FT_BBox_,16, 16808, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_BBox_ on All\n");
CheckOffset(struct FT_BBox_,xMin,0,1,54068)
CheckOffset(struct FT_BBox_,yMin,0,1,54069)
CheckOffset(struct FT_BBox_,xMax,0,1,54070)
CheckOffset(struct FT_BBox_,yMax,0,1,54071)
#endif

#if 1
CheckTypeSize(FT_BBox,0, 16809, 1, 3.2, NULL, 16808, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster,0, 16818, 1, 3.2, NULL, 16817, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_NewFunc,0, 16821, 1, 3.2, NULL, 16820, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_ResetFunc,0, 16823, 1, 3.2, NULL, 16822, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_SetModeFunc,0, 16825, 1, 3.2, NULL, 16824, NULL)
#endif

#if 1
CheckTypeSize(FT_Span,0, 16830, 1, 3.2, NULL, 16829, NULL)
#endif

#if 1
CheckTypeSize(FT_SpanFunc,0, 16833, 1, 3.2, NULL, 16832, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_BitTest_Func,0, 16835, 1, 3.2, NULL, 16834, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_BitSet_Func,0, 16837, 1, 3.2, NULL, 16836, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_Params,0, 16838, 1, 3.2, NULL, 16826, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_RenderFunc,0, 16841, 1, 3.2, NULL, 16840, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_DoneFunc,0, 16843, 1, 3.2, NULL, 16842, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_Funcs,0, 16844, 1, 3.2, NULL, 16815, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_MoveToFunc,0, 16876, 1, 3.2, NULL, 16875, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_LineToFunc,0, 16877, 1, 3.2, NULL, 16875, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_ConicToFunc,0, 16879, 1, 3.2, NULL, 16878, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_CubicToFunc,0, 16881, 1, 3.2, NULL, 16880, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_Funcs,0, 16882, 1, 3.2, NULL, 16874, NULL)
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

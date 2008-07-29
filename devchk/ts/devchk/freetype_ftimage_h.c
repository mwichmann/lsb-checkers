/*
 * Test of freetype/ftimage.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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

#if defined __s390x__
CheckTypeSize(FT_Bitmap,40, 12594, 12, 3.2, NULL, 12593, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Bitmap,40, 12594, 11, 3.2, NULL, 12593, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Bitmap,24, 12594, 10, 3.2, NULL, 12593, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Bitmap,40, 12594, 9, 3.2, NULL, 12593, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Bitmap,24, 12594, 6, 3.2, NULL, 12593, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Bitmap,40, 12594, 3, 3.2, NULL, 12593, NULL)
#elif defined __i386__
CheckTypeSize(FT_Bitmap,24, 12594, 2, 3.2, NULL, 12593, NULL)
#else
Msg("Find size of FT_Bitmap (12594)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12593,NULL);\n",architecture,12594,0);
#endif

#if defined __s390x__
CheckTypeSize(struct FT_Vector_,16, 16741, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,8,12,53961)
CheckOffset(struct FT_Vector_,y,8,12,53961)
#elif defined __x86_64__
CheckTypeSize(struct FT_Vector_,16, 16741, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,8,11,53961)
CheckOffset(struct FT_Vector_,y,8,11,53961)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Vector_,8, 16741, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,4,10,53961)
CheckOffset(struct FT_Vector_,y,4,10,53961)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Vector_,16, 16741, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,8,9,53961)
CheckOffset(struct FT_Vector_,y,8,9,53961)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Vector_,8, 16741, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,4,6,53961)
CheckOffset(struct FT_Vector_,y,4,6,53961)
#elif defined __ia64__
CheckTypeSize(struct FT_Vector_,16, 16741, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,8,3,53961)
CheckOffset(struct FT_Vector_,y,8,3,53961)
#elif defined __i386__
CheckTypeSize(struct FT_Vector_,8, 16741, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Vector_,y,4,2,53961)
CheckOffset(struct FT_Vector_,y,4,2,53961)
#else
Msg("Find size of FT_Vector_ (16741)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16741,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Pos,8, 16742, 12, 3.2, NULL, 8, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Pos,8, 16742, 11, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Pos,4, 16742, 10, 3.2, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Pos,8, 16742, 9, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Pos,4, 16742, 6, 3.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Pos,8, 16742, 3, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(FT_Pos,4, 16742, 2, 3.2, NULL, 8, NULL)
#else
Msg("Find size of FT_Pos (16742)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,16742,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Vector,16, 16743, 12, 3.2, NULL, 16741, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Vector,16, 16743, 11, 3.2, NULL, 16741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Vector,8, 16743, 10, 3.2, NULL, 16741, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Vector,16, 16743, 9, 3.2, NULL, 16741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Vector,8, 16743, 6, 3.2, NULL, 16741, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Vector,16, 16743, 3, 3.2, NULL, 16741, NULL)
#elif defined __i386__
CheckTypeSize(FT_Vector,8, 16743, 2, 3.2, NULL, 16741, NULL)
#else
Msg("Find size of FT_Vector (16743)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16741,NULL);\n",architecture,16743,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline,40, 16745, 12, 3.2, NULL, 16740, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline,40, 16745, 11, 3.2, NULL, 16740, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline,20, 16745, 10, 3.2, NULL, 16740, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline,40, 16745, 9, 3.2, NULL, 16740, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline,20, 16745, 6, 3.2, NULL, 16740, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline,40, 16745, 3, 3.2, NULL, 16740, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline,20, 16745, 2, 3.2, NULL, 16740, NULL)
#else
Msg("Find size of FT_Outline (16745)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16740,NULL);\n",architecture,16745,0);
#endif

#if 1
CheckTypeSize(FT_Glyph_Format,4, 16780, 1, 3.2, NULL, 16779, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct FT_BBox_,32, 16808, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,8,12,54069)
CheckOffset(struct FT_BBox_,yMin,8,12,54069)
CheckMemberSize(struct FT_BBox_,xMax,8,12,54070)
CheckOffset(struct FT_BBox_,xMax,16,12,54070)
CheckMemberSize(struct FT_BBox_,yMax,8,12,54071)
CheckOffset(struct FT_BBox_,yMax,24,12,54071)
#elif defined __x86_64__
CheckTypeSize(struct FT_BBox_,32, 16808, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,8,11,54069)
CheckOffset(struct FT_BBox_,yMin,8,11,54069)
CheckMemberSize(struct FT_BBox_,xMax,8,11,54070)
CheckOffset(struct FT_BBox_,xMax,16,11,54070)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_BBox_,16, 16808, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,4,10,54069)
CheckOffset(struct FT_BBox_,yMin,4,10,54069)
CheckMemberSize(struct FT_BBox_,xMax,4,10,54070)
CheckOffset(struct FT_BBox_,xMax,8,10,54070)
CheckMemberSize(struct FT_BBox_,yMax,4,10,54071)
CheckOffset(struct FT_BBox_,yMax,12,10,54071)
#elif defined __powerpc64__
CheckTypeSize(struct FT_BBox_,32, 16808, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,8,9,54069)
CheckOffset(struct FT_BBox_,yMin,8,9,54069)
CheckMemberSize(struct FT_BBox_,xMax,8,9,54070)
CheckOffset(struct FT_BBox_,xMax,16,9,54070)
CheckMemberSize(struct FT_BBox_,yMax,8,9,54071)
CheckOffset(struct FT_BBox_,yMax,24,9,54071)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_BBox_,16, 16808, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,4,6,54069)
CheckOffset(struct FT_BBox_,yMin,4,6,54069)
CheckMemberSize(struct FT_BBox_,xMax,4,6,54070)
CheckOffset(struct FT_BBox_,xMax,8,6,54070)
CheckMemberSize(struct FT_BBox_,yMax,4,6,54071)
CheckOffset(struct FT_BBox_,yMax,12,6,54071)
#elif defined __ia64__
CheckTypeSize(struct FT_BBox_,32, 16808, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,8,3,54069)
CheckOffset(struct FT_BBox_,yMin,8,3,54069)
CheckMemberSize(struct FT_BBox_,xMax,8,3,54070)
CheckOffset(struct FT_BBox_,xMax,16,3,54070)
CheckMemberSize(struct FT_BBox_,yMax,8,3,54071)
CheckOffset(struct FT_BBox_,yMax,24,3,54071)
#elif defined __i386__
CheckTypeSize(struct FT_BBox_,16, 16808, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_BBox_,yMin,4,2,54069)
CheckOffset(struct FT_BBox_,yMin,4,2,54069)
CheckMemberSize(struct FT_BBox_,xMax,4,2,54070)
CheckOffset(struct FT_BBox_,xMax,8,2,54070)
CheckMemberSize(struct FT_BBox_,yMax,4,2,54071)
CheckOffset(struct FT_BBox_,yMax,12,2,54071)
#else
Msg("Find size of FT_BBox_ (16808)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16808,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_BBox,32, 16809, 12, 3.2, NULL, 16808, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_BBox,32, 16809, 11, 3.2, NULL, 16808, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_BBox,16, 16809, 10, 3.2, NULL, 16808, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_BBox,32, 16809, 9, 3.2, NULL, 16808, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_BBox,16, 16809, 6, 3.2, NULL, 16808, NULL)
#elif defined __ia64__
CheckTypeSize(FT_BBox,32, 16809, 3, 3.2, NULL, 16808, NULL)
#elif defined __i386__
CheckTypeSize(FT_BBox,16, 16809, 2, 3.2, NULL, 16808, NULL)
#else
Msg("Find size of FT_BBox (16809)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16808,NULL);\n",architecture,16809,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster,8, 16818, 12, 3.2, NULL, 16817, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster,8, 16818, 11, 3.2, NULL, 16817, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster,4, 16818, 10, 3.2, NULL, 16817, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster,8, 16818, 9, 3.2, NULL, 16817, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster,4, 16818, 6, 3.2, NULL, 16817, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster,8, 16818, 3, 3.2, NULL, 16817, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster,4, 16818, 2, 3.2, NULL, 16817, NULL)
#else
Msg("Find size of FT_Raster (16818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16817,NULL);\n",architecture,16818,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_NewFunc,8, 16821, 12, 3.2, NULL, 16820, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_NewFunc,8, 16821, 11, 3.2, NULL, 16820, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_NewFunc,4, 16821, 10, 3.2, NULL, 16820, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_NewFunc,8, 16821, 9, 3.2, NULL, 16820, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_NewFunc,4, 16821, 6, 3.2, NULL, 16820, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_NewFunc,8, 16821, 3, 3.2, NULL, 16820, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_NewFunc,4, 16821, 2, 3.2, NULL, 16820, NULL)
#else
Msg("Find size of FT_Raster_NewFunc (16821)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16820,NULL);\n",architecture,16821,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_ResetFunc,8, 16823, 12, 3.2, NULL, 16822, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_ResetFunc,8, 16823, 11, 3.2, NULL, 16822, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_ResetFunc,4, 16823, 10, 3.2, NULL, 16822, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_ResetFunc,8, 16823, 9, 3.2, NULL, 16822, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_ResetFunc,4, 16823, 6, 3.2, NULL, 16822, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_ResetFunc,8, 16823, 3, 3.2, NULL, 16822, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_ResetFunc,4, 16823, 2, 3.2, NULL, 16822, NULL)
#else
Msg("Find size of FT_Raster_ResetFunc (16823)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16822,NULL);\n",architecture,16823,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_SetModeFunc,8, 16825, 12, 3.2, NULL, 16824, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_SetModeFunc,8, 16825, 11, 3.2, NULL, 16824, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_SetModeFunc,4, 16825, 10, 3.2, NULL, 16824, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_SetModeFunc,8, 16825, 9, 3.2, NULL, 16824, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_SetModeFunc,4, 16825, 6, 3.2, NULL, 16824, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_SetModeFunc,8, 16825, 3, 3.2, NULL, 16824, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_SetModeFunc,4, 16825, 2, 3.2, NULL, 16824, NULL)
#else
Msg("Find size of FT_Raster_SetModeFunc (16825)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16824,NULL);\n",architecture,16825,0);
#endif

#if 1
CheckTypeSize(FT_Span,6, 16830, 1, 3.2, NULL, 16829, NULL)
#endif

#if defined __s390x__
CheckTypeSize(FT_SpanFunc,8, 16833, 12, 3.2, NULL, 16832, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_SpanFunc,8, 16833, 11, 3.2, NULL, 16832, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_SpanFunc,4, 16833, 10, 3.2, NULL, 16832, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_SpanFunc,8, 16833, 9, 3.2, NULL, 16832, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_SpanFunc,4, 16833, 6, 3.2, NULL, 16832, NULL)
#elif defined __ia64__
CheckTypeSize(FT_SpanFunc,8, 16833, 3, 3.2, NULL, 16832, NULL)
#elif defined __i386__
CheckTypeSize(FT_SpanFunc,4, 16833, 2, 3.2, NULL, 16832, NULL)
#else
Msg("Find size of FT_SpanFunc (16833)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16832,NULL);\n",architecture,16833,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_BitTest_Func,8, 16835, 12, 3.2, NULL, 16834, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_BitTest_Func,8, 16835, 11, 3.2, NULL, 16834, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_BitTest_Func,4, 16835, 10, 3.2, NULL, 16834, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_BitTest_Func,8, 16835, 9, 3.2, NULL, 16834, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_BitTest_Func,4, 16835, 6, 3.2, NULL, 16834, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_BitTest_Func,8, 16835, 3, 3.2, NULL, 16834, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_BitTest_Func,4, 16835, 2, 3.2, NULL, 16834, NULL)
#else
Msg("Find size of FT_Raster_BitTest_Func (16835)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16834,NULL);\n",architecture,16835,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_BitSet_Func,8, 16837, 12, 3.2, NULL, 16836, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_BitSet_Func,8, 16837, 11, 3.2, NULL, 16836, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_BitSet_Func,4, 16837, 10, 3.2, NULL, 16836, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_BitSet_Func,8, 16837, 9, 3.2, NULL, 16836, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_BitSet_Func,4, 16837, 6, 3.2, NULL, 16836, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_BitSet_Func,8, 16837, 3, 3.2, NULL, 16836, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_BitSet_Func,4, 16837, 2, 3.2, NULL, 16836, NULL)
#else
Msg("Find size of FT_Raster_BitSet_Func (16837)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16836,NULL);\n",architecture,16837,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_Params,96, 16838, 12, 3.2, NULL, 16826, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_Params,96, 16838, 11, 3.2, NULL, 16826, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_Params,48, 16838, 10, 3.2, NULL, 16826, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_Params,96, 16838, 9, 3.2, NULL, 16826, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_Params,48, 16838, 6, 3.2, NULL, 16826, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_Params,96, 16838, 3, 3.2, NULL, 16826, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_Params,48, 16838, 2, 3.2, NULL, 16826, NULL)
#else
Msg("Find size of FT_Raster_Params (16838)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16826,NULL);\n",architecture,16838,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_RenderFunc,8, 16841, 12, 3.2, NULL, 16840, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_RenderFunc,8, 16841, 11, 3.2, NULL, 16840, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_RenderFunc,4, 16841, 10, 3.2, NULL, 16840, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_RenderFunc,8, 16841, 9, 3.2, NULL, 16840, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_RenderFunc,4, 16841, 6, 3.2, NULL, 16840, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_RenderFunc,8, 16841, 3, 3.2, NULL, 16840, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_RenderFunc,4, 16841, 2, 3.2, NULL, 16840, NULL)
#else
Msg("Find size of FT_Raster_RenderFunc (16841)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16840,NULL);\n",architecture,16841,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_DoneFunc,8, 16843, 12, 3.2, NULL, 16842, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_DoneFunc,8, 16843, 11, 3.2, NULL, 16842, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_DoneFunc,4, 16843, 10, 3.2, NULL, 16842, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_DoneFunc,8, 16843, 9, 3.2, NULL, 16842, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_DoneFunc,4, 16843, 6, 3.2, NULL, 16842, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_DoneFunc,8, 16843, 3, 3.2, NULL, 16842, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_DoneFunc,4, 16843, 2, 3.2, NULL, 16842, NULL)
#else
Msg("Find size of FT_Raster_DoneFunc (16843)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16842,NULL);\n",architecture,16843,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Raster_Funcs,48, 16844, 12, 3.2, NULL, 16815, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Raster_Funcs,48, 16844, 11, 3.2, NULL, 16815, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Raster_Funcs,24, 16844, 10, 3.2, NULL, 16815, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Raster_Funcs,48, 16844, 9, 3.2, NULL, 16815, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Raster_Funcs,24, 16844, 6, 3.2, NULL, 16815, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Raster_Funcs,48, 16844, 3, 3.2, NULL, 16815, NULL)
#elif defined __i386__
CheckTypeSize(FT_Raster_Funcs,24, 16844, 2, 3.2, NULL, 16815, NULL)
#else
Msg("Find size of FT_Raster_Funcs (16844)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16815,NULL);\n",architecture,16844,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline_MoveToFunc,8, 16876, 12, 3.2, NULL, 16875, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline_MoveToFunc,8, 16876, 11, 3.2, NULL, 16875, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline_MoveToFunc,4, 16876, 10, 3.2, NULL, 16875, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline_MoveToFunc,8, 16876, 9, 3.2, NULL, 16875, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline_MoveToFunc,4, 16876, 6, 3.2, NULL, 16875, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline_MoveToFunc,8, 16876, 3, 3.2, NULL, 16875, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline_MoveToFunc,4, 16876, 2, 3.2, NULL, 16875, NULL)
#else
Msg("Find size of FT_Outline_MoveToFunc (16876)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16875,NULL);\n",architecture,16876,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline_LineToFunc,8, 16877, 12, 3.2, NULL, 16875, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline_LineToFunc,8, 16877, 11, 3.2, NULL, 16875, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline_LineToFunc,4, 16877, 10, 3.2, NULL, 16875, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline_LineToFunc,8, 16877, 9, 3.2, NULL, 16875, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline_LineToFunc,4, 16877, 6, 3.2, NULL, 16875, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline_LineToFunc,8, 16877, 3, 3.2, NULL, 16875, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline_LineToFunc,4, 16877, 2, 3.2, NULL, 16875, NULL)
#else
Msg("Find size of FT_Outline_LineToFunc (16877)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16875,NULL);\n",architecture,16877,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline_ConicToFunc,8, 16879, 12, 3.2, NULL, 16878, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline_ConicToFunc,8, 16879, 11, 3.2, NULL, 16878, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline_ConicToFunc,4, 16879, 10, 3.2, NULL, 16878, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline_ConicToFunc,8, 16879, 9, 3.2, NULL, 16878, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline_ConicToFunc,4, 16879, 6, 3.2, NULL, 16878, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline_ConicToFunc,8, 16879, 3, 3.2, NULL, 16878, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline_ConicToFunc,4, 16879, 2, 3.2, NULL, 16878, NULL)
#else
Msg("Find size of FT_Outline_ConicToFunc (16879)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16878,NULL);\n",architecture,16879,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline_CubicToFunc,8, 16881, 12, 3.2, NULL, 16880, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline_CubicToFunc,8, 16881, 11, 3.2, NULL, 16880, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline_CubicToFunc,4, 16881, 10, 3.2, NULL, 16880, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline_CubicToFunc,8, 16881, 9, 3.2, NULL, 16880, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline_CubicToFunc,4, 16881, 6, 3.2, NULL, 16880, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline_CubicToFunc,8, 16881, 3, 3.2, NULL, 16880, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline_CubicToFunc,4, 16881, 2, 3.2, NULL, 16880, NULL)
#else
Msg("Find size of FT_Outline_CubicToFunc (16881)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16880,NULL);\n",architecture,16881,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Outline_Funcs,48, 16882, 12, 3.2, NULL, 16874, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Outline_Funcs,48, 16882, 11, 3.2, NULL, 16874, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Outline_Funcs,24, 16882, 10, 3.2, NULL, 16874, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Outline_Funcs,48, 16882, 9, 3.2, NULL, 16874, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Outline_Funcs,24, 16882, 6, 3.2, NULL, 16874, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Outline_Funcs,48, 16882, 3, 3.2, NULL, 16874, NULL)
#elif defined __i386__
CheckTypeSize(FT_Outline_Funcs,24, 16882, 2, 3.2, NULL, 16874, NULL)
#else
Msg("Find size of FT_Outline_Funcs (16882)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16874,NULL);\n",architecture,16882,0);
#endif

#if 1
CheckTypeSize(FT_Pixel_Mode,4, 1000016, 1, 3.2, NULL, 1000015, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Raster_NewFunc_db)(void *, FT_Raster *);
CheckFunctionTypedef(FT_Raster_NewFunc,FT_Raster_NewFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Raster_ResetFunc_db)(FT_Raster, unsigned char *, long unsigned int);
CheckFunctionTypedef(FT_Raster_ResetFunc,FT_Raster_ResetFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Raster_SetModeFunc_db)(FT_Raster, long unsigned int, void *);
CheckFunctionTypedef(FT_Raster_SetModeFunc,FT_Raster_SetModeFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_SpanFunc_db)(int, int, FT_Span *, void *);
CheckFunctionTypedef(FT_SpanFunc,FT_SpanFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Raster_BitTest_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitTest_Func,FT_Raster_BitTest_Func_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Raster_BitSet_Func_db)(int, int, void *);
CheckFunctionTypedef(FT_Raster_BitSet_Func,FT_Raster_BitSet_Func_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Raster_RenderFunc_db)(FT_Raster, FT_Raster_Params *);
CheckFunctionTypedef(FT_Raster_RenderFunc,FT_Raster_RenderFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Raster_DoneFunc_db)(FT_Raster);
CheckFunctionTypedef(FT_Raster_DoneFunc,FT_Raster_DoneFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Outline_MoveToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_MoveToFunc,FT_Outline_MoveToFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Outline_LineToFunc_db)(FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_LineToFunc,FT_Outline_LineToFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Outline_ConicToFunc_db)(FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_ConicToFunc,FT_Outline_ConicToFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
#elif defined __i386__
/* IA32 */
typedef int (*FT_Outline_CubicToFunc_db)(FT_Vector *, FT_Vector *, FT_Vector *, void *);
CheckFunctionTypedef(FT_Outline_CubicToFunc,FT_Outline_CubicToFunc_db);
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

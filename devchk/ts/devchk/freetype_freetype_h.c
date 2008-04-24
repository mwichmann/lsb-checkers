/*
 * Test of freetype/freetype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/freetype.h"



#ifdef TET_TEST
void freetype_freetype_h()
{
#else
int freetype_freetype_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/freetype.h\n");
#endif

printf("Checking data structures in freetype/freetype.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FREETYPE_MAJOR
	CompareConstant(FREETYPE_MAJOR,2,10276,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FREETYPE_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FREETYPE_MINOR
	CompareConstant(FREETYPE_MINOR,1,10277,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FREETYPE_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FREETYPE_PATCH
	CompareConstant(FREETYPE_PATCH,10,10278,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FREETYPE_PATCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_CROP_BITMAP
	CompareConstant(FT_LOAD_CROP_BITMAP,0x40,10279,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_CROP_BITMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_DEFAULT
	CompareConstant(FT_LOAD_DEFAULT,0x0,10280,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_DEFAULT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_FORCE_AUTOHINT
	CompareConstant(FT_LOAD_FORCE_AUTOHINT,0x20,10281,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_FORCE_AUTOHINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH
	CompareConstant(FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH,0x200,10282,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_IGNORE_TRANSFORM
	CompareConstant(FT_LOAD_IGNORE_TRANSFORM,0x800,10283,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_IGNORE_TRANSFORM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_LINEAR_DESIGN
	CompareConstant(FT_LOAD_LINEAR_DESIGN,0x2000,10284,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_LINEAR_DESIGN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_MONOCHROME
	CompareConstant(FT_LOAD_MONOCHROME,0x1000,10285,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_MONOCHROME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_NO_AUTOHINT
	CompareConstant(FT_LOAD_NO_AUTOHINT,0x8000U,10286,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_NO_AUTOHINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_NO_BITMAP
	CompareConstant(FT_LOAD_NO_BITMAP,0x8,10287,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_NO_BITMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_NO_HINTING
	CompareConstant(FT_LOAD_NO_HINTING,0x2,10288,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_NO_HINTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_NO_RECURSE
	CompareConstant(FT_LOAD_NO_RECURSE,0x400,10289,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_NO_RECURSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_NO_SCALE
	CompareConstant(FT_LOAD_NO_SCALE,0x1,10290,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_NO_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_PEDANTIC
	CompareConstant(FT_LOAD_PEDANTIC,0x80,10291,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_PEDANTIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_RENDER
	CompareConstant(FT_LOAD_RENDER,0x4,10292,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_RENDER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_SBITS_ONLY
	CompareConstant(FT_LOAD_SBITS_ONLY,0x4000,10293,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_SBITS_ONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_LOAD_VERTICAL_LAYOUT
	CompareConstant(FT_LOAD_VERTICAL_LAYOUT,0x10,10294,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_LOAD_VERTICAL_LAYOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OPEN_DRIVER
	CompareConstant(FT_OPEN_DRIVER,0x8,10295,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OPEN_DRIVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OPEN_MEMORY
	CompareConstant(FT_OPEN_MEMORY,0x1,10296,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OPEN_MEMORY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OPEN_PARAMS
	CompareConstant(FT_OPEN_PARAMS,0x10,10297,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OPEN_PARAMS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OPEN_PATHNAME
	CompareConstant(FT_OPEN_PATHNAME,0x4,10298,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OPEN_PATHNAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_OPEN_STREAM
	CompareConstant(FT_OPEN_STREAM,0x2,10299,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_OPEN_STREAM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_ENC_TAG(value,a,b,c,d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_EXTERNAL_STREAM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_FAST_GLYPHS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_FIXED_SIZES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_FIXED_WIDTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_GLYPH_NAMES */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_HORIZONTAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_KERNING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_MULTIPLE_MASTERS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_SCALABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_SFNT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_FACE_FLAG_VERTICAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_FAST_GLYPHS(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_FIXED_SIZES(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_GLYPH_NAMES(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_HORIZONTAL(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_KERNING(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_MULTIPLE_MASTERS(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_HAS_VERTICAL(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IS_FIXED_WIDTH(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IS_SCALABLE(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_IS_SFNT(face) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_LCD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_LCD_V */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_LIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_MODE(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_MONO */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_NORMAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_LOAD_TARGET_(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_STYLE_FLAG_BOLD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_STYLE_FLAG_ITALIC */
#endif

#if defined __i386__
CheckTypeSize(FT_Face,4, 11168, 2, 3.2, NULL, 11167, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Face,8, 11168, 11, 3.2, NULL, 11167, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Face,4, 11168, 10, 3.2, NULL, 11167, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Face,8, 11168, 12, 3.2, NULL, 11167, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Face,8, 11168, 3, 3.2, NULL, 11167, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Face,4, 11168, 6, 3.2, NULL, 11167, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Face,8, 11168, 9, 3.2, NULL, 11167, NULL)
#else
Msg("Find size of FT_Face (11168)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11167,NULL);\n",architecture,11168,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Module,8, 16761, 11, 3.2, NULL, 16760, NULL)
#elif defined __i386__
CheckTypeSize(FT_Module,4, 16761, 2, 3.2, NULL, 16760, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Module,4, 16761, 10, 3.2, NULL, 16760, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Module,8, 16761, 12, 3.2, NULL, 16760, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Module,8, 16761, 3, 3.2, NULL, 16760, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Module,4, 16761, 6, 3.2, NULL, 16760, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Module,8, 16761, 9, 3.2, NULL, 16760, NULL)
#else
Msg("Find size of FT_Module (16761)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16760,NULL);\n",architecture,16761,0);
#endif

#if defined __i386__
CheckTypeSize(FT_Library,4, 16773, 2, 3.2, NULL, 16772, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Library,8, 16773, 11, 3.2, NULL, 16772, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Library,4, 16773, 10, 3.2, NULL, 16772, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Library,8, 16773, 12, 3.2, NULL, 16772, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Library,8, 16773, 3, 3.2, NULL, 16772, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Library,4, 16773, 6, 3.2, NULL, 16772, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Library,8, 16773, 9, 3.2, NULL, 16772, NULL)
#else
Msg("Find size of FT_Library (16773)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16772,NULL);\n",architecture,16773,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer,8, 16782, 11, 3.2, NULL, 16781, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer,4, 16782, 2, 3.2, NULL, 16781, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer,4, 16782, 10, 3.2, NULL, 16781, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer,8, 16782, 12, 3.2, NULL, 16781, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer,8, 16782, 3, 3.2, NULL, 16781, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer,4, 16782, 6, 3.2, NULL, 16781, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer,8, 16782, 9, 3.2, NULL, 16781, NULL)
#else
Msg("Find size of FT_Renderer (16782)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16781,NULL);\n",architecture,16782,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_Glyph_Metrics_,64, 16783, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,8,11,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,8,11,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,8,11,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,16,11,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,8,11,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,24,11,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,8,11,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,32,11,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,8,11,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,40,11,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,8,11,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,48,11,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,8,11,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,56,11,54013)
#elif defined __i386__
CheckTypeSize(struct FT_Glyph_Metrics_,32, 16783, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,4,2,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,4,2,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,4,2,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,8,2,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,4,2,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,12,2,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,4,2,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,16,2,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,4,2,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,20,2,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,4,2,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,24,2,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,4,2,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,28,2,54013)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Glyph_Metrics_,32, 16783, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,4,10,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,4,10,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,4,10,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,8,10,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,4,10,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,12,10,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,4,10,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,16,10,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,4,10,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,20,10,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,4,10,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,24,10,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,4,10,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,28,10,54013)
#elif defined __s390x__
CheckTypeSize(struct FT_Glyph_Metrics_,64, 16783, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,8,12,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,8,12,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,8,12,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,16,12,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,8,12,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,24,12,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,8,12,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,32,12,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,8,12,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,40,12,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,8,12,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,48,12,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,8,12,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,56,12,54013)
#elif defined __ia64__
CheckTypeSize(struct FT_Glyph_Metrics_,64, 16783, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,8,3,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,8,3,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,8,3,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,16,3,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,8,3,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,24,3,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,8,3,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,32,3,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,8,3,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,40,3,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,8,3,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,48,3,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,8,3,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,56,3,54013)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Glyph_Metrics_,32, 16783, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,4,6,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,4,6,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,4,6,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,8,6,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,4,6,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,12,6,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,4,6,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,16,6,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,4,6,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,20,6,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,4,6,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,24,6,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,4,6,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,28,6,54013)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Glyph_Metrics_,64, 16783, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Metrics_,height,8,9,54007)
CheckOffset(struct FT_Glyph_Metrics_,height,8,9,54007)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingX,8,9,54008)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingX,16,9,54008)
CheckMemberSize(struct FT_Glyph_Metrics_,horiBearingY,8,9,54009)
CheckOffset(struct FT_Glyph_Metrics_,horiBearingY,24,9,54009)
CheckMemberSize(struct FT_Glyph_Metrics_,horiAdvance,8,9,54010)
CheckOffset(struct FT_Glyph_Metrics_,horiAdvance,32,9,54010)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingX,8,9,54011)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingX,40,9,54011)
CheckMemberSize(struct FT_Glyph_Metrics_,vertBearingY,8,9,54012)
CheckOffset(struct FT_Glyph_Metrics_,vertBearingY,48,9,54012)
CheckMemberSize(struct FT_Glyph_Metrics_,vertAdvance,8,9,54013)
CheckOffset(struct FT_Glyph_Metrics_,vertAdvance,56,9,54013)
#else
Msg("Find size of FT_Glyph_Metrics_ (16783)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16783,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_GlyphSlot,8, 16785, 11, 3.2, NULL, 16784, NULL)
#elif defined __i386__
CheckTypeSize(FT_GlyphSlot,4, 16785, 2, 3.2, NULL, 16784, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_GlyphSlot,4, 16785, 10, 3.2, NULL, 16784, NULL)
#elif defined __s390x__
CheckTypeSize(FT_GlyphSlot,8, 16785, 12, 3.2, NULL, 16784, NULL)
#elif defined __ia64__
CheckTypeSize(FT_GlyphSlot,8, 16785, 3, 3.2, NULL, 16784, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_GlyphSlot,4, 16785, 6, 3.2, NULL, 16784, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_GlyphSlot,8, 16785, 9, 3.2, NULL, 16784, NULL)
#else
Msg("Find size of FT_GlyphSlot (16785)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16784,NULL);\n",architecture,16785,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_GlyphSlotRec_,304, 16786, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,8,11,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,8,11,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,8,11,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,16,11,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,11,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,24,11,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,16,11,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,32,11,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,64,11,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,48,11,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,8,11,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,112,11,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,8,11,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,120,11,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,16,11,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,128,11,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,11,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,144,11,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,40,11,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,152,11,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,11,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,192,11,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,11,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,196,11,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,40,11,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,200,11,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,11,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,240,11,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,8,11,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,248,11,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,8,11,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,256,11,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,8,11,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,264,11,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,8,11,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,272,11,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,8,11,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,280,11,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,8,11,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,288,11,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,8,11,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,296,11,54057)
#elif defined __i386__
CheckTypeSize(struct FT_GlyphSlotRec_,160, 16786, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,4,2,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,4,2,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,4,2,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,8,2,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,2,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,12,2,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,8,2,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,16,2,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,32,2,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,24,2,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,4,2,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,56,2,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,4,2,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,60,2,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,8,2,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,64,2,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,2,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,72,2,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,24,2,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,76,2,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,2,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,100,2,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,2,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,104,2,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,20,2,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,108,2,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,2,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,128,2,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,4,2,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,132,2,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,4,2,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,136,2,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,4,2,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,140,2,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,4,2,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,144,2,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,4,2,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,148,2,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,4,2,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,152,2,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,4,2,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,156,2,54057)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_GlyphSlotRec_,160, 16786, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,4,10,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,4,10,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,4,10,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,8,10,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,10,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,12,10,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,8,10,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,16,10,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,32,10,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,24,10,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,4,10,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,56,10,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,4,10,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,60,10,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,8,10,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,64,10,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,10,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,72,10,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,24,10,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,76,10,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,10,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,100,10,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,10,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,104,10,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,20,10,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,108,10,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,10,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,128,10,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,4,10,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,132,10,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,4,10,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,136,10,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,4,10,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,140,10,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,4,10,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,144,10,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,4,10,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,148,10,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,4,10,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,152,10,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,4,10,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,156,10,54057)
#elif defined __s390x__
CheckTypeSize(struct FT_GlyphSlotRec_,304, 16786, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,8,12,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,8,12,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,8,12,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,16,12,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,12,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,24,12,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,16,12,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,32,12,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,64,12,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,48,12,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,8,12,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,112,12,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,8,12,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,120,12,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,16,12,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,128,12,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,12,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,144,12,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,40,12,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,152,12,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,12,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,192,12,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,12,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,196,12,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,40,12,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,200,12,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,12,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,240,12,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,8,12,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,248,12,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,8,12,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,256,12,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,8,12,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,264,12,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,8,12,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,272,12,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,8,12,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,280,12,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,8,12,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,288,12,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,8,12,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,296,12,54057)
#elif defined __ia64__
CheckTypeSize(struct FT_GlyphSlotRec_,304, 16786, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,8,3,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,8,3,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,8,3,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,16,3,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,3,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,24,3,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,16,3,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,32,3,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,64,3,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,48,3,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,8,3,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,112,3,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,8,3,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,120,3,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,16,3,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,128,3,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,3,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,144,3,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,40,3,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,152,3,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,3,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,192,3,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,3,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,196,3,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,40,3,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,200,3,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,3,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,240,3,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,8,3,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,248,3,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,8,3,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,256,3,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,8,3,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,264,3,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,8,3,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,272,3,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,8,3,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,280,3,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,8,3,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,288,3,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,8,3,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,296,3,54057)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_GlyphSlotRec_,160, 16786, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,4,6,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,4,6,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,4,6,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,8,6,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,6,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,12,6,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,8,6,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,16,6,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,32,6,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,24,6,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,4,6,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,56,6,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,4,6,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,60,6,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,8,6,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,64,6,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,6,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,72,6,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,24,6,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,76,6,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,6,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,100,6,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,6,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,104,6,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,20,6,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,108,6,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,6,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,128,6,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,4,6,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,132,6,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,4,6,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,136,6,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,4,6,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,140,6,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,4,6,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,144,6,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,4,6,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,148,6,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,4,6,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,152,6,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,4,6,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,156,6,54057)
#elif defined __powerpc64__
CheckTypeSize(struct FT_GlyphSlotRec_,304, 16786, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphSlotRec_,face,8,9,54002)
CheckOffset(struct FT_GlyphSlotRec_,face,8,9,54002)
CheckMemberSize(struct FT_GlyphSlotRec_,next,8,9,54003)
CheckOffset(struct FT_GlyphSlotRec_,next,16,9,54003)
CheckMemberSize(struct FT_GlyphSlotRec_,reserved,4,9,54004)
CheckOffset(struct FT_GlyphSlotRec_,reserved,24,9,54004)
CheckMemberSize(struct FT_GlyphSlotRec_,generic,16,9,54005)
CheckOffset(struct FT_GlyphSlotRec_,generic,32,9,54005)
CheckMemberSize(struct FT_GlyphSlotRec_,metrics,64,9,54014)
CheckOffset(struct FT_GlyphSlotRec_,metrics,48,9,54014)
CheckMemberSize(struct FT_GlyphSlotRec_,linearHoriAdvance,8,9,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,112,9,54015)
CheckMemberSize(struct FT_GlyphSlotRec_,linearVertAdvance,8,9,54016)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,120,9,54016)
CheckMemberSize(struct FT_GlyphSlotRec_,advance,16,9,54017)
CheckOffset(struct FT_GlyphSlotRec_,advance,128,9,54017)
CheckMemberSize(struct FT_GlyphSlotRec_,format,4,9,54018)
CheckOffset(struct FT_GlyphSlotRec_,format,144,9,54018)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap,40,9,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,152,9,54019)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_left,4,9,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,192,9,54020)
CheckMemberSize(struct FT_GlyphSlotRec_,bitmap_top,4,9,54021)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,196,9,54021)
CheckMemberSize(struct FT_GlyphSlotRec_,outline,40,9,54022)
CheckOffset(struct FT_GlyphSlotRec_,outline,200,9,54022)
CheckMemberSize(struct FT_GlyphSlotRec_,num_subglyphs,4,9,54023)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,240,9,54023)
CheckMemberSize(struct FT_GlyphSlotRec_,subglyphs,8,9,54033)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,248,9,54033)
CheckMemberSize(struct FT_GlyphSlotRec_,control_data,8,9,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_data,256,9,54034)
CheckMemberSize(struct FT_GlyphSlotRec_,control_len,8,9,54035)
CheckOffset(struct FT_GlyphSlotRec_,control_len,264,9,54035)
CheckMemberSize(struct FT_GlyphSlotRec_,lsb_delta,8,9,54036)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,272,9,54036)
CheckMemberSize(struct FT_GlyphSlotRec_,rsb_delta,8,9,54037)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,280,9,54037)
CheckMemberSize(struct FT_GlyphSlotRec_,other,8,9,54038)
CheckOffset(struct FT_GlyphSlotRec_,other,288,9,54038)
CheckMemberSize(struct FT_GlyphSlotRec_,internal,8,9,54057)
CheckOffset(struct FT_GlyphSlotRec_,internal,296,9,54057)
#else
Msg("Find size of FT_GlyphSlotRec_ (16786)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16786,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_Metrics,64, 16787, 11, 3.2, NULL, 16783, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_Metrics,32, 16787, 2, 3.2, NULL, 16783, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_Metrics,32, 16787, 10, 3.2, NULL, 16783, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_Metrics,64, 16787, 12, 3.2, NULL, 16783, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_Metrics,64, 16787, 3, 3.2, NULL, 16783, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_Metrics,32, 16787, 6, 3.2, NULL, 16783, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_Metrics,64, 16787, 9, 3.2, NULL, 16783, NULL)
#else
Msg("Find size of FT_Glyph_Metrics (16787)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16783,NULL);\n",architecture,16787,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_SubGlyph,8, 16793, 11, 3.2, NULL, 16792, NULL)
#elif defined __i386__
CheckTypeSize(FT_SubGlyph,4, 16793, 2, 3.2, NULL, 16792, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_SubGlyph,4, 16793, 10, 3.2, NULL, 16792, NULL)
#elif defined __s390x__
CheckTypeSize(FT_SubGlyph,8, 16793, 12, 3.2, NULL, 16792, NULL)
#elif defined __ia64__
CheckTypeSize(FT_SubGlyph,8, 16793, 3, 3.2, NULL, 16792, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_SubGlyph,4, 16793, 6, 3.2, NULL, 16792, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_SubGlyph,8, 16793, 9, 3.2, NULL, 16792, NULL)
#else
Msg("Find size of FT_SubGlyph (16793)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16792,NULL);\n",architecture,16793,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Slot_Internal,8, 16802, 11, 3.2, NULL, 16801, NULL)
#elif defined __i386__
CheckTypeSize(FT_Slot_Internal,4, 16802, 2, 3.2, NULL, 16801, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Slot_Internal,4, 16802, 10, 3.2, NULL, 16801, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Slot_Internal,8, 16802, 12, 3.2, NULL, 16801, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Slot_Internal,8, 16802, 3, 3.2, NULL, 16801, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Slot_Internal,4, 16802, 6, 3.2, NULL, 16801, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Slot_Internal,8, 16802, 9, 3.2, NULL, 16801, NULL)
#else
Msg("Find size of FT_Slot_Internal (16802)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16801,NULL);\n",architecture,16802,0);
#endif

#if defined __i386__
CheckTypeSize(struct FT_CharMapRec_,12, 16887, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,2,54206)
CheckOffset(struct FT_CharMapRec_,encoding,4,2,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,2,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,8,2,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,2,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,10,2,54208)
#elif defined __ia64__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,3,54206)
CheckOffset(struct FT_CharMapRec_,encoding,8,3,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,3,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,12,3,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,3,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,14,3,54208)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_CharMapRec_,12, 16887, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,6,54206)
CheckOffset(struct FT_CharMapRec_,encoding,4,6,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,6,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,8,6,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,6,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,10,6,54208)
#elif defined __powerpc64__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,9,54206)
CheckOffset(struct FT_CharMapRec_,encoding,8,9,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,9,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,12,9,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,9,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,14,9,54208)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_CharMapRec_,12, 16887, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,10,54206)
CheckOffset(struct FT_CharMapRec_,encoding,4,10,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,10,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,8,10,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,10,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,10,10,54208)
#elif defined __x86_64__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,11,54206)
CheckOffset(struct FT_CharMapRec_,encoding,8,11,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,11,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,12,11,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,11,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,14,11,54208)
#elif defined __s390x__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,12,54206)
CheckOffset(struct FT_CharMapRec_,encoding,8,12,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,12,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,12,12,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,12,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,14,12,54208)
#else
Msg("Find size of FT_CharMapRec_ (16887)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16887,0);
#endif

#if 1
CheckTypeSize(FT_Encoding,4, 16889, 1, 3.2, NULL, 16888, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_CharMap,8, 16891, 11, 3.2, NULL, 16890, NULL)
#elif defined __i386__
CheckTypeSize(FT_CharMap,4, 16891, 2, 3.2, NULL, 16890, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_CharMap,4, 16891, 10, 3.2, NULL, 16890, NULL)
#elif defined __s390x__
CheckTypeSize(FT_CharMap,8, 16891, 12, 3.2, NULL, 16890, NULL)
#elif defined __ia64__
CheckTypeSize(FT_CharMap,8, 16891, 3, 3.2, NULL, 16890, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_CharMap,4, 16891, 6, 3.2, NULL, 16890, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_CharMap,8, 16891, 9, 3.2, NULL, 16890, NULL)
#else
Msg("Find size of FT_CharMap (16891)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16890,NULL);\n",architecture,16891,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_F26Dot6,8, 16897, 11, 3.2, NULL, 8, NULL)
#elif defined __i386__
CheckTypeSize(FT_F26Dot6,4, 16897, 2, 3.2, NULL, 8, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_F26Dot6,4, 16897, 10, 3.2, NULL, 8, NULL)
#elif defined __s390x__
CheckTypeSize(FT_F26Dot6,8, 16897, 12, 3.2, NULL, 8, NULL)
#elif defined __ia64__
CheckTypeSize(FT_F26Dot6,8, 16897, 3, 3.2, NULL, 8, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_F26Dot6,4, 16897, 6, 3.2, NULL, 8, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_F26Dot6,8, 16897, 9, 3.2, NULL, 8, NULL)
#else
Msg("Find size of FT_F26Dot6 (16897)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,16897,0);
#endif

#if 1
CheckTypeSize(FT_Render_Mode,4, 16900, 1, 3.2, NULL, 16899, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_Parameter_,16, 16912, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,8,11,54240)
CheckOffset(struct FT_Parameter_,data,8,11,54240)
#elif defined __i386__
CheckTypeSize(struct FT_Parameter_,8, 16912, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,4,2,54240)
CheckOffset(struct FT_Parameter_,data,4,2,54240)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Parameter_,8, 16912, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,4,10,54240)
CheckOffset(struct FT_Parameter_,data,4,10,54240)
#elif defined __s390x__
CheckTypeSize(struct FT_Parameter_,16, 16912, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,8,12,54240)
CheckOffset(struct FT_Parameter_,data,8,12,54240)
#elif defined __ia64__
CheckTypeSize(struct FT_Parameter_,16, 16912, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,8,3,54240)
CheckOffset(struct FT_Parameter_,data,8,3,54240)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Parameter_,8, 16912, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,4,6,54240)
CheckOffset(struct FT_Parameter_,data,4,6,54240)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Parameter_,16, 16912, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,8,9,54240)
CheckOffset(struct FT_Parameter_,data,8,9,54240)
#else
Msg("Find size of FT_Parameter_ (16912)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16912,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Parameter,16, 16913, 11, 3.2, NULL, 16912, NULL)
#elif defined __i386__
CheckTypeSize(FT_Parameter,8, 16913, 2, 3.2, NULL, 16912, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Parameter,8, 16913, 10, 3.2, NULL, 16912, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Parameter,16, 16913, 12, 3.2, NULL, 16912, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Parameter,16, 16913, 3, 3.2, NULL, 16912, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Parameter,8, 16913, 6, 3.2, NULL, 16912, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Parameter,16, 16913, 9, 3.2, NULL, 16912, NULL)
#else
Msg("Find size of FT_Parameter (16913)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16912,NULL);\n",architecture,16913,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Open_Args,64, 16915, 11, 3.2, NULL, 16901, NULL)
#elif defined __i386__
CheckTypeSize(FT_Open_Args,32, 16915, 2, 3.2, NULL, 16901, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Open_Args,32, 16915, 10, 3.2, NULL, 16901, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Open_Args,64, 16915, 12, 3.2, NULL, 16901, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Open_Args,64, 16915, 3, 3.2, NULL, 16901, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Open_Args,32, 16915, 6, 3.2, NULL, 16901, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Open_Args,64, 16915, 9, 3.2, NULL, 16901, NULL)
#else
Msg("Find size of FT_Open_Args (16915)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16901,NULL);\n",architecture,16915,0);
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_SizeRec_,88, 16952, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,16,11,54279)
CheckOffset(struct FT_SizeRec_,generic,8,11,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,56,11,54288)
CheckOffset(struct FT_SizeRec_,metrics,24,11,54288)
CheckMemberSize(struct FT_SizeRec_,internal,8,11,54289)
CheckOffset(struct FT_SizeRec_,internal,80,11,54289)
#elif defined __i386__
CheckTypeSize(struct FT_SizeRec_,44, 16952, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,8,2,54279)
CheckOffset(struct FT_SizeRec_,generic,4,2,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,28,2,54288)
CheckOffset(struct FT_SizeRec_,metrics,12,2,54288)
CheckMemberSize(struct FT_SizeRec_,internal,4,2,54289)
CheckOffset(struct FT_SizeRec_,internal,40,2,54289)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_SizeRec_,44, 16952, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,8,10,54279)
CheckOffset(struct FT_SizeRec_,generic,4,10,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,28,10,54288)
CheckOffset(struct FT_SizeRec_,metrics,12,10,54288)
CheckMemberSize(struct FT_SizeRec_,internal,4,10,54289)
CheckOffset(struct FT_SizeRec_,internal,40,10,54289)
#elif defined __s390x__
CheckTypeSize(struct FT_SizeRec_,88, 16952, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,16,12,54279)
CheckOffset(struct FT_SizeRec_,generic,8,12,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,56,12,54288)
CheckOffset(struct FT_SizeRec_,metrics,24,12,54288)
CheckMemberSize(struct FT_SizeRec_,internal,8,12,54289)
CheckOffset(struct FT_SizeRec_,internal,80,12,54289)
#elif defined __ia64__
CheckTypeSize(struct FT_SizeRec_,88, 16952, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,16,3,54279)
CheckOffset(struct FT_SizeRec_,generic,8,3,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,56,3,54288)
CheckOffset(struct FT_SizeRec_,metrics,24,3,54288)
CheckMemberSize(struct FT_SizeRec_,internal,8,3,54289)
CheckOffset(struct FT_SizeRec_,internal,80,3,54289)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_SizeRec_,44, 16952, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,8,6,54279)
CheckOffset(struct FT_SizeRec_,generic,4,6,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,28,6,54288)
CheckOffset(struct FT_SizeRec_,metrics,12,6,54288)
CheckMemberSize(struct FT_SizeRec_,internal,4,6,54289)
CheckOffset(struct FT_SizeRec_,internal,40,6,54289)
#elif defined __powerpc64__
CheckTypeSize(struct FT_SizeRec_,88, 16952, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,16,9,54279)
CheckOffset(struct FT_SizeRec_,generic,8,9,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,56,9,54288)
CheckOffset(struct FT_SizeRec_,metrics,24,9,54288)
CheckMemberSize(struct FT_SizeRec_,internal,8,9,54289)
CheckOffset(struct FT_SizeRec_,internal,80,9,54289)
#else
Msg("Find size of FT_SizeRec_ (16952)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16952,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size_Metrics,56, 16953, 11, 3.2, NULL, 16951, NULL)
#elif defined __i386__
CheckTypeSize(FT_Size_Metrics,28, 16953, 2, 3.2, NULL, 16951, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Size_Metrics,28, 16953, 10, 3.2, NULL, 16951, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Size_Metrics,56, 16953, 12, 3.2, NULL, 16951, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Size_Metrics,56, 16953, 3, 3.2, NULL, 16951, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Size_Metrics,28, 16953, 6, 3.2, NULL, 16951, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Size_Metrics,56, 16953, 9, 3.2, NULL, 16951, NULL)
#else
Msg("Find size of FT_Size_Metrics (16953)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16951,NULL);\n",architecture,16953,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size_Internal,8, 16956, 11, 3.2, NULL, 16955, NULL)
#elif defined __i386__
CheckTypeSize(FT_Size_Internal,4, 16956, 2, 3.2, NULL, 16955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Size_Internal,4, 16956, 10, 3.2, NULL, 16955, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Size_Internal,8, 16956, 12, 3.2, NULL, 16955, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Size_Internal,8, 16956, 3, 3.2, NULL, 16955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Size_Internal,4, 16956, 6, 3.2, NULL, 16955, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Size_Internal,8, 16956, 9, 3.2, NULL, 16955, NULL)
#else
Msg("Find size of FT_Size_Internal (16956)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16955,NULL);\n",architecture,16956,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size,8, 16958, 11, 3.2, NULL, 16957, NULL)
#elif defined __i386__
CheckTypeSize(FT_Size,4, 16958, 2, 3.2, NULL, 16957, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Size,4, 16958, 10, 3.2, NULL, 16957, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Size,8, 16958, 12, 3.2, NULL, 16957, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Size,8, 16958, 3, 3.2, NULL, 16957, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Size,4, 16958, 6, 3.2, NULL, 16957, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Size,8, 16958, 9, 3.2, NULL, 16957, NULL)
#else
Msg("Find size of FT_Size (16958)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16957,NULL);\n",architecture,16958,0);
#endif

#if defined __i386__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,2,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,2,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,4,2,64021)
CheckOffset(struct FT_Bitmap_Size_,size,4,2,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,4,2,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,8,2,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,4,2,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,12,2,64023)
#elif defined __ia64__
CheckTypeSize(struct FT_Bitmap_Size_,32, 22157, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,3,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,3,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,8,3,64021)
CheckOffset(struct FT_Bitmap_Size_,size,8,3,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,8,3,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,16,3,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,8,3,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,24,3,64023)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,6,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,6,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,4,6,64021)
CheckOffset(struct FT_Bitmap_Size_,size,4,6,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,4,6,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,8,6,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,4,6,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,12,6,64023)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_Size_,32, 22157, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,9,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,9,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,8,9,64021)
CheckOffset(struct FT_Bitmap_Size_,size,8,9,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,8,9,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,16,9,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,8,9,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,24,9,64023)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,10,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,10,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,4,10,64021)
CheckOffset(struct FT_Bitmap_Size_,size,4,10,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,4,10,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,8,10,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,4,10,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,12,10,64023)
#elif defined __x86_64__
CheckTypeSize(struct FT_Bitmap_Size_,32, 22157, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,11,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,11,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,8,11,64021)
CheckOffset(struct FT_Bitmap_Size_,size,8,11,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,8,11,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,16,11,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,8,11,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,24,11,64023)
#elif defined __s390x__
CheckTypeSize(struct FT_Bitmap_Size_,32, 22157, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Bitmap_Size_,width,2,12,64020)
CheckOffset(struct FT_Bitmap_Size_,width,2,12,64020)
CheckMemberSize(struct FT_Bitmap_Size_,size,8,12,64021)
CheckOffset(struct FT_Bitmap_Size_,size,8,12,64021)
CheckMemberSize(struct FT_Bitmap_Size_,x_ppem,8,12,64022)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,16,12,64022)
CheckMemberSize(struct FT_Bitmap_Size_,y_ppem,8,12,64023)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,24,12,64023)
#else
Msg("Find size of FT_Bitmap_Size_ (22157)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,22157,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Bitmap_Size,32, 22158, 11, 3.2, NULL, 22157, NULL)
#elif defined __i386__
CheckTypeSize(FT_Bitmap_Size,16, 22158, 2, 3.2, NULL, 22157, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Bitmap_Size,16, 22158, 10, 3.2, NULL, 22157, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Bitmap_Size,32, 22158, 12, 3.2, NULL, 22157, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Bitmap_Size,32, 22158, 3, 3.2, NULL, 22157, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Bitmap_Size,16, 22158, 6, 3.2, NULL, 22157, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Bitmap_Size,32, 22158, 9, 3.2, NULL, 22157, NULL)
#else
Msg("Find size of FT_Bitmap_Size (22158)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22157,NULL);\n",architecture,22158,0);
#endif

#if defined __i386__
CheckTypeSize(FT_Face_Internal,4, 22162, 2, 3.2, NULL, 22161, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Face_Internal,8, 22162, 3, 3.2, NULL, 22161, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Face_Internal,4, 22162, 6, 3.2, NULL, 22161, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Face_Internal,8, 22162, 9, 3.2, NULL, 22161, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Face_Internal,4, 22162, 10, 3.2, NULL, 22161, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Face_Internal,8, 22162, 11, 3.2, NULL, 22161, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Face_Internal,8, 22162, 12, 3.2, NULL, 22161, NULL)
#else
Msg("Find size of FT_Face_Internal (22162)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22161,NULL);\n",architecture,22162,0);
#endif

#if defined __i386__
CheckTypeSize(FT_Driver,4, 22165, 2, 3.2, NULL, 22164, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Driver,8, 22165, 3, 3.2, NULL, 22164, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Driver,4, 22165, 6, 3.2, NULL, 22164, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Driver,8, 22165, 9, 3.2, NULL, 22164, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Driver,4, 22165, 10, 3.2, NULL, 22164, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Driver,8, 22165, 11, 3.2, NULL, 22164, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Driver,8, 22165, 12, 3.2, NULL, 22164, NULL)
#else
Msg("Find size of FT_Driver (22165)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22164,NULL);\n",architecture,22165,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_FaceRec,248, 22166, 11, 3.2, NULL, 11166, NULL)
#elif defined __i386__
CheckTypeSize(FT_FaceRec,132, 22166, 2, 3.2, NULL, 11166, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_FaceRec,132, 22166, 10, 3.2, NULL, 11166, NULL)
#elif defined __s390x__
CheckTypeSize(FT_FaceRec,248, 22166, 12, 3.2, NULL, 11166, NULL)
#elif defined __ia64__
CheckTypeSize(FT_FaceRec,248, 22166, 3, 3.2, NULL, 11166, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_FaceRec,132, 22166, 6, 3.2, NULL, 11166, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_FaceRec,248, 22166, 9, 3.2, NULL, 11166, NULL)
#else
Msg("Find size of FT_FaceRec (22166)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11166,NULL);\n",architecture,22166,0);
#endif

#if 1
CheckTypeSize(FT_Kerning_Mode,4, 22168, 1, 3.2, NULL, 22167, NULL)
#endif

extern FT_Int FT_Get_Charmap_Index_db(FT_CharMap);
CheckInterfacedef(FT_Get_Charmap_Index,FT_Get_Charmap_Index_db);
extern FT_Fixed FT_RoundFix_db(FT_Fixed);
CheckInterfacedef(FT_RoundFix,FT_RoundFix_db);
extern FT_Fixed FT_CeilFix_db(FT_Fixed);
CheckInterfacedef(FT_CeilFix,FT_CeilFix_db);
extern FT_Error FT_Done_FreeType_db(FT_Library);
CheckInterfacedef(FT_Done_FreeType,FT_Done_FreeType_db);
extern FT_Error FT_Init_FreeType_db(FT_Library *);
CheckInterfacedef(FT_Init_FreeType,FT_Init_FreeType_db);
extern FT_ULong FT_Get_First_Char_db(FT_Face, FT_UInt *);
CheckInterfacedef(FT_Get_First_Char,FT_Get_First_Char_db);
extern FT_Error FT_Load_Char_db(FT_Face, FT_ULong, FT_Int32);
CheckInterfacedef(FT_Load_Char,FT_Load_Char_db);
extern void FT_Set_Transform_db(FT_Face, FT_Matrix *, FT_Vector *);
CheckInterfacedef(FT_Set_Transform,FT_Set_Transform_db);
extern void FT_Vector_Transform_db(FT_Vector *, const FT_Matrix *);
CheckInterfacedef(FT_Vector_Transform,FT_Vector_Transform_db);
extern FT_Error FT_Set_Charmap_db(FT_Face, FT_CharMap);
CheckInterfacedef(FT_Set_Charmap,FT_Set_Charmap_db);
extern FT_Error FT_Load_Glyph_db(FT_Face, FT_UInt, FT_Int32);
CheckInterfacedef(FT_Load_Glyph,FT_Load_Glyph_db);
extern FT_Error FT_New_Face_db(FT_Library, const char *, FT_Long, FT_Face *);
CheckInterfacedef(FT_New_Face,FT_New_Face_db);
extern FT_Error FT_Set_Pixel_Sizes_db(FT_Face, FT_UInt, FT_UInt);
CheckInterfacedef(FT_Set_Pixel_Sizes,FT_Set_Pixel_Sizes_db);
extern FT_ULong FT_Get_Next_Char_db(FT_Face, FT_ULong, FT_UInt *);
CheckInterfacedef(FT_Get_Next_Char,FT_Get_Next_Char_db);
extern FT_Fixed FT_FloorFix_db(FT_Fixed);
CheckInterfacedef(FT_FloorFix,FT_FloorFix_db);
extern const char * FT_Get_Postscript_Name_db(FT_Face);
CheckInterfacedef(FT_Get_Postscript_Name,FT_Get_Postscript_Name_db);
extern FT_Error FT_New_Memory_Face_db(FT_Library, const FT_Byte *, FT_Long, FT_Long, FT_Face *);
CheckInterfacedef(FT_New_Memory_Face,FT_New_Memory_Face_db);
extern FT_Error FT_Set_Char_Size_db(FT_Face, FT_F26Dot6, FT_F26Dot6, FT_UInt, FT_UInt);
CheckInterfacedef(FT_Set_Char_Size,FT_Set_Char_Size_db);
extern FT_Error FT_Get_Glyph_Name_db(FT_Face, FT_UInt, FT_Pointer, FT_UInt);
CheckInterfacedef(FT_Get_Glyph_Name,FT_Get_Glyph_Name_db);
extern FT_Long FT_MulDiv_db(FT_Long, FT_Long, FT_Long);
CheckInterfacedef(FT_MulDiv,FT_MulDiv_db);
extern FT_Long FT_DivFix_db(FT_Long, FT_Long);
CheckInterfacedef(FT_DivFix,FT_DivFix_db);
extern void FT_Library_Version_db(FT_Library, FT_Int *, FT_Int *, FT_Int *);
CheckInterfacedef(FT_Library_Version,FT_Library_Version_db);
extern FT_Error FT_Attach_File_db(FT_Face, const char *);
CheckInterfacedef(FT_Attach_File,FT_Attach_File_db);
extern FT_Error FT_Done_Face_db(FT_Face);
CheckInterfacedef(FT_Done_Face,FT_Done_Face_db);
extern FT_Long FT_MulFix_db(FT_Long, FT_Long);
CheckInterfacedef(FT_MulFix,FT_MulFix_db);
extern FT_Error FT_Select_Charmap_db(FT_Face, FT_Encoding);
CheckInterfacedef(FT_Select_Charmap,FT_Select_Charmap_db);
extern FT_Error FT_Render_Glyph_db(FT_GlyphSlot, FT_Render_Mode);
CheckInterfacedef(FT_Render_Glyph,FT_Render_Glyph_db);
extern FT_Error FT_Attach_Stream_db(FT_Face, FT_Open_Args *);
CheckInterfacedef(FT_Attach_Stream,FT_Attach_Stream_db);
extern FT_UInt FT_Get_Name_Index_db(FT_Face, FT_String *);
CheckInterfacedef(FT_Get_Name_Index,FT_Get_Name_Index_db);
extern FT_Error FT_Open_Face_db(FT_Library, const FT_Open_Args *, FT_Long, FT_Face *);
CheckInterfacedef(FT_Open_Face,FT_Open_Face_db);
extern FT_UInt FT_Get_Char_Index_db(FT_Face, FT_ULong);
CheckInterfacedef(FT_Get_Char_Index,FT_Get_Char_Index_db);
extern FT_Error FT_Get_Kerning_db(FT_Face, FT_UInt, FT_UInt, FT_UInt, FT_Vector *);
CheckInterfacedef(FT_Get_Kerning,FT_Get_Kerning_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/freetype.h\n\n",pcnt,cnt);
return cnt;
#endif

}

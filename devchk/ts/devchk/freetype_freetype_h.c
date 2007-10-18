/*
 * Test of freetype/freetype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
CheckTypeSize(struct FT_FaceRec_,132, 11166, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on IA32\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,2,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,2,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,2,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,2,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,2,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,2,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,2,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,2,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,2,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,2,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,2,64034)
CheckOffset(struct FT_FaceRec_,generic,0,2,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,2,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,2,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,2,64038)
CheckOffset(struct FT_FaceRec_,descender,0,2,64039)
CheckOffset(struct FT_FaceRec_,height,0,2,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,2,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,2,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,2,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,2,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,2,64045)
CheckOffset(struct FT_FaceRec_,size,0,2,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,2,64047)
CheckOffset(struct FT_FaceRec_,driver,0,2,64048)
CheckOffset(struct FT_FaceRec_,memory,0,2,64049)
CheckOffset(struct FT_FaceRec_,stream,0,2,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,2,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,2,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,2,64053)
CheckOffset(struct FT_FaceRec_,internal,0,2,64054)
#elif defined __ia64__
CheckTypeSize(struct FT_FaceRec_,0, 11166, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on IA64\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,3,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,3,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,3,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,3,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,3,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,3,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,3,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,3,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,3,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,3,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,3,64034)
CheckOffset(struct FT_FaceRec_,generic,0,3,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,3,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,3,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,3,64038)
CheckOffset(struct FT_FaceRec_,descender,0,3,64039)
CheckOffset(struct FT_FaceRec_,height,0,3,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,3,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,3,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,3,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,3,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,3,64045)
CheckOffset(struct FT_FaceRec_,size,0,3,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,3,64047)
CheckOffset(struct FT_FaceRec_,driver,0,3,64048)
CheckOffset(struct FT_FaceRec_,memory,0,3,64049)
CheckOffset(struct FT_FaceRec_,stream,0,3,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,3,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,3,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,3,64053)
CheckOffset(struct FT_FaceRec_,internal,0,3,64054)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_FaceRec_,0, 11166, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on PPC32\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,6,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,6,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,6,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,6,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,6,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,6,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,6,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,6,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,6,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,6,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,6,64034)
CheckOffset(struct FT_FaceRec_,generic,0,6,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,6,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,6,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,6,64038)
CheckOffset(struct FT_FaceRec_,descender,0,6,64039)
CheckOffset(struct FT_FaceRec_,height,0,6,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,6,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,6,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,6,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,6,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,6,64045)
CheckOffset(struct FT_FaceRec_,size,0,6,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,6,64047)
CheckOffset(struct FT_FaceRec_,driver,0,6,64048)
CheckOffset(struct FT_FaceRec_,memory,0,6,64049)
CheckOffset(struct FT_FaceRec_,stream,0,6,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,6,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,6,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,6,64053)
CheckOffset(struct FT_FaceRec_,internal,0,6,64054)
#elif defined __powerpc64__
CheckTypeSize(struct FT_FaceRec_,0, 11166, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on PPC64\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,9,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,9,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,9,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,9,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,9,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,9,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,9,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,9,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,9,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,9,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,9,64034)
CheckOffset(struct FT_FaceRec_,generic,0,9,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,9,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,9,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,9,64038)
CheckOffset(struct FT_FaceRec_,descender,0,9,64039)
CheckOffset(struct FT_FaceRec_,height,0,9,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,9,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,9,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,9,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,9,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,9,64045)
CheckOffset(struct FT_FaceRec_,size,0,9,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,9,64047)
CheckOffset(struct FT_FaceRec_,driver,0,9,64048)
CheckOffset(struct FT_FaceRec_,memory,0,9,64049)
CheckOffset(struct FT_FaceRec_,stream,0,9,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,9,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,9,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,9,64053)
CheckOffset(struct FT_FaceRec_,internal,0,9,64054)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_FaceRec_,0, 11166, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on S390\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,10,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,10,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,10,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,10,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,10,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,10,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,10,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,10,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,10,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,10,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,10,64034)
CheckOffset(struct FT_FaceRec_,generic,0,10,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,10,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,10,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,10,64038)
CheckOffset(struct FT_FaceRec_,descender,0,10,64039)
CheckOffset(struct FT_FaceRec_,height,0,10,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,10,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,10,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,10,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,10,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,10,64045)
CheckOffset(struct FT_FaceRec_,size,0,10,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,10,64047)
CheckOffset(struct FT_FaceRec_,driver,0,10,64048)
CheckOffset(struct FT_FaceRec_,memory,0,10,64049)
CheckOffset(struct FT_FaceRec_,stream,0,10,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,10,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,10,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,10,64053)
CheckOffset(struct FT_FaceRec_,internal,0,10,64054)
#elif defined __x86_64__
CheckTypeSize(struct FT_FaceRec_,248, 11166, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_FaceRec_,face_index,8,11,64025)
CheckOffset(struct FT_FaceRec_,face_index,8,11,64025)
CheckMemberSize(struct FT_FaceRec_,face_flags,8,11,64026)
CheckOffset(struct FT_FaceRec_,face_flags,16,11,64026)
CheckMemberSize(struct FT_FaceRec_,style_flags,8,11,64027)
CheckOffset(struct FT_FaceRec_,style_flags,24,11,64027)
CheckMemberSize(struct FT_FaceRec_,num_glyphs,8,11,64028)
CheckOffset(struct FT_FaceRec_,num_glyphs,32,11,64028)
CheckMemberSize(struct FT_FaceRec_,family_name,8,11,64029)
CheckOffset(struct FT_FaceRec_,family_name,40,11,64029)
CheckMemberSize(struct FT_FaceRec_,style_name,8,11,64030)
CheckOffset(struct FT_FaceRec_,style_name,48,11,64030)
CheckMemberSize(struct FT_FaceRec_,num_fixed_sizes,4,11,64031)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,56,11,64031)
CheckMemberSize(struct FT_FaceRec_,available_sizes,8,11,64032)
CheckOffset(struct FT_FaceRec_,available_sizes,64,11,64032)
CheckMemberSize(struct FT_FaceRec_,num_charmaps,4,11,64033)
CheckOffset(struct FT_FaceRec_,num_charmaps,72,11,64033)
CheckMemberSize(struct FT_FaceRec_,charmaps,8,11,64034)
CheckOffset(struct FT_FaceRec_,charmaps,80,11,64034)
CheckMemberSize(struct FT_FaceRec_,generic,16,11,64035)
CheckOffset(struct FT_FaceRec_,generic,88,11,64035)
CheckMemberSize(struct FT_FaceRec_,bbox,32,11,64036)
CheckOffset(struct FT_FaceRec_,bbox,104,11,64036)
CheckMemberSize(struct FT_FaceRec_,units_per_EM,2,11,64037)
CheckOffset(struct FT_FaceRec_,units_per_EM,136,11,64037)
CheckMemberSize(struct FT_FaceRec_,ascender,2,11,64038)
CheckOffset(struct FT_FaceRec_,ascender,138,11,64038)
CheckMemberSize(struct FT_FaceRec_,descender,2,11,64039)
CheckOffset(struct FT_FaceRec_,descender,140,11,64039)
CheckMemberSize(struct FT_FaceRec_,height,2,11,64040)
CheckOffset(struct FT_FaceRec_,height,142,11,64040)
CheckMemberSize(struct FT_FaceRec_,max_advance_width,2,11,64041)
CheckOffset(struct FT_FaceRec_,max_advance_width,144,11,64041)
CheckMemberSize(struct FT_FaceRec_,max_advance_height,2,11,64042)
CheckOffset(struct FT_FaceRec_,max_advance_height,146,11,64042)
CheckMemberSize(struct FT_FaceRec_,underline_position,2,11,64043)
CheckOffset(struct FT_FaceRec_,underline_position,148,11,64043)
CheckMemberSize(struct FT_FaceRec_,underline_thickness,2,11,64044)
CheckOffset(struct FT_FaceRec_,underline_thickness,150,11,64044)
CheckMemberSize(struct FT_FaceRec_,glyph,8,11,64045)
CheckOffset(struct FT_FaceRec_,glyph,152,11,64045)
CheckMemberSize(struct FT_FaceRec_,size,8,11,64046)
CheckOffset(struct FT_FaceRec_,size,160,11,64046)
CheckMemberSize(struct FT_FaceRec_,charmap,8,11,64047)
CheckOffset(struct FT_FaceRec_,charmap,168,11,64047)
CheckMemberSize(struct FT_FaceRec_,driver,8,11,64048)
CheckOffset(struct FT_FaceRec_,driver,176,11,64048)
CheckMemberSize(struct FT_FaceRec_,memory,8,11,64049)
CheckOffset(struct FT_FaceRec_,memory,184,11,64049)
CheckMemberSize(struct FT_FaceRec_,stream,8,11,64050)
CheckOffset(struct FT_FaceRec_,stream,192,11,64050)
CheckMemberSize(struct FT_FaceRec_,sizes_list,16,11,64051)
CheckOffset(struct FT_FaceRec_,sizes_list,200,11,64051)
CheckMemberSize(struct FT_FaceRec_,autohint,16,11,64052)
CheckOffset(struct FT_FaceRec_,autohint,216,11,64052)
CheckMemberSize(struct FT_FaceRec_,extensions,8,11,64053)
CheckOffset(struct FT_FaceRec_,extensions,232,11,64053)
CheckMemberSize(struct FT_FaceRec_,internal,8,11,64054)
CheckOffset(struct FT_FaceRec_,internal,240,11,64054)
#elif defined __s390x__
CheckTypeSize(struct FT_FaceRec_,0, 11166, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_FaceRec_ on S390X\n");
CheckOffset(struct FT_FaceRec_,num_faces,0,12,64024)
CheckOffset(struct FT_FaceRec_,face_index,0,12,64025)
CheckOffset(struct FT_FaceRec_,face_flags,0,12,64026)
CheckOffset(struct FT_FaceRec_,style_flags,0,12,64027)
CheckOffset(struct FT_FaceRec_,num_glyphs,0,12,64028)
CheckOffset(struct FT_FaceRec_,family_name,0,12,64029)
CheckOffset(struct FT_FaceRec_,style_name,0,12,64030)
CheckOffset(struct FT_FaceRec_,num_fixed_sizes,0,12,64031)
CheckOffset(struct FT_FaceRec_,available_sizes,0,12,64032)
CheckOffset(struct FT_FaceRec_,num_charmaps,0,12,64033)
CheckOffset(struct FT_FaceRec_,charmaps,0,12,64034)
CheckOffset(struct FT_FaceRec_,generic,0,12,64035)
CheckOffset(struct FT_FaceRec_,bbox,0,12,64036)
CheckOffset(struct FT_FaceRec_,units_per_EM,0,12,64037)
CheckOffset(struct FT_FaceRec_,ascender,0,12,64038)
CheckOffset(struct FT_FaceRec_,descender,0,12,64039)
CheckOffset(struct FT_FaceRec_,height,0,12,64040)
CheckOffset(struct FT_FaceRec_,max_advance_width,0,12,64041)
CheckOffset(struct FT_FaceRec_,max_advance_height,0,12,64042)
CheckOffset(struct FT_FaceRec_,underline_position,0,12,64043)
CheckOffset(struct FT_FaceRec_,underline_thickness,0,12,64044)
CheckOffset(struct FT_FaceRec_,glyph,0,12,64045)
CheckOffset(struct FT_FaceRec_,size,0,12,64046)
CheckOffset(struct FT_FaceRec_,charmap,0,12,64047)
CheckOffset(struct FT_FaceRec_,driver,0,12,64048)
CheckOffset(struct FT_FaceRec_,memory,0,12,64049)
CheckOffset(struct FT_FaceRec_,stream,0,12,64050)
CheckOffset(struct FT_FaceRec_,sizes_list,0,12,64051)
CheckOffset(struct FT_FaceRec_,autohint,0,12,64052)
CheckOffset(struct FT_FaceRec_,extensions,0,12,64053)
CheckOffset(struct FT_FaceRec_,internal,0,12,64054)
#endif

#if defined __i386__
CheckTypeSize(FT_Face,0, 11168, 2, 3.2, NULL, 11167, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Face,8, 11168, 11, 3.2, NULL, 11167, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11167,NULL);\n",architecture,11168,0);
Msg("Find size of FT_Face (11168)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Module,8, 16761, 11, 3.2, NULL, 16760, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16760,NULL);\n",architecture,16761,0);
Msg("Find size of FT_Module (16761)\n");
#endif

#if 1
CheckTypeSize(FT_Library,8, 16773, 1, 3.2, NULL, 16772, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer,8, 16782, 11, 3.2, NULL, 16781, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16781,NULL);\n",architecture,16782,0);
Msg("Find size of FT_Renderer (16782)\n");
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_GlyphSlotRec_,304, 16783, 11, 3.2, NULL, 0, NULL)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16783,0);
Msg("Find size of FT_GlyphSlotRec_ (16783)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_GlyphSlot,8, 16785, 11, 3.2, NULL, 16784, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16784,NULL);\n",architecture,16785,0);
Msg("Find size of FT_GlyphSlot (16785)\n");
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_Glyph_Metrics_,64, 16786, 11, 3.2, NULL, 0, NULL)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16786,0);
Msg("Find size of FT_Glyph_Metrics_ (16786)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_Metrics,64, 16787, 11, 3.2, NULL, 16786, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16786,NULL);\n",architecture,16787,0);
Msg("Find size of FT_Glyph_Metrics (16787)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_SubGlyph,8, 16793, 11, 3.2, NULL, 16792, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16792,NULL);\n",architecture,16793,0);
Msg("Find size of FT_SubGlyph (16793)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Slot_Internal,8, 16802, 11, 3.2, NULL, 16801, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16801,NULL);\n",architecture,16802,0);
Msg("Find size of FT_Slot_Internal (16802)\n");
#endif

#if defined __i386__
CheckTypeSize(struct FT_CharMapRec_,0, 16887, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on IA32\n");
CheckOffset(struct FT_CharMapRec_,face,0,2,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,2,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,2,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,2,54208)
#elif defined __ia64__
CheckTypeSize(struct FT_CharMapRec_,0, 16887, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on IA64\n");
CheckOffset(struct FT_CharMapRec_,face,0,3,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,3,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,3,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,3,54208)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on PPC32\n");
CheckOffset(struct FT_CharMapRec_,face,0,6,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,6,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,6,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,6,54208)
#elif defined __powerpc64__
CheckTypeSize(struct FT_CharMapRec_,0, 16887, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on PPC64\n");
CheckOffset(struct FT_CharMapRec_,face,0,9,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,9,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,9,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,9,54208)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on S390\n");
CheckOffset(struct FT_CharMapRec_,face,0,10,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,10,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,10,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,10,54208)
#elif defined __x86_64__
CheckTypeSize(struct FT_CharMapRec_,16, 16887, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_CharMapRec_,encoding,4,11,54206)
CheckOffset(struct FT_CharMapRec_,encoding,8,11,54206)
CheckMemberSize(struct FT_CharMapRec_,platform_id,2,11,54207)
CheckOffset(struct FT_CharMapRec_,platform_id,12,11,54207)
CheckMemberSize(struct FT_CharMapRec_,encoding_id,2,11,54208)
CheckOffset(struct FT_CharMapRec_,encoding_id,14,11,54208)
#elif defined __s390x__
CheckTypeSize(struct FT_CharMapRec_,0, 16887, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_CharMapRec_ on S390X\n");
CheckOffset(struct FT_CharMapRec_,face,0,12,54186)
CheckOffset(struct FT_CharMapRec_,encoding,0,12,54206)
CheckOffset(struct FT_CharMapRec_,platform_id,0,12,54207)
CheckOffset(struct FT_CharMapRec_,encoding_id,0,12,54208)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16887,0);
Msg("Find size of FT_CharMapRec_ (16887)\n");
#endif

#if 1
CheckTypeSize(FT_Encoding,4, 16889, 1, 3.2, NULL, 16888, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(FT_CharMap,8, 16891, 11, 3.2, NULL, 16890, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16890,NULL);\n",architecture,16891,0);
Msg("Find size of FT_CharMap (16891)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_F26Dot6,8, 16897, 11, 3.2, NULL, 8, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,8,NULL);\n",architecture,16897,0);
Msg("Find size of FT_F26Dot6 (16897)\n");
#endif

#if 1
CheckEnum("FT_RENDER_MODE_NORMAL",FT_RENDER_MODE_NORMAL,0,54209)
CheckEnum("FT_RENDER_MODE_LIGHT",FT_RENDER_MODE_LIGHT,1,54210)
CheckEnum("FT_RENDER_MODE_MONO",FT_RENDER_MODE_MONO,2,54211)
CheckEnum("FT_RENDER_MODE_LCD",FT_RENDER_MODE_LCD,3,54212)
CheckEnum("FT_RENDER_MODE_LCD_V",FT_RENDER_MODE_LCD_V,4,54213)
CheckEnum("FT_RENDER_MODE_MAX",FT_RENDER_MODE_MAX,5,54214)
#endif

#if 1
CheckTypeSize(FT_Render_Mode,4, 16900, 1, 3.2, NULL, 16899, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_Parameter_,16, 16912, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Parameter_,data,8,11,54240)
CheckOffset(struct FT_Parameter_,data,8,11,54240)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16912,0);
Msg("Find size of FT_Parameter_ (16912)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Parameter,16, 16913, 11, 3.2, NULL, 16912, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16912,NULL);\n",architecture,16913,0);
Msg("Find size of FT_Parameter (16913)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Open_Args,64, 16915, 11, 3.2, NULL, 16901, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16901,NULL);\n",architecture,16915,0);
Msg("Find size of FT_Open_Args (16915)\n");
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_SizeRec_,88, 16951, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_SizeRec_,generic,16,11,54279)
CheckOffset(struct FT_SizeRec_,generic,8,11,54279)
CheckMemberSize(struct FT_SizeRec_,metrics,56,11,54288)
CheckOffset(struct FT_SizeRec_,metrics,24,11,54288)
CheckMemberSize(struct FT_SizeRec_,internal,8,11,54289)
CheckOffset(struct FT_SizeRec_,internal,80,11,54289)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16951,0);
Msg("Find size of FT_SizeRec_ (16951)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size_Metrics,56, 16953, 11, 3.2, NULL, 16952, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16952,NULL);\n",architecture,16953,0);
Msg("Find size of FT_Size_Metrics (16953)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size_Internal,8, 16956, 11, 3.2, NULL, 16955, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16955,NULL);\n",architecture,16956,0);
Msg("Find size of FT_Size_Internal (16956)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Size,8, 16958, 11, 3.2, NULL, 16957, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16957,NULL);\n",architecture,16958,0);
Msg("Find size of FT_Size (16958)\n");
#endif

#if defined __i386__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on IA32\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,2,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,2,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,2,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,2,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,2,64023)
#elif defined __ia64__
CheckTypeSize(struct FT_Bitmap_Size_,0, 22157, 3, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on IA64\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,3,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,3,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,3,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,3,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,3,64023)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 6, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on PPC32\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,6,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,6,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,6,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,6,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,6,64023)
#elif defined __powerpc64__
CheckTypeSize(struct FT_Bitmap_Size_,0, 22157, 9, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on PPC64\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,9,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,9,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,9,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,9,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,9,64023)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Bitmap_Size_,16, 22157, 10, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on S390\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,10,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,10,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,10,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,10,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,10,64023)
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
CheckTypeSize(struct FT_Bitmap_Size_,0, 22157, 12, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Bitmap_Size_ on S390X\n");
CheckOffset(struct FT_Bitmap_Size_,height,0,12,64019)
CheckOffset(struct FT_Bitmap_Size_,width,0,12,64020)
CheckOffset(struct FT_Bitmap_Size_,size,0,12,64021)
CheckOffset(struct FT_Bitmap_Size_,x_ppem,0,12,64022)
CheckOffset(struct FT_Bitmap_Size_,y_ppem,0,12,64023)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,22157,0);
Msg("Find size of FT_Bitmap_Size_ (22157)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Bitmap_Size,32, 22158, 11, 3.2, NULL, 22157, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22157,NULL);\n",architecture,22158,0);
Msg("Find size of FT_Bitmap_Size (22158)\n");
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22161,NULL);\n",architecture,22162,0);
Msg("Find size of FT_Face_Internal (22162)\n");
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
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22164,NULL);\n",architecture,22165,0);
Msg("Find size of FT_Driver (22165)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_FaceRec,248, 22166, 11, 3.2, NULL, 11166, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11166,NULL);\n",architecture,22166,0);
Msg("Find size of FT_FaceRec (22166)\n");
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

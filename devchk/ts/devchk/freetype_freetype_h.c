/*
 * Test of freetype/freetype.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
/* No test for ft_encoding_adobe_custom */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_adobe_expert */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_adobe_standard */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_apple_roman */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_big5 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_gb2312 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_johab */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_latin_1 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_latin_2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_none */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_sjis */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_symbol */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_unicode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_encoding_wansung */
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
/* No test for ft_kerning_default */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_kerning_unfitted */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_kerning_unscaled */
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
/* No test for ft_open_driver */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_open_memory */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_open_params */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_open_pathname */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_open_stream */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_render_mode_mono */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_render_mode_normal */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_STYLE_FLAG_BOLD */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_STYLE_FLAG_ITALIC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/freetype.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Pointer,0, 16766, 2, 3.2, NULL, 40, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Encoding,0, 16889, 2, 3.2, NULL, 16888, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_F26Dot6,0, 16897, 2, 3.2, NULL, 8, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_StreamRec_,40, 16903, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StreamRec_ on IA32\n");
CheckOffset(struct FT_StreamRec_,base,0,2,54219)
CheckOffset(struct FT_StreamRec_,size,0,2,54220)
CheckOffset(struct FT_StreamRec_,pos,0,2,54221)
CheckOffset(struct FT_StreamRec_,descriptor,0,2,54224)
CheckOffset(struct FT_StreamRec_,pathname,0,2,54225)
CheckOffset(struct FT_StreamRec_,read,0,2,54230)
CheckOffset(struct FT_StreamRec_,close,0,2,54232)
CheckOffset(struct FT_StreamRec_,memory,0,2,54233)
CheckOffset(struct FT_StreamRec_,cursor,0,2,54234)
CheckOffset(struct FT_StreamRec_,limit,0,2,54235)
#endif

#if defined __i386__
CheckTypeSize(FT_StreamDesc,0, 16905, 2, 3.2, NULL, 16904, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Stream_IoFunc,0, 16909, 2, 3.2, NULL, 16908, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Stream_CloseFunc,0, 16911, 2, 3.2, NULL, 16910, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Open_Args,0, 16915, 2, 3.2, NULL, 16901, NULL)
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

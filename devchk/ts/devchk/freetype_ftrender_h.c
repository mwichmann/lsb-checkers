/*
 * Test of freetype/ftrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftrender.h"



#ifdef TET_TEST
void freetype_ftrender_h()
{
#else
int freetype_ftrender_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in freetype/ftrender.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for FT_Glyph_BBox_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Glyph_Done_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Glyph_Init_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FT_Glyph_Prepare_Func */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FTRenderer_getCBox */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FTRenderer_render */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FTRenderer_setMode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FTRenderer_transform */
#endif

#if 1
CheckTypeSize(struct FT_Renderer_Class_,60, 16778, 1, , NULL, 0, NULL)
Msg("Missing member data for FT_Renderer_Class_ on All\n");
CheckOffset(struct FT_Renderer_Class_,root,0,1,53994)
CheckOffset(struct FT_Renderer_Class_,glyph_format,0,1,54000)
CheckOffset(struct FT_Renderer_Class_,render_glyph,0,1,54062)
CheckOffset(struct FT_Renderer_Class_,transform_glyph,0,1,54067)
CheckOffset(struct FT_Renderer_Class_,get_glyph_cbox,0,1,54075)
CheckOffset(struct FT_Renderer_Class_,set_mode,0,1,54079)
CheckOffset(struct FT_Renderer_Class_,raster_class,0,1,54123)
#endif

#if defined __s390x__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 12, 3.2, NULL, 16803, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 11, 3.2, NULL, 16803, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 10, 3.2, NULL, 16803, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 9, 3.2, NULL, 16803, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 6, 3.2, NULL, 16803, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 3, 3.2, NULL, 16803, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 2, 3.2, NULL, 16803, NULL)
#else
Msg("Find size of FT_Renderer_RenderFunc (16804)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16803,NULL);\n",architecture,16804,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 12, 3.2, NULL, 16806, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 11, 3.2, NULL, 16806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 10, 3.2, NULL, 16806, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 9, 3.2, NULL, 16806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 6, 3.2, NULL, 16806, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 3, 3.2, NULL, 16806, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 2, 3.2, NULL, 16806, NULL)
#else
Msg("Find size of FT_Renderer_TransformFunc (16807)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16806,NULL);\n",architecture,16807,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 12, 3.2, NULL, 16811, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 11, 3.2, NULL, 16811, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 10, 3.2, NULL, 16811, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 9, 3.2, NULL, 16811, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 6, 3.2, NULL, 16811, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 3, 3.2, NULL, 16811, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 2, 3.2, NULL, 16811, NULL)
#else
Msg("Find size of FT_Renderer_GetCBoxFunc (16812)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16811,NULL);\n",architecture,16812,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 12, 3.2, NULL, 16813, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 11, 3.2, NULL, 16813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 10, 3.2, NULL, 16813, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 9, 3.2, NULL, 16813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 6, 3.2, NULL, 16813, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 3, 3.2, NULL, 16813, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 2, 3.2, NULL, 16813, NULL)
#else
Msg("Find size of FT_Renderer_SetModeFunc (16814)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16813,NULL);\n",architecture,16814,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Renderer_Class,120, 16846, 12, 3.2, NULL, 16778, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 11, 3.2, NULL, 16778, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_Class,60, 16846, 10, 3.2, NULL, 16778, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 9, 3.2, NULL, 16778, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_Class,60, 16846, 6, 3.2, NULL, 16778, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 3, 3.2, NULL, 16778, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_Class,60, 16846, 2, 3.2, NULL, 16778, NULL)
#else
Msg("Find size of FT_Renderer_Class (16846)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16778, NULL);\n",architecture,16846,0);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Renderer_RenderFunc_db)(FT_Renderer, FT_GlyphSlot, FT_UInt, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_RenderFunc,FT_Renderer_RenderFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Renderer_TransformFunc_db)(FT_Renderer, FT_GlyphSlot, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Renderer_TransformFunc,FT_Renderer_TransformFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Renderer_GetCBoxFunc_db)(FT_Renderer, FT_GlyphSlot, FT_BBox *);
CheckFunctionTypedef(FT_Renderer_GetCBoxFunc,FT_Renderer_GetCBoxFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Renderer_SetModeFunc_db)(FT_Renderer, FT_ULong, FT_Pointer);
CheckFunctionTypedef(FT_Renderer_SetModeFunc,FT_Renderer_SetModeFunc_db);
#endif

extern FT_Error FT_Set_Renderer_db(FT_Library, FT_Renderer, FT_UInt, FT_Parameter *);
CheckInterfacedef(FT_Set_Renderer,FT_Set_Renderer_db);
extern FT_Renderer FT_Get_Renderer_db(FT_Library, FT_Glyph_Format);
CheckInterfacedef(FT_Get_Renderer,FT_Get_Renderer_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in freetype/ftrender.h\n\n",pcnt,cnt);
return cnt;
#endif

}

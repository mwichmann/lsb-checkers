/*
 * Test of freetype/ftrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftrender.h\n");
#endif

printf("Checking data structures in freetype/ftrender.h\n");
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

#if defined __x86_64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 11, 3.2, NULL, 16803, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 2, 3.2, NULL, 16803, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 10, 3.2, NULL, 16803, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 12, 3.2, NULL, 16803, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 3, 3.2, NULL, 16803, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_RenderFunc,4, 16804, 6, 3.2, NULL, 16803, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_RenderFunc,8, 16804, 9, 3.2, NULL, 16803, NULL)
#else
Msg("Find size of FT_Renderer_RenderFunc (16804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16803,NULL);\n",architecture,16804,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 11, 3.2, NULL, 16806, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 2, 3.2, NULL, 16806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 10, 3.2, NULL, 16806, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 12, 3.2, NULL, 16806, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 3, 3.2, NULL, 16806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_TransformFunc,4, 16807, 6, 3.2, NULL, 16806, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_TransformFunc,8, 16807, 9, 3.2, NULL, 16806, NULL)
#else
Msg("Find size of FT_Renderer_TransformFunc (16807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16806,NULL);\n",architecture,16807,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 11, 3.2, NULL, 16811, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 2, 3.2, NULL, 16811, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 10, 3.2, NULL, 16811, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 12, 3.2, NULL, 16811, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 3, 3.2, NULL, 16811, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,4, 16812, 6, 3.2, NULL, 16811, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_GetCBoxFunc,8, 16812, 9, 3.2, NULL, 16811, NULL)
#else
Msg("Find size of FT_Renderer_GetCBoxFunc (16812)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16811,NULL);\n",architecture,16812,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 11, 3.2, NULL, 16813, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 2, 3.2, NULL, 16813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 10, 3.2, NULL, 16813, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 12, 3.2, NULL, 16813, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 3, 3.2, NULL, 16813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_SetModeFunc,4, 16814, 6, 3.2, NULL, 16813, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_SetModeFunc,8, 16814, 9, 3.2, NULL, 16813, NULL)
#else
Msg("Find size of FT_Renderer_SetModeFunc (16814)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16813,NULL);\n",architecture,16814,0);
#endif

#if defined __x86_64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 11, 3.2, NULL, 16778, NULL)
#elif defined __i386__
CheckTypeSize(FT_Renderer_Class,60, 16846, 2, 3.2, NULL, 16778, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Renderer_Class,60, 16846, 10, 3.2, NULL, 16778, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Renderer_Class,120, 16846, 12, 3.2, NULL, 16778, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 3, 3.2, NULL, 16778, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Renderer_Class,60, 16846, 6, 3.2, NULL, 16778, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Renderer_Class,120, 16846, 9, 3.2, NULL, 16778, NULL)
#else
Msg("Find size of FT_Renderer_Class (16846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16778, NULL);\n",architecture,16846,0);
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
printf("%d tests passed out of %d tests in freetype/ftrender.h\n\n",pcnt,cnt);
return cnt;
#endif

}

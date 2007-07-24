/*
 * Test of freetype/ftrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftrender.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Glyph_Format,0, 16780, 2, 3.2, NULL, 16779, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Renderer,0, 16782, 2, 3.2, NULL, 16781, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Parameter,0, 16913, 2, 3.2, NULL, 16912, NULL)
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

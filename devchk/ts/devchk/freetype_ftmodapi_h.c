/*
 * Test of freetype/ftmodapi.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftmodapi.h"



#ifdef TET_TEST
void freetype_ftmodapi_h()
{
#else
int freetype_ftmodapi_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftmodapi.h\n");
#endif

printf("Checking data structures in freetype/ftmodapi.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_HAS_HINTER
	CompareConstant(FT_MODULE_DRIVER_HAS_HINTER,0x400,10446,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_HAS_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_NO_OUTLINES
	CompareConstant(FT_MODULE_DRIVER_NO_OUTLINES,0x200,10447,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_NO_OUTLINES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_DRIVER_SCALABLE
	CompareConstant(FT_MODULE_DRIVER_SCALABLE,0x100,10448,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_DRIVER_SCALABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_FONT_DRIVER
	CompareConstant(FT_MODULE_FONT_DRIVER,1,10449,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_FONT_DRIVER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_HINTER
	CompareConstant(FT_MODULE_HINTER,4,10450,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_HINTER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_RENDERER
	CompareConstant(FT_MODULE_RENDERER,2,10451,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_RENDERER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_MODULE_STYLER
	CompareConstant(FT_MODULE_STYLER,8,10452,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MODULE_STYLER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_driver_has_hinter */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_driver_no_outlines */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_driver_scalable */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_font_driver */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_hinter */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_renderer */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for ft_module_styler */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftmodapi.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Module,0, 16761, 2, 3.2, NULL, 16760, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Module_Class,0, 16770, 2, 3.2, NULL, 16753, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Library,0, 16773, 2, 3.2, NULL, 16772, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_DebugHook_Func,0, 16868, 2, 3.2, NULL, 6988, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftmodapi.h\n\n",pcnt,cnt);
return cnt;
#endif

}

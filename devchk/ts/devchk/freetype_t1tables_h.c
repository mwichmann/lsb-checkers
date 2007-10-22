/*
 * Test of freetype/t1tables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/t1tables.h"



#ifdef TET_TEST
void freetype_t1tables_h()
{
#else
int freetype_t1tables_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/t1tables.h\n");
#endif

printf("Checking data structures in freetype/t1tables.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_MM_AXIS
	CompareConstant(T1_MAX_MM_AXIS,4,10534,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_MM_AXIS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_MM_DESIGNS
	CompareConstant(T1_MAX_MM_DESIGNS,16,10535,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_MM_DESIGNS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_MM_MAP_POINTS
	CompareConstant(T1_MAX_MM_MAP_POINTS,20,10536,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_MM_MAP_POINTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_blue_scale */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_blue_shift */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_blue_values */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_family_blues */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_family_other_blues */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_force_bold */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_italic_angle */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_max */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_other_blues */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_standard_height */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_standard_widths */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_stem_snap_heights */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_stem_snap_widths */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_underline_position */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for t1_blend_underline_thickness */
#endif

#if defined __x86_64__
CheckTypeSize(PS_PrivateRec,224, 16987, 11, 3.2, NULL, 16980, NULL)
#elif defined __i386__
CheckTypeSize(PS_PrivateRec,196, 16987, 2, 3.2, NULL, 16980, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PS_PrivateRec,196, 16987, 10, 3.2, NULL, 16980, NULL)
#elif defined __s390x__
CheckTypeSize(PS_PrivateRec,224, 16987, 12, 3.2, NULL, 16980, NULL)
#elif defined __ia64__
CheckTypeSize(PS_PrivateRec,224, 16987, 3, 3.2, NULL, 16980, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16980,NULL);\n",architecture,16987,0);
Msg("Find size of PS_PrivateRec (16987)\n");
#endif

#if defined __x86_64__
CheckTypeSize(PS_FontInfoRec,56, 16990, 11, 3.2, NULL, 16989, NULL)
#elif defined __i386__
CheckTypeSize(PS_FontInfoRec,32, 16990, 2, 3.2, NULL, 16989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PS_FontInfoRec,32, 16990, 10, 3.2, NULL, 16989, NULL)
#elif defined __s390x__
CheckTypeSize(PS_FontInfoRec,56, 16990, 12, 3.2, NULL, 16989, NULL)
#elif defined __ia64__
CheckTypeSize(PS_FontInfoRec,56, 16990, 3, 3.2, NULL, 16989, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16989, NULL);\n",architecture,16990,0);
Msg("Find size of PS_FontInfoRec (16990)\n");
#endif

extern FT_Int FT_Has_PS_Glyph_Names_db(FT_Face);
CheckInterfacedef(FT_Has_PS_Glyph_Names,FT_Has_PS_Glyph_Names_db);
extern FT_Error FT_Get_PS_Font_Private_db(FT_Face, PS_PrivateRec *);
CheckInterfacedef(FT_Get_PS_Font_Private,FT_Get_PS_Font_Private_db);
extern FT_Error FT_Get_PS_Font_Info_db(FT_Face, PS_FontInfoRec *);
CheckInterfacedef(FT_Get_PS_Font_Info,FT_Get_PS_Font_Info_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/t1tables.h\n\n",pcnt,cnt);
return cnt;
#endif

}

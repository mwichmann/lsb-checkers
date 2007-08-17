/*
 * Test of freetype/t1tables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
/* No test for freetype/t1tables.h */
#endif

#if 1
CheckTypeSize(FT_Error,0, 16737, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(FT_Int,0, 16751, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(FT_Long,0, 16755, 1, 3.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(FT_String,0, 16756, 1, 3.2, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(FT_Fixed,0, 16759, 1, 3.2, NULL, 8, NULL)
#endif

#if 1
CheckTypeSize(FT_UShort,0, 16789, 1, 3.2, NULL, 11209, NULL)
#endif

#if 1
CheckTypeSize(FT_Bool,0, 16796, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Byte,0, 16866, 1, 3.2, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(FT_Short,0, 16981, 1, 3.2, NULL, 11264, NULL)
#endif

#if 1
CheckTypeSize(PS_PrivateRec,0, 16987, 1, 3.2, NULL, 16980, NULL)
#endif

#if 1
CheckTypeSize(PS_FontInfoRec,0, 16990, 1, 3.2, NULL, 16989, NULL)
#endif

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

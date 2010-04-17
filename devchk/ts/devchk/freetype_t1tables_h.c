/*
 * Test of freetype/t1tables.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <ft2build.h>
#include FT_FREETYPE_H

#define PS_FontInfoRec_ PS_FontInfoRec
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if 1
CheckTypeSize(struct PS_PrivateRec_,196, 16980, 1, , NULL, 0, NULL)
Msg("Missing member data for PS_PrivateRec_ on All\n");
CheckOffset(struct PS_PrivateRec_,unique_id,0,1,54326)
CheckOffset(struct PS_PrivateRec_,lenIV,0,1,54327)
CheckOffset(struct PS_PrivateRec_,num_blue_values,0,1,54328)
CheckOffset(struct PS_PrivateRec_,num_other_blues,0,1,54329)
CheckOffset(struct PS_PrivateRec_,num_family_blues,0,1,54330)
CheckOffset(struct PS_PrivateRec_,num_family_other_blues,0,1,54331)
CheckOffset(struct PS_PrivateRec_,blue_values,0,1,54332)
CheckOffset(struct PS_PrivateRec_,other_blues,0,1,54333)
CheckOffset(struct PS_PrivateRec_,family_blues,0,1,54334)
CheckOffset(struct PS_PrivateRec_,family_other_blues,0,1,54335)
CheckOffset(struct PS_PrivateRec_,blue_scale,0,1,54336)
CheckOffset(struct PS_PrivateRec_,blue_shift,0,1,54337)
CheckOffset(struct PS_PrivateRec_,blue_fuzz,0,1,54338)
CheckOffset(struct PS_PrivateRec_,standard_width,0,1,54339)
CheckOffset(struct PS_PrivateRec_,standard_height,0,1,54340)
CheckOffset(struct PS_PrivateRec_,num_snap_widths,0,1,54341)
CheckOffset(struct PS_PrivateRec_,num_snap_heights,0,1,54342)
CheckOffset(struct PS_PrivateRec_,force_bold,0,1,54343)
CheckOffset(struct PS_PrivateRec_,round_stem_up,0,1,54344)
CheckOffset(struct PS_PrivateRec_,snap_widths,0,1,54345)
CheckOffset(struct PS_PrivateRec_,snap_heights,0,1,54346)
CheckOffset(struct PS_PrivateRec_,expansion_factor,0,1,54347)
CheckOffset(struct PS_PrivateRec_,language_group,0,1,54348)
CheckOffset(struct PS_PrivateRec_,password,0,1,54349)
CheckOffset(struct PS_PrivateRec_,min_feature,0,1,54350)
#endif

#if defined __s390x__
CheckTypeSize(PS_PrivateRec,224, 16987, 12, 3.2, NULL, 16980, NULL)
#elif defined __x86_64__
CheckTypeSize(PS_PrivateRec,224, 16987, 11, 3.2, NULL, 16980, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PS_PrivateRec,196, 16987, 10, 3.2, NULL, 16980, NULL)
#elif defined __powerpc64__
CheckTypeSize(PS_PrivateRec,224, 16987, 9, 3.2, NULL, 16980, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PS_PrivateRec,196, 16987, 6, 3.2, NULL, 16980, NULL)
#elif defined __ia64__
CheckTypeSize(PS_PrivateRec,224, 16987, 3, 3.2, NULL, 16980, NULL)
#elif defined __i386__
CheckTypeSize(PS_PrivateRec,196, 16987, 2, 3.2, NULL, 16980, NULL)
#else
Msg("Find size of PS_PrivateRec (16987)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16980,NULL);\n",architecture,16987,0);
#endif

#if 1
CheckTypeSize(struct PS_FontInfoRec,32, 16989, 1, , NULL, 0, NULL)
Msg("Missing member data for PS_FontInfoRec on All\n");
CheckOffset(struct PS_FontInfoRec,version,0,1,54351)
CheckOffset(struct PS_FontInfoRec,notice,0,1,54352)
CheckOffset(struct PS_FontInfoRec,full_name,0,1,54353)
CheckOffset(struct PS_FontInfoRec,family_name,0,1,54354)
CheckOffset(struct PS_FontInfoRec,weight,0,1,54355)
CheckOffset(struct PS_FontInfoRec,italic_angle,0,1,54356)
CheckOffset(struct PS_FontInfoRec,is_fixed_pitch,0,1,54357)
CheckOffset(struct PS_FontInfoRec,underline_position,0,1,54358)
CheckOffset(struct PS_FontInfoRec,underline_thickness,0,1,54359)
#endif

#if defined __s390x__
CheckTypeSize(PS_FontInfoRec,56, 16990, 12, 3.2, NULL, 16989, NULL)
#elif defined __x86_64__
CheckTypeSize(PS_FontInfoRec,56, 16990, 11, 3.2, NULL, 16989, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PS_FontInfoRec,32, 16990, 10, 3.2, NULL, 16989, NULL)
#elif defined __powerpc64__
CheckTypeSize(PS_FontInfoRec,56, 16990, 9, 3.2, NULL, 16989, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PS_FontInfoRec,32, 16990, 6, 3.2, NULL, 16989, NULL)
#elif defined __ia64__
CheckTypeSize(PS_FontInfoRec,56, 16990, 3, 3.2, NULL, 16989, NULL)
#elif defined __i386__
CheckTypeSize(PS_FontInfoRec,32, 16990, 2, 3.2, NULL, 16989, NULL)
#else
Msg("Find size of PS_FontInfoRec (16990)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16989,NULL);\n",architecture,16990,0);
#endif

#if defined __s390x__
CheckTypeSize(T1_Blend_Flags,112, 37131, 12, 4.0, NULL, 37130, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(T1_Blend_Flags,56, 37131, 10, 4.0, NULL, 37130, NULL)
#elif defined __powerpc64__
CheckTypeSize(T1_Blend_Flags,112, 37131, 9, 4.0, NULL, 37130, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(T1_Blend_Flags,56, 37131, 6, 4.0, NULL, 37130, NULL)
#elif defined __ia64__
CheckTypeSize(T1_Blend_Flags,112, 37131, 3, 4.0, NULL, 37130, NULL)
#elif defined __i386__
CheckTypeSize(T1_Blend_Flags,56, 37131, 2, 4.0, NULL, 37130, NULL)
#elif defined __x86_64__
Msg("Find size of T1_Blend_Flags (37131)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,37130,NULL);\n",architecture,37131,0);
#else
Msg("Find size of T1_Blend_Flags (37131)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,37130, NULL);\n",architecture,37131,0);
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

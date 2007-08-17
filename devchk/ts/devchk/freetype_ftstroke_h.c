/*
 * Test of freetype/ftstroke.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftstroke.h"



#ifdef TET_TEST
void freetype_ftstroke_h()
{
#else
int freetype_ftstroke_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftstroke.h\n");
#endif

printf("Checking data structures in freetype/ftstroke.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftstroke.h */
#endif

#if 1
CheckTypeSize(FT_Vector,0, 16743, 1, 3.2, NULL, 16741, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline,0, 16745, 1, 3.2, NULL, 16740, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph,0, 16854, 1, 3.2, NULL, 16853, NULL)
#endif

#if 1
CheckTypeSize(FT_Angle,0, 16921, 1, 3.2, NULL, 16759, NULL)
#endif

#if 1
CheckTypeSize(struct FT_StrokerRec_,120, 16965, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StrokerRec_ on All\n");
CheckOffset(struct FT_StrokerRec_,angle_in,0,1,54296)
CheckOffset(struct FT_StrokerRec_,angle_out,0,1,54297)
CheckOffset(struct FT_StrokerRec_,center,0,1,54298)
CheckOffset(struct FT_StrokerRec_,first_point,0,1,54299)
CheckOffset(struct FT_StrokerRec_,subpath_open,0,1,54300)
CheckOffset(struct FT_StrokerRec_,subpath_angle,0,1,54301)
CheckOffset(struct FT_StrokerRec_,subpath_start,0,1,54302)
CheckOffset(struct FT_StrokerRec_,line_cap,0,1,54306)
CheckOffset(struct FT_StrokerRec_,line_join,0,1,54310)
CheckOffset(struct FT_StrokerRec_,miter_limit,0,1,54311)
CheckOffset(struct FT_StrokerRec_,radius,0,1,54312)
CheckOffset(struct FT_StrokerRec_,valid,0,1,54313)
CheckOffset(struct FT_StrokerRec_,borders,0,1,54322)
CheckOffset(struct FT_StrokerRec_,memory,0,1,54323)
#endif

#if 1
CheckTypeSize(FT_Stroker_LineCap,0, 16967, 1, 3.2, NULL, 16966, NULL)
#endif

#if 1
CheckTypeSize(FT_Stroker_LineJoin,0, 16969, 1, 3.2, NULL, 16968, NULL)
#endif

#if 1
CheckTypeSize(FT_StrokeBorderRec,0, 16971, 1, 3.2, NULL, 16970, NULL)
#endif

#if 1
CheckTypeSize(FT_Stroker,0, 16974, 1, 3.2, NULL, 16973, NULL)
#endif

#if 1
CheckTypeSize(FT_StrokerBorder,0, 16976, 1, 3.2, NULL, 16975, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftstroke.h\n\n",pcnt,cnt);
return cnt;
#endif

}

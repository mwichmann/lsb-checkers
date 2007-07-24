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

#if defined __i386__
CheckTypeSize(FT_Vector,0, 16743, 2, 3.2, NULL, 16741, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Outline,0, 16745, 2, 3.2, NULL, 16740, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Glyph,0, 16854, 2, 3.2, NULL, 16853, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Angle,0, 16921, 2, 3.2, NULL, 16759, NULL)
#endif

#if defined __i386__
CheckTypeSize(struct FT_StrokerRec_,120, 16965, 2, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_StrokerRec_ on IA32\n");
CheckOffset(struct FT_StrokerRec_,angle_in,0,2,54296)
CheckOffset(struct FT_StrokerRec_,angle_out,0,2,54297)
CheckOffset(struct FT_StrokerRec_,center,0,2,54298)
CheckOffset(struct FT_StrokerRec_,first_point,0,2,54299)
CheckOffset(struct FT_StrokerRec_,subpath_open,0,2,54300)
CheckOffset(struct FT_StrokerRec_,subpath_angle,0,2,54301)
CheckOffset(struct FT_StrokerRec_,subpath_start,0,2,54302)
CheckOffset(struct FT_StrokerRec_,line_cap,0,2,54306)
CheckOffset(struct FT_StrokerRec_,line_join,0,2,54310)
CheckOffset(struct FT_StrokerRec_,miter_limit,0,2,54311)
CheckOffset(struct FT_StrokerRec_,radius,0,2,54312)
CheckOffset(struct FT_StrokerRec_,valid,0,2,54313)
CheckOffset(struct FT_StrokerRec_,borders,0,2,54322)
CheckOffset(struct FT_StrokerRec_,memory,0,2,54323)
#endif

#if defined __i386__
CheckTypeSize(FT_Stroker_LineCap,0, 16967, 2, 3.2, NULL, 16966, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_Stroker_LineJoin,0, 16969, 2, 3.2, NULL, 16968, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_StrokeBorderRec,0, 16971, 2, 3.2, NULL, 16970, NULL)
#endif

#if 1
#endif

#if defined __i386__
CheckTypeSize(FT_Stroker,0, 16974, 2, 3.2, NULL, 16973, NULL)
#endif

#if defined __i386__
CheckTypeSize(FT_StrokerBorder,0, 16976, 2, 3.2, NULL, 16975, NULL)
#endif

extern FT_Error FT_Glyph_Stroke_db(FT_Glyph *, FT_Stroker, FT_Bool);
CheckInterfacedef(FT_Glyph_Stroke,FT_Glyph_Stroke_db);
extern FT_Error FT_Stroker_ConicTo_db(FT_Stroker, FT_Vector *, FT_Vector *);
CheckInterfacedef(FT_Stroker_ConicTo,FT_Stroker_ConicTo_db);
extern void FT_Stroker_Done_db(FT_Stroker);
CheckInterfacedef(FT_Stroker_Done,FT_Stroker_Done_db);
extern FT_StrokerBorder FT_Outline_GetInsideBorder_db(FT_Outline *);
CheckInterfacedef(FT_Outline_GetInsideBorder,FT_Outline_GetInsideBorder_db);
extern FT_Error FT_Stroker_ParseOutline_db(FT_Stroker, FT_Outline *, FT_Bool);
CheckInterfacedef(FT_Stroker_ParseOutline,FT_Stroker_ParseOutline_db);
extern FT_Error FT_Stroker_New_db(FT_Memory, FT_Stroker *);
CheckInterfacedef(FT_Stroker_New,FT_Stroker_New_db);
extern FT_Error FT_Stroker_BeginSubPath_db(FT_Stroker, FT_Vector *, FT_Bool);
CheckInterfacedef(FT_Stroker_BeginSubPath,FT_Stroker_BeginSubPath_db);
extern void FT_Stroker_Set_db(FT_Stroker, FT_Fixed, FT_Stroker_LineCap, FT_Stroker_LineJoin, FT_Fixed);
CheckInterfacedef(FT_Stroker_Set,FT_Stroker_Set_db);
extern void FT_Stroker_Rewind_db(FT_Stroker);
CheckInterfacedef(FT_Stroker_Rewind,FT_Stroker_Rewind_db);
extern FT_Error FT_Glyph_StrokeBorder_db(FT_Glyph *, FT_Stroker, FT_Bool, FT_Bool);
CheckInterfacedef(FT_Glyph_StrokeBorder,FT_Glyph_StrokeBorder_db);
extern FT_StrokerBorder FT_Outline_GetOutsideBorder_db(FT_Outline *);
CheckInterfacedef(FT_Outline_GetOutsideBorder,FT_Outline_GetOutsideBorder_db);
extern void FT_Stroker_Export_db(FT_Stroker, FT_Outline *);
CheckInterfacedef(FT_Stroker_Export,FT_Stroker_Export_db);
extern FT_Error FT_Stroker_GetCounts_db(FT_Stroker, FT_UInt *, FT_UInt *);
CheckInterfacedef(FT_Stroker_GetCounts,FT_Stroker_GetCounts_db);
extern FT_Error FT_Stroker_CubicTo_db(FT_Stroker, FT_Vector *, FT_Vector *, FT_Vector *);
CheckInterfacedef(FT_Stroker_CubicTo,FT_Stroker_CubicTo_db);
extern FT_Error FT_Stroker_LineTo_db(FT_Stroker, FT_Vector *);
CheckInterfacedef(FT_Stroker_LineTo,FT_Stroker_LineTo_db);
extern FT_Error FT_Stroker_GetBorderCounts_db(FT_Stroker, FT_StrokerBorder, FT_UInt *, FT_UInt *);
CheckInterfacedef(FT_Stroker_GetBorderCounts,FT_Stroker_GetBorderCounts_db);
extern FT_Error FT_Stroker_EndSubPath_db(FT_Stroker);
CheckInterfacedef(FT_Stroker_EndSubPath,FT_Stroker_EndSubPath_db);
extern void FT_Stroker_ExportBorder_db(FT_Stroker, FT_StrokerBorder, FT_Outline *);
CheckInterfacedef(FT_Stroker_ExportBorder,FT_Stroker_ExportBorder_db);
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

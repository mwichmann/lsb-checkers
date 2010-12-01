/*
 * Test of freetype/ftstroke.h
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in freetype/ftstroke.h\n");
#if 1
CheckTypeSize(FT_Stroker_LineCap,4, 16967, 1, 3.2, NULL, 16966, NULL)
#endif

#if 1
CheckTypeSize(FT_Stroker_LineJoin,4, 16969, 1, 3.2, NULL, 16968, NULL)
#endif

#if defined __s390x__
CheckTypeSize(FT_Stroker,8, 16974, 12, 3.2, NULL, 16973, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Stroker,8, 16974, 11, 3.2, NULL, 16973, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Stroker,4, 16974, 10, 3.2, NULL, 16973, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Stroker,8, 16974, 9, 3.2, NULL, 16973, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Stroker,4, 16974, 6, 3.2, NULL, 16973, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Stroker,8, 16974, 3, 3.2, NULL, 16973, NULL)
#elif defined __i386__
CheckTypeSize(FT_Stroker,4, 16974, 2, 3.2, NULL, 16973, NULL)
#else
Msg("Find size of FT_Stroker (16974)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16973,NULL);\n",architecture,16974,0);
#endif

#if 1
CheckTypeSize(FT_StrokerBorder,4, 16976, 1, 3.2, NULL, 16975, NULL)
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
extern FT_Error FT_Stroker_New_db(FT_Library, FT_Stroker *);
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
Msg("%d tests passed out of %d tests in freetype/ftstroke.h\n\n",pcnt,cnt);
return cnt;
#endif

}

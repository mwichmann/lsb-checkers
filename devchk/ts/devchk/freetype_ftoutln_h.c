/*
 * Test of freetype/ftoutln.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/ftoutln.h"



#ifdef TET_TEST
void freetype_ftoutln_h()
{
#else
int freetype_ftoutln_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftoutln.h\n");
#endif

printf("Checking data structures in freetype/ftoutln.h\n");
#if 1
CheckTypeSize(FT_Orientation,4, 16886, 1, 3.2, NULL, 16885, NULL)
#endif

extern void FT_Outline_Reverse_db(FT_Outline *);
CheckInterfacedef(FT_Outline_Reverse,FT_Outline_Reverse_db);
extern FT_Error FT_Outline_New_db(FT_Library, FT_UInt, FT_Int, FT_Outline *);
CheckInterfacedef(FT_Outline_New,FT_Outline_New_db);
extern void FT_Outline_Transform_db(const FT_Outline *, const FT_Matrix *);
CheckInterfacedef(FT_Outline_Transform,FT_Outline_Transform_db);
extern FT_Error FT_Outline_Done_db(FT_Library, FT_Outline *);
CheckInterfacedef(FT_Outline_Done,FT_Outline_Done_db);
extern void FT_Outline_Translate_db(const FT_Outline *, FT_Pos, FT_Pos);
CheckInterfacedef(FT_Outline_Translate,FT_Outline_Translate_db);
extern FT_Error FT_Outline_Render_db(FT_Library, FT_Outline *, FT_Raster_Params *);
CheckInterfacedef(FT_Outline_Render,FT_Outline_Render_db);
extern void FT_Outline_Get_CBox_db(const FT_Outline *, FT_BBox *);
CheckInterfacedef(FT_Outline_Get_CBox,FT_Outline_Get_CBox_db);
extern FT_Error FT_Outline_Get_Bitmap_db(FT_Library, FT_Outline *, const FT_Bitmap *);
CheckInterfacedef(FT_Outline_Get_Bitmap,FT_Outline_Get_Bitmap_db);
extern FT_Error FT_Outline_Decompose_db(FT_Outline *, const FT_Outline_Funcs *, void *);
CheckInterfacedef(FT_Outline_Decompose,FT_Outline_Decompose_db);
extern FT_Error FT_Outline_Check_db(FT_Outline *);
CheckInterfacedef(FT_Outline_Check,FT_Outline_Check_db);
extern FT_Error FT_Outline_Copy_db(const FT_Outline *, FT_Outline *);
CheckInterfacedef(FT_Outline_Copy,FT_Outline_Copy_db);
extern FT_Orientation FT_Outline_Get_Orientation_db(FT_Outline *);
CheckInterfacedef(FT_Outline_Get_Orientation,FT_Outline_Get_Orientation_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftoutln.h\n\n",pcnt,cnt);
return cnt;
#endif

}

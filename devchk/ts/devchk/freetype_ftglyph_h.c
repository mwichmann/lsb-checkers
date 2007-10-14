/*
 * Test of freetype/ftglyph.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "freetype/ftglyph.h"



#ifdef TET_TEST
void freetype_ftglyph_h()
{
#else
int freetype_ftglyph_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in freetype/ftglyph.h\n");
#endif

printf("Checking data structures in freetype/ftglyph.h\n");
#if 1
CheckTypeSize(struct FT_Glyph_Class_,32, 16848, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Glyph_Class_ on All\n");
CheckOffset(struct FT_Glyph_Class_,glyph_size,0,1,54126)
CheckOffset(struct FT_Glyph_Class_,glyph_format,0,1,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_init,0,1,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_done,0,1,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,0,1,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,0,1,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,0,1,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,0,1,54149)
#endif

#if 1
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_GlyphRec_ on All\n");
CheckOffset(struct FT_GlyphRec_,library,0,1,54128)
CheckOffset(struct FT_GlyphRec_,clazz,0,1,54129)
CheckOffset(struct FT_GlyphRec_,format,0,1,54130)
CheckOffset(struct FT_GlyphRec_,advance,0,1,54131)
#endif

#if 1
CheckTypeSize(FT_Glyph_Class,0, 16850, 1, 3.2, NULL, 16848, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph,0, 16854, 1, 3.2, NULL, 16853, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_InitFunc,0, 16856, 1, 3.2, NULL, 16855, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_DoneFunc,0, 16858, 1, 3.2, NULL, 16857, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_CopyFunc,0, 16860, 1, 3.2, NULL, 16859, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_TransformFunc,0, 16862, 1, 3.2, NULL, 16861, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_GetBBoxFunc,0, 16864, 1, 3.2, NULL, 16863, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_PrepareFunc,0, 16865, 1, 3.2, NULL, 16855, NULL)
#endif

#if 1
CheckTypeSize(FT_Render_Mode,0, 16900, 1, 3.2, NULL, 16899, NULL)
#endif

#if 1
CheckTypeSize(FT_Glyph_BBox_Mode,0, 22170, 1, 3.2, NULL, 22169, NULL)
#endif

extern void FT_Done_Glyph_db(FT_Glyph);
CheckInterfacedef(FT_Done_Glyph,FT_Done_Glyph_db);
extern void FT_Matrix_Multiply_db(const FT_Matrix *, FT_Matrix *);
CheckInterfacedef(FT_Matrix_Multiply,FT_Matrix_Multiply_db);
extern FT_Error FT_Glyph_Transform_db(FT_Glyph, FT_Matrix *, FT_Vector *);
CheckInterfacedef(FT_Glyph_Transform,FT_Glyph_Transform_db);
extern FT_Error FT_Matrix_Invert_db(FT_Matrix *);
CheckInterfacedef(FT_Matrix_Invert,FT_Matrix_Invert_db);
extern FT_Error FT_Glyph_To_Bitmap_db(FT_Glyph *, FT_Render_Mode, FT_Vector *, FT_Bool);
CheckInterfacedef(FT_Glyph_To_Bitmap,FT_Glyph_To_Bitmap_db);
extern void FT_Glyph_Get_CBox_db(FT_Glyph, FT_UInt, FT_BBox *);
CheckInterfacedef(FT_Glyph_Get_CBox,FT_Glyph_Get_CBox_db);
extern FT_Error FT_Glyph_Copy_db(FT_Glyph, FT_Glyph *);
CheckInterfacedef(FT_Glyph_Copy,FT_Glyph_Copy_db);
extern FT_Error FT_Get_Glyph_db(FT_GlyphSlot, FT_Glyph *);
CheckInterfacedef(FT_Get_Glyph,FT_Get_Glyph_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/ftglyph.h\n\n",pcnt,cnt);
return cnt;
#endif

}

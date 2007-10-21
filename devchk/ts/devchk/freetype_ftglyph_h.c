/*
 * Test of freetype/ftglyph.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_RENDER_H

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
#if defined __x86_64__
CheckTypeSize(struct FT_Glyph_Class_,64, 16848, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,11,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,8,11,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,8,11,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,16,11,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,8,11,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,24,11,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,8,11,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,32,11,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,8,11,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,40,11,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,8,11,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,48,11,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,8,11,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,56,11,54149)
#elif defined __i386__
CheckTypeSize(struct FT_Glyph_Class_,32, 16848, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,2,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,4,2,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,4,2,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,8,2,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,4,2,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,12,2,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,4,2,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,16,2,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,4,2,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,20,2,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,4,2,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,24,2,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,4,2,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,28,2,54149)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_Glyph_Class_,32, 16848, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,10,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,4,10,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,4,10,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,8,10,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,4,10,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,12,10,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,4,10,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,16,10,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,4,10,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,20,10,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,4,10,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,24,10,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,4,10,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,28,10,54149)
#elif defined __s390x__
CheckTypeSize(struct FT_Glyph_Class_,64, 16848, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,12,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,8,12,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,8,12,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,16,12,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,8,12,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,24,12,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,8,12,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,32,12,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,8,12,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,40,12,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,8,12,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,48,12,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,8,12,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,56,12,54149)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16848,0);
Msg("Find size of FT_Glyph_Class_ (16848)\n");
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,11,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,11,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,11,54130)
CheckOffset(struct FT_GlyphRec_,format,16,11,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,11,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,11,54131)
#elif defined __i386__
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,4,2,54129)
CheckOffset(struct FT_GlyphRec_,clazz,4,2,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,2,54130)
CheckOffset(struct FT_GlyphRec_,format,8,2,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,8,2,54131)
CheckOffset(struct FT_GlyphRec_,advance,12,2,54131)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,4,10,54129)
CheckOffset(struct FT_GlyphRec_,clazz,4,10,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,10,54130)
CheckOffset(struct FT_GlyphRec_,format,8,10,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,8,10,54131)
CheckOffset(struct FT_GlyphRec_,advance,12,10,54131)
#elif defined __s390x__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,12,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,12,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,12,54130)
CheckOffset(struct FT_GlyphRec_,format,16,12,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,12,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,12,54131)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16849,0);
Msg("Find size of FT_GlyphRec_ (16849)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_Class,64, 16850, 11, 3.2, NULL, 16848, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_Class,32, 16850, 2, 3.2, NULL, 16848, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_Class,32, 16850, 10, 3.2, NULL, 16848, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_Class,64, 16850, 12, 3.2, NULL, 16848, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16848,NULL);\n",architecture,16850,0);
Msg("Find size of FT_Glyph_Class (16850)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph,8, 16854, 11, 3.2, NULL, 16853, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph,4, 16854, 2, 3.2, NULL, 16853, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph,4, 16854, 10, 3.2, NULL, 16853, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph,8, 16854, 12, 3.2, NULL, 16853, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16853,NULL);\n",architecture,16854,0);
Msg("Find size of FT_Glyph (16854)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 11, 3.2, NULL, 16855, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_InitFunc,4, 16856, 2, 3.2, NULL, 16855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_InitFunc,4, 16856, 10, 3.2, NULL, 16855, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 12, 3.2, NULL, 16855, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16855,NULL);\n",architecture,16856,0);
Msg("Find size of FT_Glyph_InitFunc (16856)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 11, 3.2, NULL, 16857, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_DoneFunc,4, 16858, 2, 3.2, NULL, 16857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_DoneFunc,4, 16858, 10, 3.2, NULL, 16857, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 12, 3.2, NULL, 16857, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16857,NULL);\n",architecture,16858,0);
Msg("Find size of FT_Glyph_DoneFunc (16858)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 11, 3.2, NULL, 16859, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_CopyFunc,4, 16860, 2, 3.2, NULL, 16859, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_CopyFunc,4, 16860, 10, 3.2, NULL, 16859, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 12, 3.2, NULL, 16859, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16859,NULL);\n",architecture,16860,0);
Msg("Find size of FT_Glyph_CopyFunc (16860)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 11, 3.2, NULL, 16861, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_TransformFunc,4, 16862, 2, 3.2, NULL, 16861, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_TransformFunc,4, 16862, 10, 3.2, NULL, 16861, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 12, 3.2, NULL, 16861, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16861,NULL);\n",architecture,16862,0);
Msg("Find size of FT_Glyph_TransformFunc (16862)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 11, 3.2, NULL, 16863, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_GetBBoxFunc,4, 16864, 2, 3.2, NULL, 16863, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_GetBBoxFunc,4, 16864, 10, 3.2, NULL, 16863, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 12, 3.2, NULL, 16863, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16863,NULL);\n",architecture,16864,0);
Msg("Find size of FT_Glyph_GetBBoxFunc (16864)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 11, 3.2, NULL, 16855, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_PrepareFunc,4, 16865, 2, 3.2, NULL, 16855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_PrepareFunc,4, 16865, 10, 3.2, NULL, 16855, NULL)
#elif defined __s390x__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 12, 3.2, NULL, 16855, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16855,NULL);\n",architecture,16865,0);
Msg("Find size of FT_Glyph_PrepareFunc (16865)\n");
#endif

#if 1
CheckTypeSize(FT_Glyph_BBox_Mode,4, 22170, 1, 3.2, NULL, 22169, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,11,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,11,65064)
#elif defined __i386__
CheckTypeSize(struct FT_OutlineGlyphRec_,40, 22172, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,20,2,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,20,2,65064)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_OutlineGlyphRec_,40, 22172, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,20,10,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,20,10,65064)
#elif defined __s390x__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,12,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,12,65064)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,22172,0);
Msg("Find size of FT_OutlineGlyphRec_ (22172)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 11, 3.2, NULL, 22173, NULL)
#elif defined __i386__
CheckTypeSize(FT_OutlineGlyph,4, 22174, 2, 3.2, NULL, 22173, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_OutlineGlyph,4, 22174, 10, 3.2, NULL, 22173, NULL)
#elif defined __s390x__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 12, 3.2, NULL, 22173, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22173,NULL);\n",architecture,22174,0);
Msg("Find size of FT_OutlineGlyph (22174)\n");
#endif

#if defined __x86_64__
CheckTypeSize(FT_GlyphRec,40, 22175, 11, 3.2, NULL, 16849, NULL)
#elif defined __i386__
CheckTypeSize(FT_GlyphRec,20, 22175, 2, 3.2, NULL, 16849, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_GlyphRec,20, 22175, 10, 3.2, NULL, 16849, NULL)
#elif defined __s390x__
CheckTypeSize(FT_GlyphRec,40, 22175, 12, 3.2, NULL, 16849, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16849, NULL);\n",architecture,22175,0);
Msg("Find size of FT_GlyphRec (22175)\n");
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

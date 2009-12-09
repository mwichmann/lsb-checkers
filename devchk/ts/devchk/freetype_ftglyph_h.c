/*
 * Test of freetype/ftglyph.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/ftglyph.h\n");
#endif

printf("Checking data structures in freetype/ftglyph.h\n");
#if defined __s390x__
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
#elif defined __x86_64__
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
#elif defined __powerpc64__
CheckTypeSize(struct FT_Glyph_Class_,64, 16848, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,9,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,8,9,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,8,9,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,16,9,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,8,9,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,24,9,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,8,9,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,32,9,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,8,9,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,40,9,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,8,9,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,48,9,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,8,9,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,56,9,54149)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_Glyph_Class_,32, 16848, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,6,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,4,6,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,4,6,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,8,6,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,4,6,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,12,6,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,4,6,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,16,6,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,4,6,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,20,6,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,4,6,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,24,6,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,4,6,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,28,6,54149)
#elif defined __ia64__
CheckTypeSize(struct FT_Glyph_Class_,64, 16848, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_Glyph_Class_,glyph_format,4,3,54127)
CheckOffset(struct FT_Glyph_Class_,glyph_format,8,3,54127)
CheckMemberSize(struct FT_Glyph_Class_,glyph_init,8,3,54134)
CheckOffset(struct FT_Glyph_Class_,glyph_init,16,3,54134)
CheckMemberSize(struct FT_Glyph_Class_,glyph_done,8,3,54136)
CheckOffset(struct FT_Glyph_Class_,glyph_done,24,3,54136)
CheckMemberSize(struct FT_Glyph_Class_,glyph_copy,8,3,54139)
CheckOffset(struct FT_Glyph_Class_,glyph_copy,32,3,54139)
CheckMemberSize(struct FT_Glyph_Class_,glyph_transform,8,3,54143)
CheckOffset(struct FT_Glyph_Class_,glyph_transform,40,3,54143)
CheckMemberSize(struct FT_Glyph_Class_,glyph_bbox,8,3,54146)
CheckOffset(struct FT_Glyph_Class_,glyph_bbox,48,3,54146)
CheckMemberSize(struct FT_Glyph_Class_,glyph_prepare,8,3,54149)
CheckOffset(struct FT_Glyph_Class_,glyph_prepare,56,3,54149)
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
#else
Msg("Find size of FT_Glyph_Class_ (16848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16848,0);
#endif

#if defined __s390x__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,12,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,12,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,12,54130)
CheckOffset(struct FT_GlyphRec_,format,16,12,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,12,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,12,54131)
#elif defined __x86_64__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,11,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,11,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,11,54130)
CheckOffset(struct FT_GlyphRec_,format,16,11,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,11,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,11,54131)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,4,10,54129)
CheckOffset(struct FT_GlyphRec_,clazz,4,10,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,10,54130)
CheckOffset(struct FT_GlyphRec_,format,8,10,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,8,10,54131)
CheckOffset(struct FT_GlyphRec_,advance,12,10,54131)
#elif defined __powerpc64__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,9,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,9,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,9,54130)
CheckOffset(struct FT_GlyphRec_,format,16,9,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,9,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,9,54131)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,4,6,54129)
CheckOffset(struct FT_GlyphRec_,clazz,4,6,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,6,54130)
CheckOffset(struct FT_GlyphRec_,format,8,6,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,8,6,54131)
CheckOffset(struct FT_GlyphRec_,advance,12,6,54131)
#elif defined __ia64__
CheckTypeSize(struct FT_GlyphRec_,40, 16849, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,8,3,54129)
CheckOffset(struct FT_GlyphRec_,clazz,8,3,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,3,54130)
CheckOffset(struct FT_GlyphRec_,format,16,3,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,16,3,54131)
CheckOffset(struct FT_GlyphRec_,advance,24,3,54131)
#elif defined __i386__
CheckTypeSize(struct FT_GlyphRec_,20, 16849, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_GlyphRec_,clazz,4,2,54129)
CheckOffset(struct FT_GlyphRec_,clazz,4,2,54129)
CheckMemberSize(struct FT_GlyphRec_,format,4,2,54130)
CheckOffset(struct FT_GlyphRec_,format,8,2,54130)
CheckMemberSize(struct FT_GlyphRec_,advance,8,2,54131)
CheckOffset(struct FT_GlyphRec_,advance,12,2,54131)
#else
Msg("Find size of FT_GlyphRec_ (16849)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,16849,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_Class,64, 16850, 12, 3.2, NULL, 16848, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_Class,64, 16850, 11, 3.2, NULL, 16848, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_Class,32, 16850, 10, 3.2, NULL, 16848, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_Class,64, 16850, 9, 3.2, NULL, 16848, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_Class,32, 16850, 6, 3.2, NULL, 16848, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_Class,64, 16850, 3, 3.2, NULL, 16848, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_Class,32, 16850, 2, 3.2, NULL, 16848, NULL)
#else
Msg("Find size of FT_Glyph_Class (16850)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16848,NULL);\n",architecture,16850,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph,8, 16854, 12, 3.2, NULL, 16853, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph,8, 16854, 11, 3.2, NULL, 16853, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph,4, 16854, 10, 3.2, NULL, 16853, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph,8, 16854, 9, 3.2, NULL, 16853, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph,4, 16854, 6, 3.2, NULL, 16853, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph,8, 16854, 3, 3.2, NULL, 16853, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph,4, 16854, 2, 3.2, NULL, 16853, NULL)
#else
Msg("Find size of FT_Glyph (16854)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16853,NULL);\n",architecture,16854,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 12, 3.2, NULL, 16855, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 11, 3.2, NULL, 16855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_InitFunc,4, 16856, 10, 3.2, NULL, 16855, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 9, 3.2, NULL, 16855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_InitFunc,4, 16856, 6, 3.2, NULL, 16855, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_InitFunc,8, 16856, 3, 3.2, NULL, 16855, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_InitFunc,4, 16856, 2, 3.2, NULL, 16855, NULL)
#else
Msg("Find size of FT_Glyph_InitFunc (16856)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16855,NULL);\n",architecture,16856,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 12, 3.2, NULL, 16857, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 11, 3.2, NULL, 16857, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_DoneFunc,4, 16858, 10, 3.2, NULL, 16857, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 9, 3.2, NULL, 16857, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_DoneFunc,4, 16858, 6, 3.2, NULL, 16857, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_DoneFunc,8, 16858, 3, 3.2, NULL, 16857, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_DoneFunc,4, 16858, 2, 3.2, NULL, 16857, NULL)
#else
Msg("Find size of FT_Glyph_DoneFunc (16858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16857,NULL);\n",architecture,16858,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 12, 3.2, NULL, 16859, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 11, 3.2, NULL, 16859, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_CopyFunc,4, 16860, 10, 3.2, NULL, 16859, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 9, 3.2, NULL, 16859, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_CopyFunc,4, 16860, 6, 3.2, NULL, 16859, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_CopyFunc,8, 16860, 3, 3.2, NULL, 16859, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_CopyFunc,4, 16860, 2, 3.2, NULL, 16859, NULL)
#else
Msg("Find size of FT_Glyph_CopyFunc (16860)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16859,NULL);\n",architecture,16860,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 12, 3.2, NULL, 16861, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 11, 3.2, NULL, 16861, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_TransformFunc,4, 16862, 10, 3.2, NULL, 16861, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 9, 3.2, NULL, 16861, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_TransformFunc,4, 16862, 6, 3.2, NULL, 16861, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_TransformFunc,8, 16862, 3, 3.2, NULL, 16861, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_TransformFunc,4, 16862, 2, 3.2, NULL, 16861, NULL)
#else
Msg("Find size of FT_Glyph_TransformFunc (16862)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16861,NULL);\n",architecture,16862,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 12, 3.2, NULL, 16863, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 11, 3.2, NULL, 16863, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_GetBBoxFunc,4, 16864, 10, 3.2, NULL, 16863, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 9, 3.2, NULL, 16863, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_GetBBoxFunc,4, 16864, 6, 3.2, NULL, 16863, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_GetBBoxFunc,8, 16864, 3, 3.2, NULL, 16863, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_GetBBoxFunc,4, 16864, 2, 3.2, NULL, 16863, NULL)
#else
Msg("Find size of FT_Glyph_GetBBoxFunc (16864)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16863,NULL);\n",architecture,16864,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 12, 3.2, NULL, 16855, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 11, 3.2, NULL, 16855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_Glyph_PrepareFunc,4, 16865, 10, 3.2, NULL, 16855, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 9, 3.2, NULL, 16855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_Glyph_PrepareFunc,4, 16865, 6, 3.2, NULL, 16855, NULL)
#elif defined __ia64__
CheckTypeSize(FT_Glyph_PrepareFunc,8, 16865, 3, 3.2, NULL, 16855, NULL)
#elif defined __i386__
CheckTypeSize(FT_Glyph_PrepareFunc,4, 16865, 2, 3.2, NULL, 16855, NULL)
#else
Msg("Find size of FT_Glyph_PrepareFunc (16865)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16855,NULL);\n",architecture,16865,0);
#endif

#if 1
CheckTypeSize(FT_Glyph_BBox_Mode,4, 22170, 1, 3.2, NULL, 22169, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 12, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,12,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,12,65064)
#elif defined __x86_64__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 11, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,11,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,11,65064)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct FT_OutlineGlyphRec_,40, 22172, 10, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,20,10,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,20,10,65064)
#elif defined __powerpc64__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 9, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,9,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,9,65064)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct FT_OutlineGlyphRec_,40, 22172, 6, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,20,6,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,20,6,65064)
#elif defined __ia64__
CheckTypeSize(struct FT_OutlineGlyphRec_,80, 22172, 3, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,40,3,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,40,3,65064)
#elif defined __i386__
CheckTypeSize(struct FT_OutlineGlyphRec_,40, 22172, 2, 3.2, NULL, 0, NULL)
CheckMemberSize(struct FT_OutlineGlyphRec_,outline,20,2,65064)
CheckOffset(struct FT_OutlineGlyphRec_,outline,20,2,65064)
#else
Msg("Find size of FT_OutlineGlyphRec_ (22172)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,0,NULL);\n",architecture,22172,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 12, 3.2, NULL, 22173, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 11, 3.2, NULL, 22173, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_OutlineGlyph,4, 22174, 10, 3.2, NULL, 22173, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 9, 3.2, NULL, 22173, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_OutlineGlyph,4, 22174, 6, 3.2, NULL, 22173, NULL)
#elif defined __ia64__
CheckTypeSize(FT_OutlineGlyph,8, 22174, 3, 3.2, NULL, 22173, NULL)
#elif defined __i386__
CheckTypeSize(FT_OutlineGlyph,4, 22174, 2, 3.2, NULL, 22173, NULL)
#else
Msg("Find size of FT_OutlineGlyph (22174)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,22173,NULL);\n",architecture,22174,0);
#endif

#if defined __s390x__
CheckTypeSize(FT_GlyphRec,40, 22175, 12, 3.2, NULL, 16849, NULL)
#elif defined __x86_64__
CheckTypeSize(FT_GlyphRec,40, 22175, 11, 3.2, NULL, 16849, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FT_GlyphRec,20, 22175, 10, 3.2, NULL, 16849, NULL)
#elif defined __powerpc64__
CheckTypeSize(FT_GlyphRec,40, 22175, 9, 3.2, NULL, 16849, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FT_GlyphRec,20, 22175, 6, 3.2, NULL, 16849, NULL)
#elif defined __ia64__
CheckTypeSize(FT_GlyphRec,40, 22175, 3, 3.2, NULL, 16849, NULL)
#elif defined __i386__
CheckTypeSize(FT_GlyphRec,20, 22175, 2, 3.2, NULL, 16849, NULL)
#else
Msg("Find size of FT_GlyphRec (22175)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16849,NULL);\n",architecture,22175,0);
#endif

#if 1
CheckTypeSize(struct FT_BitmapGlyphRec_,0, 37076, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_BitmapGlyphRec_ on All\n");
CheckOffset(struct FT_BitmapGlyphRec_,root,0,1,216904)
CheckOffset(struct FT_BitmapGlyphRec_,left,0,1,216905)
CheckOffset(struct FT_BitmapGlyphRec_,top,0,1,216906)
CheckOffset(struct FT_BitmapGlyphRec_,bitmap,0,1,216907)
#endif

#if 1
CheckTypeSize(FT_BitmapGlyph,0, 37078, 1, 3.2, NULL, 37077, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Glyph_InitFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_InitFunc,FT_Glyph_InitFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Glyph_DoneFunc_db)(FT_Glyph);
CheckFunctionTypedef(FT_Glyph_DoneFunc,FT_Glyph_DoneFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Glyph_CopyFunc_db)(FT_Glyph, FT_Glyph);
CheckFunctionTypedef(FT_Glyph_CopyFunc,FT_Glyph_CopyFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Glyph_TransformFunc_db)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
CheckFunctionTypedef(FT_Glyph_TransformFunc,FT_Glyph_TransformFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*FT_Glyph_GetBBoxFunc_db)(FT_Glyph, FT_BBox *);
CheckFunctionTypedef(FT_Glyph_GetBBoxFunc,FT_Glyph_GetBBoxFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __ia64__
/* IA64 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
#elif defined __i386__
/* IA32 */
typedef FT_Error (*FT_Glyph_PrepareFunc_db)(FT_Glyph, FT_GlyphSlot);
CheckFunctionTypedef(FT_Glyph_PrepareFunc,FT_Glyph_PrepareFunc_db);
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

/*
 * Test of freetype/ftoutln.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if _LSB_DEFAULT_ARCH
/* No test for freetype/ftoutln.h */
#endif

#if defined __i386__
CheckTypeSize(FT_Face,0, 11168, 2, 3.2, NULL, 11167, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11167,NULL);\n",architecture,11168,0);
Msg("Find size of FT_Face (11168)\n");
#endif

#if defined __i386__
CheckTypeSize(FT_UInt,0, 11171, 2, 3.2, NULL, 7, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,7,NULL);\n",architecture,11171,0);
Msg("Find size of FT_UInt (11171)\n");
#endif

#if defined __i386__
CheckTypeSize(FT_Bitmap,0, 12594, 2, 3.2, NULL, 12593, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12593,NULL);\n",architecture,12594,0);
Msg("Find size of FT_Bitmap (12594)\n");
#endif

#if 1
CheckTypeSize(struct FT_LibraryRec_,196, 16747, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_LibraryRec_ on All\n");
CheckOffset(struct FT_LibraryRec_,memory,0,1,53966)
CheckOffset(struct FT_LibraryRec_,generic,0,1,53969)
CheckOffset(struct FT_LibraryRec_,version_major,0,1,53970)
CheckOffset(struct FT_LibraryRec_,version_minor,0,1,53971)
CheckOffset(struct FT_LibraryRec_,version_patch,0,1,53972)
CheckOffset(struct FT_LibraryRec_,num_modules,0,1,53973)
CheckOffset(struct FT_LibraryRec_,modules,0,1,53991)
CheckOffset(struct FT_LibraryRec_,renderers,0,1,53992)
CheckOffset(struct FT_LibraryRec_,cur_renderer,0,1,54160)
CheckOffset(struct FT_LibraryRec_,auto_hinter,0,1,54161)
CheckOffset(struct FT_LibraryRec_,raster_pool,0,1,54162)
CheckOffset(struct FT_LibraryRec_,raster_pool_size,0,1,54163)
CheckOffset(struct FT_LibraryRec_,debug_hooks,0,1,54164)
#endif

#if 1
CheckTypeSize(FT_Generic_Finalizer,0, 16749, 1, 3.2, NULL, 6988, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Constructor,0, 16763, 1, 3.2, NULL, 16762, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Destructor,0, 16765, 1, 3.2, NULL, 16764, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Interface,0, 16767, 1, 3.2, NULL, 16766, NULL)
#endif

#if 1
CheckTypeSize(FT_Module_Requester,0, 16769, 1, 3.2, NULL, 16768, NULL)
#endif

#if 1
CheckTypeSize(FT_ListRec,0, 16775, 1, 3.2, NULL, 16720, NULL)
#endif

#if 1
CheckTypeSize(struct FT_RendererRec_,72, 16776, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_RendererRec_ on All\n");
CheckOffset(struct FT_RendererRec_,root,0,1,53993)
CheckOffset(struct FT_RendererRec_,clazz,0,1,54124)
CheckOffset(struct FT_RendererRec_,glyph_format,0,1,54125)
CheckOffset(struct FT_RendererRec_,glyph_class,0,1,54150)
CheckOffset(struct FT_RendererRec_,raster,0,1,54151)
CheckOffset(struct FT_RendererRec_,raster_render,0,1,54154)
CheckOffset(struct FT_RendererRec_,render,0,1,54159)
#endif

#if 1
CheckTypeSize(FT_ModuleRec,0, 16777, 1, 3.2, NULL, 16752, NULL)
#endif

#if 1
CheckTypeSize(struct FT_GlyphSlotRec_,160, 16783, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_GlyphSlotRec_ on All\n");
CheckOffset(struct FT_GlyphSlotRec_,library,0,1,54001)
CheckOffset(struct FT_GlyphSlotRec_,face,0,1,54002)
CheckOffset(struct FT_GlyphSlotRec_,next,0,1,54003)
CheckOffset(struct FT_GlyphSlotRec_,reserved,0,1,54004)
CheckOffset(struct FT_GlyphSlotRec_,generic,0,1,54005)
CheckOffset(struct FT_GlyphSlotRec_,metrics,0,1,54014)
CheckOffset(struct FT_GlyphSlotRec_,linearHoriAdvance,0,1,54015)
CheckOffset(struct FT_GlyphSlotRec_,linearVertAdvance,0,1,54016)
CheckOffset(struct FT_GlyphSlotRec_,advance,0,1,54017)
CheckOffset(struct FT_GlyphSlotRec_,format,0,1,54018)
CheckOffset(struct FT_GlyphSlotRec_,bitmap,0,1,54019)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_left,0,1,54020)
CheckOffset(struct FT_GlyphSlotRec_,bitmap_top,0,1,54021)
CheckOffset(struct FT_GlyphSlotRec_,outline,0,1,54022)
CheckOffset(struct FT_GlyphSlotRec_,num_subglyphs,0,1,54023)
CheckOffset(struct FT_GlyphSlotRec_,subglyphs,0,1,54033)
CheckOffset(struct FT_GlyphSlotRec_,control_data,0,1,54034)
CheckOffset(struct FT_GlyphSlotRec_,control_len,0,1,54035)
CheckOffset(struct FT_GlyphSlotRec_,lsb_delta,0,1,54036)
CheckOffset(struct FT_GlyphSlotRec_,rsb_delta,0,1,54037)
CheckOffset(struct FT_GlyphSlotRec_,other,0,1,54038)
CheckOffset(struct FT_GlyphSlotRec_,internal,0,1,54057)
#endif

#if 1
CheckTypeSize(FT_Glyph_Metrics,0, 16787, 1, 3.2, NULL, 16786, NULL)
#endif

#if 1
CheckTypeSize(struct FT_SubGlyphRec_,32, 16788, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_SubGlyphRec_ on All\n");
CheckOffset(struct FT_SubGlyphRec_,index,0,1,54024)
CheckOffset(struct FT_SubGlyphRec_,flags,0,1,54025)
CheckOffset(struct FT_SubGlyphRec_,arg1,0,1,54026)
CheckOffset(struct FT_SubGlyphRec_,arg2,0,1,54027)
CheckOffset(struct FT_SubGlyphRec_,transform,0,1,54032)
#endif

#if 1
CheckTypeSize(FT_SubGlyph,0, 16793, 1, 3.2, NULL, 16792, NULL)
#endif

#if 1
CheckTypeSize(struct FT_Slot_InternalRec_,40, 16794, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_Slot_InternalRec_ on All\n");
CheckOffset(struct FT_Slot_InternalRec_,loader,0,1,54051)
CheckOffset(struct FT_Slot_InternalRec_,flags,0,1,54052)
CheckOffset(struct FT_Slot_InternalRec_,glyph_transformed,0,1,54053)
CheckOffset(struct FT_Slot_InternalRec_,glyph_matrix,0,1,54054)
CheckOffset(struct FT_Slot_InternalRec_,glyph_delta,0,1,54055)
CheckOffset(struct FT_Slot_InternalRec_,glyph_hints,0,1,54056)
#endif

#if 1
CheckTypeSize(struct FT_GlyphLoaderRec_,88, 16795, 1, 3.2, NULL, 0, NULL)
Msg("Missing member data for FT_GlyphLoaderRec_ on All\n");
CheckOffset(struct FT_GlyphLoaderRec_,memory,0,1,54039)
CheckOffset(struct FT_GlyphLoaderRec_,max_points,0,1,54040)
CheckOffset(struct FT_GlyphLoaderRec_,max_contours,0,1,54041)
CheckOffset(struct FT_GlyphLoaderRec_,max_subglyphs,0,1,54042)
CheckOffset(struct FT_GlyphLoaderRec_,use_extra,0,1,54043)
CheckOffset(struct FT_GlyphLoaderRec_,base,0,1,54048)
CheckOffset(struct FT_GlyphLoaderRec_,current,0,1,54049)
CheckOffset(struct FT_GlyphLoaderRec_,other,0,1,54050)
#endif

#if 1
CheckTypeSize(FT_GlyphLoadRec,0, 16798, 1, 3.2, NULL, 16797, NULL)
#endif

#if 1
CheckTypeSize(FT_GlyphLoader,0, 16800, 1, 3.2, NULL, 16799, NULL)
#endif

#if 1
CheckTypeSize(FT_Slot_Internal,0, 16802, 1, 3.2, NULL, 16801, NULL)
#endif

#if 1
CheckTypeSize(FT_Renderer_RenderFunc,0, 16804, 1, 3.2, NULL, 16803, NULL)
#endif

#if 1
CheckTypeSize(FT_Renderer_TransformFunc,0, 16807, 1, 3.2, NULL, 16806, NULL)
#endif

#if 1
CheckTypeSize(FT_Renderer_GetCBoxFunc,0, 16812, 1, 3.2, NULL, 16811, NULL)
#endif

#if 1
CheckTypeSize(FT_Renderer_SetModeFunc,0, 16814, 1, 3.2, NULL, 16813, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster,0, 16818, 1, 3.2, NULL, 16817, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_NewFunc,0, 16821, 1, 3.2, NULL, 16820, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_ResetFunc,0, 16823, 1, 3.2, NULL, 16822, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_SetModeFunc,0, 16825, 1, 3.2, NULL, 16824, NULL)
#endif

#if 1
CheckTypeSize(FT_Span,0, 16830, 1, 3.2, NULL, 16829, NULL)
#endif

#if 1
CheckTypeSize(FT_SpanFunc,0, 16833, 1, 3.2, NULL, 16832, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_BitTest_Func,0, 16835, 1, 3.2, NULL, 16834, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_BitSet_Func,0, 16837, 1, 3.2, NULL, 16836, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_Params,0, 16838, 1, 3.2, NULL, 16826, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_RenderFunc,0, 16841, 1, 3.2, NULL, 16840, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_DoneFunc,0, 16843, 1, 3.2, NULL, 16842, NULL)
#endif

#if 1
CheckTypeSize(FT_Raster_Funcs,0, 16844, 1, 3.2, NULL, 16815, NULL)
#endif

#if 1
CheckTypeSize(FT_Renderer_Class,0, 16846, 1, 3.2, NULL, 16778, NULL)
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
CheckTypeSize(FT_Outline_MoveToFunc,0, 16876, 1, 3.2, NULL, 16875, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_LineToFunc,0, 16877, 1, 3.2, NULL, 16875, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_ConicToFunc,0, 16879, 1, 3.2, NULL, 16878, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_CubicToFunc,0, 16881, 1, 3.2, NULL, 16880, NULL)
#endif

#if 1
CheckTypeSize(FT_Outline_Funcs,0, 16882, 1, 3.2, NULL, 16874, NULL)
#endif

#if 1
CheckTypeSize(FT_Orientation,0, 16886, 1, 3.2, NULL, 16885, NULL)
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
extern FT_Error FT_Outline_Done_Internal_db(FT_Memory, FT_Outline *);
CheckInterfacedef(FT_Outline_Done_Internal,FT_Outline_Done_Internal_db);
extern FT_Orientation FT_Outline_Get_Orientation_db(FT_Outline *);
CheckInterfacedef(FT_Outline_Get_Orientation,FT_Outline_Get_Orientation_db);
extern FT_Error FT_Outline_New_Internal_db(FT_Memory, FT_UInt, FT_Int, FT_Outline *);
CheckInterfacedef(FT_Outline_New_Internal,FT_Outline_New_Internal_db);
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

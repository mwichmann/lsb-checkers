/*
 * Test of pango-1.0/pango/pangoft2.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define G_DISABLE_DEPRECATED
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
#define PANGO_DISABLE_DEPRECATED

struct _PangoFT2FontMap { };
struct _PangoFcFont { };
struct _PangoFontMap { };
struct _PangoEngineShape { };
struct _PangoEngineLang { };
struct _PangoFcFontClass { };
struct _PangoFontFamily { };
struct _PangoFontFace { };
struct _PangoFontset { };

#ifdef LSBCC_MODE
#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
#include "pango-1.0/pango/pangoft2.h"



#ifdef TET_TEST
void pango_1_0_pango_pangoft2_h()
{
#else
int pango_1_0_pango_pangoft2_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangoft2.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangoft2.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FC_FONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FC_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FC_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FT2_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FT2_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FT2_IS_FONT_MAP(object) */
#endif

#if __i386__
CheckTypeSize(PangoFT2FontMap,0, 12589, 2)
#elif __x86_64__
CheckTypeSize(PangoFT2FontMap,0, 12589, 11)
#elif __ia64__
CheckTypeSize(PangoFT2FontMap,0, 12589, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFT2FontMap,0, 12589, 6)
#elif __powerpc64__
CheckTypeSize(PangoFT2FontMap,0, 12589, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFT2FontMap,0, 12589, 10)
#elif __s390x__
CheckTypeSize(PangoFT2FontMap,0, 12589, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12589,0);
Msg("Find size of PangoFT2FontMap (12589)\n");
#endif

#if __i386__
CheckTypeSize(PangoFT2SubstituteFunc,4, 12591, 2)
#elif __x86_64__
CheckTypeSize(PangoFT2SubstituteFunc,8, 12591, 11)
#elif __ia64__
CheckTypeSize(PangoFT2SubstituteFunc,8, 12591, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(PangoFT2SubstituteFunc,4, 12591, 6)
#elif __powerpc64__
CheckTypeSize(PangoFT2SubstituteFunc,8, 12591, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(PangoFT2SubstituteFunc,4, 12591, 10)
#elif __s390x__
CheckTypeSize(PangoFT2SubstituteFunc,8, 12591, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,12591,0);
Msg("Find size of PangoFT2SubstituteFunc (12591)\n");
#endif

extern void pango_ft2_font_map_set_default_substitute_db(PangoFT2FontMap *, PangoFT2SubstituteFunc, gpointer, GDestroyNotify);
CheckInterfacedef(pango_ft2_font_map_set_default_substitute,pango_ft2_font_map_set_default_substitute_db);
extern void pango_fc_font_unlock_face_db(PangoFcFont *);
CheckInterfacedef(pango_fc_font_unlock_face,pango_fc_font_unlock_face_db);
extern GType pango_ft2_font_map_get_type_db(void);
CheckInterfacedef(pango_ft2_font_map_get_type,pango_ft2_font_map_get_type_db);
extern void pango_ft2_render_transformed_db(FT_Bitmap *, const PangoMatrix *, PangoFont *, PangoGlyphString *, int, int);
CheckInterfacedef(pango_ft2_render_transformed,pango_ft2_render_transformed_db);
extern PangoContext * pango_ft2_font_map_create_context_db(PangoFT2FontMap *);
CheckInterfacedef(pango_ft2_font_map_create_context,pango_ft2_font_map_create_context_db);
extern void pango_ft2_render_layout_subpixel_db(FT_Bitmap *, PangoLayout *, int, int);
CheckInterfacedef(pango_ft2_render_layout_subpixel,pango_ft2_render_layout_subpixel_db);
extern void pango_ft2_render_layout_db(FT_Bitmap *, PangoLayout *, int, int);
CheckInterfacedef(pango_ft2_render_layout,pango_ft2_render_layout_db);
extern void pango_ft2_font_map_set_resolution_db(PangoFT2FontMap *, double, double);
CheckInterfacedef(pango_ft2_font_map_set_resolution,pango_ft2_font_map_set_resolution_db);
extern void pango_ft2_render_db(FT_Bitmap *, PangoFont *, PangoGlyphString *, int, int);
CheckInterfacedef(pango_ft2_render,pango_ft2_render_db);
extern void pango_ft2_font_map_substitute_changed_db(PangoFT2FontMap *);
CheckInterfacedef(pango_ft2_font_map_substitute_changed,pango_ft2_font_map_substitute_changed_db);
extern void pango_ft2_render_layout_line_db(FT_Bitmap *, PangoLayoutLine *, int, int);
CheckInterfacedef(pango_ft2_render_layout_line,pango_ft2_render_layout_line_db);
extern GType pango_fc_font_get_type_db(void);
CheckInterfacedef(pango_fc_font_get_type,pango_fc_font_get_type_db);
extern void pango_ft2_render_layout_line_subpixel_db(FT_Bitmap *, PangoLayoutLine *, int, int);
CheckInterfacedef(pango_ft2_render_layout_line_subpixel,pango_ft2_render_layout_line_subpixel_db);
extern FT_Face pango_fc_font_lock_face_db(PangoFcFont *);
CheckInterfacedef(pango_fc_font_lock_face,pango_fc_font_lock_face_db);
extern PangoFontMap * pango_ft2_font_map_new_db(void);
CheckInterfacedef(pango_ft2_font_map_new,pango_ft2_font_map_new_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangoft2.h\n\n",pcnt,cnt);
return cnt;
#endif

}

/*
 * Test of pango-1.0/pango/pangoxft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
/* #define PANGO_DISABLE_DEPRECATED */

struct _PangoXftRendererPrivate {
};

struct _PangoXftFontMap { };
struct _PangoFcFont { };
struct _PangoXftFont { };
struct _PangoFcFontClass { };

#ifdef LSBCC_MODE
struct _PangoXftRenderer { };

#include <ft2build.h>
#include FT_FREETYPE_H
#define _XFT_NO_COMPAT
#define _XFTCOMPAT_H_
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#endif
#include "pango-1.0/pango/pangoxft.h"



#ifdef TET_TEST
void pango_1_0_pango_pangoxft_h()
{
#else
int pango_1_0_pango_pangoxft_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangoxft.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangoxft.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_RENDERER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_XFT_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_XFT_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_RENDERER_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PANGO_RENDER_TYPE_XFT
	CompareStringConstant(PANGO_RENDER_TYPE_XFT,"PangoRenderXft",6591,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PANGO_RENDER_TYPE_XFT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_IS_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_XFT_FONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_XFT_IS_FONT(object) */
#endif

#if defined __i386__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 2, 3.1, NULL, 12563, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 11, 3.1, NULL, 12563, NULL)
#elif defined __ia64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 3, 3.1, NULL, 12563, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 6, 3.1, NULL, 12563, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 9, 3.1, NULL, 12563, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 10, 3.1, NULL, 12563, NULL)
#elif defined __s390x__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 12, 3.1, NULL, 12563, NULL)
#else
Msg("Find size of PangoXftSubstituteFunc (12564)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12563,NULL);\n",architecture,12564,0);
#endif

#if defined __i386__
CheckTypeSize(PangoXftRendererClass,132, 12579, 2, 3.1, NULL, 12567, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 11, 3.1, NULL, 12567, NULL)
#elif defined __ia64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 3, 3.1, NULL, 12567, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoXftRendererClass,132, 12579, 6, 3.1, NULL, 12567, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 9, 3.1, NULL, 12567, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoXftRendererClass,132, 12579, 10, 3.1, NULL, 12567, NULL)
#elif defined __s390x__
CheckTypeSize(PangoXftRendererClass,264, 12579, 12, 3.1, NULL, 12567, NULL)
#else
Msg("Find size of PangoXftRendererClass (12579)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12567,NULL);\n",architecture,12579,0);
#endif

extern void pango_xft_substitute_changed_db(Display *, int);
CheckInterfacedef(pango_xft_substitute_changed,pango_xft_substitute_changed_db);
extern void pango_xft_render_db(XftDraw *, XftColor *, PangoFont *, PangoGlyphString *, gint, gint);
CheckInterfacedef(pango_xft_render,pango_xft_render_db);
extern PangoRenderer * pango_xft_renderer_new_db(Display *, int);
CheckInterfacedef(pango_xft_renderer_new,pango_xft_renderer_new_db);
extern GType pango_xft_renderer_get_type_db(void);
CheckInterfacedef(pango_xft_renderer_get_type,pango_xft_renderer_get_type_db);
extern void pango_xft_renderer_set_default_color_db(PangoXftRenderer *, PangoColor *);
CheckInterfacedef(pango_xft_renderer_set_default_color,pango_xft_renderer_set_default_color_db);
extern GType pango_xft_font_get_type_db(void);
CheckInterfacedef(pango_xft_font_get_type,pango_xft_font_get_type_db);
extern void pango_xft_picture_render_db(Display *, Picture, Picture, PangoFont *, PangoGlyphString *, gint, gint);
CheckInterfacedef(pango_xft_picture_render,pango_xft_picture_render_db);
extern void pango_xft_render_layout_db(XftDraw *, XftColor *, PangoLayout *, int, int);
CheckInterfacedef(pango_xft_render_layout,pango_xft_render_layout_db);
extern void pango_xft_render_transformed_db(XftDraw *, XftColor *, PangoMatrix *, PangoFont *, PangoGlyphString *, int, int);
CheckInterfacedef(pango_xft_render_transformed,pango_xft_render_transformed_db);
extern void pango_xft_renderer_set_draw_db(PangoXftRenderer *, XftDraw *);
CheckInterfacedef(pango_xft_renderer_set_draw,pango_xft_renderer_set_draw_db);
extern void pango_xft_render_layout_line_db(XftDraw *, XftColor *, PangoLayoutLine *, int, int);
CheckInterfacedef(pango_xft_render_layout_line,pango_xft_render_layout_line_db);
extern void pango_xft_shutdown_display_db(Display *, int);
CheckInterfacedef(pango_xft_shutdown_display,pango_xft_shutdown_display_db);
extern PangoFontMap * pango_xft_get_font_map_db(Display *, int);
CheckInterfacedef(pango_xft_get_font_map,pango_xft_get_font_map_db);
extern PangoContext * pango_xft_get_context_db(Display *, int);
CheckInterfacedef(pango_xft_get_context,pango_xft_get_context_db);
extern GType pango_xft_font_map_get_type_db(void);
CheckInterfacedef(pango_xft_font_map_get_type,pango_xft_font_map_get_type_db);
extern void pango_xft_set_default_substitute_db(Display *, int, PangoXftSubstituteFunc, gpointer, GDestroyNotify);
CheckInterfacedef(pango_xft_set_default_substitute,pango_xft_set_default_substitute_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangoxft.h\n\n",pcnt,cnt);
return cnt;
#endif

}

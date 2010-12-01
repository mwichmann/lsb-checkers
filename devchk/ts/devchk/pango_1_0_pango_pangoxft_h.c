/*
 * Test of pango-1.0/pango/pangoxft.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in pango-1.0/pango/pangoxft.h\n");
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

#if defined __s390x__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 12, 3.1, NULL, 12563, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 11, 3.1, NULL, 12563, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 10, 3.1, NULL, 12563, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 9, 3.1, NULL, 12563, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 6, 3.1, NULL, 12563, NULL)
#elif defined __ia64__
CheckTypeSize(PangoXftSubstituteFunc,8, 12564, 3, 3.1, NULL, 12563, NULL)
#elif defined __i386__
CheckTypeSize(PangoXftSubstituteFunc,4, 12564, 2, 3.1, NULL, 12563, NULL)
#else
Msg("Find size of PangoXftSubstituteFunc (12564)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12563,NULL);\n",architecture,12564,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,12,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,12,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,12,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,12,43300)
#elif defined __x86_64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,11,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,11,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,11,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,11,43300)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,10,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,10,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,10,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,10,43300)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,9,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,9,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,9,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,9,43300)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,6,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,6,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,6,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,6,43300)
#elif defined __ia64__
CheckTypeSize(struct _PangoXftRendererClass,264, 12567, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,8,3,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,248,3,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,8,3,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,256,3,43300)
#elif defined __i386__
CheckTypeSize(struct _PangoXftRendererClass,132, 12567, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoXftRendererClass,composite_trapezoids,4,2,43295)
CheckOffset(struct _PangoXftRendererClass,composite_trapezoids,124,2,43295)
CheckMemberSize(struct _PangoXftRendererClass,composite_glyphs,4,2,43300)
CheckOffset(struct _PangoXftRendererClass,composite_glyphs,128,2,43300)
#elif 1
CheckTypeSize(struct _PangoXftRendererClass,0, 12567, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoXftRendererClass on All\n");
CheckOffset(struct _PangoXftRendererClass,parent_class,0,1,43290)
#endif

#if defined __s390x__
CheckTypeSize(PangoXftRendererClass,264, 12579, 12, 3.1, NULL, 12567, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 11, 3.1, NULL, 12567, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoXftRendererClass,132, 12579, 10, 3.1, NULL, 12567, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 9, 3.1, NULL, 12567, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoXftRendererClass,132, 12579, 6, 3.1, NULL, 12567, NULL)
#elif defined __ia64__
CheckTypeSize(PangoXftRendererClass,264, 12579, 3, 3.1, NULL, 12567, NULL)
#elif defined __i386__
CheckTypeSize(PangoXftRendererClass,132, 12579, 2, 3.1, NULL, 12567, NULL)
#else
Msg("Find size of PangoXftRendererClass (12579)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12567,NULL);\n",architecture,12579,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
#elif defined __i386__
/* IA32 */
typedef void (*PangoXftSubstituteFunc_db)(FcPattern *, gpointer);
CheckFunctionTypedef(PangoXftSubstituteFunc,PangoXftSubstituteFunc_db);
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
Msg("%d tests passed out of %d tests in pango-1.0/pango/pangoxft.h\n\n",pcnt,cnt);
return cnt;
#endif

}

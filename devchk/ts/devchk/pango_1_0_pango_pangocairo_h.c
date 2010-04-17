/*
 * Test of pango-1.0/pango/pangocairo.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "pango-1.0/pango/pangocairo.h"



#ifdef TET_TEST
void pango_1_0_pango_pangocairo_h()
{
#else
int pango_1_0_pango_pangocairo_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pangocairo.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pangocairo.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_CAIRO_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_CAIRO_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_CAIRO_FONT_MAP(object) */
#endif

extern PangoFontMap * pango_cairo_font_map_new_db(void);
CheckInterfacedef(pango_cairo_font_map_new,pango_cairo_font_map_new_db);
extern PangoFontMap * pango_cairo_font_map_get_default_db(void);
CheckInterfacedef(pango_cairo_font_map_get_default,pango_cairo_font_map_get_default_db);
extern void pango_cairo_font_map_set_resolution_db(PangoCairoFontMap *, double);
CheckInterfacedef(pango_cairo_font_map_set_resolution,pango_cairo_font_map_set_resolution_db);
extern double pango_cairo_font_map_get_resolution_db(PangoCairoFontMap *);
CheckInterfacedef(pango_cairo_font_map_get_resolution,pango_cairo_font_map_get_resolution_db);
extern PangoContext * pango_cairo_font_map_create_context_db(PangoCairoFontMap *);
CheckInterfacedef(pango_cairo_font_map_create_context,pango_cairo_font_map_create_context_db);
extern void pango_cairo_update_context_db(cairo_t *, PangoContext *);
CheckInterfacedef(pango_cairo_update_context,pango_cairo_update_context_db);
extern void pango_cairo_context_set_font_options_db(PangoContext *, const cairo_font_options_t *);
CheckInterfacedef(pango_cairo_context_set_font_options,pango_cairo_context_set_font_options_db);
extern const cairo_font_options_t * pango_cairo_context_get_font_options_db(PangoContext *);
CheckInterfacedef(pango_cairo_context_get_font_options,pango_cairo_context_get_font_options_db);
extern void pango_cairo_context_set_resolution_db(PangoContext *, double);
CheckInterfacedef(pango_cairo_context_set_resolution,pango_cairo_context_set_resolution_db);
extern double pango_cairo_context_get_resolution_db(PangoContext *);
CheckInterfacedef(pango_cairo_context_get_resolution,pango_cairo_context_get_resolution_db);
extern PangoLayout * pango_cairo_create_layout_db(cairo_t *);
CheckInterfacedef(pango_cairo_create_layout,pango_cairo_create_layout_db);
extern void pango_cairo_update_layout_db(cairo_t *, PangoLayout *);
CheckInterfacedef(pango_cairo_update_layout,pango_cairo_update_layout_db);
extern void pango_cairo_show_glyph_string_db(cairo_t *, PangoFont *, PangoGlyphString *);
CheckInterfacedef(pango_cairo_show_glyph_string,pango_cairo_show_glyph_string_db);
extern void pango_cairo_show_layout_line_db(cairo_t *, PangoLayoutLine *);
CheckInterfacedef(pango_cairo_show_layout_line,pango_cairo_show_layout_line_db);
extern void pango_cairo_show_layout_db(cairo_t *, PangoLayout *);
CheckInterfacedef(pango_cairo_show_layout,pango_cairo_show_layout_db);
extern void pango_cairo_glyph_string_path_db(cairo_t *, PangoFont *, PangoGlyphString *);
CheckInterfacedef(pango_cairo_glyph_string_path,pango_cairo_glyph_string_path_db);
extern void pango_cairo_layout_line_path_db(cairo_t *, PangoLayoutLine *);
CheckInterfacedef(pango_cairo_layout_line_path,pango_cairo_layout_line_path_db);
extern void pango_cairo_layout_path_db(cairo_t *, PangoLayout *);
CheckInterfacedef(pango_cairo_layout_path,pango_cairo_layout_path_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pangocairo.h\n\n",pcnt,cnt);
return cnt;
#endif

}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <pango-1.0/pango/pango.h>
#undef pango_renderer_draw_glyphs
static void(*funcptr) (PangoRenderer * , PangoFont * , PangoGlyphString * , int , int ) = 0;

extern int __lsb_check_params;
void pango_renderer_draw_glyphs (PangoRenderer * arg0 , PangoFont * arg1 , PangoGlyphString * arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for pango_renderer_draw_glyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pango_renderer_draw_glyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load pango_renderer_draw_glyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pango_renderer_draw_glyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "pango_renderer_draw_glyphs - arg0 (renderer)");
		}
		validate_NULL_TYPETYPE(  arg0, "pango_renderer_draw_glyphs - arg0 (renderer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "pango_renderer_draw_glyphs - arg1 (font)");
		}
		validate_NULL_TYPETYPE(  arg1, "pango_renderer_draw_glyphs - arg1 (font)");
		if( arg2 ) {
		validate_RWaddress( arg2, "pango_renderer_draw_glyphs - arg2 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg2, "pango_renderer_draw_glyphs - arg2 (glyphs)");
		validate_NULL_TYPETYPE(  arg3, "pango_renderer_draw_glyphs - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "pango_renderer_draw_glyphs - arg4 (y)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


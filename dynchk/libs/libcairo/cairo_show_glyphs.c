// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_show_glyphs
static void(*funcptr) (cairo_t * , const cairo_glyph_t * , int ) = 0;

extern int __lsb_check_params;
void cairo_show_glyphs (cairo_t * arg0 , const cairo_glyph_t * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_show_glyphs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_show_glyphs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_show_glyphs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_show_glyphs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_show_glyphs - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_show_glyphs - arg0 (cr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_show_glyphs - arg1 (glyphs)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_show_glyphs - arg1 (glyphs)");
		validate_NULL_TYPETYPE(  arg2, "cairo_show_glyphs - arg2 (num_glyphs)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


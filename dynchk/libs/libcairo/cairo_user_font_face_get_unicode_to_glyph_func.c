// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_user_font_face_get_unicode_to_glyph_func
static cairo_user_scaled_font_unicode_to_glyph_func_t(*funcptr) (cairo_font_face_t * ) = 0;

extern int __lsb_check_params;
cairo_user_scaled_font_unicode_to_glyph_func_t cairo_user_font_face_get_unicode_to_glyph_func (cairo_font_face_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_user_scaled_font_unicode_to_glyph_func_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_user_font_face_get_unicode_to_glyph_func()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_user_font_face_get_unicode_to_glyph_func");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_user_font_face_get_unicode_to_glyph_func. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_user_font_face_get_unicode_to_glyph_func() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_user_font_face_get_unicode_to_glyph_func - arg0 (font_face)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_user_font_face_get_unicode_to_glyph_func - arg0 (font_face)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


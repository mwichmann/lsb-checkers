// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_scaled_font_create
static cairo_scaled_font_t *(*funcptr) (cairo_font_face_t * , const cairo_matrix_t * , const cairo_matrix_t * , const cairo_font_options_t * ) = 0;

extern int __lsb_check_params;
cairo_scaled_font_t * cairo_scaled_font_create (cairo_font_face_t * arg0 , const cairo_matrix_t * arg1 , const cairo_matrix_t * arg2 , const cairo_font_options_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	cairo_scaled_font_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_scaled_font_create()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_scaled_font_create");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_scaled_font_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_scaled_font_create() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_scaled_font_create - arg0 (font_face)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_scaled_font_create - arg0 (font_face)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_scaled_font_create - arg1 (font_matrix)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_scaled_font_create - arg1 (font_matrix)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "cairo_scaled_font_create - arg2 (ctm)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_scaled_font_create - arg2 (ctm)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "cairo_scaled_font_create - arg3 (options)");
		}
		validate_NULL_TYPETYPE(  arg3, "cairo_scaled_font_create - arg3 (options)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


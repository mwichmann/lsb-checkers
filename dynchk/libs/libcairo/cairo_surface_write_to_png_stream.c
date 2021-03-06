// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_write_to_png_stream
static cairo_status_t(*funcptr) (cairo_surface_t * , cairo_write_func_t , void * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_surface_write_to_png_stream (cairo_surface_t * arg0 , cairo_write_func_t arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_surface_write_to_png_stream()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_write_to_png_stream");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_write_to_png_stream. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_write_to_png_stream() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_write_to_png_stream - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_write_to_png_stream - arg0 (surface)");
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_write_to_png_stream - arg1 (write_func)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_surface_write_to_png_stream - arg2 (closure)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_surface_write_to_png_stream - arg2 (closure)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


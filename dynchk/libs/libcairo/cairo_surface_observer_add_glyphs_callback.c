// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_observer_add_glyphs_callback
static cairo_status_t(*funcptr) (cairo_surface_t * , cairo_surface_observer_callback_t , void * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_surface_observer_add_glyphs_callback (cairo_surface_t * arg0 , cairo_surface_observer_callback_t arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_surface_observer_add_glyphs_callback()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_observer_add_glyphs_callback");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_observer_add_glyphs_callback. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_observer_add_glyphs_callback() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_observer_add_glyphs_callback - arg0 (abstract_surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_observer_add_glyphs_callback - arg0 (abstract_surface)");
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_observer_add_glyphs_callback - arg1 (func)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_surface_observer_add_glyphs_callback - arg2 (data)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_surface_observer_add_glyphs_callback - arg2 (data)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


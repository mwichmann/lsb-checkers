// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_surface_get_fallback_resolution
static void(*funcptr) (cairo_surface_t * , double * , double * ) = 0;

extern int __lsb_check_params;
void cairo_surface_get_fallback_resolution (cairo_surface_t * arg0 , double * arg1 , double * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_surface_get_fallback_resolution()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_surface_get_fallback_resolution");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_surface_get_fallback_resolution. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_surface_get_fallback_resolution() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_surface_get_fallback_resolution - arg0 (surface)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_surface_get_fallback_resolution - arg0 (surface)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_surface_get_fallback_resolution - arg1 (x_pixels_per_inch)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_surface_get_fallback_resolution - arg1 (x_pixels_per_inch)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_surface_get_fallback_resolution - arg2 (y_pixels_per_inch)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_surface_get_fallback_resolution - arg2 (y_pixels_per_inch)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


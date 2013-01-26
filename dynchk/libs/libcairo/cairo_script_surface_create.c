// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <cairo/cairo-script.h>
#undef cairo_script_surface_create
static cairo_surface_t *(*funcptr) (cairo_device_t * , cairo_content_t , double , double ) = 0;

extern int __lsb_check_params;
cairo_surface_t * cairo_script_surface_create (cairo_device_t * arg0 , cairo_content_t arg1 , double arg2 , double arg3 )
{
	int reset_flag = __lsb_check_params;
	cairo_surface_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_script_surface_create()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_script_surface_create");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_script_surface_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_script_surface_create() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_script_surface_create - arg0 (script)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_script_surface_create - arg0 (script)");
		validate_NULL_TYPETYPE(  arg1, "cairo_script_surface_create - arg1 (content)");
		validate_NULL_TYPETYPE(  arg2, "cairo_script_surface_create - arg2 (width)");
		validate_NULL_TYPETYPE(  arg3, "cairo_script_surface_create - arg3 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


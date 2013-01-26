// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <cairo/cairo-xcb.h>
#undef cairo_xcb_surface_create
static cairo_surface_t *(*funcptr) (xcb_connection_t * , xcb_drawable_t , xcb_visualtype_t * , int , int ) = 0;

extern int __lsb_check_params;
cairo_surface_t * cairo_xcb_surface_create (xcb_connection_t * arg0 , xcb_drawable_t arg1 , xcb_visualtype_t * arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	cairo_surface_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_xcb_surface_create()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_xcb_surface_create");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_xcb_surface_create. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_xcb_surface_create() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_xcb_surface_create - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_xcb_surface_create - arg0 (connection)");
		validate_NULL_TYPETYPE(  arg1, "cairo_xcb_surface_create - arg1 (drawable)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_xcb_surface_create - arg2 (visual)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_xcb_surface_create - arg2 (visual)");
		validate_NULL_TYPETYPE(  arg3, "cairo_xcb_surface_create - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "cairo_xcb_surface_create - arg4 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


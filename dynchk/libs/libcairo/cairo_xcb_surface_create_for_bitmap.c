// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <cairo/cairo-xcb.h>
#undef cairo_xcb_surface_create_for_bitmap
static cairo_surface_t *(*funcptr) (xcb_connection_t * , xcb_screen_t * , xcb_pixmap_t , int , int ) = 0;

extern int __lsb_check_params;
cairo_surface_t * cairo_xcb_surface_create_for_bitmap (xcb_connection_t * arg0 , xcb_screen_t * arg1 , xcb_pixmap_t arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	cairo_surface_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_xcb_surface_create_for_bitmap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_xcb_surface_create_for_bitmap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_xcb_surface_create_for_bitmap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_xcb_surface_create_for_bitmap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_xcb_surface_create_for_bitmap - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_xcb_surface_create_for_bitmap - arg0 (connection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_xcb_surface_create_for_bitmap - arg1 (screen)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_xcb_surface_create_for_bitmap - arg1 (screen)");
		validate_NULL_TYPETYPE(  arg2, "cairo_xcb_surface_create_for_bitmap - arg2 (bitmap)");
		validate_NULL_TYPETYPE(  arg3, "cairo_xcb_surface_create_for_bitmap - arg3 (width)");
		validate_NULL_TYPETYPE(  arg4, "cairo_xcb_surface_create_for_bitmap - arg4 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

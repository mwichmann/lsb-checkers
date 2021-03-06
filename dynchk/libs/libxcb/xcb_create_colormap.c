// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_create_colormap
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_colormap_t , xcb_window_t , xcb_visualid_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_create_colormap (xcb_connection_t * arg0 , uint8_t arg1 , xcb_colormap_t arg2 , xcb_window_t arg3 , xcb_visualid_t arg4 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_create_colormap()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_create_colormap");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_create_colormap. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_create_colormap() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_create_colormap - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_create_colormap - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_create_colormap - arg1 (alloc)");
		validate_NULL_TYPETYPE(  arg2, "xcb_create_colormap - arg2 (mid)");
		validate_NULL_TYPETYPE(  arg3, "xcb_create_colormap - arg3 (window)");
		validate_NULL_TYPETYPE(  arg4, "xcb_create_colormap - arg4 (visual)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#include <stdint.h>
#undef xcb_reparent_window
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , xcb_window_t , xcb_window_t , int16_t , int16_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_reparent_window (xcb_connection_t * arg0 , xcb_window_t arg1 , xcb_window_t arg2 , int16_t arg3 , int16_t arg4 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_reparent_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_reparent_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_reparent_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_reparent_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_reparent_window - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_reparent_window - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_reparent_window - arg1 (window)");
		validate_NULL_TYPETYPE(  arg2, "xcb_reparent_window - arg2 (parent)");
		validate_NULL_TYPETYPE(  arg3, "xcb_reparent_window - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "xcb_reparent_window - arg4 (y)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_clear_area_checked
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_window_t , int16_t , int16_t , uint16_t , uint16_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_clear_area_checked (xcb_connection_t * arg0 , uint8_t arg1 , xcb_window_t arg2 , int16_t arg3 , int16_t arg4 , uint16_t arg5 , uint16_t arg6 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_clear_area_checked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_clear_area_checked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_clear_area_checked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_clear_area_checked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_clear_area_checked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_clear_area_checked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_clear_area_checked - arg1 (exposures)");
		validate_NULL_TYPETYPE(  arg2, "xcb_clear_area_checked - arg2 (window)");
		validate_NULL_TYPETYPE(  arg3, "xcb_clear_area_checked - arg3 (x)");
		validate_NULL_TYPETYPE(  arg4, "xcb_clear_area_checked - arg4 (y)");
		validate_NULL_TYPETYPE(  arg5, "xcb_clear_area_checked - arg5 (width)");
		validate_NULL_TYPETYPE(  arg6, "xcb_clear_area_checked - arg6 (height)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}


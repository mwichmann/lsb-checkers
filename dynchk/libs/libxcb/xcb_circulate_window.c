// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_circulate_window
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_window_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_circulate_window (xcb_connection_t * arg0 , uint8_t arg1 , xcb_window_t arg2 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_circulate_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_circulate_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_circulate_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_circulate_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_circulate_window - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_circulate_window - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_circulate_window - arg1 (direction)");
		validate_NULL_TYPETYPE(  arg2, "xcb_circulate_window - arg2 (window)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


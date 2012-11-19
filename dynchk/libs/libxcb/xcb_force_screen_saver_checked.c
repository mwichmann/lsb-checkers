// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_force_screen_saver_checked
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_force_screen_saver_checked (xcb_connection_t * arg0 , uint8_t arg1 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_force_screen_saver_checked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_force_screen_saver_checked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_force_screen_saver_checked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_force_screen_saver_checked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_force_screen_saver_checked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_force_screen_saver_checked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_force_screen_saver_checked - arg1 (mode)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


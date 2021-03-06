// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_grab_keyboard_unchecked
static xcb_grab_keyboard_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_window_t , xcb_timestamp_t , uint8_t , uint8_t ) = 0;

extern int __lsb_check_params;
xcb_grab_keyboard_cookie_t xcb_grab_keyboard_unchecked (xcb_connection_t * arg0 , uint8_t arg1 , xcb_window_t arg2 , xcb_timestamp_t arg3 , uint8_t arg4 , uint8_t arg5 )
{
	int reset_flag = __lsb_check_params;
	xcb_grab_keyboard_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_grab_keyboard_unchecked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_grab_keyboard_unchecked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_grab_keyboard_unchecked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_grab_keyboard_unchecked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_grab_keyboard_unchecked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_grab_keyboard_unchecked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_grab_keyboard_unchecked - arg1 (owner_events)");
		validate_NULL_TYPETYPE(  arg2, "xcb_grab_keyboard_unchecked - arg2 (grab_window)");
		validate_NULL_TYPETYPE(  arg3, "xcb_grab_keyboard_unchecked - arg3 (time)");
		validate_NULL_TYPETYPE(  arg4, "xcb_grab_keyboard_unchecked - arg4 (pointer_mode)");
		validate_NULL_TYPETYPE(  arg5, "xcb_grab_keyboard_unchecked - arg5 (keyboard_mode)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


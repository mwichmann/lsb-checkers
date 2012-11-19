// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_send_event
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , xcb_window_t , uint32_t , const char * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_send_event (xcb_connection_t * arg0 , uint8_t arg1 , xcb_window_t arg2 , uint32_t arg3 , const char * arg4 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_send_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_send_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_send_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_send_event() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_send_event - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_send_event - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_send_event - arg1 (propagate)");
		validate_NULL_TYPETYPE(  arg2, "xcb_send_event - arg2 (destination)");
		validate_NULL_TYPETYPE(  arg3, "xcb_send_event - arg3 (event_mask)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xcb_send_event - arg4 (event)");
		}
		validate_NULL_TYPETYPE(  arg4, "xcb_send_event - arg4 (event)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


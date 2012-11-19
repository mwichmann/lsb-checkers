// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <sys/socket.h>
#include <xcb/xcbext.h>
#undef xcb_send_request
static unsigned int(*funcptr) (xcb_connection_t * , int , struct iovec * , const xcb_protocol_request_t * ) = 0;

extern int __lsb_check_params;
unsigned int xcb_send_request (xcb_connection_t * arg0 , int arg1 , struct iovec * arg2 , const xcb_protocol_request_t * arg3 )
{
	int reset_flag = __lsb_check_params;
	unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_send_request()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_send_request");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_send_request. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_send_request() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_send_request - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_send_request - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_send_request - arg1 (flags)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xcb_send_request - arg2 (vector)");
		}
		validate_NULL_TYPETYPE(  arg2, "xcb_send_request - arg2 (vector)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "xcb_send_request - arg3 (request)");
		}
		validate_NULL_TYPETYPE(  arg3, "xcb_send_request - arg3 (request)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


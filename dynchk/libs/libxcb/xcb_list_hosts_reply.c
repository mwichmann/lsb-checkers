// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <xcb/xproto.h>
#undef xcb_list_hosts_reply
static xcb_list_hosts_reply_t *(*funcptr) (xcb_connection_t * , xcb_list_hosts_cookie_t , xcb_generic_error_t * * ) = 0;

extern int __lsb_check_params;
xcb_list_hosts_reply_t * xcb_list_hosts_reply (xcb_connection_t * arg0 , xcb_list_hosts_cookie_t arg1 , xcb_generic_error_t * * arg2 )
{
	int reset_flag = __lsb_check_params;
	xcb_list_hosts_reply_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_list_hosts_reply()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_list_hosts_reply");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_list_hosts_reply. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_list_hosts_reply() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_list_hosts_reply - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_list_hosts_reply - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_list_hosts_reply - arg1 (cookie)");
		if( arg2 ) {
		validate_RWaddress( arg2, "xcb_list_hosts_reply - arg2 (e)");
		}
		validate_NULL_TYPETYPE(  arg2, "xcb_list_hosts_reply - arg2 (e)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


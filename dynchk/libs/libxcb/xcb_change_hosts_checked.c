// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#include <stdint.h>
#include <xcb/xproto.h>
#undef xcb_change_hosts_checked
static xcb_void_cookie_t(*funcptr) (xcb_connection_t * , uint8_t , uint8_t , uint16_t , const char * ) = 0;

extern int __lsb_check_params;
xcb_void_cookie_t xcb_change_hosts_checked (xcb_connection_t * arg0 , uint8_t arg1 , uint8_t arg2 , uint16_t arg3 , const char * arg4 )
{
	int reset_flag = __lsb_check_params;
	xcb_void_cookie_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_change_hosts_checked()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_change_hosts_checked");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_change_hosts_checked. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_change_hosts_checked() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_change_hosts_checked - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_change_hosts_checked - arg0 (c)");
		validate_NULL_TYPETYPE(  arg1, "xcb_change_hosts_checked - arg1 (mode)");
		validate_NULL_TYPETYPE(  arg2, "xcb_change_hosts_checked - arg2 (family)");
		validate_NULL_TYPETYPE(  arg3, "xcb_change_hosts_checked - arg3 (address_len)");
		if( arg4 ) {
		validate_Rdaddress( arg4, "xcb_change_hosts_checked - arg4 (address)");
		}
		validate_NULL_TYPETYPE(  arg4, "xcb_change_hosts_checked - arg4 (address)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


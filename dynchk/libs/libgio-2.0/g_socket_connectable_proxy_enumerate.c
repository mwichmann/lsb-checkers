// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsocketconnectable.h>
#undef g_socket_connectable_proxy_enumerate
static GSocketAddressEnumerator *(*funcptr) (GSocketConnectable * ) = 0;

extern int __lsb_check_params;
GSocketAddressEnumerator * g_socket_connectable_proxy_enumerate (GSocketConnectable * arg0 )
{
	int reset_flag = __lsb_check_params;
	GSocketAddressEnumerator * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_connectable_proxy_enumerate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_connectable_proxy_enumerate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_connectable_proxy_enumerate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_connectable_proxy_enumerate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_connectable_proxy_enumerate - arg0 (connectable)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_connectable_proxy_enumerate - arg0 (connectable)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


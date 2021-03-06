// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gproxy.h>
#undef g_proxy_connect
static GIOStream *(*funcptr) (GProxy * , GIOStream * , GProxyAddress * , GCancellable * , GError * * ) = 0;

extern int __lsb_check_params;
GIOStream * g_proxy_connect (GProxy * arg0 , GIOStream * arg1 , GProxyAddress * arg2 , GCancellable * arg3 , GError * * arg4 )
{
	int reset_flag = __lsb_check_params;
	GIOStream * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_proxy_connect()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_proxy_connect");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_proxy_connect. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_proxy_connect() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_proxy_connect - arg0 (proxy)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_proxy_connect - arg0 (proxy)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_proxy_connect - arg1 (connection)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_proxy_connect - arg1 (connection)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_proxy_connect - arg2 (proxy_address)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_proxy_connect - arg2 (proxy_address)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_proxy_connect - arg3 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_proxy_connect - arg3 (cancellable)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_proxy_connect - arg4 (error)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_proxy_connect - arg4 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


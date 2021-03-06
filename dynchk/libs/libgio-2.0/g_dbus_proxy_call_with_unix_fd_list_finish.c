// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusproxy.h>
#undef g_dbus_proxy_call_with_unix_fd_list_finish
static GVariant *(*funcptr) (GDBusProxy * , GUnixFDList * * , GAsyncResult * , GError * * ) = 0;

extern int __lsb_check_params;
GVariant * g_dbus_proxy_call_with_unix_fd_list_finish (GDBusProxy * arg0 , GUnixFDList * * arg1 , GAsyncResult * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_proxy_call_with_unix_fd_list_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_proxy_call_with_unix_fd_list_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_proxy_call_with_unix_fd_list_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_proxy_call_with_unix_fd_list_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_proxy_call_with_unix_fd_list_finish - arg0 (proxy)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_proxy_call_with_unix_fd_list_finish - arg0 (proxy)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_dbus_proxy_call_with_unix_fd_list_finish - arg1 (out_fd_list)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_proxy_call_with_unix_fd_list_finish - arg1 (out_fd_list)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_proxy_call_with_unix_fd_list_finish - arg2 (res)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_proxy_call_with_unix_fd_list_finish - arg2 (res)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_dbus_proxy_call_with_unix_fd_list_finish - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_dbus_proxy_call_with_unix_fd_list_finish - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


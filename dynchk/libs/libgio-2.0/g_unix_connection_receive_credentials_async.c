// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gio-unix-2.0/gio/gunixconnection.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#undef g_unix_connection_receive_credentials_async
static void(*funcptr) (GUnixConnection * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_unix_connection_receive_credentials_async (GUnixConnection * arg0 , GCancellable * arg1 , GAsyncReadyCallback arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_unix_connection_receive_credentials_async()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unix_connection_receive_credentials_async");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unix_connection_receive_credentials_async. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unix_connection_receive_credentials_async() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_unix_connection_receive_credentials_async - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_unix_connection_receive_credentials_async - arg0 (connection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_unix_connection_receive_credentials_async - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_unix_connection_receive_credentials_async - arg1 (cancellable)");
		validate_NULL_TYPETYPE(  arg2, "g_unix_connection_receive_credentials_async - arg2 (callback)");
		validate_NULL_TYPETYPE(  arg3, "g_unix_connection_receive_credentials_async - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

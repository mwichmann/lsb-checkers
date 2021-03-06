// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusconnection.h>
#undef g_dbus_connection_flush
static void(*funcptr) (GDBusConnection * , GCancellable * , GAsyncReadyCallback , gpointer ) = 0;

extern int __lsb_check_params;
void g_dbus_connection_flush (GDBusConnection * arg0 , GCancellable * arg1 , GAsyncReadyCallback arg2 , gpointer arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_dbus_connection_flush()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_connection_flush");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_connection_flush. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_connection_flush() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_connection_flush - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_connection_flush - arg0 (connection)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_dbus_connection_flush - arg1 (cancellable)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_connection_flush - arg1 (cancellable)");
		validate_NULL_TYPETYPE(  arg2, "g_dbus_connection_flush - arg2 (callback)");
		validate_NULL_TYPETYPE(  arg3, "g_dbus_connection_flush - arg3 (user_data)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


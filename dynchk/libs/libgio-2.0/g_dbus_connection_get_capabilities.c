// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusconnection.h>
#undef g_dbus_connection_get_capabilities
static GDBusCapabilityFlags(*funcptr) (GDBusConnection * ) = 0;

extern int __lsb_check_params;
GDBusCapabilityFlags g_dbus_connection_get_capabilities (GDBusConnection * arg0 )
{
	int reset_flag = __lsb_check_params;
	GDBusCapabilityFlags ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_connection_get_capabilities()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_connection_get_capabilities");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_connection_get_capabilities. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_connection_get_capabilities() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_connection_get_capabilities - arg0 (connection)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_connection_get_capabilities - arg0 (connection)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


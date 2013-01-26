// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusobjectmanagerclient.h>
#undef g_dbus_object_manager_client_get_name_owner
static gchar *(*funcptr) (GDBusObjectManagerClient * ) = 0;

extern int __lsb_check_params;
gchar * g_dbus_object_manager_client_get_name_owner (GDBusObjectManagerClient * arg0 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_object_manager_client_get_name_owner()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_object_manager_client_get_name_owner");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_object_manager_client_get_name_owner. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_object_manager_client_get_name_owner() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_object_manager_client_get_name_owner - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_object_manager_client_get_name_owner - arg0 (manager)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

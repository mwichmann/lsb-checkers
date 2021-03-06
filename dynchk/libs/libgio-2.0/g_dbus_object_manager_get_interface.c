// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusobjectmanager.h>
#undef g_dbus_object_manager_get_interface
static GDBusInterface *(*funcptr) (GDBusObjectManager * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
GDBusInterface * g_dbus_object_manager_get_interface (GDBusObjectManager * arg0 , const gchar * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	GDBusInterface * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_object_manager_get_interface()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_object_manager_get_interface");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_object_manager_get_interface. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_object_manager_get_interface() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_object_manager_get_interface - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_object_manager_get_interface - arg0 (manager)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dbus_object_manager_get_interface - arg1 (object_path)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_object_manager_get_interface - arg1 (object_path)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_dbus_object_manager_get_interface - arg2 (interface_name)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_object_manager_get_interface - arg2 (interface_name)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


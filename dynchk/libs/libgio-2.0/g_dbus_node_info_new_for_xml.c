// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusintrospection.h>
#undef g_dbus_node_info_new_for_xml
static GDBusNodeInfo *(*funcptr) (const gchar * , GError * * ) = 0;

extern int __lsb_check_params;
GDBusNodeInfo * g_dbus_node_info_new_for_xml (const gchar * arg0 , GError * * arg1 )
{
	int reset_flag = __lsb_check_params;
	GDBusNodeInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_node_info_new_for_xml()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_node_info_new_for_xml");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_node_info_new_for_xml. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_node_info_new_for_xml() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_dbus_node_info_new_for_xml - arg0 (xml_data)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_node_info_new_for_xml - arg0 (xml_data)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_dbus_node_info_new_for_xml - arg1 (error)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_node_info_new_for_xml - arg1 (error)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


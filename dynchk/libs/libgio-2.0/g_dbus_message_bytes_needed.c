// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gdbusmessage.h>
#undef g_dbus_message_bytes_needed
static gssize(*funcptr) (guchar * , gsize , GError * * ) = 0;

extern int __lsb_check_params;
gssize g_dbus_message_bytes_needed (guchar * arg0 , gsize arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gssize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_message_bytes_needed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_message_bytes_needed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_message_bytes_needed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_message_bytes_needed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_message_bytes_needed - arg0 (blob)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_message_bytes_needed - arg0 (blob)");
		validate_NULL_TYPETYPE(  arg1, "g_dbus_message_bytes_needed - arg1 (blob_len)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_message_bytes_needed - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_message_bytes_needed - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


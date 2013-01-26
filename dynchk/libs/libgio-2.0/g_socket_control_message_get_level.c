// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsocketcontrolmessage.h>
#undef g_socket_control_message_get_level
static int(*funcptr) (GSocketControlMessage * ) = 0;

extern int __lsb_check_params;
int g_socket_control_message_get_level (GSocketControlMessage * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_control_message_get_level()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_control_message_get_level");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_control_message_get_level. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_control_message_get_level() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_control_message_get_level - arg0 (message)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_control_message_get_level - arg0 (message)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

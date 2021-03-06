// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/gio/gsocketlistener.h>
#undef g_socket_listener_add_inet_port
static gboolean(*funcptr) (GSocketListener * , guint16 , GObject * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_socket_listener_add_inet_port (GSocketListener * arg0 , guint16 arg1 , GObject * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_listener_add_inet_port()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_listener_add_inet_port");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_listener_add_inet_port. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_listener_add_inet_port() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_listener_add_inet_port - arg0 (listener)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_listener_add_inet_port - arg0 (listener)");
		validate_NULL_TYPETYPE(  arg1, "g_socket_listener_add_inet_port - arg1 (port)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_socket_listener_add_inet_port - arg2 (source_object)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_socket_listener_add_inet_port - arg2 (source_object)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_socket_listener_add_inet_port - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_socket_listener_add_inet_port - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


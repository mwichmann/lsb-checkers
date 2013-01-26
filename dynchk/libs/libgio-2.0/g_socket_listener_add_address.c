// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsocketlistener.h>
#undef g_socket_listener_add_address
static gboolean(*funcptr) (GSocketListener * , GSocketAddress * , GSocketType , GSocketProtocol , GObject * , GSocketAddress * * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_socket_listener_add_address (GSocketListener * arg0 , GSocketAddress * arg1 , GSocketType arg2 , GSocketProtocol arg3 , GObject * arg4 , GSocketAddress * * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_listener_add_address()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_listener_add_address");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_listener_add_address. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_listener_add_address() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_listener_add_address - arg0 (listener)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_listener_add_address - arg0 (listener)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_socket_listener_add_address - arg1 (address)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_socket_listener_add_address - arg1 (address)");
		validate_NULL_TYPETYPE(  arg2, "g_socket_listener_add_address - arg2 (type)");
		validate_NULL_TYPETYPE(  arg3, "g_socket_listener_add_address - arg3 (protocol)");
		if( arg4 ) {
		validate_RWaddress( arg4, "g_socket_listener_add_address - arg4 (source_object)");
		}
		validate_NULL_TYPETYPE(  arg4, "g_socket_listener_add_address - arg4 (source_object)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_socket_listener_add_address - arg5 (effective_address)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_socket_listener_add_address - arg5 (effective_address)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_socket_listener_add_address - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_socket_listener_add_address - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}

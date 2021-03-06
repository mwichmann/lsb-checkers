// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsocket.h>
#undef g_socket_is_closed
static gboolean(*funcptr) (GSocket * ) = 0;

extern int __lsb_check_params;
gboolean g_socket_is_closed (GSocket * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_socket_is_closed()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_socket_is_closed");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_socket_is_closed. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_socket_is_closed() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_socket_is_closed - arg0 (socket)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_socket_is_closed - arg0 (socket)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


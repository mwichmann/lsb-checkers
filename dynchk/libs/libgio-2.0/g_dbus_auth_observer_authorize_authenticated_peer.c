// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gdbusauthobserver.h>
#undef g_dbus_auth_observer_authorize_authenticated_peer
static gboolean(*funcptr) (GDBusAuthObserver * , GIOStream * , GCredentials * ) = 0;

extern int __lsb_check_params;
gboolean g_dbus_auth_observer_authorize_authenticated_peer (GDBusAuthObserver * arg0 , GIOStream * arg1 , GCredentials * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dbus_auth_observer_authorize_authenticated_peer()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dbus_auth_observer_authorize_authenticated_peer");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dbus_auth_observer_authorize_authenticated_peer. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dbus_auth_observer_authorize_authenticated_peer() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_dbus_auth_observer_authorize_authenticated_peer - arg0 (observer)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dbus_auth_observer_authorize_authenticated_peer - arg0 (observer)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_dbus_auth_observer_authorize_authenticated_peer - arg1 (stream)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dbus_auth_observer_authorize_authenticated_peer - arg1 (stream)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_dbus_auth_observer_authorize_authenticated_peer - arg2 (credentials)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_dbus_auth_observer_authorize_authenticated_peer - arg2 (credentials)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


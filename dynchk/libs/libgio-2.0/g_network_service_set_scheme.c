// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gnetworkservice.h>
#undef g_network_service_set_scheme
static void(*funcptr) (GNetworkService * , const gchar * ) = 0;

extern int __lsb_check_params;
void g_network_service_set_scheme (GNetworkService * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_network_service_set_scheme()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_network_service_set_scheme");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_network_service_set_scheme. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_network_service_set_scheme() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_network_service_set_scheme - arg0 (srv)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_network_service_set_scheme - arg0 (srv)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_network_service_set_scheme - arg1 (scheme)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_network_service_set_scheme - arg1 (scheme)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gappinfo.h>
#undef g_app_info_launch_uris
static gboolean(*funcptr) (GAppInfo * , GList * , GAppLaunchContext * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_app_info_launch_uris (GAppInfo * arg0 , GList * arg1 , GAppLaunchContext * arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_app_info_launch_uris()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_app_info_launch_uris");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_app_info_launch_uris. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_app_info_launch_uris() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_app_info_launch_uris - arg0 (appinfo)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_app_info_launch_uris - arg0 (appinfo)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_app_info_launch_uris - arg1 (uris)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_app_info_launch_uris - arg1 (uris)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_app_info_launch_uris - arg2 (launch_context)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_app_info_launch_uris - arg2 (launch_context)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_app_info_launch_uris - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_app_info_launch_uris - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


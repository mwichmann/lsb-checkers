// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_app_launch_context_set_icon_name
static void(*funcptr) (GdkAppLaunchContext * , const char * ) = 0;

extern int __lsb_check_params;
void gdk_app_launch_context_set_icon_name (GdkAppLaunchContext * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_app_launch_context_set_icon_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_app_launch_context_set_icon_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_app_launch_context_set_icon_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_app_launch_context_set_icon_name() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_app_launch_context_set_icon_name - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_app_launch_context_set_icon_name - arg0 (context)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_app_launch_context_set_icon_name - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_app_launch_context_set_icon_name - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


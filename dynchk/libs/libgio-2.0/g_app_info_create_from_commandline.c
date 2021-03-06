// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gappinfo.h>
#undef g_app_info_create_from_commandline
static GAppInfo *(*funcptr) (const char * , const char * , GAppInfoCreateFlags , GError * * ) = 0;

extern int __lsb_check_params;
GAppInfo * g_app_info_create_from_commandline (const char * arg0 , const char * arg1 , GAppInfoCreateFlags arg2 , GError * * arg3 )
{
	int reset_flag = __lsb_check_params;
	GAppInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_app_info_create_from_commandline()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_app_info_create_from_commandline");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_app_info_create_from_commandline. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_app_info_create_from_commandline() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_app_info_create_from_commandline - arg0 (commandline)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_app_info_create_from_commandline - arg0 (commandline)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_app_info_create_from_commandline - arg1 (application_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_app_info_create_from_commandline - arg1 (application_name)");
		validate_NULL_TYPETYPE(  arg2, "g_app_info_create_from_commandline - arg2 (flags)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_app_info_create_from_commandline - arg3 (error)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_app_info_create_from_commandline - arg3 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


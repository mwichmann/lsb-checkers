// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gsettings.h>
#undef g_settings_new_with_backend_and_path
static GSettings *(*funcptr) (const gchar * , GSettingsBackend * , const gchar * ) = 0;

extern int __lsb_check_params;
GSettings * g_settings_new_with_backend_and_path (const gchar * arg0 , GSettingsBackend * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	GSettings * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_settings_new_with_backend_and_path()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_new_with_backend_and_path");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_new_with_backend_and_path. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_new_with_backend_and_path() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_settings_new_with_backend_and_path - arg0 (schema_id)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_settings_new_with_backend_and_path - arg0 (schema_id)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_settings_new_with_backend_and_path - arg1 (backend)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_settings_new_with_backend_and_path - arg1 (backend)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_settings_new_with_backend_and_path - arg2 (path)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_settings_new_with_backend_and_path - arg2 (path)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


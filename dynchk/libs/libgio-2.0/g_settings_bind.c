// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsettings.h>
#undef g_settings_bind
static void(*funcptr) (GSettings * , const gchar * , void * , const gchar * , GSettingsBindFlags ) = 0;

extern int __lsb_check_params;
void g_settings_bind (GSettings * arg0 , const gchar * arg1 , void * arg2 , const gchar * arg3 , GSettingsBindFlags arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_settings_bind()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_settings_bind");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_settings_bind. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_settings_bind() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_settings_bind - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_settings_bind - arg0 (settings)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_settings_bind - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_settings_bind - arg1 (key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_settings_bind - arg2 (object)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_settings_bind - arg2 (object)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_settings_bind - arg3 (property)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_settings_bind - arg3 (property)");
		validate_NULL_TYPETYPE(  arg4, "g_settings_bind - arg4 (flags)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_key_file_load_from_dirs
static gboolean(*funcptr) (GKeyFile * , const gchar * , const gchar * * , gchar * * , GKeyFileFlags , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_key_file_load_from_dirs (GKeyFile * arg0 , const gchar * arg1 , const gchar * * arg2 , gchar * * arg3 , GKeyFileFlags arg4 , GError * * arg5 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_key_file_load_from_dirs()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_key_file_load_from_dirs");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_key_file_load_from_dirs. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_key_file_load_from_dirs() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_key_file_load_from_dirs - arg0 (key_file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_key_file_load_from_dirs - arg0 (key_file)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_key_file_load_from_dirs - arg1 (file)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_key_file_load_from_dirs - arg1 (file)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_key_file_load_from_dirs - arg2 (search_dirs)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_key_file_load_from_dirs - arg2 (search_dirs)");
		if( arg3 ) {
		validate_RWaddress( arg3, "g_key_file_load_from_dirs - arg3 (full_path)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_key_file_load_from_dirs - arg3 (full_path)");
		validate_NULL_TYPETYPE(  arg4, "g_key_file_load_from_dirs - arg4 (flags)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_key_file_load_from_dirs - arg5 (error)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_key_file_load_from_dirs - arg5 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

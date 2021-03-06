// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/giomodule.h>
#undef g_io_modules_load_all_in_directory_with_scope
static GList *(*funcptr) (const gchar * , GIOModuleScope * ) = 0;

extern int __lsb_check_params;
GList * g_io_modules_load_all_in_directory_with_scope (const gchar * arg0 , GIOModuleScope * arg1 )
{
	int reset_flag = __lsb_check_params;
	GList * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_io_modules_load_all_in_directory_with_scope()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_io_modules_load_all_in_directory_with_scope");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_io_modules_load_all_in_directory_with_scope. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_io_modules_load_all_in_directory_with_scope() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_io_modules_load_all_in_directory_with_scope - arg0 (dirname)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_io_modules_load_all_in_directory_with_scope - arg0 (dirname)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_io_modules_load_all_in_directory_with_scope - arg1 (scope)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_io_modules_load_all_in_directory_with_scope - arg1 (scope)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


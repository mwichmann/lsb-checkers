// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gfileinfo.h>
#undef g_file_info_set_symlink_target
static void(*funcptr) (GFileInfo * , const char * ) = 0;

extern int __lsb_check_params;
void g_file_info_set_symlink_target (GFileInfo * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_file_info_set_symlink_target()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_info_set_symlink_target");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_info_set_symlink_target. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_info_set_symlink_target() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_info_set_symlink_target - arg0 (info)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_info_set_symlink_target - arg0 (info)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_file_info_set_symlink_target - arg1 (symlink_target)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_info_set_symlink_target - arg1 (symlink_target)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


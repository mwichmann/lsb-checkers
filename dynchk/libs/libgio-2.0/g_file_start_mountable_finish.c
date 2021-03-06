// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gfile.h>
#undef g_file_start_mountable_finish
static gboolean(*funcptr) (GFile * , GAsyncResult * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_file_start_mountable_finish (GFile * arg0 , GAsyncResult * arg1 , GError * * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_file_start_mountable_finish()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_file_start_mountable_finish");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_file_start_mountable_finish. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_file_start_mountable_finish() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_file_start_mountable_finish - arg0 (file)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_file_start_mountable_finish - arg0 (file)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_file_start_mountable_finish - arg1 (result)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_file_start_mountable_finish - arg1 (result)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_file_start_mountable_finish - arg2 (error)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_file_start_mountable_finish - arg2 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


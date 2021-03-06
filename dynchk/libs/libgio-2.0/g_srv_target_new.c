// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <glib-2.0/gio/gsrvtarget.h>
#undef g_srv_target_new
static GSrvTarget *(*funcptr) (const gchar * , guint16 , guint16 , guint16 ) = 0;

extern int __lsb_check_params;
GSrvTarget * g_srv_target_new (const gchar * arg0 , guint16 arg1 , guint16 arg2 , guint16 arg3 )
{
	int reset_flag = __lsb_check_params;
	GSrvTarget * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_srv_target_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_srv_target_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_srv_target_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_srv_target_new() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_srv_target_new - arg0 (hostname)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_srv_target_new - arg0 (hostname)");
		validate_NULL_TYPETYPE(  arg1, "g_srv_target_new - arg1 (port)");
		validate_NULL_TYPETYPE(  arg2, "g_srv_target_new - arg2 (priority)");
		validate_NULL_TYPETYPE(  arg3, "g_srv_target_new - arg3 (weight)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


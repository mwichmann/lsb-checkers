// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_log_remove_handler
static void(*funcptr) (const gchar * , guint ) = 0;

extern int __lsb_check_params;
void g_log_remove_handler (const gchar * arg0 , guint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_log_remove_handler()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_log_remove_handler");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_log_remove_handler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_log_remove_handler() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_log_remove_handler - arg0 (log_domain)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_log_remove_handler - arg0 (log_domain)");
		validate_NULL_TYPETYPE(  arg1, "g_log_remove_handler - arg1 (handler_id)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

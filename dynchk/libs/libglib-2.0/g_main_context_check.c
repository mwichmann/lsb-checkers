// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_main_context_check
static gint(*funcptr) (GMainContext * , gint , GPollFD * , gint ) = 0;

extern int __lsb_check_params;
gint g_main_context_check (GMainContext * arg0 , gint arg1 , GPollFD * arg2 , gint arg3 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_main_context_check()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_main_context_check");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_main_context_check. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_main_context_check() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_main_context_check - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_main_context_check - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "g_main_context_check - arg1 (max_priority)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_main_context_check - arg2 (fds)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_main_context_check - arg2 (fds)");
		validate_NULL_TYPETYPE(  arg3, "g_main_context_check - arg3 (n_fds)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


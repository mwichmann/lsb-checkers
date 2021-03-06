// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_main_context_iteration
static gboolean(*funcptr) (GMainContext * , gboolean ) = 0;

extern int __lsb_check_params;
gboolean g_main_context_iteration (GMainContext * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_main_context_iteration()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_main_context_iteration");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_main_context_iteration. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_main_context_iteration() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_main_context_iteration - arg0 (context)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_main_context_iteration - arg0 (context)");
		validate_NULL_TYPETYPE(  arg1, "g_main_context_iteration - arg1 (may_block)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


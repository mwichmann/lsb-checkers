// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hook_destroy
static gboolean(*funcptr) (GHookList * , gulong ) = 0;

extern int __lsb_check_params;
gboolean g_hook_destroy (GHookList * arg0 , gulong arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_hook_destroy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hook_destroy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hook_destroy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hook_destroy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hook_destroy - arg0 (hook_list)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hook_destroy - arg0 (hook_list)");
		validate_NULL_TYPETYPE(  arg1, "g_hook_destroy - arg1 (hook_id)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


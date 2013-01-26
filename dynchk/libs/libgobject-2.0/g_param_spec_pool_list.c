// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib-object.h>
#include <glib-2.0/glib.h>
#undef g_param_spec_pool_list
static GParamSpec * *(*funcptr) (GParamSpecPool * , GType , guint * ) = 0;

extern int __lsb_check_params;
GParamSpec * * g_param_spec_pool_list (GParamSpecPool * arg0 , GType arg1 , guint * arg2 )
{
	int reset_flag = __lsb_check_params;
	GParamSpec * * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_param_spec_pool_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_param_spec_pool_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_param_spec_pool_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_param_spec_pool_list() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_param_spec_pool_list - arg0 (pool)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_param_spec_pool_list - arg0 (pool)");
		validate_NULL_TYPETYPE(  arg1, "g_param_spec_pool_list - arg1 (owner_type)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_param_spec_pool_list - arg2 (n_pspecs_p)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_param_spec_pool_list - arg2 (n_pspecs_p)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

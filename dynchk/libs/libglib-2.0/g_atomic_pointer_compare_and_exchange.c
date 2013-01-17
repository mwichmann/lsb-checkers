// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_atomic_pointer_compare_and_exchange
static gboolean(*funcptr) (void volatile  * , gpointer , gpointer ) = 0;

extern int __lsb_check_params;
gboolean g_atomic_pointer_compare_and_exchange (void volatile  * arg0 , gpointer arg1 , gpointer arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_atomic_pointer_compare_and_exchange()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_atomic_pointer_compare_and_exchange");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_atomic_pointer_compare_and_exchange. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_atomic_pointer_compare_and_exchange() - validating");
		validate_RWaddress( arg0, "g_atomic_pointer_compare_and_exchange - arg0 (atomic)");
		validate_NULL_TYPETYPE(  arg0, "g_atomic_pointer_compare_and_exchange - arg0 (atomic)");
		validate_NULL_TYPETYPE(  arg1, "g_atomic_pointer_compare_and_exchange - arg1 (oldval)");
		validate_NULL_TYPETYPE(  arg2, "g_atomic_pointer_compare_and_exchange - arg2 (newval)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


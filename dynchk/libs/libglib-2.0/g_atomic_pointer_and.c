// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_atomic_pointer_and
static gsize(*funcptr) (void volatile  * , gsize ) = 0;

extern int __lsb_check_params;
gsize g_atomic_pointer_and (void volatile  * arg0 , gsize arg1 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_atomic_pointer_and()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_atomic_pointer_and");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_atomic_pointer_and. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_atomic_pointer_and() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_atomic_pointer_and - arg0 (atomic)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_atomic_pointer_and - arg0 (atomic)");
		validate_NULL_TYPETYPE(  arg1, "g_atomic_pointer_and - arg1 (val)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


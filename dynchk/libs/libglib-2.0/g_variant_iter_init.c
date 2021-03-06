// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_iter_init
static gsize(*funcptr) (GVariantIter * , GVariant * ) = 0;

extern int __lsb_check_params;
gsize g_variant_iter_init (GVariantIter * arg0 , GVariant * arg1 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_iter_init()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_iter_init");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_iter_init. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_iter_init() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_variant_iter_init - arg0 (iter)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_iter_init - arg0 (iter)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_variant_iter_init - arg1 (value)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_variant_iter_init - arg1 (value)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


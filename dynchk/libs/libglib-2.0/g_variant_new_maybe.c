// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_new_maybe
static GVariant *(*funcptr) (const GVariantType * , GVariant * ) = 0;

extern int __lsb_check_params;
GVariant * g_variant_new_maybe (const GVariantType * arg0 , GVariant * arg1 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_new_maybe()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_new_maybe");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_new_maybe. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_new_maybe() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_variant_new_maybe - arg0 (child_type)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_new_maybe - arg0 (child_type)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_variant_new_maybe - arg1 (child)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_variant_new_maybe - arg1 (child)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


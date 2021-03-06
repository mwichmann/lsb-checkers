// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_print_string
static GString *(*funcptr) (GVariant * , GString * , gboolean ) = 0;

extern int __lsb_check_params;
GString * g_variant_print_string (GVariant * arg0 , GString * arg1 , gboolean arg2 )
{
	int reset_flag = __lsb_check_params;
	GString * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_print_string()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_print_string");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_print_string. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_print_string() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_variant_print_string - arg0 (value)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_print_string - arg0 (value)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_variant_print_string - arg1 (string)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_variant_print_string - arg1 (string)");
		validate_NULL_TYPETYPE(  arg2, "g_variant_print_string - arg2 (type_annotate)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


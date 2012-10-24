// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_variant_new_bytestring_array
static GVariant *(*funcptr) (const gchar *const  * , gssize ) = 0;

extern int __lsb_check_params;
GVariant * g_variant_new_bytestring_array (const gchar *const  * arg0 , gssize arg1 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_new_bytestring_array()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_new_bytestring_array");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_new_bytestring_array. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_new_bytestring_array() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_variant_new_bytestring_array - arg0 (strv)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_new_bytestring_array - arg0 (strv)");
		validate_NULL_TYPETYPE(  arg1, "g_variant_new_bytestring_array - arg1 (length)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


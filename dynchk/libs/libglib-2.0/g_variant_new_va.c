// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <stdarg.h>
#undef g_variant_new_va
static GVariant *(*funcptr) (const gchar * , const gchar * * , va_list * ) = 0;

extern int __lsb_check_params;
GVariant * g_variant_new_va (const gchar * arg0 , const gchar * * arg1 , va_list * arg2 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_variant_new_va()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_variant_new_va");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_variant_new_va. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_variant_new_va() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_variant_new_va - arg0 (format_string)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_variant_new_va - arg0 (format_string)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_variant_new_va - arg1 (endptr)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_variant_new_va - arg1 (endptr)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_variant_new_va - arg2 (app)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_variant_new_va - arg2 (app)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


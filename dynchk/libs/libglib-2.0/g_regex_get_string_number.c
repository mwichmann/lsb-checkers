// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_regex_get_string_number
static gint(*funcptr) (const GRegex * , const gchar * ) = 0;

extern int __lsb_check_params;
gint g_regex_get_string_number (const GRegex * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_regex_get_string_number()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_regex_get_string_number");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_regex_get_string_number. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_regex_get_string_number() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_regex_get_string_number - arg0 (regex)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_regex_get_string_number - arg0 (regex)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_regex_get_string_number - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_regex_get_string_number - arg1 (name)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

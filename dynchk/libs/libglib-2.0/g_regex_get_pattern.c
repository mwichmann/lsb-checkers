// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_regex_get_pattern
static const gchar *(*funcptr) (const GRegex * ) = 0;

extern int __lsb_check_params;
const gchar * g_regex_get_pattern (const GRegex * arg0 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_regex_get_pattern()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_regex_get_pattern");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_regex_get_pattern. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_regex_get_pattern() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_regex_get_pattern - arg0 (regex)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_regex_get_pattern - arg0 (regex)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

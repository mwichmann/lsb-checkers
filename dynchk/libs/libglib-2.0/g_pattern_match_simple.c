// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_pattern_match_simple
static gboolean(*funcptr) (const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
gboolean g_pattern_match_simple (const gchar * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_pattern_match_simple()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_pattern_match_simple");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_pattern_match_simple. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_pattern_match_simple() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_pattern_match_simple - arg0 (pattern)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_pattern_match_simple - arg0 (pattern)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_pattern_match_simple - arg1 (string)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_pattern_match_simple - arg1 (string)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


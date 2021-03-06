// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_pattern_match
static gboolean(*funcptr) (GPatternSpec * , guint , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
gboolean g_pattern_match (GPatternSpec * arg0 , guint arg1 , const gchar * arg2 , const gchar * arg3 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_pattern_match()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_pattern_match");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_pattern_match. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_pattern_match() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_pattern_match - arg0 (pspec)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_pattern_match - arg0 (pspec)");
		validate_NULL_TYPETYPE(  arg1, "g_pattern_match - arg1 (string_length)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "g_pattern_match - arg2 (string)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_pattern_match - arg2 (string)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_pattern_match - arg3 (string_reversed)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_pattern_match - arg3 (string_reversed)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


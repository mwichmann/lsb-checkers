// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_regex_match_all_full
static gboolean(*funcptr) (const GRegex * , const gchar * , gssize , gint , GRegexMatchFlags , GMatchInfo * * , GError * * ) = 0;

extern int __lsb_check_params;
gboolean g_regex_match_all_full (const GRegex * arg0 , const gchar * arg1 , gssize arg2 , gint arg3 , GRegexMatchFlags arg4 , GMatchInfo * * arg5 , GError * * arg6 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_regex_match_all_full()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_regex_match_all_full");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_regex_match_all_full. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_regex_match_all_full() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_regex_match_all_full - arg0 (regex)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_regex_match_all_full - arg0 (regex)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_regex_match_all_full - arg1 (string)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_regex_match_all_full - arg1 (string)");
		validate_NULL_TYPETYPE(  arg2, "g_regex_match_all_full - arg2 (string_len)");
		validate_NULL_TYPETYPE(  arg3, "g_regex_match_all_full - arg3 (start_position)");
		validate_NULL_TYPETYPE(  arg4, "g_regex_match_all_full - arg4 (match_options)");
		if( arg5 ) {
		validate_RWaddress( arg5, "g_regex_match_all_full - arg5 (match_info)");
		}
		validate_NULL_TYPETYPE(  arg5, "g_regex_match_all_full - arg5 (match_info)");
		if( arg6 ) {
		validate_RWaddress( arg6, "g_regex_match_all_full - arg6 (error)");
		}
		validate_NULL_TYPETYPE(  arg6, "g_regex_match_all_full - arg6 (error)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
	__lsb_check_params = reset_flag;
	return ret_value;
}


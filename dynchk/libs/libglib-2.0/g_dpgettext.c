// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_dpgettext
static const gchar *(*funcptr) (const gchar * , const gchar * , gsize ) = 0;

extern int __lsb_check_params;
const gchar * g_dpgettext (const gchar * arg0 , const gchar * arg1 , gsize arg2 )
{
	int reset_flag = __lsb_check_params;
	const gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_dpgettext()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_dpgettext");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_dpgettext. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_dpgettext() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "g_dpgettext - arg0 (domain)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_dpgettext - arg0 (domain)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_dpgettext - arg1 (msgctxtid)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_dpgettext - arg1 (msgctxtid)");
		validate_NULL_TYPETYPE(  arg2, "g_dpgettext - arg2 (msgidoffset)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


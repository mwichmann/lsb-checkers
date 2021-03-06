// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_unichar_fully_decompose
static gsize(*funcptr) (gunichar , gboolean , gunichar * , gsize ) = 0;

extern int __lsb_check_params;
gsize g_unichar_fully_decompose (gunichar arg0 , gboolean arg1 , gunichar * arg2 , gsize arg3 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unichar_fully_decompose()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unichar_fully_decompose");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unichar_fully_decompose. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unichar_fully_decompose() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_unichar_fully_decompose - arg0 (ch)");
		validate_NULL_TYPETYPE(  arg1, "g_unichar_fully_decompose - arg1 (compat)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_unichar_fully_decompose - arg2 (result)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_unichar_fully_decompose - arg2 (result)");
		validate_NULL_TYPETYPE(  arg3, "g_unichar_fully_decompose - arg3 (result_len)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


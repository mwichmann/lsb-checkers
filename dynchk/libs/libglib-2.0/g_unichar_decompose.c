// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_unichar_decompose
static gboolean(*funcptr) (gunichar , gunichar * , gunichar * ) = 0;

extern int __lsb_check_params;
gboolean g_unichar_decompose (gunichar arg0 , gunichar * arg1 , gunichar * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_unichar_decompose()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_unichar_decompose");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_unichar_decompose. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_unichar_decompose() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_unichar_decompose - arg0 (ch)");
		if( arg1 ) {
		validate_RWaddress( arg1, "g_unichar_decompose - arg1 (a)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_unichar_decompose - arg1 (a)");
		if( arg2 ) {
		validate_RWaddress( arg2, "g_unichar_decompose - arg2 (b)");
		}
		validate_NULL_TYPETYPE(  arg2, "g_unichar_decompose - arg2 (b)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


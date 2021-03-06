// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bytes_unref_to_array
static GByteArray *(*funcptr) (GBytes * ) = 0;

extern int __lsb_check_params;
GByteArray * g_bytes_unref_to_array (GBytes * arg0 )
{
	int reset_flag = __lsb_check_params;
	GByteArray * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_bytes_unref_to_array()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bytes_unref_to_array");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bytes_unref_to_array. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bytes_unref_to_array() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bytes_unref_to_array - arg0 (bytes)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bytes_unref_to_array - arg0 (bytes)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


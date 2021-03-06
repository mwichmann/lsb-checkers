// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_byte_array_prepend
static GByteArray *(*funcptr) (GByteArray * , const guint8 * , guint ) = 0;

extern int __lsb_check_params;
GByteArray * g_byte_array_prepend (GByteArray * arg0 , const guint8 * arg1 , guint arg2 )
{
	int reset_flag = __lsb_check_params;
	GByteArray * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_byte_array_prepend()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_byte_array_prepend");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_byte_array_prepend. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_byte_array_prepend() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_byte_array_prepend - arg0 (array)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_byte_array_prepend - arg0 (array)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_byte_array_prepend - arg1 (data)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_byte_array_prepend - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_byte_array_prepend - arg2 (len)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


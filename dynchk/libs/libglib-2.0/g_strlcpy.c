// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_strlcpy
static gsize(*funcptr) (gchar * , const gchar * , gsize ) = 0;

extern int __lsb_check_params;
gsize g_strlcpy (gchar * arg0 , const gchar * arg1 , gsize arg2 )
{
	int reset_flag = __lsb_check_params;
	gsize ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_strlcpy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_strlcpy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_strlcpy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_strlcpy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_strlcpy - arg0 (dest)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_strlcpy - arg0 (dest)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_strlcpy - arg1 (src)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_strlcpy - arg1 (src)");
		validate_NULL_TYPETYPE(  arg2, "g_strlcpy - arg2 (dest_size)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


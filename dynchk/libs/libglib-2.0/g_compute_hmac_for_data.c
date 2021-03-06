// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_compute_hmac_for_data
static gchar *(*funcptr) (GChecksumType , const guchar * , gsize , const guchar * , gsize ) = 0;

extern int __lsb_check_params;
gchar * g_compute_hmac_for_data (GChecksumType arg0 , const guchar * arg1 , gsize arg2 , const guchar * arg3 , gsize arg4 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_compute_hmac_for_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_compute_hmac_for_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_compute_hmac_for_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_compute_hmac_for_data() - validating");
		validate_NULL_TYPETYPE(  arg0, "g_compute_hmac_for_data - arg0 (digest_type)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_compute_hmac_for_data - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_compute_hmac_for_data - arg1 (key)");
		validate_NULL_TYPETYPE(  arg2, "g_compute_hmac_for_data - arg2 (key_len)");
		if( arg3 ) {
		validate_Rdaddress( arg3, "g_compute_hmac_for_data - arg3 (data)");
		}
		validate_NULL_TYPETYPE(  arg3, "g_compute_hmac_for_data - arg3 (data)");
		validate_NULL_TYPETYPE(  arg4, "g_compute_hmac_for_data - arg4 (length)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


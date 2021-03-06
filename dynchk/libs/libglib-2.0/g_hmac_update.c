// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_hmac_update
static void(*funcptr) (GHmac * , const guchar * , gssize ) = 0;

extern int __lsb_check_params;
void g_hmac_update (GHmac * arg0 , const guchar * arg1 , gssize arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_hmac_update()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_hmac_update");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_hmac_update. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_hmac_update() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_hmac_update - arg0 (hmac)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_hmac_update - arg0 (hmac)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "g_hmac_update - arg1 (data)");
		}
		validate_NULL_TYPETYPE(  arg1, "g_hmac_update - arg1 (data)");
		validate_NULL_TYPETYPE(  arg2, "g_hmac_update - arg2 (length)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


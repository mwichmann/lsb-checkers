// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_bit_unlock
static void(*funcptr) (int volatile  * , gint ) = 0;

extern int __lsb_check_params;
void g_bit_unlock (int volatile  * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for g_bit_unlock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_bit_unlock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_bit_unlock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_bit_unlock() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_bit_unlock - arg0 (address)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_bit_unlock - arg0 (address)");
		validate_NULL_TYPETYPE(  arg1, "g_bit_unlock - arg1 (lock_bit)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


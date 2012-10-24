// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#undef g_pointer_bit_trylock
static gboolean(*funcptr) (void volatile  * , gint ) = 0;

extern int __lsb_check_params;
gboolean g_pointer_bit_trylock (void volatile  * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for g_pointer_bit_trylock()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "g_pointer_bit_trylock");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load g_pointer_bit_trylock. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "g_pointer_bit_trylock() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "g_pointer_bit_trylock - arg0 (address)");
		}
		validate_NULL_TYPETYPE(  arg0, "g_pointer_bit_trylock - arg0 (address)");
		validate_NULL_TYPETYPE(  arg1, "g_pointer_bit_trylock - arg1 (lock_bit)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


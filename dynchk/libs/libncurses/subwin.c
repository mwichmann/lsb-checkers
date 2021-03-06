// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef subwin
static WINDOW *(*funcptr) (WINDOW * , int , int , int , int ) = 0;

extern int __lsb_check_params;
WINDOW * subwin (WINDOW * arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	WINDOW * ret_value  ;
	__lsb_output(4, "Invoking wrapper for subwin()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "subwin");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load subwin. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "subwin() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "subwin - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "subwin - arg0");
		validate_NULL_TYPETYPE(  arg1, "subwin - arg1");
		validate_NULL_TYPETYPE(  arg2, "subwin - arg2");
		validate_NULL_TYPETYPE(  arg3, "subwin - arg3");
		validate_NULL_TYPETYPE(  arg4, "subwin - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#undef newpad
static WINDOW *(*funcptr) (int , int ) = 0;

extern int __lsb_check_params;
WINDOW * newpad (int arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	WINDOW * ret_value  ;
	__lsb_output(4, "Invoking wrapper for newpad()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "newpad");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load newpad. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "newpad() - validating");
		validate_NULL_TYPETYPE(  arg0, "newpad - arg0");
		validate_NULL_TYPETYPE(  arg1, "newpad - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <curses.h>
#undef is_wintouched
static bool(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
bool is_wintouched (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "is_wintouched");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "is_wintouched()");
		validate_RWaddress( arg0, "is_wintouched - arg0");
		validate_NULL_TYPETYPE(  arg0, "is_wintouched - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


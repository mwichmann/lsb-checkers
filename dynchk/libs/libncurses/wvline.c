// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef wvline
static int(*funcptr) (WINDOW * , chtype , int ) = 0;

extern int __lsb_check_params;
int wvline (WINDOW * arg0 , chtype arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wvline");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "wvline()");
		validate_RWaddress( arg0, "wvline - arg0");
		validate_NULL_TYPETYPE(  arg0, "wvline - arg0");
		validate_NULL_TYPETYPE(  arg1, "wvline - arg1");
		validate_NULL_TYPETYPE(  arg2, "wvline - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


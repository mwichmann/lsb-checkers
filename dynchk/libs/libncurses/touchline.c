// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef touchline
static int(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int touchline (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "touchline");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "touchline()");
	validate_Rdaddress( arg0, "touchline - arg0");
		validate_NULL_TYPETYPE(  arg0, "touchline - arg0");
		validate_NULL_TYPETYPE(  arg1, "touchline - arg1");
		validate_NULL_TYPETYPE(  arg2, "touchline - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


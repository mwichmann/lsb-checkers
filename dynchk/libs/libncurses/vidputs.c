// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef vidputs
static int(*funcptr) (chtype , int(* )(int)) = 0;

extern int __lsb_check_params;
int vidputs (chtype arg0 , int(* arg1 )(int))
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vidputs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vidputs()");
		validate_NULL_TYPETYPE(  arg0, "vidputs - arg0");
		validate_Rdaddress( arg1, "vidputs - arg1");
		validate_NULL_TYPETYPE(  arg1, "vidputs - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


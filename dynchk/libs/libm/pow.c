// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef pow
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
double pow (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pow()");
		validate_NULL_TYPETYPE(  arg0, "pow - arg0");
		validate_NULL_TYPETYPE(  arg1, "pow - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


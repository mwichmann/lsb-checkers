// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef copysign
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
double copysign (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "copysign");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "copysign - arg0");
		validate_NULL_TYPETYPE(  arg1, "copysign - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


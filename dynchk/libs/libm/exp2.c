// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef exp2
static double(*funcptr) (double ) = 0;

extern int __lsb_check_params;
double exp2 (double arg0 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "exp2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "exp2()");
		validate_NULL_TYPETYPE(  arg0, "exp2 - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef yn
static double(*funcptr) (int , double ) = 0;

extern int __lsb_check_params;
double yn (int arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "yn", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "yn()");
		validate_NULL_TYPETYPE(  arg0, "yn - arg0");
		validate_NULL_TYPETYPE(  arg1, "yn - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


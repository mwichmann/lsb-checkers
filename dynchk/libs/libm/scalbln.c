// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef scalbln
static double(*funcptr) (double , long int ) = 0;

extern int __lsb_check_params;
double scalbln (double arg0 , long int arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "scalbln", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "scalbln()");
		validate_NULL_TYPETYPE(  arg0, "scalbln - arg0");
		validate_NULL_TYPETYPE(  arg1, "scalbln - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


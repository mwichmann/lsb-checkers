// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef fmax
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
double fmax (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmax");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "fmax()");
		validate_NULL_TYPETYPE(  arg0, "fmax - arg0");
		validate_NULL_TYPETYPE(  arg1, "fmax - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


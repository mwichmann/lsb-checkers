// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef csqrt
static double complex(*funcptr) (double complex ) = 0;

extern int __lsb_check_params;
double complex csqrt (double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrt");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "csqrt()");
		validate_NULL_TYPETYPE(  arg0, "csqrt - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


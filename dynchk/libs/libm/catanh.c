// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef catanh
static double complex(*funcptr) (double complex ) = 0;

extern int __lsb_check_params;
double complex catanh (double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "catanh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "catanh - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


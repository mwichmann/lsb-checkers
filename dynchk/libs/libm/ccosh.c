// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef ccosh
static double complex(*funcptr) (double complex ) = 0;

extern int __lsb_check_params;
double complex ccosh (double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ccosh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "ccosh - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <complex.h>
#undef catan
static double complex(*funcptr) (double complex ) = 0;

extern int __lsb_check_params;
double complex catan (double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	double complex ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "catan", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "catan()");
		validate_NULL_TYPETYPE(  arg0, "catan - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


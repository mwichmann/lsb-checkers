// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef nextafter
static double(*funcptr) (double , double ) = 0;

extern int __lsb_check_params;
double nextafter (double arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nextafter");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "nextafter - arg0");
		validate_NULL_TYPETYPE(  arg1, "nextafter - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


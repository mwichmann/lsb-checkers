// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef scalbnl
static long double(*funcptr) (long double , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double scalbnl (long double arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalbnl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "scalbnl()");
		validate_NULL_TYPETYPE(  arg0, "scalbnl - arg0");
		validate_NULL_TYPETYPE(  arg1, "scalbnl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


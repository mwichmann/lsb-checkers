// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef atanl
static long double(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double atanl (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atanl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "atanl()");
		validate_NULL_TYPETYPE(  arg0, "atanl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef clog10l
static long double complex(*funcptr) (long double complex ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double complex clog10l (long double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	long double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog10l");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "clog10l()");
		validate_NULL_TYPETYPE(  arg0, "clog10l - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cexpl
static long double complex(*funcptr) (long double complex ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double complex cexpl (long double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	long double complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cexpl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "cexpl()");
		validate_NULL_TYPETYPE(  arg0, "cexpl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <complex.h>
#undef clogl
static long double complex(*funcptr) (long double complex ) = 0;

extern int __lsb_check_params;
long double complex clogl (long double complex arg0 )
{
	int reset_flag = __lsb_check_params;
	long double complex ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "clogl", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "clogl()");
		validate_NULL_TYPETYPE(  arg0, "clogl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


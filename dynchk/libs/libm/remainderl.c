// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef remainderl
static long double(*funcptr) (long double , long double ) = 0;

extern int __lsb_check_params;
long double remainderl (long double arg0 , long double arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "remainderl", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "remainderl()");
		validate_NULL_TYPETYPE(  arg0, "remainderl - arg0");
		validate_NULL_TYPETYPE(  arg1, "remainderl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef expl
static long double(*funcptr) (long double ) = 0;

extern int __lsb_check_params;
long double expl (long double arg0 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "expl()");
		validate_NULL_TYPETYPE(  arg0, "expl - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


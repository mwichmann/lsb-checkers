// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef drand48
static double(*funcptr) () = 0;

extern int __lsb_check_params;
double drand48 ()
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "drand48");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


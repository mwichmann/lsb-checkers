// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef lrint
static long(*funcptr) (double ) = 0;

extern int __lsb_check_params;
long lrint (double arg0 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lrint");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "lrint()");
		validate_NULL_TYPETYPE(  arg0, "lrint - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


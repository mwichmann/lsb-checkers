// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <math.h>
#undef modfl
static long double(*funcptr) (long double , long double * ) = 0;

extern int __lsb_check_params;
long double modfl (long double arg0 , long double * arg1 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "modfl");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "modfl()");
		validate_NULL_TYPETYPE(  arg0, "modfl - arg0");
		validate_RWaddress( arg1, "modfl - arg1");
		validate_NULL_TYPETYPE(  arg1, "modfl - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


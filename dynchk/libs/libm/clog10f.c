// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef clog10f
static float complex(*funcptr) (float complex ) = 0;

extern int __lsb_check_params;
float complex clog10f (float complex arg0 )
{
	int reset_flag = __lsb_check_params;
	float complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog10f");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "clog10f()");
		validate_NULL_TYPETYPE(  arg0, "clog10f - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef ctanf
static float complex(*funcptr) (float complex ) = 0;

extern int __lsb_check_params;
float complex ctanf (float complex arg0 )
{
	int reset_flag = __lsb_check_params;
	float complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "ctanf()");
		validate_NULL_TYPETYPE(  arg0, "ctanf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


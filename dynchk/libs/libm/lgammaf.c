// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef lgammaf
static float(*funcptr) (float ) = 0;

extern int __lsb_check_params;
float lgammaf (float arg0 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "lgammaf", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "lgammaf()");
		validate_NULL_TYPETYPE(  arg0, "lgammaf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


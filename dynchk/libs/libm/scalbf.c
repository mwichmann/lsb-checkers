// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef scalbf
static float(*funcptr) (float , float ) = 0;

extern int __lsb_check_params;
float scalbf (float arg0 , float arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "scalbf", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "scalbf()");
		validate_NULL_TYPETYPE(  arg0, "scalbf - arg0");
		validate_NULL_TYPETYPE(  arg1, "scalbf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


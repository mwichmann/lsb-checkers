// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fmaxf
static float(*funcptr) (float , float ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
float fmaxf (float arg0 , float arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmaxf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "fmaxf()");
		validate_NULL_TYPETYPE(  arg0, "fmaxf - arg0");
		validate_NULL_TYPETYPE(  arg1, "fmaxf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


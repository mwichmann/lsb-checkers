// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <math.h>
#undef jnf
static float(*funcptr) (int , float ) = 0;

extern int __lsb_check_params;
float jnf (int arg0 , float arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "jnf", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "jnf()");
		validate_NULL_TYPETYPE(  arg0, "jnf - arg0");
		validate_NULL_TYPETYPE(  arg1, "jnf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


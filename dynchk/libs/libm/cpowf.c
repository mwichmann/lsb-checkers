// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <complex.h>
#undef cpowf
static float complex(*funcptr) (float complex , float complex ) = 0;

extern int __lsb_check_params;
float complex cpowf (float complex arg0 , float complex arg1 )
{
	int reset_flag = __lsb_check_params;
	float complex ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cpowf");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "cpowf()");
		validate_NULL_TYPETYPE(  arg0, "cpowf - arg0");
		validate_NULL_TYPETYPE(  arg1, "cpowf - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


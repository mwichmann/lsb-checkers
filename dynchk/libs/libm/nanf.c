// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <math.h>
#undef nanf
static float(*funcptr) (const char * ) = 0;

extern int __lsb_check_params;
float nanf (const char * arg0 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "nanf", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "nanf()");
		validate_Rdaddress( arg0, "nanf - arg0");
		validate_NULL_TYPETYPE(  arg0, "nanf - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


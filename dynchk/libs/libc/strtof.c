// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef strtof
static float(*funcptr) (const char * , char * * ) = 0;

extern int __lsb_check_params;
float strtof (const char * arg0 , char * * arg1 )
{
	int reset_flag = __lsb_check_params;
	float ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "strtof", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtof()");
		validate_Rdaddress( arg0, "strtof - arg0");
		validate_NULL_TYPETYPE(  arg0, "strtof - arg0");
		validate_RWaddress( arg1, "strtof - arg1");
		validate_NULL_TYPETYPE(  arg1, "strtof - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stdlib.h>
#undef strtol
static long(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
long strtol (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strtol", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtol()");
		validate_RWaddress( arg0, "strtol - arg0");
		validate_NULL_TYPETYPE(  arg0, "strtol - arg0");
		validate_RWaddress( arg1, "strtol - arg1");
		validate_NULL_TYPETYPE(  arg1, "strtol - arg1");
		validate_NULL_TYPETYPE(  arg2, "strtol - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


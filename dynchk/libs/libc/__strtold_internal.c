// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef __strtold_internal
static long double(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long double __strtold_internal (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	long double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtold_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "__strtold_internal()");
	validate_Rdaddress( arg0, "__strtold_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__strtold_internal - arg0");
	validate_Rdaddress( arg1, "__strtold_internal - arg1");
		validate_RWaddress(  arg1, "__strtold_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__strtold_internal - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


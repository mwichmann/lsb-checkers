// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef __strtod_internal
static double(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
double __strtod_internal (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	double ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtod_internal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "__strtod_internal()");
	validate_Rdaddress( arg0, "__strtod_internal - arg0");
		validate_NULL_TYPETYPE(  arg0, "__strtod_internal - arg0");
		if( arg1 ) {
	validate_Rdaddress( arg1, "__strtod_internal - arg1");
	validate_Rdaddress(* arg1, "__strtod_internal - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "__strtod_internal - arg1");
		validate_NULL_TYPETYPE(  arg2, "__strtod_internal - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


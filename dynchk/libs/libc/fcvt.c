// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef fcvt
static char *(*funcptr) (double , int , int * , int * ) = 0;

extern int __lsb_check_params;
char * fcvt (double arg0 , int arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fcvt");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "fcvt - arg0");
		validate_NULL_TYPETYPE(  arg1, "fcvt - arg1");
	validate_Rdaddress( arg2, "fcvt - arg2");
		validate_NULL_TYPETYPE(  arg2, "fcvt - arg2");
	validate_Rdaddress( arg3, "fcvt - arg3");
		validate_NULL_TYPETYPE(  arg3, "fcvt - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


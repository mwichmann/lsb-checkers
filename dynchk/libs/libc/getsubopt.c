// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef getsubopt
static int(*funcptr) (char * * , char *const  * , char * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int getsubopt (char * * arg0 , char *const  * arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getsubopt");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getsubopt()");
	validate_Rdaddress( arg0, "getsubopt - arg0");
		validate_NULL_TYPETYPE(  arg0, "getsubopt - arg0");
	validate_Rdaddress( arg1, "getsubopt - arg1");
		validate_NULL_TYPETYPE(  arg1, "getsubopt - arg1");
	validate_Rdaddress( arg2, "getsubopt - arg2");
		validate_NULL_TYPETYPE(  arg2, "getsubopt - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


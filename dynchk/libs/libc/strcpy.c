// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strcpy
static char *(*funcptr) (char * , const char * ) = 0;

extern int __lsb_check_params;
char * strcpy (char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcpy");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "strcpy - arg0");
		validate_NULL_TYPETYPE(  arg0, "strcpy - arg0");
	validate_Rdaddress( arg1, "strcpy - arg1");
		validate_NULL_TYPETYPE(  arg1, "strcpy - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


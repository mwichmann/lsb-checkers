// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef strverscmp
static int(*funcptr) (const char * , const char * ) = 0;

extern int __lsb_check_params;
int strverscmp (const char * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strverscmp");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "strverscmp - arg0");
		validate_NULL_TYPETYPE(  arg0, "strverscmp - arg0");
	validate_Rdaddress( arg1, "strverscmp - arg1");
		validate_NULL_TYPETYPE(  arg1, "strverscmp - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/stat.h>
#undef __xstat
static int(*funcptr) (int , const char * , struct stat * ) = 0;

extern int __lsb_check_params;
int __xstat (int arg0 , const char * arg1 , struct stat * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__xstat");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "__xstat - arg0");
	validate_Rdaddress( arg1, "__xstat - arg1");
		validate_NULL_TYPETYPE(  arg1, "__xstat - arg1");
	validate_Rdaddress( arg2, "__xstat - arg2");
		validate_NULL_TYPETYPE(  arg2, "__xstat - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


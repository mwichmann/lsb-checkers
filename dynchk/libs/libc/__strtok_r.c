// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <string.h>
#undef __strtok_r
static char *(*funcptr) (char * , const char * , char * * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * __strtok_r (char * arg0 , const char * arg1 , char * * arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtok_r");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "__strtok_r()");
	validate_Rdaddress( arg0, "__strtok_r - arg0");
		validate_RWaddress(  arg0, "__strtok_r - arg0");
	validate_Rdaddress( arg1, "__strtok_r - arg1");
		validate_NULL_TYPETYPE(  arg1, "__strtok_r - arg1");
	validate_Rdaddress( arg2, "__strtok_r - arg2");
		validate_RWaddress(  arg2, "__strtok_r - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


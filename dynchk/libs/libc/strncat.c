// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef strncat
static char *(*funcptr) (char * , const char * , size_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
char * strncat (char * arg0 , const char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncat");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "strncat()");
	validate_Rdaddress( arg0, "strncat - arg0");
		validate_NULL_TYPETYPE(  arg0, "strncat - arg0");
	validate_Rdaddress( arg1, "strncat - arg1");
		validate_NULL_TYPETYPE(  arg1, "strncat - arg1");
		validate_NULL_TYPETYPE(  arg2, "strncat - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <string.h>
#undef strncpy
static char *(*funcptr) (char * , const char * , size_t ) = 0;

extern int __lsb_check_params;
char * strncpy (char * arg0 , const char * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	char * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "strncpy", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strncpy()");
		validate_RWaddress( arg0, "strncpy - arg0");
		validate_NULL_TYPETYPE(  arg0, "strncpy - arg0");
		validate_RWaddress( arg1, "strncpy - arg1");
		validate_NULL_TYPETYPE(  arg1, "strncpy - arg1");
		validate_NULL_TYPETYPE(  arg2, "strncpy - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


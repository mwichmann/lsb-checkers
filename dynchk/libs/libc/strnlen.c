// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <stddef.h>
#include <string.h>
#undef strnlen
static size_t(*funcptr) (const char * , size_t ) = 0;

extern int __lsb_check_params;
size_t strnlen (const char * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	size_t ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "strnlen", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strnlen()");
		validate_Rdaddress( arg0, "strnlen - arg0");
		validate_NULL_TYPETYPE(  arg0, "strnlen - arg0");
		validate_NULL_TYPETYPE(  arg1, "strnlen - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


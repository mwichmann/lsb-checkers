// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stddef.h>
#include <unistd.h>
#undef pwrite64
static ssize_t(*funcptr) (int , const void * , size_t , off64_t ) = 0;

extern int __lsb_check_params;
ssize_t pwrite64 (int arg0 , const void * arg1 , size_t arg2 , off64_t arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pwrite64", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pwrite64()");
		validate_NULL_TYPETYPE(  arg0, "pwrite64 - arg0");
		validate_Rdaddress( arg1, "pwrite64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "pwrite64 - arg1");
		validate_NULL_TYPETYPE(  arg2, "pwrite64 - arg2");
		validate_NULL_TYPETYPE(  arg3, "pwrite64 - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


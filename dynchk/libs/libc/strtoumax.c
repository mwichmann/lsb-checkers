// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <inttypes.h>
#undef strtoumax
static uintmax_t(*funcptr) (const char * , char * * , int ) = 0;

extern int __lsb_check_params;
uintmax_t strtoumax (const char * arg0 , char * * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	uintmax_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "strtoumax", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "strtoumax()");
		validate_Rdaddress( arg0, "strtoumax - arg0");
		validate_NULL_TYPETYPE(  arg0, "strtoumax - arg0");
		validate_RWaddress( arg1, "strtoumax - arg1");
		validate_NULL_TYPETYPE(  arg1, "strtoumax - arg1");
		validate_NULL_TYPETYPE(  arg2, "strtoumax - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


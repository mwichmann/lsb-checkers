// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef uncompress
static int(*funcptr) (Bytef * , uLongf * , const Bytef * , uLong ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int uncompress (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "uncompress");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "uncompress()");
	validate_Rdaddress( arg0, "uncompress - arg0");
		validate_NULL_TYPETYPE(  arg0, "uncompress - arg0");
	validate_Rdaddress( arg1, "uncompress - arg1");
		validate_NULL_TYPETYPE(  arg1, "uncompress - arg1");
	validate_Rdaddress( arg2, "uncompress - arg2");
		validate_NULL_TYPETYPE(  arg2, "uncompress - arg2");
		validate_NULL_TYPETYPE(  arg3, "uncompress - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


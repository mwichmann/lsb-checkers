// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef deflateParams
static int(*funcptr) (z_streamp , int , int ) = 0;

extern int __lsb_check_params;
int deflateParams (z_streamp arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateParams");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "deflateParams - arg0");
		validate_NULL_TYPETYPE(  arg1, "deflateParams - arg1");
		validate_NULL_TYPETYPE(  arg2, "deflateParams - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <zlib.h>
#undef compress2
static int(*funcptr) (Bytef * , uLongf * , const Bytef * , uLong , int ) = 0;

extern int __lsb_check_params;
int compress2 (Bytef * arg0 , uLongf * arg1 , const Bytef * arg2 , uLong arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "compress2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "compress2()");
		validate_RWaddress( arg0, "compress2 - arg0");
		validate_NULL_TYPETYPE(  arg0, "compress2 - arg0");
		validate_RWaddress( arg1, "compress2 - arg1");
		validate_NULL_TYPETYPE(  arg1, "compress2 - arg1");
		validate_Rdaddress( arg2, "compress2 - arg2");
		validate_NULL_TYPETYPE(  arg2, "compress2 - arg2");
		validate_NULL_TYPETYPE(  arg3, "compress2 - arg3");
		validate_NULL_TYPETYPE(  arg4, "compress2 - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


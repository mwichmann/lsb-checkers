// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <zlib.h>
#undef inflateInit2_
static int(*funcptr) (z_streamp , int , const char * , int ) = 0;

extern int __lsb_check_params;
int inflateInit2_ (z_streamp arg0 , int arg1 , const char * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateInit2_");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "inflateInit2_()");
		validate_NULL_TYPETYPE(  arg0, "inflateInit2_ - arg0");
		validate_NULL_TYPETYPE(  arg1, "inflateInit2_ - arg1");
		validate_Rdaddress( arg2, "inflateInit2_ - arg2");
		validate_NULL_TYPETYPE(  arg2, "inflateInit2_ - arg2");
		validate_NULL_TYPETYPE(  arg3, "inflateInit2_ - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


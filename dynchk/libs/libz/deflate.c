// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <zlib.h>
#undef deflate
static int(*funcptr) (z_streamp , int ) = 0;

extern int __lsb_check_params;
int deflate (z_streamp arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflate");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "deflate()");
		validate_NULL_TYPETYPE(  arg0, "deflate - arg0");
		validate_NULL_TYPETYPE(  arg1, "deflate - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


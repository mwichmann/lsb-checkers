// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef deflateCopy
static int(*funcptr) (z_streamp , z_streamp ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int deflateCopy (z_streamp arg0 , z_streamp arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateCopy");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "deflateCopy()");
		validate_NULL_TYPETYPE(  arg0, "deflateCopy - arg0");
		validate_NULL_TYPETYPE(  arg1, "deflateCopy - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


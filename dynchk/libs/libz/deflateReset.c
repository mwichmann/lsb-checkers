// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <zlib.h>
#undef deflateReset
static int(*funcptr) (z_streamp ) = 0;

extern int __lsb_check_params;
int deflateReset (z_streamp arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateReset");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "deflateReset()");
		validate_NULL_TYPETYPE(  arg0, "deflateReset - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


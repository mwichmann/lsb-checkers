// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef labs
static long(*funcptr) (long ) = 0;

extern int __lsb_check_params;
long labs (long arg0 )
{
	int reset_flag = __lsb_check_params;
	long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "labs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "labs()");
		validate_NULL_TYPETYPE(  arg0, "labs - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


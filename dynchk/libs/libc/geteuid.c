// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef geteuid
static uid_t(*funcptr) () = 0;

extern int __lsb_check_params;
uid_t geteuid ()
{
	int reset_flag = __lsb_check_params;
	uid_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "geteuid");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "geteuid()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


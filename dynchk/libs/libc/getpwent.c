// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <pwd.h>
#undef getpwent
static struct passwd *(*funcptr) () = 0;

extern int __lsb_check_params;
struct passwd * getpwent ()
{
	int reset_flag = __lsb_check_params;
	struct passwd * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpwent");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "getpwent()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


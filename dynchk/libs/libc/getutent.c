// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <utmp.h>
#undef getutent
static struct utmp *(*funcptr) () = 0;

extern int __lsb_check_params;
struct utmp * getutent ()
{
	int reset_flag = __lsb_check_params;
	struct utmp * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/time.h>
#undef adjtime
static int(*funcptr) (const struct timeval * , struct timeval * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int adjtime (const struct timeval * arg0 , struct timeval * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "adjtime");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "adjtime()");
	validate_Rdaddress( arg0, "adjtime - arg0");
		validate_NULL_TYPETYPE(  arg0, "adjtime - arg0");
	validate_Rdaddress( arg1, "adjtime - arg1");
		validate_NULL_TYPETYPE(  arg1, "adjtime - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <unistd.h>
#undef setpgid
static int(*funcptr) (pid_t , pid_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int setpgid (pid_t arg0 , pid_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpgid");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "setpgid()");
		validate_NULL_TYPETYPE(  arg0, "setpgid - arg0");
		validate_NULL_TYPETYPE(  arg1, "setpgid - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


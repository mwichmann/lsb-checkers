// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sched.h>
#undef sched_rr_get_interval
static int(*funcptr) (pid_t , struct timespec * ) = 0;

extern int __lsb_check_params;
int sched_rr_get_interval (pid_t arg0 , struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sched_rr_get_interval");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "sched_rr_get_interval - arg0");
	validate_Rdaddress( arg1, "sched_rr_get_interval - arg1");
		validate_NULL_TYPETYPE(  arg1, "sched_rr_get_interval - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


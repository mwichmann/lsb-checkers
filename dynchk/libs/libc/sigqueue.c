// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <sys/types.h>
#include <signal.h>
#undef sigqueue
static int(*funcptr) (pid_t , int , const union sigval ) = 0;

extern int __lsb_check_params;
int sigqueue (pid_t arg0 , int arg1 , const union sigval arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "sigqueue", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigqueue()");
		validate_NULL_TYPETYPE(  arg0, "sigqueue - arg0");
		validate_NULL_TYPETYPE(  arg1, "sigqueue - arg1");
		validate_NULL_TYPETYPE(  arg2, "sigqueue - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


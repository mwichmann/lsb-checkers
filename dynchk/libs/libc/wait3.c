// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/resource.h>
#include <sys/wait.h>
#undef wait3
static pid_t(*funcptr) (int * , int , struct rusage * ) = 0;

extern int __lsb_check_params;
pid_t wait3 (int * arg0 , int arg1 , struct rusage * arg2 )
{
	int reset_flag = __lsb_check_params;
	pid_t ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "wait3", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "wait3()");
		validate_RWaddress( arg0, "wait3 - arg0");
		validate_NULL_TYPETYPE(  arg0, "wait3 - arg0");
		validate_NULL_TYPETYPE(  arg1, "wait3 - arg1");
		validate_RWaddress( arg2, "wait3 - arg2");
		validate_NULL_TYPETYPE(  arg2, "wait3 - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


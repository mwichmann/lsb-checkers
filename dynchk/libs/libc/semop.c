// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/sem.h>
#undef semop
static int(*funcptr) (int , struct sembuf * , size_t ) = 0;

extern int __lsb_check_params;
int semop (int arg0 , struct sembuf * arg1 , size_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "semop");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "semop()");
		validate_NULL_TYPETYPE(  arg0, "semop - arg0");
		validate_RWaddress( arg1, "semop - arg1");
		validate_NULL_TYPETYPE(  arg1, "semop - arg1");
		validate_NULL_TYPETYPE(  arg2, "semop - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


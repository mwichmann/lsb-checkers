// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <sys/types.h>
#include <stddef.h>
#include <sys/shm.h>
#undef shmget
static int(*funcptr) (key_t , size_t , int ) = 0;

extern int __lsb_check_params;
int shmget (key_t arg0 , size_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "shmget", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "shmget()");
		validate_NULL_TYPETYPE(  arg0, "shmget - arg0");
		validate_NULL_TYPETYPE(  arg1, "shmget - arg1");
		validate_NULL_TYPETYPE(  arg2, "shmget - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


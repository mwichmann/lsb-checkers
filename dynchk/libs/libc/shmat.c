// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/shm.h>
#undef shmat
static void *(*funcptr) (int , const void * , int ) = 0;

extern int __lsb_check_params;
void * shmat (int arg0 , const void * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	void * ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "shmat", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "shmat()");
		validate_NULL_TYPETYPE(  arg0, "shmat - arg0");
		validate_Rdaddress( arg1, "shmat - arg1");
		validate_NULL_TYPETYPE(  arg1, "shmat - arg1");
		validate_NULL_TYPETYPE(  arg2, "shmat - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


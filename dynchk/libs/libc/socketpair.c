// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef socketpair
static int(*funcptr) (int , int , int , int [2]) = 0;

extern int __lsb_check_params;
int socketpair (int arg0 , int arg1 , int arg2 , int arg3 [2])
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "socketpair", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "socketpair()");
		validate_NULL_TYPETYPE(  arg0, "socketpair - arg0");
		validate_NULL_TYPETYPE(  arg1, "socketpair - arg1");
		validate_NULL_TYPETYPE(  arg2, "socketpair - arg2");
		validate_NULL_TYPETYPE(  arg3, "socketpair - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


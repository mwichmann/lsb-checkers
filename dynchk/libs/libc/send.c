// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/socket.h>
#undef send
static ssize_t(*funcptr) (int , const void * , size_t , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
ssize_t send (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "send");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "send()");
		validate_NULL_TYPETYPE(  arg0, "send - arg0");
	validate_Rdaddress( arg1, "send - arg1");
		validate_NULL_TYPETYPE(  arg1, "send - arg1");
		validate_NULL_TYPETYPE(  arg2, "send - arg2");
		validate_NULL_TYPETYPE(  arg3, "send - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


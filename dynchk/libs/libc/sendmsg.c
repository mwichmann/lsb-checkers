// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef sendmsg
static ssize_t(*funcptr) (int , const struct msghdr * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
ssize_t sendmsg (int arg0 , const struct msghdr * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	ssize_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sendmsg");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "sendmsg()");
		validate_NULL_TYPETYPE(  arg0, "sendmsg - arg0");
	validate_Rdaddress( arg1, "sendmsg - arg1");
		validate_NULL_TYPETYPE(  arg1, "sendmsg - arg1");
		validate_NULL_TYPETYPE(  arg2, "sendmsg - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


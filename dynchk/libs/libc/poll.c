// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/poll.h>
#include <poll.h>
#undef poll
static int(*funcptr) (struct pollfd * , nfds_t , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int poll (struct pollfd * arg0 , nfds_t arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "poll");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "poll()");
	validate_Rdaddress( arg0, "poll - arg0");
		validate_NULL_TYPETYPE(  arg0, "poll - arg0");
		validate_NULL_TYPETYPE(  arg1, "poll - arg1");
		validate_NULL_TYPETYPE(  arg2, "poll - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


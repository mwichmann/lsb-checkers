// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/socket.h>
#undef bind
static int(*funcptr) (int , const struct sockaddr * , socklen_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int bind (int arg0 , const struct sockaddr * arg1 , socklen_t arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bind");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "bind()");
		validate_filedescriptor(  arg0, "bind - arg0");
	validate_Rdaddress( arg1, "bind - arg1");
		validate_RWaddress(  arg1, "bind - arg1");
		validate_NULL_TYPETYPE(  arg2, "bind - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <termios.h>
#include <pty.h>
#undef forkpty
static int(*funcptr) (int * , char * , struct termios * , struct winsize * ) = 0;

extern int __lsb_check_params;
int forkpty (int * arg0 , char * arg1 , struct termios * arg2 , struct winsize * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "forkpty");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "forkpty()");
		validate_RWaddress( arg0, "forkpty - arg0");
		validate_NULL_TYPETYPE(  arg0, "forkpty - arg0");
		validate_RWaddress( arg1, "forkpty - arg1");
		validate_NULL_TYPETYPE(  arg1, "forkpty - arg1");
		validate_RWaddress( arg2, "forkpty - arg2");
		validate_NULL_TYPETYPE(  arg2, "forkpty - arg2");
		validate_RWaddress( arg3, "forkpty - arg3");
		validate_NULL_TYPETYPE(  arg3, "forkpty - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


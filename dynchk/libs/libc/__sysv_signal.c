// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef __sysv_signal
static sighandler_t(*funcptr) (int , sighandler_t ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
sighandler_t __sysv_signal (int arg0 , sighandler_t arg1 )
{
	int reset_flag = __lsb_check_params;
	sighandler_t ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__sysv_signal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "__sysv_signal()");
		validate_NULL_TYPETYPE(  arg0, "__sysv_signal - arg0");
		validate_NULL_TYPETYPE(  arg1, "__sysv_signal - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


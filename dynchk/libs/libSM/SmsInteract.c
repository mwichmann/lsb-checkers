// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
#undef SmsInteract
static void(*funcptr) (SmsConn ) = 0;

extern int __lsb_check_params;
void SmsInteract (SmsConn arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsInteract");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "SmsInteract()");
		validate_NULL_TYPETYPE(  arg0, "SmsInteract - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


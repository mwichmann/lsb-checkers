// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/SM/SMlib.h>
#undef SmsSaveYourself
static void(*funcptr) (SmsConn , int , int , int , int ) = 0;

extern int __lsb_check_params;
void SmsSaveYourself (SmsConn arg0 , int arg1 , int arg2 , int arg3 , int arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "SmsSaveYourself");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmsSaveYourself()");
		validate_NULL_TYPETYPE(  arg0, "SmsSaveYourself - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmsSaveYourself - arg1");
		validate_NULL_TYPETYPE(  arg2, "SmsSaveYourself - arg2");
		validate_NULL_TYPETYPE(  arg3, "SmsSaveYourself - arg3");
		validate_NULL_TYPETYPE(  arg4, "SmsSaveYourself - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


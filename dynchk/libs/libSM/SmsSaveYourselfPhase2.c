// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmsSaveYourselfPhase2
static void(*funcptr) (SmsConn ) = 0;

extern int __lsb_check_params;
void SmsSaveYourselfPhase2 (SmsConn arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for SmsSaveYourselfPhase2()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmsSaveYourselfPhase2");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmsSaveYourselfPhase2. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmsSaveYourselfPhase2() - validating");
		validate_NULL_TYPETYPE(  arg0, "SmsSaveYourselfPhase2 - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


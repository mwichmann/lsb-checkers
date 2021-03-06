// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/SM/SMlib.h>
#undef SmcSaveYourselfDone
static void(*funcptr) (SmcConn , int ) = 0;

extern int __lsb_check_params;
void SmcSaveYourselfDone (SmcConn arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for SmcSaveYourselfDone()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcSaveYourselfDone");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load SmcSaveYourselfDone. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "SmcSaveYourselfDone() - validating");
		validate_NULL_TYPETYPE(  arg0, "SmcSaveYourselfDone - arg0");
		validate_NULL_TYPETYPE(  arg1, "SmcSaveYourselfDone - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


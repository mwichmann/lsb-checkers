// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <lsb/Intrinsic.h>
#undef XtAddTimeOut
static XtIntervalId(*funcptr) (long unsigned int , XtTimerCallbackProc , XtPointer ) = 0;

extern int __lsb_check_params;
XtIntervalId XtAddTimeOut (long unsigned int arg0 , XtTimerCallbackProc arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	XtIntervalId ret_value  ;
	__lsb_output(4, "Invoking wrapper for XtAddTimeOut()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddTimeOut");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAddTimeOut. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAddTimeOut() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtAddTimeOut - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddTimeOut - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAddTimeOut - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


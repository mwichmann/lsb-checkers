// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtSetErrorMsgHandler
static void(*funcptr) (XtErrorMsgHandler ) = 0;

extern int __lsb_check_params;
void XtSetErrorMsgHandler (XtErrorMsgHandler arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtSetErrorMsgHandler ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtSetErrorMsgHandler()");
		validate_NULL_TYPETYPE(  arg0, "XtSetErrorMsgHandler - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtNoticeSignal
static void(*funcptr) (XtSignalId ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtNoticeSignal (XtSignalId arg0 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtNoticeSignal");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtNoticeSignal()");
		validate_NULL_TYPETYPE(  arg0, "XtNoticeSignal - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


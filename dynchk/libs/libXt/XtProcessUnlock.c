// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/IntrinsicP.h>
#undef XtProcessUnlock
static void(*funcptr) () = 0;

extern int __lsb_check_params;
void XtProcessUnlock ()
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtProcessUnlock ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtProcessUnlock()");
	}
	funcptr();
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtGetDisplays
static void(*funcptr) (XtAppContext , Display * * * , Cardinal * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtGetDisplays (XtAppContext arg0 , Display * * * arg1 , Cardinal * arg2 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetDisplays");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtGetDisplays()");
		validate_NULL_TYPETYPE(  arg0, "XtGetDisplays - arg0");
	validate_RWaddress( arg1, "XtGetDisplays - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtGetDisplays - arg1");
	validate_RWaddress( arg2, "XtGetDisplays - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtGetDisplays - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


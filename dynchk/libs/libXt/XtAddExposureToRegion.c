// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Intrinsic.h>
#undef XtAddExposureToRegion
static void(*funcptr) (XEvent * , Region ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtAddExposureToRegion (XEvent * arg0 , Region arg1 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddExposureToRegion");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtAddExposureToRegion()");
	validate_RWaddress( arg0, "XtAddExposureToRegion - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtAddExposureToRegion - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddExposureToRegion - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


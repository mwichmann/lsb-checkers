// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetWMSizeHints
static void(*funcptr) (Display * , Window , XSizeHints * , Atom ) = 0;

extern int __lsb_check_params;
void XSetWMSizeHints (Display * arg0 , Window arg1 , XSizeHints * arg2 , Atom arg3 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = lsb_dlsym(RTLD_NEXT, "XSetWMSizeHints");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetWMSizeHints()");
		validate_RWaddress( arg0, "XSetWMSizeHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWMSizeHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWMSizeHints - arg1");
		validate_RWaddress( arg2, "XSetWMSizeHints - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetWMSizeHints - arg2");
		validate_NULL_TYPETYPE(  arg3, "XSetWMSizeHints - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XSetWMProperties
static void(*funcptr) (Display * , Window , XTextProperty * , XTextProperty * , char * * , int , XSizeHints * , XWMHints * , XClassHint * ) = 0;

extern int __lsb_check_params;
void XSetWMProperties (Display * arg0 , Window arg1 , XTextProperty * arg2 , XTextProperty * arg3 , char * * arg4 , int arg5 , XSizeHints * arg6 , XWMHints * arg7 , XClassHint * arg8 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XSetWMProperties()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMProperties");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetWMProperties. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetWMProperties() - validating");
		validate_RWaddress( arg0, "XSetWMProperties - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetWMProperties - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetWMProperties - arg1");
		validate_RWaddress( arg2, "XSetWMProperties - arg2");
		validate_NULL_TYPETYPE(  arg2, "XSetWMProperties - arg2");
		validate_RWaddress( arg3, "XSetWMProperties - arg3");
		validate_NULL_TYPETYPE(  arg3, "XSetWMProperties - arg3");
		validate_RWaddress( arg4, "XSetWMProperties - arg4");
		validate_NULL_TYPETYPE(  arg4, "XSetWMProperties - arg4");
		validate_NULL_TYPETYPE(  arg5, "XSetWMProperties - arg5");
		validate_RWaddress( arg6, "XSetWMProperties - arg6");
		validate_NULL_TYPETYPE(  arg6, "XSetWMProperties - arg6");
		validate_RWaddress( arg7, "XSetWMProperties - arg7");
		validate_NULL_TYPETYPE(  arg7, "XSetWMProperties - arg7");
		validate_RWaddress( arg8, "XSetWMProperties - arg8");
		validate_NULL_TYPETYPE(  arg8, "XSetWMProperties - arg8");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
	__lsb_check_params = reset_flag;
}


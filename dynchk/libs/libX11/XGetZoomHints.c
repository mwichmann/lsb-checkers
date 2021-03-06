// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetZoomHints
static int(*funcptr) (Display * , Window , XSizeHints * ) = 0;

extern int __lsb_check_params;
int XGetZoomHints (Display * arg0 , Window arg1 , XSizeHints * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetZoomHints()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetZoomHints");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetZoomHints. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetZoomHints() - validating");
		validate_RWaddress( arg0, "XGetZoomHints - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetZoomHints - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetZoomHints - arg1");
		validate_RWaddress( arg2, "XGetZoomHints - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetZoomHints - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


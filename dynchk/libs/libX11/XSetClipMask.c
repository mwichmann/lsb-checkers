// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XSetClipMask
static int(*funcptr) (Display * , GC , Pixmap ) = 0;

extern int __lsb_check_params;
int XSetClipMask (Display * arg0 , GC arg1 , Pixmap arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XSetClipMask()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetClipMask");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XSetClipMask. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XSetClipMask() - validating");
		validate_RWaddress( arg0, "XSetClipMask - arg0");
		validate_NULL_TYPETYPE(  arg0, "XSetClipMask - arg0");
		validate_NULL_TYPETYPE(  arg1, "XSetClipMask - arg1");
		validate_NULL_TYPETYPE(  arg2, "XSetClipMask - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


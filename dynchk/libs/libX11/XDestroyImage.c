// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#undef XDestroyImage
static int(*funcptr) (XImage * ) = 0;

extern int __lsb_check_params;
int XDestroyImage (XImage * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XDestroyImage()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyImage");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XDestroyImage. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDestroyImage() - validating");
		validate_RWaddress( arg0, "XDestroyImage - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDestroyImage - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


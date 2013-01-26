// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#undef XRenderSetSubpixelOrder
static int(*funcptr) (Display * , int , int ) = 0;

extern int __lsb_check_params;
int XRenderSetSubpixelOrder (Display * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XRenderSetSubpixelOrder()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRenderSetSubpixelOrder");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XRenderSetSubpixelOrder. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XRenderSetSubpixelOrder() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XRenderSetSubpixelOrder - arg0 (dpy)");
		}
		validate_NULL_TYPETYPE(  arg0, "XRenderSetSubpixelOrder - arg0 (dpy)");
		validate_NULL_TYPETYPE(  arg1, "XRenderSetSubpixelOrder - arg1 (screen)");
		validate_NULL_TYPETYPE(  arg2, "XRenderSetSubpixelOrder - arg2 (subpixel)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

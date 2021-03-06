// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XCopyColormapAndFree
static Colormap(*funcptr) (Display * , Colormap ) = 0;

extern int __lsb_check_params;
Colormap XCopyColormapAndFree (Display * arg0 , Colormap arg1 )
{
	int reset_flag = __lsb_check_params;
	Colormap ret_value  ;
	__lsb_output(4, "Invoking wrapper for XCopyColormapAndFree()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCopyColormapAndFree");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XCopyColormapAndFree. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XCopyColormapAndFree() - validating");
		validate_RWaddress( arg0, "XCopyColormapAndFree - arg0");
		validate_NULL_TYPETYPE(  arg0, "XCopyColormapAndFree - arg0");
		validate_NULL_TYPETYPE(  arg1, "XCopyColormapAndFree - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


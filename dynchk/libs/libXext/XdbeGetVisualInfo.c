// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/extensions/Xdbe.h>
#undef XdbeGetVisualInfo
static XdbeScreenVisualInfo *(*funcptr) (Display * , Drawable * , int * ) = 0;

extern int __lsb_check_params;
XdbeScreenVisualInfo * XdbeGetVisualInfo (Display * arg0 , Drawable * arg1 , int * arg2 )
{
	int reset_flag = __lsb_check_params;
	XdbeScreenVisualInfo * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XdbeGetVisualInfo()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeGetVisualInfo");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XdbeGetVisualInfo. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XdbeGetVisualInfo() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XdbeGetVisualInfo - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XdbeGetVisualInfo - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XdbeGetVisualInfo - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XdbeGetVisualInfo - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XdbeGetVisualInfo - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XdbeGetVisualInfo - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


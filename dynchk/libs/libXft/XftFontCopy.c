// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xft/Xft.h>
#undef XftFontCopy
static XftFont *(*funcptr) (Display * , XftFont * ) = 0;

extern int __lsb_check_params;
XftFont * XftFontCopy (Display * arg0 , XftFont * arg1 )
{
	int reset_flag = __lsb_check_params;
	XftFont * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XftFontCopy()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XftFontCopy");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XftFontCopy. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XftFontCopy() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "XftFontCopy - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "XftFontCopy - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XftFontCopy - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XftFontCopy - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


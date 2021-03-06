// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/Xcms.h>
#undef XcmsDefaultCCC
static XcmsCCC(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
XcmsCCC XcmsDefaultCCC (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	XcmsCCC ret_value  ;
	__lsb_output(4, "Invoking wrapper for XcmsDefaultCCC()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsDefaultCCC");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XcmsDefaultCCC. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XcmsDefaultCCC() - validating");
		validate_RWaddress( arg0, "XcmsDefaultCCC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsDefaultCCC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsDefaultCCC - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


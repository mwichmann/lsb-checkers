// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xcms.h>
#undef XcmsDefaultCCC
static XcmsCCC(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
XcmsCCC XcmsDefaultCCC (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	XcmsCCC ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsDefaultCCC ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsDefaultCCC()");
		validate_RWaddress( arg0, "XcmsDefaultCCC - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsDefaultCCC - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsDefaultCCC - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


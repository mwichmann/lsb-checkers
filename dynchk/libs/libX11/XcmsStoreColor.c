// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#undef XcmsStoreColor
static int(*funcptr) (Display * , Colormap , XcmsColor * ) = 0;

extern int __lsb_check_params;
int XcmsStoreColor (Display * arg0 , Colormap arg1 , XcmsColor * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsStoreColor ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsStoreColor()");
		validate_RWaddress( arg0, "XcmsStoreColor - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsStoreColor - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsStoreColor - arg1");
		validate_RWaddress( arg2, "XcmsStoreColor - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsStoreColor - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xcms.h>
#undef XcmsLookupColor
static int(*funcptr) (Display * , Colormap , const char * , XcmsColor * , XcmsColor * , XcmsColorFormat ) = 0;

extern int __lsb_check_params;
int XcmsLookupColor (Display * arg0 , Colormap arg1 , const char * arg2 , XcmsColor * arg3 , XcmsColor * arg4 , XcmsColorFormat arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XcmsLookupColor ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XcmsLookupColor()");
		validate_RWaddress( arg0, "XcmsLookupColor - arg0");
		validate_NULL_TYPETYPE(  arg0, "XcmsLookupColor - arg0");
		validate_NULL_TYPETYPE(  arg1, "XcmsLookupColor - arg1");
		validate_Rdaddress( arg2, "XcmsLookupColor - arg2");
		validate_NULL_TYPETYPE(  arg2, "XcmsLookupColor - arg2");
		validate_RWaddress( arg3, "XcmsLookupColor - arg3");
		validate_NULL_TYPETYPE(  arg3, "XcmsLookupColor - arg3");
		validate_RWaddress( arg4, "XcmsLookupColor - arg4");
		validate_NULL_TYPETYPE(  arg4, "XcmsLookupColor - arg4");
		validate_NULL_TYPETYPE(  arg5, "XcmsLookupColor - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


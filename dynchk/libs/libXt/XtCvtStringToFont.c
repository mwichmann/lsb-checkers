// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xresource.h>
#include <X11/Xlib.h>
#undef XtCvtStringToFont
static Boolean(*funcptr) (Display * , XrmValuePtr , Cardinal * , XrmValuePtr , XrmValuePtr , XtPointer * ) = 0;

extern int __lsb_check_params;
Boolean XtCvtStringToFont (Display * arg0 , XrmValuePtr arg1 , Cardinal * arg2 , XrmValuePtr arg3 , XrmValuePtr arg4 , XtPointer * arg5 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtCvtStringToFont ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtCvtStringToFont()");
		validate_RWaddress( arg0, "XtCvtStringToFont - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtCvtStringToFont - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCvtStringToFont - arg1");
		validate_RWaddress( arg2, "XtCvtStringToFont - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtCvtStringToFont - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtCvtStringToFont - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtCvtStringToFont - arg4");
		validate_RWaddress( arg5, "XtCvtStringToFont - arg5");
		validate_NULL_TYPETYPE(  arg5, "XtCvtStringToFont - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#undef XtCvtStringToInt
static Boolean(*funcptr) (Display * , XrmValuePtr , Cardinal * , XrmValuePtr , XrmValuePtr , XtPointer * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
Boolean XtCvtStringToInt (Display * arg0 , XrmValuePtr arg1 , Cardinal * arg2 , XrmValuePtr arg3 , XrmValuePtr arg4 , XtPointer * arg5 )
{
	int reset_flag = __lsb_check_params;
	Boolean ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtStringToInt");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtCvtStringToInt()");
	validate_RWaddress( arg0, "XtCvtStringToInt - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtCvtStringToInt - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCvtStringToInt - arg1");
	validate_RWaddress( arg2, "XtCvtStringToInt - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtCvtStringToInt - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtCvtStringToInt - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtCvtStringToInt - arg4");
	validate_RWaddress( arg5, "XtCvtStringToInt - arg5");
		validate_NULL_TYPETYPE(  arg5, "XtCvtStringToInt - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


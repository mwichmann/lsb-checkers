// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#include <X11/Intrinsic.h>
#undef XtOpenDisplay
static Display *(*funcptr) (XtAppContext , char * , char * , char * , XrmOptionDescRec * , Cardinal , int * , char * * ) = 0;

extern int __lsb_check_params;
Display * XtOpenDisplay (XtAppContext arg0 , char * arg1 , char * arg2 , char * arg3 , XrmOptionDescRec * arg4 , Cardinal arg5 , int * arg6 , char * * arg7 )
{
	int reset_flag = __lsb_check_params;
	Display * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtOpenDisplay ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtOpenDisplay()");
		validate_NULL_TYPETYPE(  arg0, "XtOpenDisplay - arg0");
		validate_RWaddress( arg1, "XtOpenDisplay - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtOpenDisplay - arg1");
		validate_RWaddress( arg2, "XtOpenDisplay - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtOpenDisplay - arg2");
		validate_RWaddress( arg3, "XtOpenDisplay - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtOpenDisplay - arg3");
		validate_RWaddress( arg4, "XtOpenDisplay - arg4");
		validate_NULL_TYPETYPE(  arg4, "XtOpenDisplay - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtOpenDisplay - arg5");
		validate_RWaddress( arg6, "XtOpenDisplay - arg6");
		validate_NULL_TYPETYPE(  arg6, "XtOpenDisplay - arg6");
		validate_RWaddress( arg7, "XtOpenDisplay - arg7");
		validate_NULL_TYPETYPE(  arg7, "XtOpenDisplay - arg7");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
	__lsb_check_params = reset_flag;
	return ret_value;
}


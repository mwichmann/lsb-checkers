// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#undef XtAppCreateShell
static Widget(*funcptr) (char * , char * , WidgetClass , Display * , ArgList , Cardinal ) = 0;

extern int __lsb_check_params;
Widget XtAppCreateShell (char * arg0 , char * arg1 , WidgetClass arg2 , Display * arg3 , ArgList arg4 , Cardinal arg5 )
{
	int reset_flag = __lsb_check_params;
	Widget ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtAppCreateShell ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtAppCreateShell()");
		validate_RWaddress( arg0, "XtAppCreateShell - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtAppCreateShell - arg0");
		validate_RWaddress( arg1, "XtAppCreateShell - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtAppCreateShell - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAppCreateShell - arg2");
		validate_RWaddress( arg3, "XtAppCreateShell - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtAppCreateShell - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtAppCreateShell - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtAppCreateShell - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


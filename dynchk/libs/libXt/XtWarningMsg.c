// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtWarningMsg
static void(*funcptr) (char * , char * , char * , char * , String * , Cardinal * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtWarningMsg (char * arg0 , char * arg1 , char * arg2 , char * arg3 , String * arg4 , Cardinal * arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtWarningMsg");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtWarningMsg()");
	validate_RWaddress( arg0, "XtWarningMsg - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtWarningMsg - arg0");
	validate_RWaddress( arg1, "XtWarningMsg - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtWarningMsg - arg1");
	validate_RWaddress( arg2, "XtWarningMsg - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtWarningMsg - arg2");
	validate_RWaddress( arg3, "XtWarningMsg - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtWarningMsg - arg3");
	validate_RWaddress( arg4, "XtWarningMsg - arg4");
		validate_NULL_TYPETYPE(  arg4, "XtWarningMsg - arg4");
	validate_RWaddress( arg5, "XtWarningMsg - arg5");
		validate_NULL_TYPETYPE(  arg5, "XtWarningMsg - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}


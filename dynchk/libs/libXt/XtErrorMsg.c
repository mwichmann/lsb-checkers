// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtErrorMsg
static void(*funcptr) (char * , char * , char * , char * , String * , Cardinal * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
void XtErrorMsg (char * arg0 , char * arg1 , char * arg2 , char * arg3 , String * arg4 , Cardinal * arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtErrorMsg");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XtErrorMsg()");
	validate_RWaddress( arg0, "XtErrorMsg - arg0");
		validate_NULL_TYPETYPE(  arg0, "XtErrorMsg - arg0");
	validate_RWaddress( arg1, "XtErrorMsg - arg1");
		validate_NULL_TYPETYPE(  arg1, "XtErrorMsg - arg1");
	validate_RWaddress( arg2, "XtErrorMsg - arg2");
		validate_NULL_TYPETYPE(  arg2, "XtErrorMsg - arg2");
	validate_RWaddress( arg3, "XtErrorMsg - arg3");
		validate_NULL_TYPETYPE(  arg3, "XtErrorMsg - arg3");
	validate_RWaddress( arg4, "XtErrorMsg - arg4");
		validate_NULL_TYPETYPE(  arg4, "XtErrorMsg - arg4");
	validate_RWaddress( arg5, "XtErrorMsg - arg5");
		validate_NULL_TYPETYPE(  arg5, "XtErrorMsg - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}


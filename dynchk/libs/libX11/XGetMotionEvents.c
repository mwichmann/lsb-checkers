// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGetMotionEvents
static XTimeCoord *(*funcptr) (Display * , Window , Time , Time , int * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
XTimeCoord * XGetMotionEvents (Display * arg0 , Window arg1 , Time arg2 , Time arg3 , int * arg4 )
{
	int reset_flag = __lsb_check_params;
	XTimeCoord * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetMotionEvents");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "XGetMotionEvents()");
	validate_RWaddress( arg0, "XGetMotionEvents - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetMotionEvents - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetMotionEvents - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGetMotionEvents - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetMotionEvents - arg3");
	validate_RWaddress( arg4, "XGetMotionEvents - arg4");
		validate_NULL_TYPETYPE(  arg4, "XGetMotionEvents - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}


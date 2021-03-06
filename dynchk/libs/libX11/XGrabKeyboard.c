// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XGrabKeyboard
static int(*funcptr) (Display * , Window , int , int , int , Time ) = 0;

extern int __lsb_check_params;
int XGrabKeyboard (Display * arg0 , Window arg1 , int arg2 , int arg3 , int arg4 , Time arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGrabKeyboard()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGrabKeyboard");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGrabKeyboard. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGrabKeyboard() - validating");
		validate_RWaddress( arg0, "XGrabKeyboard - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGrabKeyboard - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGrabKeyboard - arg1");
		validate_NULL_TYPETYPE(  arg2, "XGrabKeyboard - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGrabKeyboard - arg3");
		validate_NULL_TYPETYPE(  arg4, "XGrabKeyboard - arg4");
		validate_NULL_TYPETYPE(  arg5, "XGrabKeyboard - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


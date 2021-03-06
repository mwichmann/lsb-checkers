// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XChangePointerControl
static int(*funcptr) (Display * , int , int , int , int , int ) = 0;

extern int __lsb_check_params;
int XChangePointerControl (Display * arg0 , int arg1 , int arg2 , int arg3 , int arg4 , int arg5 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XChangePointerControl()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangePointerControl");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XChangePointerControl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XChangePointerControl() - validating");
		validate_RWaddress( arg0, "XChangePointerControl - arg0");
		validate_NULL_TYPETYPE(  arg0, "XChangePointerControl - arg0");
		validate_NULL_TYPETYPE(  arg1, "XChangePointerControl - arg1");
		validate_NULL_TYPETYPE(  arg2, "XChangePointerControl - arg2");
		validate_NULL_TYPETYPE(  arg3, "XChangePointerControl - arg3");
		validate_NULL_TYPETYPE(  arg4, "XChangePointerControl - arg4");
		validate_NULL_TYPETYPE(  arg5, "XChangePointerControl - arg5");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}


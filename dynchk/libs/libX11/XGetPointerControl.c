// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XGetPointerControl
static int(*funcptr) (Display * , int * , int * , int * ) = 0;

extern int __lsb_check_params;
int XGetPointerControl (Display * arg0 , int * arg1 , int * arg2 , int * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetPointerControl()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetPointerControl");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetPointerControl. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetPointerControl() - validating");
		validate_RWaddress( arg0, "XGetPointerControl - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetPointerControl - arg0");
		validate_RWaddress( arg1, "XGetPointerControl - arg1");
		validate_NULL_TYPETYPE(  arg1, "XGetPointerControl - arg1");
		validate_RWaddress( arg2, "XGetPointerControl - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetPointerControl - arg2");
		validate_RWaddress( arg3, "XGetPointerControl - arg3");
		validate_NULL_TYPETYPE(  arg3, "XGetPointerControl - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


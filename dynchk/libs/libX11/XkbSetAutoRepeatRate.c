// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/XKBlib.h>
#undef XkbSetAutoRepeatRate
static int(*funcptr) (Display * , unsigned int , unsigned int , unsigned int ) = 0;

extern int __lsb_check_params;
int XkbSetAutoRepeatRate (Display * arg0 , unsigned int arg1 , unsigned int arg2 , unsigned int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbSetAutoRepeatRate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetAutoRepeatRate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbSetAutoRepeatRate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbSetAutoRepeatRate() - validating");
		validate_RWaddress( arg0, "XkbSetAutoRepeatRate - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbSetAutoRepeatRate - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbSetAutoRepeatRate - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbSetAutoRepeatRate - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbSetAutoRepeatRate - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XScreenOfDisplay
static Screen *(*funcptr) (Display * , int ) = 0;

extern int __lsb_check_params;
Screen * XScreenOfDisplay (Display * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	Screen * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XScreenOfDisplay()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XScreenOfDisplay");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XScreenOfDisplay. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XScreenOfDisplay() - validating");
		validate_RWaddress( arg0, "XScreenOfDisplay - arg0");
		validate_NULL_TYPETYPE(  arg0, "XScreenOfDisplay - arg0");
		validate_NULL_TYPETYPE(  arg1, "XScreenOfDisplay - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#undef XDisplayOfScreen
static Display *(*funcptr) (Screen * ) = 0;

extern int __lsb_check_params;
Display * XDisplayOfScreen (Screen * arg0 )
{
	int reset_flag = __lsb_check_params;
	Display * ret_value  ;
	__lsb_output(4, "Invoking wrapper for XDisplayOfScreen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDisplayOfScreen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XDisplayOfScreen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XDisplayOfScreen() - validating");
		validate_RWaddress( arg0, "XDisplayOfScreen - arg0");
		validate_NULL_TYPETYPE(  arg0, "XDisplayOfScreen - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}


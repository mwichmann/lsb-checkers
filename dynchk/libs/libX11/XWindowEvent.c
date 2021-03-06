// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#undef XWindowEvent
static int(*funcptr) (Display * , Window , long int , XEvent * ) = 0;

extern int __lsb_check_params;
int XWindowEvent (Display * arg0 , Window arg1 , long int arg2 , XEvent * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XWindowEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XWindowEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XWindowEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XWindowEvent() - validating");
		validate_RWaddress( arg0, "XWindowEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XWindowEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XWindowEvent - arg1");
		validate_NULL_TYPETYPE(  arg2, "XWindowEvent - arg2");
		validate_RWaddress( arg3, "XWindowEvent - arg3");
		validate_NULL_TYPETYPE(  arg3, "XWindowEvent - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


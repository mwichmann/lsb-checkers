// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/XKBlib.h>
#undef XkbBellEvent
static int(*funcptr) (Display * , Window , int , Atom ) = 0;

extern int __lsb_check_params;
int XkbBellEvent (Display * arg0 , Window arg1 , int arg2 , Atom arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XkbBellEvent()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbBellEvent");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XkbBellEvent. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XkbBellEvent() - validating");
		validate_RWaddress( arg0, "XkbBellEvent - arg0");
		validate_NULL_TYPETYPE(  arg0, "XkbBellEvent - arg0");
		validate_NULL_TYPETYPE(  arg1, "XkbBellEvent - arg1");
		validate_NULL_TYPETYPE(  arg2, "XkbBellEvent - arg2");
		validate_NULL_TYPETYPE(  arg3, "XkbBellEvent - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


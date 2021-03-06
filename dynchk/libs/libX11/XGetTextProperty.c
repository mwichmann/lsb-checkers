// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Xlib.h>
#include <X11/X.h>
#include <X11/Xutil.h>
#undef XGetTextProperty
static int(*funcptr) (Display * , Window , XTextProperty * , Atom ) = 0;

extern int __lsb_check_params;
int XGetTextProperty (Display * arg0 , Window arg1 , XTextProperty * arg2 , Atom arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for XGetTextProperty()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetTextProperty");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XGetTextProperty. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XGetTextProperty() - validating");
		validate_RWaddress( arg0, "XGetTextProperty - arg0");
		validate_NULL_TYPETYPE(  arg0, "XGetTextProperty - arg0");
		validate_NULL_TYPETYPE(  arg1, "XGetTextProperty - arg1");
		validate_RWaddress( arg2, "XGetTextProperty - arg2");
		validate_NULL_TYPETYPE(  arg2, "XGetTextProperty - arg2");
		validate_NULL_TYPETYPE(  arg3, "XGetTextProperty - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}


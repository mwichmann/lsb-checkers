// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtAddGrab
static void(*funcptr) (Widget , int , int ) = 0;

extern int __lsb_check_params;
void XtAddGrab (Widget arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtAddGrab()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAddGrab");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAddGrab. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAddGrab() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtAddGrab - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAddGrab - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtAddGrab - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


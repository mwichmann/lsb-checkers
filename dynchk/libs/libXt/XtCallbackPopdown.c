// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtCallbackPopdown
static void(*funcptr) (Widget , XtPointer , XtPointer ) = 0;

extern int __lsb_check_params;
void XtCallbackPopdown (Widget arg0 , XtPointer arg1 , XtPointer arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtCallbackPopdown()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCallbackPopdown");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtCallbackPopdown. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtCallbackPopdown() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtCallbackPopdown - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtCallbackPopdown - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtCallbackPopdown - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


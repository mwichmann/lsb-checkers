// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#undef XtAppSetSelectionTimeout
static void(*funcptr) (XtAppContext , long unsigned int ) = 0;

extern int __lsb_check_params;
void XtAppSetSelectionTimeout (XtAppContext arg0 , long unsigned int arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtAppSetSelectionTimeout()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppSetSelectionTimeout");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtAppSetSelectionTimeout. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtAppSetSelectionTimeout() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtAppSetSelectionTimeout - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtAppSetSelectionTimeout - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


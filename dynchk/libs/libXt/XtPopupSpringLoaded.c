// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtPopupSpringLoaded
static void(*funcptr) (Widget ) = 0;

extern int __lsb_check_params;
void XtPopupSpringLoaded (Widget arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtPopupSpringLoaded()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtPopupSpringLoaded");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtPopupSpringLoaded. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtPopupSpringLoaded() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtPopupSpringLoaded - arg0");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}


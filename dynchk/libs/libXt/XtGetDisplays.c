// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
#undef XtGetDisplays
static void(*funcptr) (XtAppContext , Display * * * , Cardinal * ) = 0;

extern int __lsb_check_params;
void XtGetDisplays (XtAppContext arg0 , Display * * * arg1 , Cardinal * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtGetDisplays()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetDisplays");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtGetDisplays. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtGetDisplays() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtGetDisplays - arg0");
		if( arg1 ) {
		validate_RWaddress( arg1, "XtGetDisplays - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "XtGetDisplays - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "XtGetDisplays - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "XtGetDisplays - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}


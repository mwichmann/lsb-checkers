// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Composite.h>
#undef XtUnmanageChildren
static void(*funcptr) (WidgetList , Cardinal ) = 0;

extern int __lsb_check_params;
void XtUnmanageChildren (WidgetList arg0 , Cardinal arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtUnmanageChildren()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUnmanageChildren");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtUnmanageChildren. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtUnmanageChildren() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtUnmanageChildren - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtUnmanageChildren - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}


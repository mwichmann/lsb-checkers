// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <lsb/Intrinsic.h>
#include <X11/Intrinsic.h>
#undef XtRemoveEventHandler
static void(*funcptr) (Widget , EventMask , int , XtEventHandler , XtPointer ) = 0;

extern int __lsb_check_params;
void XtRemoveEventHandler (Widget arg0 , EventMask arg1 , int arg2 , XtEventHandler arg3 , XtPointer arg4 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for XtRemoveEventHandler()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventHandler");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load XtRemoveEventHandler. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "XtRemoveEventHandler() - validating");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveEventHandler - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtRemoveEventHandler - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRemoveEventHandler - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtRemoveEventHandler - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtRemoveEventHandler - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#undef XtRemoveEventHandler
static void(*funcptr) (Widget , EventMask , int , XtEventHandler , XtPointer ) = 0;

extern int __lsb_check_params;
void XtRemoveEventHandler (Widget arg0 , EventMask arg1 , int arg2 , XtEventHandler arg3 , XtPointer arg4 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtRemoveEventHandler ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtRemoveEventHandler()");
		validate_NULL_TYPETYPE(  arg0, "XtRemoveEventHandler - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtRemoveEventHandler - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtRemoveEventHandler - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtRemoveEventHandler - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtRemoveEventHandler - arg4");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
}


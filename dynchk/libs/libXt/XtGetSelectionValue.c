// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#undef XtGetSelectionValue
static void(*funcptr) (Widget , Atom , Atom , XtSelectionCallbackProc , XtPointer , Time ) = 0;

extern int __lsb_check_params;
void XtGetSelectionValue (Widget arg0 , Atom arg1 , Atom arg2 , XtSelectionCallbackProc arg3 , XtPointer arg4 , Time arg5 )
{
	int reset_flag = __lsb_check_params;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, " XtGetSelectionValue ");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "XtGetSelectionValue()");
		validate_NULL_TYPETYPE(  arg0, "XtGetSelectionValue - arg0");
		validate_NULL_TYPETYPE(  arg1, "XtGetSelectionValue - arg1");
		validate_NULL_TYPETYPE(  arg2, "XtGetSelectionValue - arg2");
		validate_NULL_TYPETYPE(  arg3, "XtGetSelectionValue - arg3");
		validate_NULL_TYPETYPE(  arg4, "XtGetSelectionValue - arg4");
		validate_NULL_TYPETYPE(  arg5, "XtGetSelectionValue - arg5");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}


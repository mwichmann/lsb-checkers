// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
static int(*funcptr)(Widget, Atom, Atom, XtSelectionCallbackProc, XtPointer, Time) = 0;

void XtGetSelectionValue(Widget arg0, Atom arg1, Atom arg2, XtSelectionCallbackProc arg3, XtPointer arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg0, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg1, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg2, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg3, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg4, "XtGetSelectionValue");
	validate_NULL_TYPETYPE(arg5, "XtGetSelectionValue");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void lsb_XtGetSelectionValue(Widget arg0, Atom arg1, Atom arg2, XtSelectionCallbackProc arg3, XtPointer arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionValue");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


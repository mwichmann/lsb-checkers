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

void XtGetSelectionValueIncremental(Widget arg0, Atom arg1, Atom arg2, XtSelectionCallbackProc arg3, XtPointer arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg0, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg1, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg2, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg3, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg4, "XtGetSelectionValueIncremental");
	validate_NULL_TYPETYPE(arg5, "XtGetSelectionValueIncremental");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void lsb_XtGetSelectionValueIncremental(Widget arg0, Atom arg1, Atom arg2, XtSelectionCallbackProc arg3, XtPointer arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetSelectionValueIncremental");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Composite.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(WidgetList, Cardinal, XtDoChangeProc, XtPointer, WidgetList, Cardinal) = 0;

void XtChangeManagedSet(WidgetList arg0, Cardinal arg1, XtDoChangeProc arg2, XtPointer arg3, WidgetList arg4, Cardinal arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg0, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg1, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg2, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg3, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg4, "XtChangeManagedSet");
	validate_NULL_TYPETYPE(arg5, "XtChangeManagedSet");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void lsb_XtChangeManagedSet(WidgetList arg0, Cardinal arg1, XtDoChangeProc arg2, XtPointer arg3, WidgetList arg4, Cardinal arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtChangeManagedSet");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


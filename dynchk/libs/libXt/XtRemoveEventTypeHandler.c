// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, int, XtPointer, XtEventHandler, XtPointer) = 0;

void XtRemoveEventTypeHandler(Widget arg0, int arg1, XtPointer arg2, XtEventHandler arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventTypeHandler");
	validate_NULL_TYPETYPE(arg0, "XtRemoveEventTypeHandler");
	validate_NULL_TYPETYPE(arg1, "XtRemoveEventTypeHandler");
	validate_NULL_TYPETYPE(arg2, "XtRemoveEventTypeHandler");
	validate_NULL_TYPETYPE(arg3, "XtRemoveEventTypeHandler");
	validate_NULL_TYPETYPE(arg4, "XtRemoveEventTypeHandler");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void lsb_XtRemoveEventTypeHandler(Widget arg0, int arg1, XtPointer arg2, XtEventHandler arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventTypeHandler");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, EventMask, int, XtEventHandler, XtPointer) = 0;

void XtRemoveEventHandler(Widget arg0, EventMask arg1, int arg2, XtEventHandler arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventHandler");
	validate_NULL_TYPETYPE(arg0, "XtRemoveEventHandler");
	validate_NULL_TYPETYPE(arg1, "XtRemoveEventHandler");
	validate_NULL_TYPETYPE(arg2, "XtRemoveEventHandler");
	validate_NULL_TYPETYPE(arg3, "XtRemoveEventHandler");
	validate_NULL_TYPETYPE(arg4, "XtRemoveEventHandler");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void lsb_XtRemoveEventHandler(Widget arg0, EventMask arg1, int arg2, XtEventHandler arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveEventHandler");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


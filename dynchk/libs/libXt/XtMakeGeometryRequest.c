// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, XtWidgetGeometry *, XtWidgetGeometry *) = 0;

XtGeometryResult XtMakeGeometryRequest(Widget arg0, XtWidgetGeometry * arg1, XtWidgetGeometry * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMakeGeometryRequest");
	validate_NULL_TYPETYPE(arg0, "XtMakeGeometryRequest");
	validate_NULL_TYPETYPE(arg1, "XtMakeGeometryRequest");
	validate_NULL_TYPETYPE(arg2, "XtMakeGeometryRequest");
	return funcptr(arg0, arg1, arg2);
}

XtGeometryResult lsb_XtMakeGeometryRequest(Widget arg0, XtWidgetGeometry * arg1, XtWidgetGeometry * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMakeGeometryRequest");
	return funcptr(arg0, arg1, arg2);
}


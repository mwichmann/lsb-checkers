// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Xlib.h>
static int(*funcptr)(Widget, GC) = 0;

void XtReleaseGC(Widget arg0, GC arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtReleaseGC");
	validate_NULL_TYPETYPE(arg0, "XtReleaseGC");
	validate_NULL_TYPETYPE(arg1, "XtReleaseGC");
	return funcptr(arg0, arg1);
}

void lsb_XtReleaseGC(Widget arg0, GC arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtReleaseGC");
	return funcptr(arg0, arg1);
}


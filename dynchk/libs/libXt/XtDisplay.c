// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget) = 0;

Display * XtDisplay(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDisplay");
	validate_NULL_TYPETYPE(arg0, "XtDisplay");
	return funcptr(arg0);
}

Display * lsb_XtDisplay(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtDisplay");
	return funcptr(arg0);
}


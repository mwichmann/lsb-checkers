// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, int, int, unsigned int, unsigned int, unsigned int) = 0;

void XtConfigureWidget(Widget arg0, int arg1, int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg0, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg1, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg2, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg3, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg4, "XtConfigureWidget");
	validate_NULL_TYPETYPE(arg5, "XtConfigureWidget");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void lsb_XtConfigureWidget(Widget arg0, int arg1, int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtConfigureWidget");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


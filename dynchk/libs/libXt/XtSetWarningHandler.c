// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtErrorHandler) = 0;

void XtSetWarningHandler(XtErrorHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtSetWarningHandler");
	validate_NULL_TYPETYPE(arg0, "XtSetWarningHandler");
	return funcptr(arg0);
}

void lsb_XtSetWarningHandler(XtErrorHandler arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtSetWarningHandler");
	return funcptr(arg0);
}


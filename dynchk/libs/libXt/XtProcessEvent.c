// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtInputMask) = 0;

void XtProcessEvent(XtInputMask arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtProcessEvent");
	validate_NULL_TYPETYPE(arg0, "XtProcessEvent");
	return funcptr(arg0);
}

void lsb_XtProcessEvent(XtInputMask arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtProcessEvent");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, char *) = 0;

void XtRemoveAllCallbacks(Widget arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveAllCallbacks");
	validate_NULL_TYPETYPE(arg0, "XtRemoveAllCallbacks");
	validate_NULL_TYPETYPE(arg1, "XtRemoveAllCallbacks");
	return funcptr(arg0, arg1);
}

void lsb_XtRemoveAllCallbacks(Widget arg0, char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtRemoveAllCallbacks");
	return funcptr(arg0, arg1);
}


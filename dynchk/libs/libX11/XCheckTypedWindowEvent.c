// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, XEvent *) = 0;

int XCheckTypedWindowEvent(Display * arg0, Window arg1, int arg2, XEvent * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCheckTypedWindowEvent");
	validate_NULL_TYPETYPE(arg0, "XCheckTypedWindowEvent");
	validate_NULL_TYPETYPE(arg1, "XCheckTypedWindowEvent");
	validate_NULL_TYPETYPE(arg2, "XCheckTypedWindowEvent");
	validate_NULL_TYPETYPE(arg3, "XCheckTypedWindowEvent");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XCheckTypedWindowEvent(Display * arg0, Window arg1, int arg2, XEvent * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCheckTypedWindowEvent");
	return funcptr(arg0, arg1, arg2, arg3);
}


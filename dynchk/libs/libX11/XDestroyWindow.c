// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window) = 0;

int XDestroyWindow(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyWindow");
	validate_NULL_TYPETYPE(arg0, "XDestroyWindow");
	validate_NULL_TYPETYPE(arg1, "XDestroyWindow");
	return funcptr(arg0, arg1);
}

int lsb_XDestroyWindow(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyWindow");
	return funcptr(arg0, arg1);
}


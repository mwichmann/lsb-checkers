// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, unsigned long, XSetWindowAttributes *) = 0;

int XChangeWindowAttributes(Display * arg0, Window arg1, unsigned long arg2, XSetWindowAttributes * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangeWindowAttributes");
	validate_NULL_TYPETYPE(arg0, "XChangeWindowAttributes");
	validate_NULL_TYPETYPE(arg1, "XChangeWindowAttributes");
	validate_NULL_TYPETYPE(arg2, "XChangeWindowAttributes");
	validate_NULL_TYPETYPE(arg3, "XChangeWindowAttributes");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XChangeWindowAttributes(Display * arg0, Window arg1, unsigned long arg2, XSetWindowAttributes * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XChangeWindowAttributes");
	return funcptr(arg0, arg1, arg2, arg3);
}


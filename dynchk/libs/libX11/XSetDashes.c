// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, GC, int, char *, int) = 0;

int XSetDashes(Display * arg0, GC arg1, int arg2, char * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetDashes");
	validate_NULL_TYPETYPE(arg0, "XSetDashes");
	validate_NULL_TYPETYPE(arg1, "XSetDashes");
	validate_NULL_TYPETYPE(arg2, "XSetDashes");
	validate_NULL_TYPETYPE(arg3, "XSetDashes");
	validate_NULL_TYPETYPE(arg4, "XSetDashes");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_XSetDashes(Display * arg0, GC arg1, int arg2, char * arg3, int arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetDashes");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


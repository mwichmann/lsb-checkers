// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, XEvent *) = 0;

int XNextEvent(Display * arg0, XEvent * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XNextEvent");
	validate_NULL_TYPETYPE(arg0, "XNextEvent");
	validate_NULL_TYPETYPE(arg1, "XNextEvent");
	return funcptr(arg0, arg1);
}

int lsb_XNextEvent(Display * arg0, XEvent * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XNextEvent");
	return funcptr(arg0, arg1);
}


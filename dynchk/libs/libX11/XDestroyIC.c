// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
static int(*funcptr)(XIC) = 0;

void XDestroyIC(XIC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyIC");
	validate_NULL_TYPETYPE(arg0, "XDestroyIC");
	return funcptr(arg0);
}

void lsb_XDestroyIC(XIC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDestroyIC");
	return funcptr(arg0);
}


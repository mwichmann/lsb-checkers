// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, Window * *, int *) = 0;

int XGetWMColormapWindows(Display * arg0, Window arg1, Window * * arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetWMColormapWindows");
	validate_NULL_TYPETYPE(arg0, "XGetWMColormapWindows");
	validate_NULL_TYPETYPE(arg1, "XGetWMColormapWindows");
	validate_NULL_TYPETYPE(arg2, "XGetWMColormapWindows");
	validate_NULL_TYPETYPE(arg3, "XGetWMColormapWindows");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XGetWMColormapWindows(Display * arg0, Window arg1, Window * * arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XGetWMColormapWindows");
	return funcptr(arg0, arg1, arg2, arg3);
}


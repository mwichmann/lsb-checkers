// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
static int(*funcptr)(Display *, XrmDatabase) = 0;

void XrmSetDatabase(Display * arg0, XrmDatabase arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmSetDatabase");
	validate_NULL_TYPETYPE(arg0, "XrmSetDatabase");
	validate_NULL_TYPETYPE(arg1, "XrmSetDatabase");
	return funcptr(arg0, arg1);
}

void lsb_XrmSetDatabase(Display * arg0, XrmDatabase arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmSetDatabase");
	return funcptr(arg0, arg1);
}


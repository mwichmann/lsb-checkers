// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

void XtCloseDisplay(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCloseDisplay");
	validate_NULL_TYPETYPE(arg0, "XtCloseDisplay");
	return funcptr(arg0);
}

void lsb_XtCloseDisplay(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCloseDisplay");
	return funcptr(arg0);
}


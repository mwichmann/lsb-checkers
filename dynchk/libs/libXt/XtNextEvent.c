// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XEvent *) = 0;

void XtNextEvent(XEvent * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtNextEvent");
	validate_NULL_TYPETYPE(arg0, "XtNextEvent");
	return funcptr(arg0);
}

void lsb_XtNextEvent(XEvent * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtNextEvent");
	return funcptr(arg0);
}


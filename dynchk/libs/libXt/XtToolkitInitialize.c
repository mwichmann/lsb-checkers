// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void XtToolkitInitialize(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtToolkitInitialize");
	validate_NULL_TYPETYPE(arg0, "XtToolkitInitialize");
	return funcptr(arg0);
}

void lsb_XtToolkitInitialize(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtToolkitInitialize");
	return funcptr(arg0);
}


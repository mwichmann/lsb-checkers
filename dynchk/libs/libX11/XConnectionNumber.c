// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

int XConnectionNumber(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XConnectionNumber");
	validate_NULL_TYPETYPE(arg0, "XConnectionNumber");
	return funcptr(arg0);
}

int lsb_XConnectionNumber(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XConnectionNumber");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Screen *) = 0;

Window XRootWindowOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRootWindowOfScreen");
	validate_NULL_TYPETYPE(arg0, "XRootWindowOfScreen");
	return funcptr(arg0);
}

Window lsb_XRootWindowOfScreen(Screen * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XRootWindowOfScreen");
	return funcptr(arg0);
}


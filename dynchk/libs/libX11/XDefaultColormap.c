// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int) = 0;

Colormap XDefaultColormap(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDefaultColormap");
	validate_NULL_TYPETYPE(arg0, "XDefaultColormap");
	validate_NULL_TYPETYPE(arg1, "XDefaultColormap");
	return funcptr(arg0, arg1);
}

Colormap lsb_XDefaultColormap(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XDefaultColormap");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Colormap) = 0;

int XInstallColormap(Display * arg0, Colormap arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XInstallColormap");
	validate_NULL_TYPETYPE(arg0, "XInstallColormap");
	validate_NULL_TYPETYPE(arg1, "XInstallColormap");
	return funcptr(arg0, arg1);
}

int lsb_XInstallColormap(Display * arg0, Colormap arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XInstallColormap");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Colormap, XcmsColor *) = 0;

int XcmsStoreColor(Display * arg0, Colormap arg1, XcmsColor * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsStoreColor");
	validate_NULL_TYPETYPE(arg0, "XcmsStoreColor");
	validate_NULL_TYPETYPE(arg1, "XcmsStoreColor");
	validate_NULL_TYPETYPE(arg2, "XcmsStoreColor");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XcmsStoreColor(Display * arg0, Colormap arg1, XcmsColor * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsStoreColor");
	return funcptr(arg0, arg1, arg2);
}


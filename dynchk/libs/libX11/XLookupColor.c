// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Colormap, char *, XColor *, XColor *) = 0;

int XLookupColor(Display * arg0, Colormap arg1, char * arg2, XColor * arg3, XColor * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLookupColor");
	validate_NULL_TYPETYPE(arg0, "XLookupColor");
	validate_NULL_TYPETYPE(arg1, "XLookupColor");
	validate_NULL_TYPETYPE(arg2, "XLookupColor");
	validate_NULL_TYPETYPE(arg3, "XLookupColor");
	validate_NULL_TYPETYPE(arg4, "XLookupColor");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_XLookupColor(Display * arg0, Colormap arg1, char * arg2, XColor * arg3, XColor * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLookupColor");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


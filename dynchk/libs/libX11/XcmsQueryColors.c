// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xcms.h>
static int(*funcptr)(Display *, Colormap, XcmsColor *, unsigned int, XcmsColorFormat) = 0;

int XcmsQueryColors(Display * arg0, Colormap arg1, XcmsColor * arg2, unsigned int arg3, XcmsColorFormat arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsQueryColors");
	validate_NULL_TYPETYPE(arg0, "XcmsQueryColors");
	validate_NULL_TYPETYPE(arg1, "XcmsQueryColors");
	validate_NULL_TYPETYPE(arg2, "XcmsQueryColors");
	validate_NULL_TYPETYPE(arg3, "XcmsQueryColors");
	validate_NULL_TYPETYPE(arg4, "XcmsQueryColors");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_XcmsQueryColors(Display * arg0, Colormap arg1, XcmsColor * arg2, unsigned int arg3, XcmsColorFormat arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsQueryColors");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


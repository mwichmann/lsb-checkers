// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xutil.h>
#include <X11/Xutil.h>
#include <X11/Xutil.h>
static int(*funcptr)(Region, Region, Region) = 0;

int XIntersectRegion(Region arg0, Region arg1, Region arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XIntersectRegion");
	validate_NULL_TYPETYPE(arg0, "XIntersectRegion");
	validate_NULL_TYPETYPE(arg1, "XIntersectRegion");
	validate_NULL_TYPETYPE(arg2, "XIntersectRegion");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XIntersectRegion(Region arg0, Region arg1, Region arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XIntersectRegion");
	return funcptr(arg0, arg1, arg2);
}


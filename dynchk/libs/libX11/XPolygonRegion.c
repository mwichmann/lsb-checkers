// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XPoint *, int, int) = 0;

Region XPolygonRegion(XPoint * arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XPolygonRegion");
	validate_NULL_TYPETYPE(arg0, "XPolygonRegion");
	validate_NULL_TYPETYPE(arg1, "XPolygonRegion");
	validate_NULL_TYPETYPE(arg2, "XPolygonRegion");
	return funcptr(arg0, arg1, arg2);
}

Region lsb_XPolygonRegion(XPoint * arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XPolygonRegion");
	return funcptr(arg0, arg1, arg2);
}


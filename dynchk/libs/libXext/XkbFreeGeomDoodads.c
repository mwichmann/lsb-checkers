// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
static int(*funcptr)(XkbDoodadPtr, int, int) = 0;

void XkbFreeGeomDoodads(XkbDoodadPtr arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeGeomDoodads");
	validate_NULL_TYPETYPE(arg0, "XkbFreeGeomDoodads");
	validate_NULL_TYPETYPE(arg1, "XkbFreeGeomDoodads");
	validate_NULL_TYPETYPE(arg2, "XkbFreeGeomDoodads");
	return funcptr(arg0, arg1, arg2);
}

void lsb_XkbFreeGeomDoodads(XkbDoodadPtr arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeGeomDoodads");
	return funcptr(arg0, arg1, arg2);
}


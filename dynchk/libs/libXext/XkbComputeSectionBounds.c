// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/XKBgeom.h>
static int(*funcptr)(XkbGeometryPtr, XkbSectionPtr) = 0;

int XkbComputeSectionBounds(XkbGeometryPtr arg0, XkbSectionPtr arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbComputeSectionBounds");
	validate_NULL_TYPETYPE(arg0, "XkbComputeSectionBounds");
	validate_NULL_TYPETYPE(arg1, "XkbComputeSectionBounds");
	return funcptr(arg0, arg1);
}

int lsb_XkbComputeSectionBounds(XkbGeometryPtr arg0, XkbSectionPtr arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbComputeSectionBounds");
	return funcptr(arg0, arg1);
}


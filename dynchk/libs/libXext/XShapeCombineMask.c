// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, int, int, Pixmap, int) = 0;

void XShapeCombineMask(Display * arg0, Window arg1, int arg2, int arg3, int arg4, Pixmap arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg0, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg1, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg2, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg3, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg4, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg5, "XShapeCombineMask");
	validate_NULL_TYPETYPE(arg6, "XShapeCombineMask");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void lsb_XShapeCombineMask(Display * arg0, Window arg1, int arg2, int arg3, int arg4, Pixmap arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XShapeCombineMask");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}


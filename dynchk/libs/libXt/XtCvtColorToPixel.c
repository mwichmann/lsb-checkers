// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
#include <X11/Xresource.h>
static int(*funcptr)(Display *, XrmValuePtr, Cardinal *, XrmValuePtr, XrmValuePtr, XtPointer *) = 0;

Boolean XtCvtColorToPixel(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg0, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg1, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg2, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg3, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg4, "XtCvtColorToPixel");
	validate_NULL_TYPETYPE(arg5, "XtCvtColorToPixel");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

Boolean lsb_XtCvtColorToPixel(Display * arg0, XrmValuePtr arg1, Cardinal * arg2, XrmValuePtr arg3, XrmValuePtr arg4, XtPointer * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtCvtColorToPixel");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


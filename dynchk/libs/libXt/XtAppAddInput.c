// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(XtAppContext, int, XtPointer, XtInputCallbackProc, XtPointer) = 0;

XtInputId XtAppAddInput(XtAppContext arg0, int arg1, XtPointer arg2, XtInputCallbackProc arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppAddInput");
	validate_NULL_TYPETYPE(arg0, "XtAppAddInput");
	validate_NULL_TYPETYPE(arg1, "XtAppAddInput");
	validate_NULL_TYPETYPE(arg2, "XtAppAddInput");
	validate_NULL_TYPETYPE(arg3, "XtAppAddInput");
	validate_NULL_TYPETYPE(arg4, "XtAppAddInput");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

XtInputId lsb_XtAppAddInput(XtAppContext arg0, int arg1, XtPointer arg2, XtInputCallbackProc arg3, XtPointer arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtAppAddInput");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


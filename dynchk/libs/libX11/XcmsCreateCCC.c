// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#include <X11/Xlib.h>
#include <X11/Xcms.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, int, Visual *, XcmsColor *, XcmsCompressionProc, XPointer, XcmsWhiteAdjustProc, XPointer) = 0;

XcmsCCC XcmsCreateCCC(Display * arg0, int arg1, Visual * arg2, XcmsColor * arg3, XcmsCompressionProc arg4, XPointer arg5, XcmsWhiteAdjustProc arg6, XPointer arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg0, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg1, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg2, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg3, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg4, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg5, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg6, "XcmsCreateCCC");
	validate_NULL_TYPETYPE(arg7, "XcmsCreateCCC");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

XcmsCCC lsb_XcmsCreateCCC(Display * arg0, int arg1, Visual * arg2, XcmsColor * arg3, XcmsCompressionProc arg4, XPointer arg5, XcmsWhiteAdjustProc arg6, XPointer arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCreateCCC");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}


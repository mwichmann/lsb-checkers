// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget, XtGCMask, XGCValues *) = 0;

GC XtGetGC(Widget arg0, XtGCMask arg1, XGCValues * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetGC");
	validate_NULL_TYPETYPE(arg0, "XtGetGC");
	validate_NULL_TYPETYPE(arg1, "XtGetGC");
	validate_NULL_TYPETYPE(arg2, "XtGetGC");
	return funcptr(arg0, arg1, arg2);
}

GC lsb_XtGetGC(Widget arg0, XtGCMask arg1, XGCValues * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetGC");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget) = 0;

String XtName(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtName");
	validate_NULL_TYPETYPE(arg0, "XtName");
	return funcptr(arg0);
}

String lsb_XtName(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtName");
	return funcptr(arg0);
}


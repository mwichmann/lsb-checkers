// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Widget) = 0;

Boolean XtIsManaged(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsManaged");
	validate_NULL_TYPETYPE(arg0, "XtIsManaged");
	return funcptr(arg0);
}

Boolean lsb_XtIsManaged(Widget arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsManaged");
	return funcptr(arg0);
}


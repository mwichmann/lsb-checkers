// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Cardinal) = 0;

char * XtMalloc(Cardinal arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMalloc");
	validate_NULL_TYPETYPE(arg0, "XtMalloc");
	return funcptr(arg0);
}

char * lsb_XtMalloc(Cardinal arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtMalloc");
	return funcptr(arg0);
}


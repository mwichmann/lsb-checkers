// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window) = 0;

int XAddToSaveSet(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddToSaveSet");
	validate_NULL_TYPETYPE(arg0, "XAddToSaveSet");
	validate_NULL_TYPETYPE(arg1, "XAddToSaveSet");
	return funcptr(arg0, arg1);
}

int lsb_XAddToSaveSet(Display * arg0, Window arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddToSaveSet");
	return funcptr(arg0, arg1);
}


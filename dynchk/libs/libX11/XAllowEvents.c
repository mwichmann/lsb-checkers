// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, int, Time) = 0;

int XAllowEvents(Display * arg0, int arg1, Time arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllowEvents");
	validate_NULL_TYPETYPE(arg0, "XAllowEvents");
	validate_NULL_TYPETYPE(arg1, "XAllowEvents");
	validate_NULL_TYPETYPE(arg2, "XAllowEvents");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XAllowEvents(Display * arg0, int arg1, Time arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAllowEvents");
	return funcptr(arg0, arg1, arg2);
}


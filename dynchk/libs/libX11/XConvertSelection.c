// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Atom, Atom, Atom, Window, Time) = 0;

int XConvertSelection(Display * arg0, Atom arg1, Atom arg2, Atom arg3, Window arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XConvertSelection");
	validate_NULL_TYPETYPE(arg0, "XConvertSelection");
	validate_NULL_TYPETYPE(arg1, "XConvertSelection");
	validate_NULL_TYPETYPE(arg2, "XConvertSelection");
	validate_NULL_TYPETYPE(arg3, "XConvertSelection");
	validate_NULL_TYPETYPE(arg4, "XConvertSelection");
	validate_NULL_TYPETYPE(arg5, "XConvertSelection");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int lsb_XConvertSelection(Display * arg0, Atom arg1, Atom arg2, Atom arg3, Window arg4, Time arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XConvertSelection");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, Atom) = 0;

int XkbBellEvent(Display * arg0, Window arg1, int arg2, Atom arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbBellEvent");
	validate_NULL_TYPETYPE(arg0, "XkbBellEvent");
	validate_NULL_TYPETYPE(arg1, "XkbBellEvent");
	validate_NULL_TYPETYPE(arg2, "XkbBellEvent");
	validate_NULL_TYPETYPE(arg3, "XkbBellEvent");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XkbBellEvent(Display * arg0, Window arg1, int arg2, Atom arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbBellEvent");
	return funcptr(arg0, arg1, arg2, arg3);
}


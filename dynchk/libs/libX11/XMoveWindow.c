// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, int) = 0;

int XMoveWindow(Display * arg0, Window arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XMoveWindow");
	validate_NULL_TYPETYPE(arg0, "XMoveWindow");
	validate_NULL_TYPETYPE(arg1, "XMoveWindow");
	validate_NULL_TYPETYPE(arg2, "XMoveWindow");
	validate_NULL_TYPETYPE(arg3, "XMoveWindow");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XMoveWindow(Display * arg0, Window arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XMoveWindow");
	return funcptr(arg0, arg1, arg2, arg3);
}


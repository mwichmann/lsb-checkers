// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, int, int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long) = 0;

Window XCreateSimpleWindow(Display * arg0, Window arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5, unsigned int arg6, unsigned long arg7, unsigned long arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg0, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg1, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg2, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg3, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg4, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg5, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg6, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg7, "XCreateSimpleWindow");
	validate_NULL_TYPETYPE(arg8, "XCreateSimpleWindow");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

Window lsb_XCreateSimpleWindow(Display * arg0, Window arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5, unsigned int arg6, unsigned long arg7, unsigned long arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XCreateSimpleWindow");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}


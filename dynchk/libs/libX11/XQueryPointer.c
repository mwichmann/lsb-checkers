// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, Window *, Window *, int *, int *, int *, int *, unsigned int *) = 0;

int XQueryPointer(Display * arg0, Window arg1, Window * arg2, Window * arg3, int * arg4, int * arg5, int * arg6, int * arg7, unsigned int * arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryPointer");
	validate_NULL_TYPETYPE(arg0, "XQueryPointer");
	validate_NULL_TYPETYPE(arg1, "XQueryPointer");
	validate_NULL_TYPETYPE(arg2, "XQueryPointer");
	validate_NULL_TYPETYPE(arg3, "XQueryPointer");
	validate_NULL_TYPETYPE(arg4, "XQueryPointer");
	validate_NULL_TYPETYPE(arg5, "XQueryPointer");
	validate_NULL_TYPETYPE(arg6, "XQueryPointer");
	validate_NULL_TYPETYPE(arg7, "XQueryPointer");
	validate_NULL_TYPETYPE(arg8, "XQueryPointer");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

int lsb_XQueryPointer(Display * arg0, Window arg1, Window * arg2, Window * arg3, int * arg4, int * arg5, int * arg6, int * arg7, unsigned int * arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryPointer");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, unsigned int, unsigned int, char *, unsigned int, unsigned int, unsigned int *, unsigned int *) = 0;

int XkbSetDebuggingFlags(Display * arg0, unsigned int arg1, unsigned int arg2, char * arg3, unsigned int arg4, unsigned int arg5, unsigned int * arg6, unsigned int * arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg0, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg1, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg2, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg3, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg4, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg5, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg6, "XkbSetDebuggingFlags");
	validate_NULL_TYPETYPE(arg7, "XkbSetDebuggingFlags");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

int lsb_XkbSetDebuggingFlags(Display * arg0, unsigned int arg1, unsigned int arg2, char * arg3, unsigned int arg4, unsigned int arg5, unsigned int * arg6, unsigned int * arg7)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetDebuggingFlags");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(char *, SmPointer, int, int, unsigned long, SmcCallbacks *, char *, char * *, int, char *) = 0;

SmcConn SmcOpenConnection(char * arg0, SmPointer arg1, int arg2, int arg3, unsigned long arg4, SmcCallbacks * arg5, char * arg6, char * * arg7, int arg8, char * arg9)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg0, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg1, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg2, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg3, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg4, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg5, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg6, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg7, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg8, "SmcOpenConnection");
	validate_NULL_TYPETYPE(arg9, "SmcOpenConnection");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

SmcConn lsb_SmcOpenConnection(char * arg0, SmPointer arg1, int arg2, int arg3, unsigned long arg4, SmcCallbacks * arg5, char * arg6, char * * arg7, int arg8, char * arg9)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcOpenConnection");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}


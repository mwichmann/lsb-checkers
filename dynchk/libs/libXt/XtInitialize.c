// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(char *, char *, XrmOptionDescRec *, Cardinal, int *, char * *) = 0;

Widget XtInitialize(char * arg0, char * arg1, XrmOptionDescRec * arg2, Cardinal arg3, int * arg4, char * * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtInitialize");
	validate_NULL_TYPETYPE(arg0, "XtInitialize");
	validate_NULL_TYPETYPE(arg1, "XtInitialize");
	validate_NULL_TYPETYPE(arg2, "XtInitialize");
	validate_NULL_TYPETYPE(arg3, "XtInitialize");
	validate_NULL_TYPETYPE(arg4, "XtInitialize");
	validate_NULL_TYPETYPE(arg5, "XtInitialize");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

Widget lsb_XtInitialize(char * arg0, char * arg1, XrmOptionDescRec * arg2, Cardinal arg3, int * arg4, char * * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtInitialize");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int *, int *) = 0;

int XSyncQueryExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryExtension");
	validate_NULL_TYPETYPE(arg0, "XSyncQueryExtension");
	validate_NULL_TYPETYPE(arg1, "XSyncQueryExtension");
	validate_NULL_TYPETYPE(arg2, "XSyncQueryExtension");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XSyncQueryExtension(Display * arg0, int * arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryExtension");
	return funcptr(arg0, arg1, arg2);
}


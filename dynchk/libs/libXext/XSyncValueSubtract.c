// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
#include <X11/extensions/sync.h>
static int(*funcptr)(XSyncValue *, XSyncValue, XSyncValue, int *) = 0;

void XSyncValueSubtract(XSyncValue * arg0, XSyncValue arg1, XSyncValue arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncValueSubtract");
	validate_NULL_TYPETYPE(arg0, "XSyncValueSubtract");
	validate_NULL_TYPETYPE(arg1, "XSyncValueSubtract");
	validate_NULL_TYPETYPE(arg2, "XSyncValueSubtract");
	validate_NULL_TYPETYPE(arg3, "XSyncValueSubtract");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_XSyncValueSubtract(XSyncValue * arg0, XSyncValue arg1, XSyncValue arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncValueSubtract");
	return funcptr(arg0, arg1, arg2, arg3);
}


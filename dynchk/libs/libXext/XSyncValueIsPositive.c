// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
static int(*funcptr)(XSyncValue) = 0;

int XSyncValueIsPositive(XSyncValue arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncValueIsPositive");
	validate_NULL_TYPETYPE(arg0, "XSyncValueIsPositive");
	return funcptr(arg0);
}

int lsb_XSyncValueIsPositive(XSyncValue arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncValueIsPositive");
	return funcptr(arg0);
}


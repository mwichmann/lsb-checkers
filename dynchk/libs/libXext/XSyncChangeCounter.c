// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
#include <X11/extensions/sync.h>
static int(*funcptr)(Display *, XSyncCounter, XSyncValue) = 0;

int XSyncChangeCounter(Display * arg0, XSyncCounter arg1, XSyncValue arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncChangeCounter");
	validate_NULL_TYPETYPE(arg0, "XSyncChangeCounter");
	validate_NULL_TYPETYPE(arg1, "XSyncChangeCounter");
	validate_NULL_TYPETYPE(arg2, "XSyncChangeCounter");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XSyncChangeCounter(Display * arg0, XSyncCounter arg1, XSyncValue arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncChangeCounter");
	return funcptr(arg0, arg1, arg2);
}


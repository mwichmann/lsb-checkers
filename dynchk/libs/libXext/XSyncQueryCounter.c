// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/extensions/sync.h>
static int(*funcptr)(Display *, XSyncCounter, XSyncValue *) = 0;

int XSyncQueryCounter(Display * arg0, XSyncCounter arg1, XSyncValue * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryCounter");
	validate_NULL_TYPETYPE(arg0, "XSyncQueryCounter");
	validate_NULL_TYPETYPE(arg1, "XSyncQueryCounter");
	validate_NULL_TYPETYPE(arg2, "XSyncQueryCounter");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XSyncQueryCounter(Display * arg0, XSyncCounter arg1, XSyncValue * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSyncQueryCounter");
	return funcptr(arg0, arg1, arg2);
}


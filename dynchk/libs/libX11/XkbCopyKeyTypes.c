// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbKeyTypePtr, XkbKeyTypePtr, int) = 0;

int XkbCopyKeyTypes(XkbKeyTypePtr arg0, XkbKeyTypePtr arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbCopyKeyTypes");
	validate_NULL_TYPETYPE(arg0, "XkbCopyKeyTypes");
	validate_NULL_TYPETYPE(arg1, "XkbCopyKeyTypes");
	validate_NULL_TYPETYPE(arg2, "XkbCopyKeyTypes");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XkbCopyKeyTypes(XkbKeyTypePtr arg0, XkbKeyTypePtr arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbCopyKeyTypes");
	return funcptr(arg0, arg1, arg2);
}


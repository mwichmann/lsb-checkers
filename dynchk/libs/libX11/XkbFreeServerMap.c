// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(XkbDescPtr, unsigned int, int) = 0;

void XkbFreeServerMap(XkbDescPtr arg0, unsigned int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeServerMap");
	validate_NULL_TYPETYPE(arg0, "XkbFreeServerMap");
	validate_NULL_TYPETYPE(arg1, "XkbFreeServerMap");
	validate_NULL_TYPETYPE(arg2, "XkbFreeServerMap");
	return funcptr(arg0, arg1, arg2);
}

void lsb_XkbFreeServerMap(XkbDescPtr arg0, unsigned int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbFreeServerMap");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, unsigned int, XkbDescPtr) = 0;

int XkbGetNames(Display * arg0, unsigned int arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetNames");
	validate_NULL_TYPETYPE(arg0, "XkbGetNames");
	validate_NULL_TYPETYPE(arg1, "XkbGetNames");
	validate_NULL_TYPETYPE(arg2, "XkbGetNames");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XkbGetNames(Display * arg0, unsigned int arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbGetNames");
	return funcptr(arg0, arg1, arg2);
}


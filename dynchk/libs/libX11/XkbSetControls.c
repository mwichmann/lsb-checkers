// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, unsigned long, XkbDescPtr) = 0;

int XkbSetControls(Display * arg0, unsigned long arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetControls");
	validate_NULL_TYPETYPE(arg0, "XkbSetControls");
	validate_NULL_TYPETYPE(arg1, "XkbSetControls");
	validate_NULL_TYPETYPE(arg2, "XkbSetControls");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XkbSetControls(Display * arg0, unsigned long arg1, XkbDescPtr arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XkbSetControls");
	return funcptr(arg0, arg1, arg2);
}


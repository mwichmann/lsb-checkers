// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Font, int, int, int) = 0;

void glXUseXFont(Font arg0, int arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXUseXFont");
	validate_NULL_TYPETYPE(arg0, "glXUseXFont");
	validate_NULL_TYPETYPE(arg1, "glXUseXFont");
	validate_NULL_TYPETYPE(arg2, "glXUseXFont");
	validate_NULL_TYPETYPE(arg3, "glXUseXFont");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glXUseXFont(Font arg0, int arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXUseXFont");
	return funcptr(arg0, arg1, arg2, arg3);
}


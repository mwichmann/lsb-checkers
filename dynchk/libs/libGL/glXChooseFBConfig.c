// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int, int *, int *) = 0;

GLXFBConfig * glXChooseFBConfig(Display * arg0, int arg1, int * arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXChooseFBConfig");
	validate_NULL_TYPETYPE(arg0, "glXChooseFBConfig");
	validate_NULL_TYPETYPE(arg1, "glXChooseFBConfig");
	validate_NULL_TYPETYPE(arg2, "glXChooseFBConfig");
	validate_NULL_TYPETYPE(arg3, "glXChooseFBConfig");
	return funcptr(arg0, arg1, arg2, arg3);
}

GLXFBConfig * lsb_glXChooseFBConfig(Display * arg0, int arg1, int * arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXChooseFBConfig");
	return funcptr(arg0, arg1, arg2, arg3);
}


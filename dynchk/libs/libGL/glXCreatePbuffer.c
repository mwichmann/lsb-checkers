// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/glx.h>
static int(*funcptr)(Display *, GLXFBConfig, int *) = 0;

GLXPbuffer glXCreatePbuffer(Display * arg0, GLXFBConfig arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXCreatePbuffer");
	validate_NULL_TYPETYPE(arg0, "glXCreatePbuffer");
	validate_NULL_TYPETYPE(arg1, "glXCreatePbuffer");
	validate_NULL_TYPETYPE(arg2, "glXCreatePbuffer");
	return funcptr(arg0, arg1, arg2);
}

GLXPbuffer lsb_glXCreatePbuffer(Display * arg0, GLXFBConfig arg1, int * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXCreatePbuffer");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/glx.h>
static int(*funcptr)(Display *, GLXFBConfig, int, int *) = 0;

int glXGetFBConfigAttrib(Display * arg0, GLXFBConfig arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetFBConfigAttrib");
	validate_NULL_TYPETYPE(arg0, "glXGetFBConfigAttrib");
	validate_NULL_TYPETYPE(arg1, "glXGetFBConfigAttrib");
	validate_NULL_TYPETYPE(arg2, "glXGetFBConfigAttrib");
	validate_NULL_TYPETYPE(arg3, "glXGetFBConfigAttrib");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_glXGetFBConfigAttrib(Display * arg0, GLXFBConfig arg1, int arg2, int * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXGetFBConfigAttrib");
	return funcptr(arg0, arg1, arg2, arg3);
}


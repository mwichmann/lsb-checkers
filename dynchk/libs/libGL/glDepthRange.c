// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLclampd, GLclampd) = 0;

void glDepthRange(GLclampd arg0, GLclampd arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDepthRange");
	validate_NULL_TYPETYPE(arg0, "glDepthRange");
	validate_NULL_TYPETYPE(arg1, "glDepthRange");
	return funcptr(arg0, arg1);
}

void lsb_glDepthRange(GLclampd arg0, GLclampd arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glDepthRange");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLushort *) = 0;

void glGetPixelMapusv(GLenum arg0, GLushort * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetPixelMapusv");
	validate_NULL_TYPETYPE(arg0, "glGetPixelMapusv");
	validate_NULL_TYPETYPE(arg1, "glGetPixelMapusv");
	return funcptr(arg0, arg1);
}

void lsb_glGetPixelMapusv(GLenum arg0, GLushort * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetPixelMapusv");
	return funcptr(arg0, arg1);
}


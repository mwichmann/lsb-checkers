// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLfloat *) = 0;

void glGetTexEnvfv(GLenum arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexEnvfv");
	validate_NULL_TYPETYPE(arg0, "glGetTexEnvfv");
	validate_NULL_TYPETYPE(arg1, "glGetTexEnvfv");
	validate_NULL_TYPETYPE(arg2, "glGetTexEnvfv");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glGetTexEnvfv(GLenum arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexEnvfv");
	return funcptr(arg0, arg1, arg2);
}


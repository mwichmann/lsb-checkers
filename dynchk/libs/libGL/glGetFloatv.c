// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLfloat *) = 0;

void glGetFloatv(GLenum arg0, GLfloat * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetFloatv");
	validate_NULL_TYPETYPE(arg0, "glGetFloatv");
	validate_NULL_TYPETYPE(arg1, "glGetFloatv");
	return funcptr(arg0, arg1);
}

void lsb_glGetFloatv(GLenum arg0, GLfloat * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetFloatv");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLsizei, GLenum, GLfloat *) = 0;

void glFeedbackBuffer(GLsizei arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFeedbackBuffer");
	validate_NULL_TYPETYPE(arg0, "glFeedbackBuffer");
	validate_NULL_TYPETYPE(arg1, "glFeedbackBuffer");
	validate_NULL_TYPETYPE(arg2, "glFeedbackBuffer");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glFeedbackBuffer(GLsizei arg0, GLenum arg1, GLfloat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFeedbackBuffer");
	return funcptr(arg0, arg1, arg2);
}


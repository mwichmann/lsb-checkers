// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLint, GLenum, GLenum, GLvoid *) = 0;

void glGetTexImage(GLenum arg0, GLint arg1, GLenum arg2, GLenum arg3, GLvoid * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexImage");
	validate_NULL_TYPETYPE(arg0, "glGetTexImage");
	validate_NULL_TYPETYPE(arg1, "glGetTexImage");
	validate_NULL_TYPETYPE(arg2, "glGetTexImage");
	validate_NULL_TYPETYPE(arg3, "glGetTexImage");
	validate_NULL_TYPETYPE(arg4, "glGetTexImage");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void lsb_glGetTexImage(GLenum arg0, GLint arg1, GLenum arg2, GLenum arg3, GLvoid * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetTexImage");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


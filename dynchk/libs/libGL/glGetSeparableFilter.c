// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) = 0;

void glGetSeparableFilter(GLenum arg0, GLenum arg1, GLenum arg2, GLvoid * arg3, GLvoid * arg4, GLvoid * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg0, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg1, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg2, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg3, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg4, "glGetSeparableFilter");
	validate_NULL_TYPETYPE(arg5, "glGetSeparableFilter");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

void lsb_glGetSeparableFilter(GLenum arg0, GLenum arg1, GLenum arg2, GLvoid * arg3, GLvoid * arg4, GLvoid * arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetSeparableFilter");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}


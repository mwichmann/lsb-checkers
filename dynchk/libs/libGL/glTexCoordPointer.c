// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLint, GLenum, GLsizei, GLvoid *) = 0;

void glTexCoordPointer(GLint arg0, GLenum arg1, GLsizei arg2, GLvoid * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoordPointer");
	validate_NULL_TYPETYPE(arg0, "glTexCoordPointer");
	validate_NULL_TYPETYPE(arg1, "glTexCoordPointer");
	validate_NULL_TYPETYPE(arg2, "glTexCoordPointer");
	validate_NULL_TYPETYPE(arg3, "glTexCoordPointer");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glTexCoordPointer(GLint arg0, GLenum arg1, GLsizei arg2, GLvoid * arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoordPointer");
	return funcptr(arg0, arg1, arg2, arg3);
}


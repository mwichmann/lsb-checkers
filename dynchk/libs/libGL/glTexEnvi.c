// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLenum, GLint) = 0;

void glTexEnvi(GLenum arg0, GLenum arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexEnvi");
	validate_NULL_TYPETYPE(arg0, "glTexEnvi");
	validate_NULL_TYPETYPE(arg1, "glTexEnvi");
	validate_NULL_TYPETYPE(arg2, "glTexEnvi");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glTexEnvi(GLenum arg0, GLenum arg1, GLint arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexEnvi");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLsizei, GLenum, GLboolean) = 0;

void glHistogram(GLenum arg0, GLsizei arg1, GLenum arg2, GLboolean arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glHistogram");
	validate_NULL_TYPETYPE(arg0, "glHistogram");
	validate_NULL_TYPETYPE(arg1, "glHistogram");
	validate_NULL_TYPETYPE(arg2, "glHistogram");
	validate_NULL_TYPETYPE(arg3, "glHistogram");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glHistogram(GLenum arg0, GLsizei arg1, GLenum arg2, GLboolean arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glHistogram");
	return funcptr(arg0, arg1, arg2, arg3);
}


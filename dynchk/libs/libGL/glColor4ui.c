// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLuint, GLuint, GLuint, GLuint) = 0;

void glColor4ui(GLuint arg0, GLuint arg1, GLuint arg2, GLuint arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4ui");
	validate_NULL_TYPETYPE(arg0, "glColor4ui");
	validate_NULL_TYPETYPE(arg1, "glColor4ui");
	validate_NULL_TYPETYPE(arg2, "glColor4ui");
	validate_NULL_TYPETYPE(arg3, "glColor4ui");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glColor4ui(GLuint arg0, GLuint arg1, GLuint arg2, GLuint arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4ui");
	return funcptr(arg0, arg1, arg2, arg3);
}


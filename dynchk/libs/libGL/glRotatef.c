// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat, GLfloat, GLfloat, GLfloat) = 0;

void glRotatef(GLfloat arg0, GLfloat arg1, GLfloat arg2, GLfloat arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRotatef");
	validate_NULL_TYPETYPE(arg0, "glRotatef");
	validate_NULL_TYPETYPE(arg1, "glRotatef");
	validate_NULL_TYPETYPE(arg2, "glRotatef");
	validate_NULL_TYPETYPE(arg3, "glRotatef");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glRotatef(GLfloat arg0, GLfloat arg1, GLfloat arg2, GLfloat arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRotatef");
	return funcptr(arg0, arg1, arg2, arg3);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat, GLfloat, GLfloat) = 0;

void glNormal3f(GLfloat arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glNormal3f");
	validate_NULL_TYPETYPE(arg0, "glNormal3f");
	validate_NULL_TYPETYPE(arg1, "glNormal3f");
	validate_NULL_TYPETYPE(arg2, "glNormal3f");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glNormal3f(GLfloat arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glNormal3f");
	return funcptr(arg0, arg1, arg2);
}


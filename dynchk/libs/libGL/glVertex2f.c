// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat, GLfloat) = 0;

void glVertex2f(GLfloat arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2f");
	validate_NULL_TYPETYPE(arg0, "glVertex2f");
	validate_NULL_TYPETYPE(arg1, "glVertex2f");
	return funcptr(arg0, arg1);
}

void lsb_glVertex2f(GLfloat arg0, GLfloat arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex2f");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLfloat, GLfloat, GLfloat) = 0;

void glTranslatef(GLfloat arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTranslatef");
	validate_NULL_TYPETYPE(arg0, "glTranslatef");
	validate_NULL_TYPETYPE(arg1, "glTranslatef");
	validate_NULL_TYPETYPE(arg2, "glTranslatef");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glTranslatef(GLfloat arg0, GLfloat arg1, GLfloat arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTranslatef");
	return funcptr(arg0, arg1, arg2);
}


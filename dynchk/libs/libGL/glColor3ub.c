// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLubyte, GLubyte, GLubyte) = 0;

void glColor3ub(GLubyte arg0, GLubyte arg1, GLubyte arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ub");
	validate_NULL_TYPETYPE(arg0, "glColor3ub");
	validate_NULL_TYPETYPE(arg1, "glColor3ub");
	validate_NULL_TYPETYPE(arg2, "glColor3ub");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glColor3ub(GLubyte arg0, GLubyte arg1, GLubyte arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3ub");
	return funcptr(arg0, arg1, arg2);
}


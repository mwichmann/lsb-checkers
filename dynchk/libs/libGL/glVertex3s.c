// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLshort, GLshort, GLshort) = 0;

void glVertex3s(GLshort arg0, GLshort arg1, GLshort arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3s");
	validate_NULL_TYPETYPE(arg0, "glVertex3s");
	validate_NULL_TYPETYPE(arg1, "glVertex3s");
	validate_NULL_TYPETYPE(arg2, "glVertex3s");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glVertex3s(GLshort arg0, GLshort arg1, GLshort arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glVertex3s");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLshort, GLshort, GLshort, GLshort) = 0;

void glRects(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRects");
	validate_NULL_TYPETYPE(arg0, "glRects");
	validate_NULL_TYPETYPE(arg1, "glRects");
	validate_NULL_TYPETYPE(arg2, "glRects");
	validate_NULL_TYPETYPE(arg3, "glRects");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glRects(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRects");
	return funcptr(arg0, arg1, arg2, arg3);
}


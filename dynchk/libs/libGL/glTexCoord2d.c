// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLdouble, GLdouble) = 0;

void glTexCoord2d(GLdouble arg0, GLdouble arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord2d");
	validate_NULL_TYPETYPE(arg0, "glTexCoord2d");
	validate_NULL_TYPETYPE(arg1, "glTexCoord2d");
	return funcptr(arg0, arg1);
}

void lsb_glTexCoord2d(GLdouble arg0, GLdouble arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord2d");
	return funcptr(arg0, arg1);
}


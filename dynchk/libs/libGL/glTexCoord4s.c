// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLshort, GLshort, GLshort, GLshort) = 0;

void glTexCoord4s(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord4s");
	validate_NULL_TYPETYPE(arg0, "glTexCoord4s");
	validate_NULL_TYPETYPE(arg1, "glTexCoord4s");
	validate_NULL_TYPETYPE(arg2, "glTexCoord4s");
	validate_NULL_TYPETYPE(arg3, "glTexCoord4s");
	return funcptr(arg0, arg1, arg2, arg3);
}

void lsb_glTexCoord4s(GLshort arg0, GLshort arg1, GLshort arg2, GLshort arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord4s");
	return funcptr(arg0, arg1, arg2, arg3);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLboolean *) = 0;

void glGetBooleanv(GLenum arg0, GLboolean * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetBooleanv");
	validate_NULL_TYPETYPE(arg0, "glGetBooleanv");
	validate_NULL_TYPETYPE(arg1, "glGetBooleanv");
	return funcptr(arg0, arg1);
}

void lsb_glGetBooleanv(GLenum arg0, GLboolean * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glGetBooleanv");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLenum, GLshort) = 0;

void glMultiTexCoord1sARB(GLenum arg0, GLshort arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord1sARB");
	validate_NULL_TYPETYPE(arg0, "glMultiTexCoord1sARB");
	validate_NULL_TYPETYPE(arg1, "glMultiTexCoord1sARB");
	return funcptr(arg0, arg1);
}

void lsb_glMultiTexCoord1sARB(GLenum arg0, GLshort arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glMultiTexCoord1sARB");
	return funcptr(arg0, arg1);
}


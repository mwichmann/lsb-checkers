// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLint) = 0;

void glTexCoord1i(GLint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord1i");
	validate_NULL_TYPETYPE(arg0, "glTexCoord1i");
	return funcptr(arg0);
}

void lsb_glTexCoord1i(GLint arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glTexCoord1i");
	return funcptr(arg0);
}


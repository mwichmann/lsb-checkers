// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
static int(*funcptr)(GLsizei, GLuint *, GLclampf *) = 0;

void glPrioritizeTextures(GLsizei arg0, GLuint * arg1, GLclampf * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPrioritizeTextures");
	validate_NULL_TYPETYPE(arg0, "glPrioritizeTextures");
	validate_NULL_TYPETYPE(arg1, "glPrioritizeTextures");
	validate_NULL_TYPETYPE(arg2, "glPrioritizeTextures");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glPrioritizeTextures(GLsizei arg0, GLuint * arg1, GLclampf * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glPrioritizeTextures");
	return funcptr(arg0, arg1, arg2);
}


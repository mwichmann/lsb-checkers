// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <GL/gl.h>
#include <GL/gl.h>
static int(*funcptr)(GLsizei, GLenum, GLvoid *) = 0;

void glCallLists(GLsizei arg0, GLenum arg1, GLvoid * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCallLists");
	validate_NULL_TYPETYPE(arg0, "glCallLists");
	validate_NULL_TYPETYPE(arg1, "glCallLists");
	validate_NULL_TYPETYPE(arg2, "glCallLists");
	return funcptr(arg0, arg1, arg2);
}

void lsb_glCallLists(GLsizei arg0, GLenum arg1, GLvoid * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glCallLists");
	return funcptr(arg0, arg1, arg2);
}


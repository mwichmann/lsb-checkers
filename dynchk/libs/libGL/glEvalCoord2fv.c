// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLfloat *) = 0;

void glEvalCoord2fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glEvalCoord2fv");
	validate_NULL_TYPETYPE(arg0, "glEvalCoord2fv");
	return funcptr(arg0);
}

void lsb_glEvalCoord2fv(GLfloat * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glEvalCoord2fv");
	return funcptr(arg0);
}


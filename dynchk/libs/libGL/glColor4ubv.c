// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLubyte *) = 0;

void glColor4ubv(GLubyte * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4ubv");
	validate_NULL_TYPETYPE(arg0, "glColor4ubv");
	return funcptr(arg0);
}

void lsb_glColor4ubv(GLubyte * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4ubv");
	return funcptr(arg0);
}


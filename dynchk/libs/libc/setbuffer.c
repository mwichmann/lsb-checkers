// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stddef.h>
static int(*funcptr)(FILE *, char *, size_t) = 0;

void setbuffer(FILE * arg0, char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setbuffer");
	validate_NULL_TYPETYPE(arg0, "setbuffer");
	validate_NULL_TYPETYPE(arg1, "setbuffer");
	validate_NULL_TYPETYPE(arg2, "setbuffer");
	return funcptr(arg0, arg1, arg2);
}

void lsb_setbuffer(FILE * arg0, char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setbuffer");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#include <stdarg.h>
static int(*funcptr)(FILE *, const char *, va_list) = 0;

int vfscanf(FILE * arg0, const char * arg1, va_list arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	validate_NULL_TYPETYPE(arg0, "vfscanf");
	validate_NULL_TYPETYPE(arg1, "vfscanf");
	validate_NULL_TYPETYPE(arg2, "vfscanf");
	return funcptr(arg0, arg1, arg2);
}

int lsb_vfscanf(FILE * arg0, const char * arg1, va_list arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vfscanf");
	return funcptr(arg0, arg1, arg2);
}


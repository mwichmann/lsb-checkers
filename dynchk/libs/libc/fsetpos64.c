// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(FILE *, const fpos64_t) = 0;

int fsetpos64(FILE * arg0, const fpos64_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsetpos64");
	validate_NULL_TYPETYPE(arg0, "fsetpos64");
	validate_NULL_TYPETYPE(arg1, "fsetpos64");
	return funcptr(arg0, arg1);
}

int lsb_fsetpos64(FILE * arg0, const fpos64_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsetpos64");
	return funcptr(arg0, arg1);
}


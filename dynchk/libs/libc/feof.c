// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(FILE *) = 0;

int feof(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "feof");
	validate_NULL_TYPETYPE(arg0, "feof");
	return funcptr(arg0);
}

int lsb_feof(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "feof");
	return funcptr(arg0);
}


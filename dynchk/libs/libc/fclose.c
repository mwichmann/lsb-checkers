// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(FILE *) = 0;

int fclose(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fclose");
	validate_NULL_TYPETYPE(arg0, "fclose");
	return funcptr(arg0);
}

int lsb_fclose(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fclose");
	return funcptr(arg0);
}


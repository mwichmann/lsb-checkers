// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(int, FILE *) = 0;

int ungetc(int arg0, FILE * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ungetc");
	validate_NULL_TYPETYPE(arg0, "ungetc");
	validate_NULL_TYPETYPE(arg1, "ungetc");
	return funcptr(arg0, arg1);
}

int lsb_ungetc(int arg0, FILE * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ungetc");
	return funcptr(arg0, arg1);
}


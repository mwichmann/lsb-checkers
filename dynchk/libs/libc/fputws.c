// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static int(*funcptr)(const wchar_t *, FILE *) = 0;

int fputws(const wchar_t * arg0, FILE * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fputws");
	validate_NULL_TYPETYPE(arg0, "fputws");
	validate_NULL_TYPETYPE(arg1, "fputws");
	return funcptr(arg0, arg1);
}

int lsb_fputws(const wchar_t * arg0, FILE * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fputws");
	return funcptr(arg0, arg1);
}


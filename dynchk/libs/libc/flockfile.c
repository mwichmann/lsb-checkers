// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
static void(*funcptr)(FILE *) = 0;

void flockfile(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "flockfile");
	validate_NULL_TYPETYPE(arg0, "flockfile");
	funcptr(arg0);
}

void lsb_flockfile(FILE * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "flockfile");
	funcptr(arg0);
}


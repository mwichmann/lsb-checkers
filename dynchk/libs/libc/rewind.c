// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef rewind
static void(*funcptr) (FILE * ) = 0;

void rewind (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rewind");
	validate_NULL_TYPETYPE(arg0, "rewind");
	funcptr(arg0);
}

void lsb_rewind (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rewind");
	funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef fileno
static int(*funcptr) (FILE * ) = 0;

int fileno (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fileno");
	validate_Rdaddress( arg0, "fileno - arg0");
	validate_NULL_TYPETYPE(  arg0, "fileno - arg0");
	return funcptr(arg0);
}

int __lsb_fileno (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fileno");
	return funcptr(arg0);
}


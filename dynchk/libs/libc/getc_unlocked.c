// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef getc_unlocked
static int(*funcptr) (FILE * ) = 0;

int getc_unlocked (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getc_unlocked");
	validate_Rdaddress( arg0, "getc_unlocked - arg0");
	validate_NULL_TYPETYPE(  arg0, "getc_unlocked - arg0");
	return funcptr(arg0);
}

int __lsb_getc_unlocked (FILE * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getc_unlocked");
	return funcptr(arg0);
}


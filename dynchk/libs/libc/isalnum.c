// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef isalnum
static int(*funcptr) (int ) = 0;

int isalnum (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isalnum");
	validate_NULL_TYPETYPE(  arg0, "isalnum - arg0");
	return funcptr(arg0);
}

int __lsb_isalnum (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isalnum");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <ctype.h>
#undef isupper
static int(*funcptr) (int ) = 0;

int isupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isupper");
	validate_NULL_TYPETYPE(  arg0, "isupper - arg0");
	return funcptr(arg0);
}

int __lsb_isupper (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isupper");
	return funcptr(arg0);
}


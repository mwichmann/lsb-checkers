// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void *) = 0;

int brk(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "brk");
	validate_NULL_TYPETYPE(arg0, "brk");
	return funcptr(arg0);
}

int lsb_brk(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "brk");
	return funcptr(arg0);
}


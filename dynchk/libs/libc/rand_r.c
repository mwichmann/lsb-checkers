// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(unsigned int *) = 0;

int rand_r(unsigned int * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rand_r");
	validate_NULL_TYPETYPE(arg0, "rand_r");
	return funcptr(arg0);
}

int lsb_rand_r(unsigned int * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rand_r");
	return funcptr(arg0);
}


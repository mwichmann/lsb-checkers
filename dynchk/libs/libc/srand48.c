// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(long) = 0;

void srand48(long arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "srand48");
	validate_NULL_TYPETYPE(arg0, "srand48");
	return funcptr(arg0);
}

void lsb_srand48(long arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "srand48");
	return funcptr(arg0);
}


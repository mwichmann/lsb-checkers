// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

long lrand48(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lrand48");
	validate_NULL_TYPETYPE(arg0, "lrand48");
	return funcptr(arg0);
}

long lsb_lrand48(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lrand48");
	return funcptr(arg0);
}


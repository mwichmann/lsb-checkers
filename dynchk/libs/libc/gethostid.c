// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

long gethostid()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gethostid");
	return funcptr();
}

long lsb_gethostid()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gethostid");
	return funcptr();
}


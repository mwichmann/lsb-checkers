// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

utmp * getutent()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent");
	return funcptr();
}

utmp * lsb_getutent()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getutent");
	return funcptr();
}


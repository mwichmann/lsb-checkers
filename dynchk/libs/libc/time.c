// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(time_t *) = 0;

time_t time(time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "time");
	validate_NULL_TYPETYPE(arg0, "time");
	return funcptr(arg0);
}

time_t lsb_time(time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "time");
	return funcptr(arg0);
}


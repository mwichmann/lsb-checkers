// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const time_t *) = 0;

int stime(const time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "stime");
	validate_NULL_TYPETYPE(arg0, "stime");
	return funcptr(arg0);
}

int lsb_stime(const time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "stime");
	return funcptr(arg0);
}


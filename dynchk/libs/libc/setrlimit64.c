// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef setrlimit64
static int(*funcptr) (__rlimit_resource_t , const struct rlimit64 * ) = 0;

int setrlimit64 (__rlimit_resource_t arg0 , const struct rlimit64 * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setrlimit64");
	validate_NULL_TYPETYPE(arg0, "setrlimit64");
	validate_NULL_TYPETYPE(arg1, "setrlimit64");
	return funcptr(arg0, arg1);
}

int lsb_setrlimit64 (__rlimit_resource_t arg0 , const struct rlimit64 * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setrlimit64");
	return funcptr(arg0, arg1);
}


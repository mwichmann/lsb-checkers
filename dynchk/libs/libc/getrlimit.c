// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef getrlimit
static int(*funcptr) (__rlimit_resource_t , struct rlimit * ) = 0;

int getrlimit (__rlimit_resource_t arg0 , struct rlimit * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getrlimit");
	validate_NULL_TYPETYPE(arg0, "getrlimit");
	validate_NULL_TYPETYPE(arg1, "getrlimit");
	return funcptr(arg0, arg1);
}

int lsb_getrlimit (__rlimit_resource_t arg0 , struct rlimit * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getrlimit");
	return funcptr(arg0, arg1);
}


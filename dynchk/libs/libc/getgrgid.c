// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static struct group *(*funcptr)(gid_t) = 0;

struct group * getgrgid(gid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrgid");
	validate_NULL_TYPETYPE(arg0, "getgrgid");
	return funcptr(arg0);
}

struct group * lsb_getgrgid(gid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrgid");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, const char *, struct stat *) = 0;

int __lxstat(int arg0, const char * arg1, struct stat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__lxstat");
	validate_NULL_TYPETYPE(arg0, "__lxstat");
	validate_NULL_TYPETYPE(arg1, "__lxstat");
	validate_NULL_TYPETYPE(arg2, "__lxstat");
	return funcptr(arg0, arg1, arg2);
}

int lsb___lxstat(int arg0, const char * arg1, struct stat * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__lxstat");
	return funcptr(arg0, arg1, arg2);
}


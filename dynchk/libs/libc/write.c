// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(int, const void *, size_t) = 0;

ssize_t write(int arg0, const void * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "write");
	validate_filedescriptor(arg0, "write");
	validate_RWaddress(arg1, "write");
	validate_NULL_TYPETYPE(arg2, "write");
	return funcptr(arg0, arg1, arg2);
}

ssize_t lsb_write(int arg0, const void * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "write");
	return funcptr(arg0, arg1, arg2);
}


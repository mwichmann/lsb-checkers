// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(char *, size_t) = 0;

int gethostname(char * arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gethostname");
	validate_NULL_TYPETYPE(arg0, "gethostname");
	validate_NULL_TYPETYPE(arg1, "gethostname");
	return funcptr(arg0, arg1);
}

int lsb_gethostname(char * arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gethostname");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static char *(*funcptr)(const time_t *) = 0;

char * ctime(const time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctime");
	validate_NULL_TYPETYPE(arg0, "ctime");
	return funcptr(arg0);
}

char * lsb_ctime(const time_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctime");
	return funcptr(arg0);
}


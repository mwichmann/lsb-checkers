// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *) = 0;

char * textdomain(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "textdomain");
	validate_NULL_TYPETYPE(arg0, "textdomain");
	return funcptr(arg0);
}

char * lsb_textdomain(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "textdomain");
	return funcptr(arg0);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static unsigned long(*funcptr)(const char *) = 0;

unsigned long inet_addr(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inet_addr");
	validate_NULL_TYPETYPE(arg0, "inet_addr");
	return funcptr(arg0);
}

unsigned long lsb_inet_addr(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inet_addr");
	return funcptr(arg0);
}


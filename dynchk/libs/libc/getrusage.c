// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef getrusage
static int(*funcptr) (int , struct rusage * ) = 0;

int getrusage (int arg0 , struct rusage * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getrusage");
	validate_NULL_TYPETYPE(arg0, "getrusage");
	validate_NULL_TYPETYPE(arg1, "getrusage");
	return funcptr(arg0, arg1);
}

int lsb_getrusage (int arg0 , struct rusage * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getrusage");
	return funcptr(arg0, arg1);
}


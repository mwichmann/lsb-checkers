// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef brk
static int(*funcptr) (void * ) = 0;

int brk (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "brk");
	validate_Rdaddress( arg0, "brk - arg0");
	validate_NULL_TYPETYPE(  arg0, "brk - arg0");
	return funcptr(arg0);
}

int __lsb_brk (void * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "brk");
	return funcptr(arg0);
}


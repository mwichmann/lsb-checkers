// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/mman.h>
#undef mlock
static int(*funcptr) (const void * , size_t ) = 0;

int mlock (const void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mlock");
	validate_Rdaddress( arg0, "mlock - arg0");
	validate_NULL_TYPETYPE(  arg0, "mlock - arg0");
	validate_NULL_TYPETYPE(  arg1, "mlock - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_mlock (const void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mlock");
	return funcptr(arg0, arg1);
}


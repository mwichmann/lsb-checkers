// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/mman.h>
#undef munlock
static int(*funcptr) (const void * , size_t ) = 0;

int munlock (const void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "munlock");
	validate_Rdaddress( arg0, "munlock - arg0");
	validate_NULL_TYPETYPE(  arg0, "munlock - arg0");
	validate_NULL_TYPETYPE(  arg1, "munlock - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_munlock (const void * arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "munlock");
	return funcptr(arg0, arg1);
}


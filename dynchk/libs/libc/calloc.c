#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stddef.h>
#undef calloc
static void *(*funcptr) (size_t , size_t ) = 0;

void * calloc (size_t arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "calloc");
	validate_NULL_TYPETYPE(arg0, "calloc");
	validate_NULL_TYPETYPE(arg1, "calloc");
	return funcptr(arg0, arg1);
}

void * lsb_calloc (size_t arg0 , size_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "calloc");
	return funcptr(arg0, arg1);
}


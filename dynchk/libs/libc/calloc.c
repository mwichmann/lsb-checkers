#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stddef.h>
static void *(*funcptr)(size_t, size_t) = 0;

extern void *__libc_calloc(size_t,size_t);

void * calloc(size_t arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = __libc_calloc;
	validate_NULL_TYPETYPE(arg0, "calloc");
	validate_NULL_TYPETYPE(arg1, "calloc");
	return funcptr(arg0, arg1);
}

void * __lsb_calloc(size_t arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = __libc_calloc;
	return funcptr(arg0, arg1);
}


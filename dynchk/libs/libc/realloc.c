#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static void *(*funcptr)(void *, size_t) = 0;

void * __libc_realloc(void *, size_t);

void * realloc(void * arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = __libc_realloc;
	validate_NULL_TYPETYPE(arg0, "realloc");
	validate_NULL_TYPETYPE(arg1, "realloc");
	return funcptr(arg0, arg1);
}

void * __lsb_realloc(void * arg0, size_t arg1)
{
	if(!funcptr)
		funcptr = __libc_realloc;
	return funcptr(arg0, arg1);
}


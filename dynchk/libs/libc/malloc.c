#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static void *(*funcptr)(size_t) = 0;

extern void *__libc_malloc(size_t);

void * malloc(size_t arg0)
{
	if(!funcptr)
		funcptr = __libc_malloc;
	validate_NULL_TYPETYPE(arg0, "malloc");
	return funcptr(arg0);
}

void * lsb_malloc(size_t arg0)
{
	if(!funcptr)
		funcptr = __libc_malloc;
	return funcptr(arg0);
}


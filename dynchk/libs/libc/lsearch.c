// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
static int(*funcptr)(void *, void *, size_t *, size_t, __compar_fn_t) = 0;

void * lsearch(void * arg0, void * arg1, size_t * arg2, size_t arg3, __compar_fn_t arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lsearch");
	validate_NULL_TYPETYPE(arg0, "lsearch");
	validate_NULL_TYPETYPE(arg1, "lsearch");
	validate_NULL_TYPETYPE(arg2, "lsearch");
	validate_NULL_TYPETYPE(arg3, "lsearch");
	validate_NULL_TYPETYPE(arg4, "lsearch");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void * lsb_lsearch(void * arg0, void * arg1, size_t * arg2, size_t arg3, __compar_fn_t arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lsearch");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
static void *(*funcptr)(void *, void * *, __compar_fn_t) = 0;

void * tsearch(void * arg0, void * * arg1, __compar_fn_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tsearch");
	validate_NULL_TYPETYPE(arg0, "tsearch");
	validate_NULL_TYPETYPE(arg1, "tsearch");
	validate_NULL_TYPETYPE(arg2, "tsearch");
	return funcptr(arg0, arg1, arg2);
}

void * lsb_tsearch(void * arg0, void * * arg1, __compar_fn_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tsearch");
	return funcptr(arg0, arg1, arg2);
}


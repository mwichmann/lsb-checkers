// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#undef lfind
static void *(*funcptr) (const void * , const void * , size_t * , size_t , __compar_fn_t ) = 0;

void * lfind (const void * arg0 , const void * arg1 , size_t * arg2 , size_t arg3 , __compar_fn_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lfind");
	validate_NULL_TYPETYPE(arg0, "lfind");
	validate_NULL_TYPETYPE(arg1, "lfind");
	validate_NULL_TYPETYPE(arg2, "lfind");
	validate_NULL_TYPETYPE(arg3, "lfind");
	validate_NULL_TYPETYPE(arg4, "lfind");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void * lsb_lfind (const void * arg0 , const void * arg1 , size_t * arg2 , size_t arg3 , __compar_fn_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lfind");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


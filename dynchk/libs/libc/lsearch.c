// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stdlib.h>
#include <search.h>
#undef lsearch
static void *(*funcptr) (const void * , void * , size_t * , size_t , __compar_fn_t ) = 0;

void * lsearch (const void * arg0 , void * arg1 , size_t * arg2 , size_t arg3 , __compar_fn_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lsearch");
	validate_Rdaddress( arg0, "lsearch - arg0");
	validate_NULL_TYPETYPE(  arg0, "lsearch - arg0");
	validate_Rdaddress( arg1, "lsearch - arg1");
	validate_NULL_TYPETYPE(  arg1, "lsearch - arg1");
	validate_Rdaddress( arg2, "lsearch - arg2");
	validate_NULL_TYPETYPE(  arg2, "lsearch - arg2");
	validate_NULL_TYPETYPE(  arg3, "lsearch - arg3");
	validate_NULL_TYPETYPE(  arg4, "lsearch - arg4");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void * __lsb_lsearch (const void * arg0 , void * arg1 , size_t * arg2 , size_t arg3 , __compar_fn_t arg4 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lsearch");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef memrchr
static void *(*funcptr) (const char * , int , size_t ) = 0;

void * memrchr (const char * arg0 , int arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memrchr");
	validate_NULL_TYPETYPE(arg0, "memrchr");
	validate_NULL_TYPETYPE(arg1, "memrchr");
	validate_NULL_TYPETYPE(arg2, "memrchr");
	return funcptr(arg0, arg1, arg2);
}

void * lsb_memrchr (const char * arg0 , int arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "memrchr");
	return funcptr(arg0, arg1, arg2);
}


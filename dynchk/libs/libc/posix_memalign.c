// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <stddef.h>
#undef posix_memalign
static int(*funcptr) (void * * , size_t , size_t ) = 0;

int posix_memalign (void * * arg0 , size_t arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "posix_memalign");
	validate_NULL_TYPETYPE(arg0, "posix_memalign");
	validate_NULL_TYPETYPE(arg1, "posix_memalign");
	validate_NULL_TYPETYPE(arg2, "posix_memalign");
	return funcptr(arg0, arg1, arg2);
}

int lsb_posix_memalign (void * * arg0 , size_t arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "posix_memalign");
	return funcptr(arg0, arg1, arg2);
}


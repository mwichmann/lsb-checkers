// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef mbstowcs
static size_t(*funcptr) (wchar_t * , const char * , size_t ) = 0;

size_t mbstowcs (wchar_t * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbstowcs");
	validate_NULL_TYPETYPE(arg0, "mbstowcs");
	validate_NULL_TYPETYPE(arg1, "mbstowcs");
	validate_NULL_TYPETYPE(arg2, "mbstowcs");
	return funcptr(arg0, arg1, arg2);
}

size_t lsb_mbstowcs (wchar_t * arg0 , const char * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbstowcs");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef mbsrtowcs
static size_t(*funcptr) (wchar_t * , const char * * , size_t , mbstate_t * ) = 0;

size_t mbsrtowcs (wchar_t * arg0 , const char * * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbsrtowcs");
	validate_NULL_TYPETYPE(arg0, "mbsrtowcs");
	validate_NULL_TYPETYPE(arg1, "mbsrtowcs");
	validate_NULL_TYPETYPE(arg2, "mbsrtowcs");
	validate_NULL_TYPETYPE(arg3, "mbsrtowcs");
	return funcptr(arg0, arg1, arg2, arg3);
}

size_t lsb_mbsrtowcs (wchar_t * arg0 , const char * * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbsrtowcs");
	return funcptr(arg0, arg1, arg2, arg3);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <wchar.h>
#undef wcsrtombs
static size_t(*funcptr) (char * , const wchar_t * * , size_t , mbstate_t * ) = 0;

size_t wcsrtombs (char * arg0 , const wchar_t * * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsrtombs");
	validate_NULL_TYPETYPE(arg0, "wcsrtombs");
	validate_NULL_TYPETYPE(arg1, "wcsrtombs");
	validate_NULL_TYPETYPE(arg2, "wcsrtombs");
	validate_NULL_TYPETYPE(arg3, "wcsrtombs");
	return funcptr(arg0, arg1, arg2, arg3);
}

size_t lsb_wcsrtombs (char * arg0 , const wchar_t * * arg1 , size_t arg2 , mbstate_t * arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsrtombs");
	return funcptr(arg0, arg1, arg2, arg3);
}


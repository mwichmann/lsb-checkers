// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef __wcstol_internal
static long(*funcptr) (wchar_t * , wchar_t * * , int , int ) = 0;

long __wcstol_internal (wchar_t * arg0 , wchar_t * * arg1 , int arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstol_internal");
	validate_NULL_TYPETYPE(arg0, "__wcstol_internal");
	validate_NULL_TYPETYPE(arg1, "__wcstol_internal");
	validate_NULL_TYPETYPE(arg2, "__wcstol_internal");
	validate_NULL_TYPETYPE(arg3, "__wcstol_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}

long lsb___wcstol_internal (wchar_t * arg0 , wchar_t * * arg1 , int arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstol_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}


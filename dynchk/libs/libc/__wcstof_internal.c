// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef __wcstof_internal
static float(*funcptr) (const wchar_t * , wchar_t * * , int ) = 0;

float __wcstof_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstof_internal");
	validate_Rdaddress( arg0, "__wcstof_internal - arg0");
	validate_NULL_TYPETYPE(  arg0, "__wcstof_internal - arg0");
	validate_Rdaddress( arg1, "__wcstof_internal - arg1");
	validate_Rdaddress(* arg1, "__wcstof_internal - arg1");
	validate_NULL_TYPETYPE(  arg1, "__wcstof_internal - arg1");
	validate_NULL_TYPETYPE(  arg2, "__wcstof_internal - arg2");
	return funcptr(arg0, arg1, arg2);
}

float __lsb___wcstof_internal (const wchar_t * arg0 , wchar_t * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__wcstof_internal");
	return funcptr(arg0, arg1, arg2);
}


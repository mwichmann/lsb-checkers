// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <wchar.h>
#undef wcsrchr
static wchar_t *(*funcptr) (const wchar_t * , wchar_t ) = 0;

wchar_t * wcsrchr (const wchar_t * arg0 , wchar_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsrchr");
	validate_Rdaddress( arg0, "wcsrchr - arg0");
	validate_NULL_TYPETYPE(  arg0, "wcsrchr - arg0");
	validate_NULL_TYPETYPE(  arg1, "wcsrchr - arg1");
	return funcptr(arg0, arg1);
}

wchar_t * __lsb_wcsrchr (const wchar_t * arg0 , wchar_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsrchr");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(wchar_t *, const wchar_t *, size_t) = 0;

size_t wcsxfrm(wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsxfrm");
	validate_NULL_TYPETYPE(arg0, "wcsxfrm");
	validate_NULL_TYPETYPE(arg1, "wcsxfrm");
	validate_NULL_TYPETYPE(arg2, "wcsxfrm");
	return funcptr(arg0, arg1, arg2);
}

size_t lsb_wcsxfrm(wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsxfrm");
	return funcptr(arg0, arg1, arg2);
}


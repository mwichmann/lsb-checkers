// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(wchar_t *, const wchar_t *, size_t) = 0;

wchar_t * wcsncat(wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncat");
	validate_NULL_TYPETYPE(arg0, "wcsncat");
	validate_NULL_TYPETYPE(arg1, "wcsncat");
	validate_NULL_TYPETYPE(arg2, "wcsncat");
	return funcptr(arg0, arg1, arg2);
}

wchar_t * lsb_wcsncat(wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncat");
	return funcptr(arg0, arg1, arg2);
}


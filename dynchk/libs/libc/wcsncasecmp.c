// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(const wchar_t *, const wchar_t *, size_t) = 0;

int wcsncasecmp(const wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncasecmp");
	validate_NULL_TYPETYPE(arg0, "wcsncasecmp");
	validate_NULL_TYPETYPE(arg1, "wcsncasecmp");
	validate_NULL_TYPETYPE(arg2, "wcsncasecmp");
	return funcptr(arg0, arg1, arg2);
}

int lsb_wcsncasecmp(const wchar_t * arg0, const wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcsncasecmp");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long long(*funcptr)(const wchar_t *, wchar_t * *, int) = 0;

long long wcstoll(const wchar_t * arg0, wchar_t * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoll");
	validate_NULL_TYPETYPE(arg0, "wcstoll");
	validate_NULL_TYPETYPE(arg1, "wcstoll");
	validate_NULL_TYPETYPE(arg2, "wcstoll");
	return funcptr(arg0, arg1, arg2);
}

long long lsb_wcstoll(const wchar_t * arg0, wchar_t * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstoll");
	return funcptr(arg0, arg1, arg2);
}


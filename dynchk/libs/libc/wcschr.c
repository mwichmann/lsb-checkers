// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static wchar_t *(*funcptr)(const wchar_t *, wchar_t) = 0;

wchar_t * wcschr(const wchar_t * arg0, wchar_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcschr");
	validate_NULL_TYPETYPE(arg0, "wcschr");
	validate_NULL_TYPETYPE(arg1, "wcschr");
	return funcptr(arg0, arg1);
}

wchar_t * lsb_wcschr(const wchar_t * arg0, wchar_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcschr");
	return funcptr(arg0, arg1);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static wchar_t *(*funcptr)(wchar_t *, const wchar_t *) = 0;

wchar_t * wcscpy(wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscpy");
	validate_NULL_TYPETYPE(arg0, "wcscpy");
	validate_NULL_TYPETYPE(arg1, "wcscpy");
	return funcptr(arg0, arg1);
}

wchar_t * lsb_wcscpy(wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscpy");
	return funcptr(arg0, arg1);
}


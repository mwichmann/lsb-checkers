// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const wchar_t *, const wchar_t *) = 0;

size_t wcscspn(const wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscspn");
	validate_NULL_TYPETYPE(arg0, "wcscspn");
	validate_NULL_TYPETYPE(arg1, "wcscspn");
	return funcptr(arg0, arg1);
}

size_t lsb_wcscspn(const wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscspn");
	return funcptr(arg0, arg1);
}


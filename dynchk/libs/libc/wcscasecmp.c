// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(wchar_t *, const wchar_t *) = 0;

int wcscasecmp(wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscasecmp");
	validate_NULL_TYPETYPE(arg0, "wcscasecmp");
	validate_NULL_TYPETYPE(arg1, "wcscasecmp");
	return funcptr(arg0, arg1);
}

int lsb_wcscasecmp(wchar_t * arg0, const wchar_t * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcscasecmp");
	return funcptr(arg0, arg1);
}


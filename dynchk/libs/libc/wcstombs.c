// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(char *, wchar_t *, size_t) = 0;

size_t wcstombs(char * arg0, wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstombs");
	validate_NULL_TYPETYPE(arg0, "wcstombs");
	validate_NULL_TYPETYPE(arg1, "wcstombs");
	validate_NULL_TYPETYPE(arg2, "wcstombs");
	return funcptr(arg0, arg1, arg2);
}

size_t lsb_wcstombs(char * arg0, wchar_t * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcstombs");
	return funcptr(arg0, arg1, arg2);
}


// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static size_t(*funcptr)(const char *, size_t, mbstate_t *) = 0;

size_t mbrlen(const char * arg0, size_t arg1, mbstate_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbrlen");
	validate_NULL_TYPETYPE(arg0, "mbrlen");
	validate_NULL_TYPETYPE(arg1, "mbrlen");
	validate_NULL_TYPETYPE(arg2, "mbrlen");
	return funcptr(arg0, arg1, arg2);
}

size_t lsb_mbrlen(const char * arg0, size_t arg1, mbstate_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mbrlen");
	return funcptr(arg0, arg1, arg2);
}


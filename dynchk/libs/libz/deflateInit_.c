// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
static int(*funcptr)(z_streamp, int, const char *, int) = 0;

int deflateInit_(z_streamp arg0, int arg1, const char * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateInit_");
	validate_NULL_TYPETYPE(arg0, "deflateInit_");
	validate_NULL_TYPETYPE(arg1, "deflateInit_");
	validate_NULL_TYPETYPE(arg2, "deflateInit_");
	validate_NULL_TYPETYPE(arg3, "deflateInit_");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_deflateInit_(z_streamp arg0, int arg1, const char * arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateInit_");
	return funcptr(arg0, arg1, arg2, arg3);
}

